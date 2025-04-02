#pragma once

#include "mutex.h"

struct Heap
{
    Mutex mutex1;
    O1HeapInstance* heap1;

    Mutex mutex2;
    O1HeapInstance* heap2;

    Mutex physicalMutex;
    O1HeapInstance* physicalHeap;

    void Init();

    void* Alloc(size_t size);
    void* Alloc2(size_t size);
    void* AllocPhysical(size_t size, size_t alignment);
    void Free(void* ptr);

    size_t Size(void* ptr);

    template<typename T, typename... Args>
    T* Alloc(Args&&... args)
    {
        T* obj = (T*)Alloc(sizeof(T));
        new (obj) T(std::forward<Args>(args)...);
        return obj;
    }

    template<typename T, typename... Args>
    T* AllocPhysical(Args&&... args)
    {
        T* obj = (T*)AllocPhysical(sizeof(T), alignof(T));
        new (obj) T(std::forward<Args>(args)...);
        return obj;
    }
};

extern uint32_t XAllocMem(uint32_t size, uint32_t flags);

extern Heap g_userHeap;
