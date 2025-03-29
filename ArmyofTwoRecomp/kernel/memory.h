#pragma once

#ifndef _WIN32
#define MEM_COMMIT  0x00001000  
#define MEM_RESERVE 0x00002000  
#endif

/*
// MEM_*, used by NtAllocateVirtualMemory
enum XMEM : uint32_t {
    XMEM_COMMIT = 0x00001000,
    XMEM_RESERVE = 0x00002000,
    XMEM_DECOMMIT = 0x00004000,
    XMEM_RELEASE = 0x00008000,
    XMEM_FREE = 0x00010000,
    XMEM_PRIVATE = 0x00020000,
    XMEM_RESET = 0x00080000,
    XMEM_TOP_DOWN = 0x00100000,
    XMEM_NOZERO = 0x00800000,
    XMEM_LARGE_PAGES = 0x20000000,
    XMEM_HEAP = 0x40000000,
    XMEM_16MB_PAGES = 0x80000000  // from Valve SDK
};
*/

struct Memory
{
    uint8_t* base{};

    Memory();

    bool IsInMemoryRange(const void* host) const noexcept
    {
        return host >= base && host < (base + PPC_MEMORY_SIZE);
    }

    void* Translate(size_t offset) const noexcept
    {
        if (offset)
            assert(offset < PPC_MEMORY_SIZE);

        return base + offset;
    }

    uint32_t MapVirtual(const void* host) const noexcept
    {
        if (host)
            assert(IsInMemoryRange(host));

        return static_cast<uint32_t>(static_cast<const uint8_t*>(host) - base);
    }

    PPCFunc* FindFunction(uint32_t guest) const noexcept
    {
        return PPC_LOOKUP_FUNC(base, guest);
    }

    void InsertFunction(uint32_t guest, PPCFunc* host)
    {
        PPC_LOOKUP_FUNC(base, guest) = host;
    }
};

extern "C" void* MmGetHostAddress(uint32_t ptr);
extern Memory g_memory;
