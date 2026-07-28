#pragma once
#include <thread>
#include <iostream>
#include <mutex>
#include <atomic>
#include <vector>
#include <chrono>

// SDK 
#include "OL2SDK/GameDefines.hpp"
#include "OL2SDK/SdkConstants.hpp"
#include "OL2SDK/SdkHeaders.hpp"

// MAIN
#include "menu/Menu.hpp"
#include "menu/MenuUtils.hpp"

// OTHERS
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
