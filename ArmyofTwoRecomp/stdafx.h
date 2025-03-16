#pragma once

#define NOMINMAX
#define _DEBUG 1

#if defined(_WIN32)
#include <windows.h>
#include <ShlObj_core.h>
#include <wrl/client.h>

using Microsoft::WRL::ComPtr;
#elif defined(__linux__)
#include <unistd.h>
#include <pwd.h>
#endif

#include <algorithm>
#include <mutex>
#include <filesystem>
#include <fstream>
#include <vector>
#include <string>
#include <cassert>
#include <chrono>
#include <span>

#include <xxhash.h>
#include <ankerl/unordered_dense.h>
#include <ddspp.h>
#include <xbox.h>
#include <stb_image.h>
#include <ppc/ppc_recomp_shared.h>
#include <toml++/toml.hpp>
#include <o1heap.h>
#include <blockingconcurrentqueue.h>
#include <SDL.h>
#include <set>
#include <fmt/core.h>

#include <numeric>

#include <os/logger.h>
#include "framework.h"
#include "mutex.h"

/*
#define ARMYOFTWO_RECOMP

#ifdef ARMYOFTWO_RECOMP_D3D12
#include <dxcapi.h>
#endif

#include <xxhash.h>
#include <ankerl/unordered_dense.h>
//#include <ddspp.h>
#include <ppc/ppc_recomp_shared.h>
#include <toml++/toml.hpp>
#include <zstd.h>
//#include <stb_image.h>
#include <blockingconcurrentqueue.h>

#include <SDL_mixer.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <implot.h>
#include <backends/imgui_impl_sdl2.h>

#include <cstddef>
//#include <smolv.h>

#include <fmt/core.h>
#include <list>
#include <semaphore>
#include <numeric>
#include <charconv>




#ifndef _WIN32
#include <sys/mman.h>
#endif
*/
