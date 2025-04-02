#include <stdafx.h>
#include "heap.h"
#include "memory.h"
#include "function.h"

constexpr size_t RESERVED_BEGIN = 0x7FEA0000;
constexpr size_t RESERVED_END = 0xA0000000;

void Heap::Init()
{
    heap1 = o1heapInit(g_memory.Translate(0x20000), 0x40000000 - 0x20000);
    heap2 = o1heapInit(g_memory.Translate(0x4000000-0x260), 0x40000000 - (0x40000000 - 0x3FEA0000));
    physicalHeap = o1heapInit(g_memory.Translate(RESERVED_END), 0x100000000 - RESERVED_END);
}

void* Heap::Alloc(size_t size)
{
    std::lock_guard lock(mutex1);

    return o1heapAllocate(heap1, std::max<size_t>(1, size));
}

void* Heap::AllocPhysical(size_t size, size_t alignment)
{
    size = std::max<size_t>(1, size);
    alignment = alignment == 0 ? 0x1000 : std::max<size_t>(16, alignment);

    std::lock_guard lock(physicalMutex);

    void* ptr = o1heapAllocate(physicalHeap, size + alignment);
    size_t aligned = ((size_t)ptr + alignment) & ~(alignment - 1);

    *((void**)aligned - 1) = ptr;
    *((size_t*)aligned - 2) = size + O1HEAP_ALIGNMENT;

    return (void*)aligned;
}

void Heap::Free(void* ptr)
{
    if (ptr >= physicalHeap)
    {
        std::lock_guard lock(physicalMutex);
        o1heapFree(physicalHeap, *((void**)ptr - 1));
    }
    else
    {
        std::lock_guard lock(mutex1);
        o1heapFree(heap1, ptr);
    }
}

size_t Heap::Size(void* ptr)
{
    if (ptr)
        return *((size_t*)ptr - 2) - O1HEAP_ALIGNMENT; // relies on fragment header in o1heap.c

    return 0;
}

uint32_t RtlAllocateHeap(uint32_t heapHandle, uint32_t flags, uint32_t size)
{
    void* ptr = g_userHeap.Alloc(size);
    if ((flags & 0x8) != 0)
        memset(ptr, 0, size);

    assert(ptr);
    LOGF_WARNING("heapHandle: {:X}, size: {:X}, flags: {:X}. ptr: {:X}, g_memory.MapVirtual(ptr): {:X}", heapHandle, size, flags, (uint32_t)ptr, g_memory.MapVirtual(ptr));

    return g_memory.MapVirtual(ptr);
}

uint32_t RtlAllocateOS(uint32_t heapHandle, uint32_t size, uint32_t flags)
{
/*
    void* ptr = g_userHeap.Alloc(size);
    if ((flags & 0x8) != 0)
        memset(ptr, 0, size);
*/
    void* ptr;
    if ((flags & 0x80000000) != 0)
    {
        LOG_WARNING("PHYSICAL");
        ptr = g_userHeap.AllocPhysical(size, (1ull << ((flags >> 24) & 0xF)));
    }
    else
    {
        LOG_WARNING("VIRTUAL");
        ptr = g_userHeap.Alloc(size);
    }


    if ((flags & 0x40000000) != 0)
        memset(ptr, 0, size);

    assert(ptr);
    LOGF_WARNING("heapHandle: {:X}, size: {:X}, flags: {:X}. ptr: {:X}, g_memory.MapVirtual(ptr): {:X}", heapHandle, size, flags, (uint32_t)ptr, g_memory.MapVirtual(ptr));

    return g_memory.MapVirtual(ptr);
}

uint32_t RtlReAllocateHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer, uint32_t size)
{
    void* ptr = g_userHeap.Alloc(size);
    if ((flags & 0x8) != 0)
        memset(ptr, 0, size);

    if (memoryPointer != 0)
    {
        void* oldPtr = g_memory.Translate(memoryPointer);
        memcpy(ptr, oldPtr, std::min<size_t>(size, g_userHeap.Size(oldPtr)));
        g_userHeap.Free(oldPtr);
    }

    assert(ptr);
    return g_memory.MapVirtual(ptr);
}

