#include "menu.hpp"

namespace ig = ImGui;

static ImGuiTextFilter filter;

namespace Menu {

    void InitializeContext(HWND hwnd) {
        if (ig::GetCurrentContext( ))
            return;

        ImGui::CreateContext( );
        ImGui_ImplWin32_Init(hwnd);
        PURPLE( );
        ImGuiIO& io = ImGui::GetIO( );
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
        if (OLPC && OLPC->HeroPawn) 
            OLHero = OLPC->HeroPawn;
        if (OLPC && OLPC->CheatManager) 
            OLCM = static_cast<UOLCheatManager*>(OLPC->CheatManager); // or UOLCheatManager::GetCheatManager( ); idk
        if (bOverlay) {
            if (ig::Begin("Overlay", (bool*)true, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoInputs | ImGuiWindowFlags_NoDecoration)) {
                ig::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_FirstUseEver);
                ig::SetWindowPos(ImVec2(0, 0), ImGuiCond_FirstUseEver);
                ig::Text("[OL2HOOK]");
                ig::Text("FPS: %.0f", io.Framerate);



                //OLHero Dbg
                if (OLHero && bPlayerdbg) {
                    ig::Text("Player Ptr: %p", OLHero);
                    ig::Text("RTPCHealth: %.0f", OLHero->RTPCHealth);
                    ig::Text("Stamina: %.3f", OLHero->RunStamina);
                    ig::Text("FOV: %.0f", OLHero->DefaultFOV);
                }

                //OLPC dbg
                if (OLPC && bPCdbg) {
                    ig::Text("OLPC Ptr: %p", OLPC);
                    ig::Text("NumBatteries: %d", OLPC->NumBatteries);
                    ig::Text("NumBandages: %d", OLPC->NumBandages);
                }


                if (OLGame && OLHero && OLPC && bGamedbg) {
                    ig::Text("OLGame Ptr: %p", OLGame);
                    ig::Text("Difficulty: %d", OLGame->DifficultyMode);
                    //  ig::Text("CP_Name %s", utf8_encode(UOLUtils::GetCheckpointName(UOLUtils::GetCheckpointIndex(OLGame->CurrentCheckpointName)).ToWideString( )).c_str( )); crash sometimes
                    ig::Text("CPstartWorldTime %.3f", OLGame->CPStartWorldTime);
                    ig::Text("BaseGame time %.3f", OLGame->BaseGameTime);
                   // ig::Text("SegmentEndGameTime %.3f", OLGame->SegmentEndGameTime); always 0.0000 idk why
                    ig::Text("CurrentGameTime %.3f", OLGame->CurrentGameTime);
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
                        OLCM->eventCheatMessage(L"Skin Changed");
                    }
                }

                //if (OLPC && OLPC->HUD && OLPC->HUD->eventIsInPauseMenu())
                //    if (ig::Button("ReloadMenu", sz)) {
                //        OLPC->HUD->ReloadMenu();
                //    }
                //if (ig::Button("MainMenu", sz)) {
                //    if (OLGame) {
                //        OLGame->eventTravelToStartupMap();
                //    }
                //}

                if (OLHero && OLPC) {
                    if (ig::SliderFloat("FOV", &OLHero->DefaultFOV, 30.f, 160.f)) {
                        FOV(OLHero->DefaultFOV);
                    }
                    ig::Checkbox("Infinite Stamina", &bInfStim);
                    if (bInfStim) {
                        OLHero->StaminaMaxStamina = -1;
                        OLHero->SprintDelay = 0;
                    }
                    else
                    {
                        OLHero->StaminaMaxStamina = 100;
                        OLHero->SprintDelay = 2;
                    }
                }


            }
            ig::EndChild();
            ig::End();
        }
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


} // namespace Menu
