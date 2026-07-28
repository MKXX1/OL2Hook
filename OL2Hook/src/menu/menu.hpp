#pragma once

#include <Windows.h>
#include "../pch.h"

namespace Menu {
    void InitializeContext(HWND hwnd);
    void Render( );
    void FOV(float F);
    void NOCPK();
    void InfiniteStim();
    void InfiniteBandage();
    void InfiniteBatteries();
    void destroyallEnemyPawn();
    void prikol();
    void test();
    void BrainDeadEnemies();
    void ExampleW2S();

    // ptrs
    inline AOLPlayerController* OLPC = nullptr;
    inline AOLHero* OLHero = nullptr;
    inline AOLGame* OLGame = nullptr;
    inline UOLWorld* OLWorld = nullptr;
    inline UOLEngine* OLEngine = nullptr;
    inline UOLCheatManager* OLCM = nullptr;
    inline AOLEnemyPawn* OLEnemy = nullptr;
    inline UOLFXManager* FXManager = nullptr;

  
    // Main
    inline bool bRender = true;
    inline bool bShowOverlay = false;
    inline bool bShowVoiceManager = false;
    inline bool bNoLookInput = false;
    

    // booleans in menu
    inline bool bViewmode = false;
    inline bool bOverlay = true;
    inline bool bPlayerdbg = true;
    inline bool bPCdbg = false;
    inline bool bGamedbg = false;
    inline bool bInfStim = false;
    inline bool bNoCPK = false;
    inline bool bNoAi = false;
    inline bool binfbandage = false;
    inline bool binfbatteries = false;
    inline bool bMyopia = false;

    // other
    static int viewModeIndex = 0;
    inline const char* viewModes[] = { "Lit", "Unlit", "Wireframe", "DetailLight", "ShaderComplexity" };
    inline bool W2S = false;
    inline bool NVClear = false;
    inline bool Allow = false;
    inline bool NKPI = false;
    static int skinSlot1 = 1;
    static int skinSlot2 = 1;
    static bool Bandage = false;
    static bool Batteries = false;
    static bool InfStim = false;

} // namespace Menu