uint32_t RtlFreeHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer)
{
    if (memoryPointer != NULL)
        g_userHeap.Free(g_memory.Translate(memoryPointer));

    return true;
}

uint32_t RtlSizeHeap(uint32_t heapHandle, uint32_t flags, uint32_t memoryPointer)
{
    if (memoryPointer != NULL)
        return (uint32_t)g_userHeap.Size(g_memory.Translate(memoryPointer));

    return 0;
}


void* Heap::Alloc2(size_t size)
{
    std::lock_guard lock(mutex2);

    if (size < 0x10000)
        size = 0x10000;

    return o1heapAllocate(heap2, std::max<size_t>(1, size));
}

uint32_t XAllocMemVirtual(uint32_t Ptr, uint32_t size, uint32_t memFlags, uint32_t pageFlags)
{
    LOGF_WARNING("Ptr: {:X}, size: {:X}, memFlags: {:X}. pageFlags: {:X}", Ptr, size, memFlags, pageFlags);

    void* ptr = g_userHeap.Alloc2(size);

    if ((memFlags & 0x40000000) != 0)
        memset(ptr, 0, size);

    assert(ptr);
    LOGF_WARNING("ptr: {:X}, g_memory.MapVirtual(ptr): {:X}", (uint32_t)ptr, (uint32_t)g_memory.MapVirtual(ptr));

    return g_memory.MapVirtual(ptr);

/*
    void* ptr = (flags & 0x80000000) != 0 ?
        g_userHeap.AllocPhysical(size, (1ull << ((flags >> 24) & 0xF))) :
        g_userHeap.Alloc(size);

    if ((flags & 0x40000000) != 0)
        memset(ptr, 0, size);

    assert(ptr);
    return g_memory.MapVirtual(ptr);
*/
}

uint32_t XAllocMemPhysical(uint32_t size, uint32_t maxPtrLong, uint32_t alignment, uint32_t flags)
{
    LOGF_WARNING("size: {:X}, maxPtrLong: {:X}, alignment: {:X}. flags: {:X}", size, maxPtrLong, alignment, flags);

    void* ptr = g_userHeap.AllocPhysical(size, (1ull << ((flags >> 24) & 0xF)));

    if ((flags & 0x40000000) != 0)
        memset(ptr, 0, size);

    assert(ptr);

    LOGF_WARNING("ptr: {:X}, g_memory.MapVirtual(ptr): {:X}", (uint32_t)ptr, (uint32_t)g_memory.MapVirtual(ptr));
    return g_memory.MapVirtual(ptr);

}


uint32_t XAllocMem(uint32_t size, uint32_t flags)
{

    void* ptr = (flags & 0x80000000) != 0 ?
        g_userHeap.AllocPhysical(size, (1ull << ((flags >> 24) & 0xF))) :
        g_userHeap.Alloc(size);

    if ((flags & 0x40000000) != 0)
        memset(ptr, 0, size);

    assert(ptr);
    return g_memory.MapVirtual(ptr);
}

void XFreeMem(uint32_t baseAddress, uint32_t flags)
{
    if (baseAddress != NULL)
        g_userHeap.Free(g_memory.Translate(baseAddress));
}


GUEST_FUNCTION_STUB(sub_82B0CB08); // HeapCreate

//GUEST_FUNCTION_HOOK(sub_82B07BC8, RtlAllocateOS); // FMALLOC::ALLOCATEOS

GUEST_FUNCTION_HOOK(sub_82B0D0B8, RtlAllocateHeap);
GUEST_FUNCTION_HOOK(sub_82B0D9A0, RtlFreeHeap);
GUEST_FUNCTION_HOOK(sub_82B0DC88, RtlReAllocateHeap);
GUEST_FUNCTION_HOOK(sub_82B0C350, RtlSizeHeap);

GUEST_FUNCTION_HOOK(sub_82B07D38, XAllocMem);
GUEST_FUNCTION_HOOK(sub_82B07BC8, XAllocMemVirtual);
GUEST_FUNCTION_HOOK(sub_82B07C18, XAllocMemPhysical);

/*
GUEST_FUNCTION_STUB(sub_82BD9250); // HeapDestroy






GUEST_FUNCTION_HOOK(sub_831CCA60, XFreeMem);
*/
