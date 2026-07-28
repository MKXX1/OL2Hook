#include "pch.h"

#include "console/console.hpp"

DWORD WINAPI OnProcessAttach(LPVOID lpParam);
DWORD WINAPI OnProcessDetach(LPVOID lpParam);

 bool InitializeSdk( ) {
    const auto imageBase = reinterpret_cast<std::uintptr_t>(GetModuleHandleW(nullptr));
    if (!imageBase) {
        return false;
    }

    GObjects = reinterpret_cast<TArray<UObject*>*>(imageBase + GObjects_Offset);
    GNames = reinterpret_cast<TArray<FNameEntry*>*>(imageBase + GNames_Offset);
    LOG("[+] SDK: GObjects: %p | GNames: %p\n", GObjects, GNames);
    return GObjects && GNames && GObjects->size( ) > 0;
}


BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        DisableThreadLibraryCalls(hinstDLL);
        U::SetRenderingBackend(DIRECTX11);
        HANDLE hHandle = CreateThread(NULL, 0, OnProcessAttach, hinstDLL, 0, NULL);
        if (hHandle != NULL) {
            CloseHandle(hHandle);
        }
    } else if (fdwReason == DLL_PROCESS_DETACH && !lpReserved) {
        OnProcessDetach(NULL);
    }

    return TRUE;
}

//DWORD WINAPI HooksThread(LPVOID lpParam) {
//    LOG("[+] SDK is ready, initializing hooks\n");
//    MH_Initialize( );
//    H::Init( );
//
//    return 0;
//}

DWORD WINAPI OnProcessAttach(LPVOID lpParam) {
    Console::Alloc( );
    LOG("[+] Rendering backend: %s\n", U::RenderingBackendToStr());
    if (U::GetRenderingBackend() == NONE) {
        LOG("[!] Looks like you forgot to set a backend. Will unload after pressing enter...");
        std::cin.get();

        FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(lpParam), 0);
        return 0;
    }

    InitializeSdk( );
    MH_Initialize();
    H::Init();
   // CreateThread(NULL, 0, HooksThread, NULL, 0, NULL);

    return 0;
}

DWORD WINAPI OnProcessDetach(LPVOID lpParam) {
    H::Free( );
    MH_Uninitialize( );

    Console::Free( );

    return 0;
}

