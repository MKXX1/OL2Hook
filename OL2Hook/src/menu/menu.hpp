#pragma once

#include <Windows.h>
#include "../pch.h"

namespace Menu {
    void InitializeContext(HWND hwnd);
    void Render( );
    void FOV(float F);


    // ptrs
    inline AOLPlayerController* OLPC = nullptr;
    inline AOLHero* OLHero = nullptr;
    inline AOLGame* OLGame = nullptr;
    inline UOLCheatManager* OLCM = nullptr;
    inline UOLUtils* OLUtils = nullptr; 

    //Main
    inline bool bRender = true;
    inline bool bShowOverlay = false;
    inline bool bNoLookInput = false;
    

    // booleans in menu
    inline bool bViewmode = false;
    inline bool bOverlay = false;
    inline bool bPlayerdbg = false;
    inline bool bPCdbg = false;
    inline bool bGamedbg = false;
    inline bool bInfStim = false;



    inline bool Allow = false;

    static int skinSlot1 = 1;
    static int skinSlot2 = 1;

} // namespace Menu
