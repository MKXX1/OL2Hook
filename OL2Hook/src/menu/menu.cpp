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
        if (!bRender || !GNames || !GObjects)
            return;

        AWorldInfo* World = AWorldInfo::GetWorldInfo();
        UEngine* UEngine = UEngine::GetEngine();
        FXManager = UOLFXManager::GetFXManager();
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

        if (World && World->PawnList)
            OLEnemy = static_cast<AOLEnemyPawn*>(World->PawnList);

       // bNoLookInput =  OLPC->eventIsLookInputIgnored();


        // DEBUG VO
        if (bShowVoiceManager && !IsInMainMenu()) {
            if (OLGame && OLGame->VoiceManager)
            {
                auto* VoiceManager = OLGame->VoiceManager;
                ig::Begin("DebugVO", (bool*)true, ImGuiWindowFlags_None);
                ig::SetWindowSize(ImVec2(800, 400), ImGuiCond_FirstUseEver);
                ig::SetWindowPos(ImVec2(100, 100), ImGuiCond_FirstUseEver);

                if (ig::BeginTable("VOEventLog", 3, ImGuiTableFlags_Borders | ImGuiTableFlags_RowBg | ImGuiTableFlags_ScrollY))
                {
                    ig::TableSetupColumn("Time");
                    ig::TableSetupColumn("Result");
                    ig::TableSetupColumn("AkEventName");
                    ig::TableHeadersRow();

                    const int NumEvents = 15;
                    int shown = 0;

                    for (int i = VoiceManager->VOEventLog.size() - 1; i >= 0 && shown < NumEvents; --i)
                    {
                        auto& eventInfo = VoiceManager->VOEventLog[i];

                        if (UOLUtils::ElapsedTime(eventInfo.Time) > 15.0f)
                            continue;

                        ig::TableNextRow();

                        // Time
                        ig::TableSetColumnIndex(0);

                        float elapsed = UOLUtils::ElapsedTime(eventInfo.Time);

                        ig::Text("Played [%.1f s]", elapsed);

                        // ResultType
                        ig::TableSetColumnIndex(1);

                        switch (eventInfo.ResultType)
                        {
                        case 1:   // VOET_Played
                            ig::TextColored(ImVec4(0, 1, 0, 1), "Played");
                            break;

                        case 2:   // VOET_NoMapping
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "No Mapping");
                            break;

                        case 4:   // VOET_TooSoonAfterAnyVO
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "Timer Any VO");
                            break;

                        case 8:   // VOET_TooSoonAfterSimilarVO
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "Timer Similar");
                            break;

                        case 16:  // VOET_TooSoonAfterSameVOOnPawn
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "Repeat VO");
                            break;

                        case 32:  // VOET_TooSoonAfterSameVOGlobal
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "Repeat Global");
                            break;

                        case 64:  // VOET_ConditionsFailed
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "Conditions");
                            break;

                        case 128: // VOET_NoLine
                            ig::TextColored(ImVec4(1, 0.5f, 0.5f, 1), "No Line");
                            break;

                        default:
                            ig::Text("Unknown (%d)", eventInfo.ResultType);
                            break;
                        }

                        // AkEventName
                        ig::TableSetColumnIndex(2);

                        ig::Text("%ws", eventInfo.AkEventName.ToWideString().c_str());
                        //OLPC->eventClientMessage(eventInfo.AkEventName, NULL, 10);
                        //if (!eventInfo.Subtitle.ToWideString().empty())
                        //{
                        //    ig::Text("%ws (\"%ws\")",
                        //        eventInfo.AkEventName.ToWideString().c_str(),
                        //        eventInfo.Subtitle.ToWideString().c_str());
                        //}
                        //else
                        //{
                        //    ig::Text("%ws",
                        //        eventInfo.AkEventName.ToWideString().c_str());
                        //}

                        shown++;
                    }

                    //  ig::EndTable();
                      //if (VoiceManager->PlayedVOs.size() > 0) {
                      //    ig::TableSetColumnIndex(3);
                      //    ig::Text("VO Played: %d", VoiceManager->PlayedVOs.size());
                      //
                      //    for (int i = 0; i < VoiceManager->PlayedVOs.size(); ++i)
                      //    {
                      //        auto& info = VoiceManager->PlayedVOs[i];
                      //
                      //        ig::BulletText("%ws",
                      //            info.EventName.ToWideString().c_str());
                      //    }
                      //}
                    ig::EndTable();
                }
                ig::End();
            }
        }

        //OVERLAY
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

                //if (OLEnemy) {
                //    OLEnemy->spaw
                //}

                //OLGame dbg
                if (OLGame && OLHero && OLPC && bGamedbg) {
                    ig::Text("Difficulty: %d", OLGame->DifficultyMode);
                    //ig::Text("CP_Name %s", UOLUtils::GetCheckpointName(UOLUtils::GetCheckpointIndex(OLGame->CurrentCheckpointName)).ToString().c_str()); //crash sometimes

                    ig::Text("CPstartWorldTime %.0f", OLGame->CPStartWorldTime);
                    ig::Text("BaseGame time %.0f", OLGame->BaseGameTime);
                    // ig::Text("SegmentEndGameTime %.3f", OLGame->SegmentEndGameTime); always 0.0000 idk why
                    ig::Text("CurrentGameTime %.0f", OLGame->CurrentGameTime);

                //    ig::Text("ChapterName %s", utf8_encode(UOLUtils::GetChapterName(OLGame->CurrentCheckpointName).ToWideString( )).c_str( )); //crash sometimes
                }
                ig::End();
            }
        }


      //MAIN MENU
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
              ig::Checkbox("Clear Night Vision", &NVClear);
              ig::Checkbox("NO CPK", &bNoCPK);
              ig::Checkbox("All Doors opened", &Allow);
              ig::Checkbox("Destroy Pawns", &NKPI);
              ig::Checkbox("Brain Dead AI", &bNoAi);
              ig::Checkbox("W2S", &W2S);
              ig::Checkbox("DebugVO", &bShowVoiceManager);

              if (OLCM && OLPC) {
                  if (ig::Button("Change Viewmode", sz)) {
                      if (!OLCM->IsViewModeUnlit())
                          OLCM->ViewUnlit();
                      else if (OLCM->IsViewModeUnlit())
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
                  if (ig::Checkbox("Myopia", &bMyopia)) {
                      if (FXManager) {
                          if (bMyopia) {
                              OLHero->bLostGlasses = TRUE;
                              FXManager->CurrentBlur.bWasActive = FXManager->CurrentBlur.bActive;
                              FXManager->CurrentBlur.bActive = TRUE;
                              FXManager->CurrentBlur.Amount = 1;
                              FXManager->CurrentBlur.Desaturation = 0;
                              FXManager->CurrentBlur.Duration = -1.0f;
                              FXManager->CurrentBlur.StartTime = -1.0f;
                              FXManager->CurrentBlur.BlendInTime = -1.0f;
                              FXManager->CurrentBlur.BlendOutTime = -1.0f;
                          }
                          else {
                              OLHero->bLostGlasses = FALSE;
                              FXManager->CurrentBlur.bWasActive = FXManager->CurrentBlur.bActive;
                              FXManager->CurrentBlur.bActive = FALSE;
                              FXManager->CurrentBlur.Amount = 1;
                              FXManager->CurrentBlur.Desaturation = 0;
                              FXManager->CurrentBlur.Duration = -1.0f;
                              FXManager->CurrentBlur.StartTime = -1.0f;
                              FXManager->CurrentBlur.BlendInTime = -1.0f;
                              FXManager->CurrentBlur.BlendOutTime = -1.0f;
                          }
                      }
                  }
                  if (ig::Button("SpawnMartha", sz)) {
                      test();
                  }
              }


              if (ig::TreeNode("CP_LIST")) { // UNSTABLE
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
                                  // FString FString(wstr.c_str());
                                  OLPC->StartNewGameAtCheckpoint(wstr.c_str(), false);
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
        // call without check
        BrainDeadEnemies();

        // calls with check
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
                OLHero->SprintDelay = 2.0f;
        }

        if (Allow && OLWorld)
            prikol();

        if (NKPI && OLCM)          //unstable
            destroyallEnemyPawn(); //unstable

        if (bNoCPK && OLGame)
            NOCPK();

        if (W2S)
            ExampleW2S();

        if (NVClear && FXManager)                                // Pink NV
            FXManager->NVPPSChain = FXManager->DefaultPPSChain;  // Pink NV

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

    void test() {
        // ig something with offsets cuz when i try get any value from actor i always got nullptr lmao but Martha is spawned 

        if (!OLPC)
            return;

        auto* ACTOR = static_cast<AOLEnemyMartha*>(OLPC->Spawn(AOLEnemyMartha::StaticClass(),
            NULL, NULL,
            OLHero->EyeLocation,
            OLHero->EyeRotation,
            NULL, true, true));

        if (!ACTOR)
            return;

        SendCheatMessage(L"Ptr: 0x%llX", reinterpret_cast<uint64_t>(ACTOR));

       // ACTOR->SpawnDefaultController(); // CRASH
       //SendCheatMessage(L"valid %p", ACTOR->Controller); // CRASH
       // auto BOT = ACTOR->Bot; //Вызвано исключение : нарушение доступа для чтения. ACTOR было 0xFFFFFFFFFFFF9967.

       // auto BOT = static_cast<AOLBot*>(OLPC->Spawn(AOLBot::StaticClass(),// crash if not possess immediately
       //     ACTOR, NULL,                                                   // crash if not possess immediately
       //     OLHero->EyeLocation,                                          // crash if not possess immediately
       //     OLHero->EyeRotation,                                          // crash if not possess immediately
       //     NULL, true, true));                                           // crash if not possess immediately
         
        // But if u possess it also crash XDDDDD
        // 
        //auto C = static_cast<AAIController*>(OLPC->Spawn(AAIController::StaticClass(),
        //    ACTOR, NULL,
        //    OLHero->EyeLocation,
        //    OLHero->EyeRotation,
        //    NULL, true, true));
         
        //if (!ACTOR->Controller && ACTOR) {
        //    C->eventPossess(ACTOR, FALSE);
        //}
        //if (C) {
        //    C->eventPossess(ACTOR, FALSE);  //C было 0xFFFFFFFFFFFFFFFF.
        //}
       // if (!BOT || !BOT->IsA(BotClass)) 
       //     return;
       //
       // if (ACTOR)
       //     BOT->EnemyPawn = static_cast<AOLEnemyPawn*>(ACTOR); // Вызвано исключение: нарушение доступа для чтения. BOT было 0xFFFFFFFFFFFFFB5B.
        

      //  if (BOT && BOT->EnemyPawn); //0xFFFFFFFFFFFFFB5B 
          //  BOT->EnemyPawn = static_cast<AOLEnemyPawn*>(ACTOR);              //0xFFFFFFFFFFFFFB5B 
      //  BOT->Possess(ACTOR, false); //Вызвано исключение: нарушение доступа для чтения. BOT было 0xFFFFFFFFFFFFFFFF.
                                                                                        
       //BOTcast->SightComponent->CanSeeTarget = TRUE;
       //BOTcast->SightComponent->CouldSeeTarget = TRUE;
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
    }

    void BrainDeadEnemies() {
        auto* objects = UObject::GObjObjects();
        if (!objects) {
            return;
        }

        for (int32_t index = 0; index < objects->size(); ++index) {
            UObject* object = objects->at(index);
            if (!object || !object->IsA(AOLBot::StaticClass()))
                continue;

            auto OLBot = static_cast<AOLBot*>(object);
            if (!OLBot) continue;

            OLBot->bBrainDead = bNoAi ? TRUE : FALSE;
        }
    }

    void ExampleW2S()
    {
        auto* objects = UObject::GObjObjects();
        if (!objects)
            return;

        for (int32_t index = 0; index < objects->size(); ++index)
        {
            UObject* object = objects->at(index);
            if (!object || !object->IsA(AOLBot::StaticClass()))
                continue;

            auto OLBot = static_cast<AOLBot*>(object);
            if (!OLBot)
                continue;

            FVector botpos = OLBot->RelativeLocation;
            FVector2D screenpos;
            bool insidescreen = WorldToScreen(OLPC, botpos, screenpos);

            if (insidescreen)
            {
                AddText("OLBOT", screenpos, false);
            }
        }
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
