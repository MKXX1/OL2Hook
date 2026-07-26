#pragma once
#include <thread>
#include <mutex>
#include <atomic>
#include <vector>
#include <chrono>

// SDK 
#include "OL2SDK/GameDefines.hpp"
#include "OL2SDK/SdkConstants.hpp"
#include "OL2SDK/SdkHeaders.hpp"

// MAIN
#include "menu/menu.hpp"
#include "menu/MenuUtils.hpp"

// OTHERS
#define ENABLE_BACKEND_DX11
#include "utils/utils.hpp"


// IMGUI 
#include "dependencies/imgui/imgui.h"
#include "dependencies/imgui/imgui_internal.h"
#include "dependencies/imgui/imgui_impl_win32.h"
#include "dependencies/imgui/imgui_impl_dx11.h"

// HOOKS
#include "dependencies/minhook/MinHook.h"
#include "hooks/backend/dx11/hook_directx11.hpp"
#include "hooks/hooks.hpp"
