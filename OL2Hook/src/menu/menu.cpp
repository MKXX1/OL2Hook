#include "menu.hpp"

namespace ig = ImGui;

static ImGuiTextFilter filter;

namespace Menu {

    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext())
            return;

        ImGui::CreateContext();
        ImGui_ImplWin32_Init(hwnd);
        PURPLE();
        ImGuiIO& io = ImGui::GetIO();
    }

    void Render() {
        if (!bRender)
            return;

        AWorldInfo* World = AWorldInfo::GetWorldInfo();
        UEngine* UEngine = UEngine::GetEngine();
        ImGuiIO& io = ImGui::GetIO();

        if (UEngine && UEngine->GamePlayers[0] && UEngine->GamePlayers[0]->Actor)
            OLPC = static_cast<AOLPlayerController*>(UEngine->GamePlayers[0]->Actor);

        if (World && World->Game)
            OLGame = static_cast<AOLGame*>(World->Game); // UOLUtils gives crashes sometimes with proccessevent

        if (OLGame && OLGame->TheWorld)
            OLWorld = OLGame->TheWorld;

        if (OLPC && OLPC->HeroPawn)
            OLHero = OLPC->HeroPawn;

        if (OLPC && OLPC->CheatManager)
            OLCM = static_cast<UOLCheatManager*>(OLPC->CheatManager); // or UOLCheatManager::GetCheatManager( ); idk

        if (UEngine)
            OLEngine = static_cast<UOLEngine*>(UEngine);

        if (OLEngine && OLEngine->MaxSmoothedFrameRate > 62)
            OLEngine->MaxSmoothedFrameRate = 62;

       // bNoLookInput =  OLPC->eventIsLookInputIgnored();

        if (bOverlay) {
            if (ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration)) {
                ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
                ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);
                ig::Text("[OL2HOOK]");
                ig::Text("FPS: %.0f", io.Framerate);



                //OLHero Dbg
                if (OLHero && bPlayerdbg) {
                    ig::Text("RTPCHealth: %.0f", OLHero->RTPCHealth);
                    ig::Text("Stamina: %.3f", OLHero->RunStamina);
                    ig::Text("Speed: %.3f", OLHero->RunSpeed);
                    ig::Text("FOV: %.0f", OLHero->DefaultFOV);
                }

                //OLPC dbg
                if (OLPC && bPCdbg) {
                    ig::Text("NumBatteries: %d", OLPC->NumBatteries);
                    ig::Text("NumBandages: %d", OLPC->NumBandages);
                }

                //OLGame dbg
                if (OLGame && OLHero && OLPC && bGamedbg) {
                    ig::Text("Difficulty: %d", OLGame->DifficultyMode);
                    //  ig::Text("CP_Name %s", utf8_encode(UOLUtils::GetCheckpointName(UOLUtils::GetCheckpointIndex(OLGame->CurrentCheckpointName)).ToWideString( )).c_str( )); crash sometimes
                    ig::Text("CPstartWorldTime %.0f", OLGame->CPStartWorldTime);
                    ig::Text("BaseGame time %.0f", OLGame->BaseGameTime);
                    // ig::Text("SegmentEndGameTime %.3f", OLGame->SegmentEndGameTime); always 0.0000 idk why
                    ig::Text("CurrentGameTime %.0f", OLGame->CurrentGameTime);
                    //  ig::Text("ChapterName %s", utf8_encode(UOLUtils::GetChapterName(OLGame->CurrentCheckpointName).ToWideString( )).c_str( )); crash sometimes
                }
                ig::End();
            }
        }

        io.MouseDrawCursor = bShowOverlay;
        if (bShowOverlay) {
            ig::Begin("Menu", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
            ig::SetWindowPos(ImVec2(io.DisplaySize.x / 4, io.DisplaySize.y / 4));
            ig::SetWindowSize(ImVec2(1120, 355), ImGuiCond_Once);
            ImGuiStyle& style = ImGui::GetStyle();
            ImVec2 child_size = ImVec2((ig::GetColumnWidth() - (style.ItemSpacing.x * 2)) / 3, ig::GetWindowHeight() - (ig::GetCursorPosY() + style.ItemInnerSpacing.y * 2));

            if (ig::BeginChild("ChildWindow", child_size, true));
            ig::Text("Main");
            ImVec2 sz = ImVec2(-FLT_MIN, 0.0f);
            ig::Separator();
            {
                ig::Spacing();

                ig::Checkbox("Show Overlay", &bOverlay);
                ig::Checkbox("Player Debug", &bPlayerdbg);
                ig::Checkbox("Player Controller Debug", &bPCdbg);
                ig::Checkbox("Game Debug", &bGamedbg);
                ig::Checkbox("NO CPK", &bNoCPK);
                ig::Checkbox("All Doors opened", &Allow);
                ig::Checkbox("Destroy Pawns", &NKPI);
                
                if (OLCM && OLPC) {
                    if (ig::Checkbox("Change Viewmode", &bViewmode)) {
                        if (bViewmode && !OLCM->IsViewModeUnlit())
                            OLCM->ViewUnlit();
                        else if (!bViewmode)
                            OLCM->ViewLit();
                    }

                    if (ig::Button("God", sz)) {
                        OLCM->God();
                    }
                    if (ig::Button("Ghost", sz)) {
                        OLCM->Ghost();
                    }
                    if (ig::Button("addbandage", sz)) {
                        OLCM->AddBandage();
                    }
                    if (ig::Button("RechargeNightVision", sz)) {
                        OLCM->RechargeNightVision();
                    }

                    ig::Text("Select blake Skin:");
                    ig::SliderInt("##Slot1", &skinSlot1, 1, 4, "Slot1: %d");
                    ig::SliderInt("##Slot2", &skinSlot2, 1, 4, "Slot2: %d");

                    if (ig::Button("Equip", sz)) {
                        OLCM->ForceHeroSkin(skinSlot1, skinSlot2);
                        SendCheatMessage(L"Skin Changed");
                    }
                }

                if (OLHero && OLPC) {
                    if (ig::SliderFloat("FOV", &OLHero->DefaultFOV, 30.f, 160.f)) {
                        FOV(OLHero->DefaultFOV);
                    }
                    ig::Checkbox("Infinite Stamina", &bInfStim);
                    ig::Checkbox("Infinite Bandages", &binfbandage);
                    ig::Checkbox("Infinite Batteries", &binfbatteries);
                }
                if (ig::TreeNode("CP_LIST")) {
                    auto* objects = UObject::GObjObjects();
                    if (!objects) {
                        ig::TreePop();
                        return;
                    }

                    for (int32_t index = 0; index < objects->size(); ++index) {
                        UObject* object = objects->at(index);
                        if (!object || !object->IsA(AOLCheckpointList::StaticClass()))
                            continue;

                        auto list = static_cast<AOLCheckpointList*>(object);
                        if (!list) continue;

                        ig::Text("CPs:");
                        ig::Separator();

                        for (auto& names : list->CheckpointList) {
                            std::string cpName = names.ToString().c_str();
                            if (ig::Button(cpName.c_str(), sz)) {
                                if (OLPC) {
                                    std::wstring wstr(cpName.begin(), cpName.end());
                                    FString FString(wstr.c_str());
                                    OLPC->StartNewGameAtCheckpoint(false, FString);
                                    //     OLCM->cp(wstr.c_str());
                                }
                            }
                        }
                    }
                    ig::TreePop();
                }

            }
            ig::EndChild();
            ig::End();
        }
        
        // Cheat Msg (just funny)
        if (OLPC) {
            SendCheatMessage(L"Infinite Bandages", binfbandage, Bandage);
            if (binfbandage)
                InfiniteBandage();

            SendCheatMessage(L"Infinite Batteries", binfbatteries, Batteries);
            if (binfbatteries)
                InfiniteBatteries();

            SendCheatMessage(L"Infinite Stamina", bInfStim, InfStim);
            if (bInfStim && OLHero)
                InfiniteStim();
            else
                OLHero->SprintDelay = 2;
        }

        if (Allow && OLWorld)
            prikol();

        if (NKPI && OLCM)          //unstable
            destroyallEnemyPawn(); //unstable

        if (bNoCPK)
            NOCPK();
        
    }
    // VOIDS
    void FOV(float F) {
        if (!OLHero)
            return;
        if (F < 30.f || F > 160.f)
            return;

        OLHero->DefaultFOV = F;
        OLHero->BaseFOV = F;
        OLHero->RunningFOV = F + 20.f;
        OLHero->CamcorderNVMaxFOV = F;
        OLHero->CamcorderMaxFOV = F;
    }

    void InfiniteStim() {
       OLHero->RunStamina = 100.f;
       OLHero->JumpStamina = 100.f;

       if (OLHero->bIsStaminaDepleted)
           OLHero->bIsStaminaDepleted = FALSE;

       OLHero->SprintDelay = 0;
    }

    void InfiniteBandage() {
        int bandage;

        if (OLPC->NumBandages + 1 > OLPC->MaxNumBandages)
            bandage = 1;
        else
            bandage = 1;

        OLPC->NumBandages = bandage;
    }


    void InfiniteBatteries() {
        int Batteries;

        if (OLPC->NumBatteries + 1 > OLPC->MaxNumBatteries)
            Batteries = 1;
        else
            Batteries = 1;
        OLPC->NumBatteries = Batteries;
    }

    void prikol() {
        for (auto doors : OLWorld->CachedDoors)
        {
            if (!doors)
                continue;

            doors->bLocked = FALSE;
        }
    }

    void destroyallEnemyPawn() {
        //auto* objects = UObject::GObjObjects();
        //if (!objects) {
        //    return;
        //}
        //
        //for (int32_t index = 0; index < objects->size(); ++index) {
        //    UObject* object = objects->at(index);
        //    if (!object || !object->IsA(AOLEnemyPawn::StaticClass()))
        //        continue;
        //
        //    auto OLPawn = static_cast<AOLEnemyPawn*>(object);
        //    if (!OLPawn) continue;
        //
        //    OLPawn->Destroy();
        //}
        OLCM->KillAllEnemies();
        OLCM->CleanupAfterKillAll();
    }

    void NOCPK() {
        //if (!OLPC)
        //    return;
        //OLPC->ConsoleCommand(L"Set OLGame CurrentCheckpointName None",false);
        // or
        if (!OLGame)
            return;
        OLGame->CurrentCheckpointName = "None";
    }


} // namespace Menu
