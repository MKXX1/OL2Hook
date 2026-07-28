#include <cstdio>
#include <mutex>
#include <thread>

#include "../console/console.hpp"
#include "../pch.h"

static HWND g_hWindow = NULL;

static WNDPROC oWndProc;
static LRESULT WINAPI WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    if (uMsg == WM_KEYDOWN) {
        switch (wParam) {
        case VK_INSERT:
            Menu::bRender = !Menu::bRender;
            return 0;
            break;
        case VK_END:
            H::bShuttingDown = true;
            U::UnloadDLL();
            return 0;
            break;
        case VK_F2:
            Menu::bShowOverlay = !Menu::bShowOverlay;
            if (Menu::OLCM && !Menu::IsInPauseMenu()) {
                Menu::OLCM->OutlastPause(); //lookinput is not working so......
            }
            return 0;
            break;
        }
    }
    static bool pressG = false;
    if (GetAsyncKeyState('G') & 0x8000) {
        if (!pressG) {
            pressG = true;
            if (Menu::OLCM && Menu::OLPC && Menu::OLHero)
                Menu::OLCM->Ghost();
        }
    }
    else {
        pressG = false;
    }
    static bool pressT = false;
    if (GetAsyncKeyState('T') & 0x8000) {
        if (!pressT) {
            pressT = true;
            if (Menu::OLCM && Menu::OLPC && Menu::OLHero)
                Menu::OLCM->ToggleFreeCamNoPause();
        }
    }
    else {
        pressT = false;
    }
    static bool pressY = false;
    if (GetAsyncKeyState('Y') & 0x8000) {
        if (!pressY) {
            pressY = true;
            if (Menu::OLCM && Menu::OLPC && Menu::OLHero)
                Menu::OLCM->TeleportToFreeCam();
        }
    }
    else {
        pressY = false;
    }
    LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
    if (Menu::bShowOverlay) {
        ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
    }

    return Menu::bShowOverlay ? Menu::bShowOverlay : CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}
namespace Hooks {
    void Init( ) {
        g_hWindow = U::GetProcessWindow( );

#ifdef DISABLE_LOGGING_CONSOLE
        bool bNoConsole = GetConsoleWindow( ) == NULL;
        if (bNoConsole) {
            AllocConsole( );
        }
#endif
        DX11::Hook(g_hWindow);

#ifdef DISABLE_LOGGING_CONSOLE
        if (bNoConsole) {
            FreeConsole( );
        }
#endif
        
        oWndProc = reinterpret_cast<WNDPROC>(SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(WndProc)));
    }

    void Free( ) {
        if (oWndProc) {
            SetWindowLongPtr(g_hWindow, GWLP_WNDPROC, reinterpret_cast<LONG_PTR>(oWndProc));
        }


        MH_DisableHook(MH_ALL_HOOKS);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));


        DX11::Unhook();
    }
} // namespace Hooks
