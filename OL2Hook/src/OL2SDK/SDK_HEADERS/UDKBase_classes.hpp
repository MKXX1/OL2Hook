/*
#############################################################################################
# Outlast 2 (OLGame) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.7
# ========================================================================================= #
# File: UDKBase_classes.hpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#pragma once
#include "../SdkConstants.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_SABM_FIND_FIRST_BIND                                  -2
#define CONST_INVALIDFIELD                                          -1

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum UDKBase.CastlePC.ETutorialStage
enum ETutorialStage
{
	ETutorialStage_ETS_None                            = 0,
	ETutorialStage_ETS_Tap                             = 1,
	ETutorialStage_ETS_Swipe                           = 2,
	ETutorialStage_ETS_Sticks                          = 3,
	ETutorialStage_ETS_Done                            = 4,
	ETutorialStage_ETS_END                             = 5
};

// Enum UDKBase.UDKAnimBlendByFall.EBlendFallTypes
enum EBlendFallTypes
{
	EBlendFallTypes_FBT_Up                             = 0,
	EBlendFallTypes_FBT_Down                           = 1,
	EBlendFallTypes_FBT_PreLand                        = 2,
	EBlendFallTypes_FBT_Land                           = 3,
	EBlendFallTypes_FBT_DblJumpUp                      = 4,
	EBlendFallTypes_FBT_DblJumpDown                    = 5,
	EBlendFallTypes_FBT_DblJumpPreLand                 = 6,
	EBlendFallTypes_FBT_DblJumpLand                    = 7,
	EBlendFallTypes_FBT_None                           = 8,
	EBlendFallTypes_FBT_END                            = 9
};

// Enum UDKBase.UDKAnimBlendByFlying.EFlyingState
enum EFlyingState
{
	EFlyingState_Flying_NotFlying                      = 0,
	EFlyingState_Flying_OpeningWings                   = 1,
	EFlyingState_Flying_Flying                         = 2,
	EFlyingState_Flying_ClosingWings                   = 3,
	EFlyingState_Flying_END                            = 4
};

// Enum UDKBase.UDKMapMusicInfo.ECrossfadeType
enum ECrossfadeType
{
	ECrossfadeType_CFT_BeginningOfMeasure              = 0,
	ECrossfadeType_CFT_EndOfMeasure                    = 1,
	ECrossfadeType_CFT_END                             = 2
};

// Enum UDKBase.UDKUIDataProvider_MenuOption.EUTOptionType
enum EUTOptionType
{
	EUTOptionType_UTOT_ComboReadOnly                   = 0,
	EUTOptionType_UTOT_ComboNumeric                    = 1,
	EUTOptionType_UTOT_CheckBox                        = 2,
	EUTOptionType_UTOT_Slider                          = 3,
	EUTOptionType_UTOT_Spinner                         = 4,
	EUTOptionType_UTOT_EditBox                         = 5,
	EUTOptionType_UTOT_CollectionCheckBox              = 6,
	EUTOptionType_UTOT_END                             = 7
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class UDKBase.MobileHUDExt
// 0x0044 (0x0684 - 0x06C8)
class AMobileHUDExt : public AMobileHUD
{
public:
	class UTexture2D*                                  TapToMoveTexture;                              // 0x0684 (0x0008) [0x0000000000000000]               
	float                                              LastTapToMoveEffectTime;                       // 0x068C (0x0004) [0x0000000000000000]               
	struct FVector2D                                   TapToMoveEffectPos;                            // 0x0690 (0x0008) [0x0000000000000000]               
	uint32_t                                           bFlashJoysticks : 1;                           // 0x0698 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              FlashTime;                                     // 0x069C (0x0004) [0x0000000000000000]               
	class UFont*                                       BenchmarkFont;                                 // 0x06A0 (0x0008) [0x0000000000000000]               
	class UTexture2D*                                  BenchmarkBackground;                           // 0x06A8 (0x0008) [0x0000000000000000]               
	struct FTextureUVs                                 BenchmarkBackgroundUVs;                        // 0x06B0 (0x0010) [0x0000000000000000]               
	float                                              BenchmarkResolutionScale;                      // 0x06C0 (0x0004) [0x0000000000000000]               
	int32_t                                            BenchmarkFeatureLevel;                         // 0x06C4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileHUDExt");
		}

		return uClassPointer;
	};

	void FlashSticks();
	void DrawMobileZone_Joystick(class UMobileInputZone* Zone);
	void DrawMobileZone_Slider(class UMobileInputZone* Zone);
	void PostRender();
	bool ShowMobileHud();
	void ConditionallyDrawTapToMoveEffect();
	void StartTapToMoveEffect(float X, float Y);
	void UpdateBenchmarkInformation();
};

// Class UDKBase.ParticleModuleTypeDataSnow
// 0x00E4 (0x0074 - 0x0158)
class UParticleModuleTypeDataSnow : public UParticleModuleTypeDataBase
{
public:
	struct FRawDistributionVector                      StartSize;                                     // 0x0074 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      StartVelocity;                                 // 0x0098 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      StartLocation;                                 // 0x00BC (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      ColorOverLife;                                 // 0x00E0 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       AlphaOverLife;                                 // 0x0104 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       Lifetime;                                      // 0x0128 (0x0024) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	float                                              KillHeight;                                    // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeStart;                                     // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeStop;                                      // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.ParticleModuleTypeDataSnow");
		}

		return uClassPointer;
	};

};

// Class UDKBase.SimpleGame
// 0x0000 (0x04A4 - 0x04A4)
class ASimpleGame : public AFrameworkGame
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.SimpleGame");
		}

		return uClassPointer;
	};

	static class UClass* eventSetGameType(const class FString& MapName, const class FString& Options, const class FString& Portal);
	static class FString StripPlayOnPrefix(const class FString& MapName);
};

// Class UDKBase.UDKGame
// 0x0000 (0x04A4 - 0x04A4)
class AUDKGame : public ASimpleGame
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKGame");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAIDecisionComponent
// 0x0007 (0x008D - 0x0094)
class UUDKAIDecisionComponent : public UActorComponent
{
public:
	uint8_t                                            UnknownData00[0x3];                              // 0x008D (0x0003) MISSED OFFSET
	uint32_t                                           bTriggered : 1;                                // 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAIDecisionComponent");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKBot
// 0x00FC (0x0458 - 0x0554)
class AUDKBot : public AAIController
{
public:
	class AUDKSquadAI*                                 Squad;                                         // 0x0458 (0x0008) [0x0000000000000000]               
	class UUDKAIDecisionComponent*                     DecisionComponent;                             // 0x0460 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AActor*                                      TemporaryFocus;                                // 0x0468 (0x0008) [0x0000000000000000]               
	uint32_t                                           bExecutingWhatToDoNext : 1;                    // 0x0470 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScriptSpecialJumpCost : 1;                    // 0x0470 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bForceRefreshRoute : 1;                        // 0x0470 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bTargetAlternateLoc : 1;                       // 0x0470 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bEnemyInfoValid : 1;                           // 0x0470 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bEnemyIsVisible : 1;                           // 0x0470 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bLeadTarget : 1;                               // 0x0470 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bJumpOverWall : 1;                             // 0x0470 (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bPlannedJump : 1;                              // 0x0470 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bInDodgeMove : 1;                              // 0x0470 (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bEnemyAcquired : 1;                            // 0x0470 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bNeedDelayedLeaveVehicle : 1;                  // 0x0470 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bAllowRouteReuse : 1;                          // 0x0470 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bUsingSquadRoute : 1;                          // 0x0470 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bUsePreviousSquadRoute : 1;                    // 0x0470 (0x0004) [0x0000000000000000] [0x00004000] 
	uint8_t                                            ScriptedFireMode;                              // 0x0474 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3];                              // 0x0475 (0x0003) MISSED OFFSET
	float                                              EnemyVisibilityTime;                           // 0x0478 (0x0004) [0x0000000000000000]               
	class APawn*                                       VisibleEnemy;                                  // 0x047C (0x0008) [0x0000000000000000]               
	class AVehicle*                                    LastBlockingVehicle;                           // 0x0484 (0x0008) [0x0000000000000000]               
	class APawn*                                       CurrentlyTrackedEnemy;                         // 0x048C (0x0008) [0x0000000000000000]               
	class TArray<struct FEnemyPosition>                SavedPositions;                                // 0x0494 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     ImpactVelocity;                                // 0x04A4 (0x000C) [0x0000000000000000]               
	int32_t                                            AcquisitionYawRate;                            // 0x04B0 (0x0004) [0x0000000000000000]               
	float                                              HearingThreshold;                              // 0x04B4 (0x0004) [0x0000000000000000]               
	float                                              RespawnPredictionTime;                         // 0x04B8 (0x0004) [0x0000000000000000]               
	float                                              WarningDelay;                                  // 0x04BC (0x0004) [0x0000000000000000]               
	class AProjectile*                                 WarningProjectile;                             // 0x04C0 (0x0008) [0x0000000000000000]               
	struct FVector                                     MonitorStartLoc;                               // 0x04C8 (0x000C) [0x0000000000000000]               
	class APawn*                                       MonitoredPawn;                                 // 0x04D4 (0x0008) [0x0000000000000000]               
	float                                              MonitorMaxDistSq;                              // 0x04DC (0x0004) [0x0000000000000000]               
	struct FVector                                     LastSeenPos;                                   // 0x04E0 (0x000C) [0x0000000000000000]               
	struct FVector                                     LastSeeingPos;                                 // 0x04EC (0x000C) [0x0000000000000000]               
	float                                              LastSeenTime;                                  // 0x04F8 (0x0004) [0x0000000000000000]               
	float                                              TrackingReactionTime;                          // 0x04FC (0x0004) [0x0000000000000000]               
	float                                              BaseTrackingReactionTime;                      // 0x0500 (0x0004) [0x0000000000000000]               
	struct FVector                                     TrackedVelocity;                               // 0x0504 (0x000C) [0x0000000000000000]               
	class ANavigationPoint*                            SquadRouteGoal;                                // 0x0510 (0x0008) [0x0000000000000000]               
	class APawn*                                       BlockedAimTarget;                              // 0x0518 (0x0008) [0x0000000000000000]               
	float                                              LastIterativeCheck;                            // 0x0520 (0x0004) [0x0000000000000000]               
	float                                              AimUpdateFrequency;                            // 0x0524 (0x0004) [0x0000000000000000]               
	float                                              LastAimUpdateTime;                             // 0x0528 (0x0004) [0x0000000000000000]               
	float                                              ErrorUpdateFrequency;                          // 0x052C (0x0004) [0x0000000000000000]               
	float                                              LastErrorUpdateTime;                           // 0x0530 (0x0004) [0x0000000000000000]               
	float                                              CurrentAimError;                               // 0x0534 (0x0004) [0x0000000000000000]               
	float                                              DodgeLandZ;                                    // 0x0538 (0x0004) [0x0000000000000000]               
	class AActor*                                      FearSpots[2];                                  // 0x053C (0x0010) [0x0000000000000000]               
	float                                              DodgeToGoalPct;                                // 0x054C (0x0004) [0x0000000000000000]               
	float                                              MultiJumpZ;                                    // 0x0550 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKBot");
		}

		return uClassPointer;
	};

	void eventDelayedLeaveVehicle();
	void eventDelayedWarning();
	void eventMissedDodge();
	float eventAdjustAimError(float TargetDist, bool bInstantProj);
	float eventSuperDesireability(class APickupFactory* P);
	bool eventSpecialJumpCost(float RequiredJumpZ, float& outCost);
	void eventMayDodgeToMoveTarget();
	void eventTimeDJReset();
	void eventMonitoredPawnAlert();
	void eventWhatToDoNext();
	class AActor* FindBestSuperPickup(float MaxDist);
	void BuildSquadRoute();
	class AActor* FindPathToSquadRoute(bool optionalBWeightDetours);
	class AActor* FindBestInventoryPath(float& outMinWeight);
	bool CanMakePathTo(class AActor* A);
	void LatentWhatToDoNext();
	void WaitToSeeEnemy();
	void eventReceiveRunOverWarning(class AUDKVehicle* V, float projSpeed, const struct FVector& VehicleDir);
	void eventExecuteWhatToDoNext();
	class AActor* FaceActor(float StrafingModifier);
};

// Class UDKBase.UDKCarriedObject
// 0x0050 (0x0248 - 0x0298)
class AUDKCarriedObject : public AActor
{
public:
	class ATeamInfo*                                   Team;                                          // 0x0248 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class ANavigationPoint*                            LastAnchor;                                    // 0x0250 (0x0008) [0x0000000000000002] (CPF_Const)   
	float                                              LastValidAnchorTime;                           // 0x0258 (0x0004) [0x0000000000000000]               
	class USkeletalMeshComponent*                      SkelMesh;                                      // 0x025C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bHome : 1;                                     // 0x0264 (0x0004) [0x0000000100000020] [0x00000001] (CPF_Net | CPF_RepNotify)
	class AUDKGameObjective*                           HomeBase;                                      // 0x0268 (0x0008) [0x0000000000000020] (CPF_Net)     
	struct FVector                                     HomeBaseOffset;                                // 0x0270 (0x000C) [0x0000000000000000]               
	class AActor*                                      OldBase;                                       // 0x027C (0x0008) [0x0000000000000000]               
	class AActor*                                      OldBaseBase;                                   // 0x0284 (0x0008) [0x0000000000000000]               
	struct FVector                                     HUDLocation;                                   // 0x028C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKCarriedObject");
		}

		return uClassPointer;
	};

	uint8_t GetTeamNum();
	void eventOnBaseChainChanged();
	void eventNotReachableBy(class APawn* P);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
};

// Class UDKBase.UDKDataStore_GameSearchBase
// 0x0008 (0x00D8 - 0x00E0)
class UUDKDataStore_GameSearchBase : public UUIDataStore_OnlineGameSearch
{
public:
	class UUDKUIDataProvider_ServerDetails*            ServerDetailsProvider;                         // 0x00D8 (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKDataStore_GameSearchBase");
		}

		return uClassPointer;
	};

	bool HasExistingSearchResults();
	bool HasOutstandingQueries(bool optionalBRestrictCheckToSelf);
	void OnSearchComplete(bool bWasSuccessful);
	bool eventSubmitGameSearch(uint8_t ControllerIndex, bool optionalBInvalidateExistingSearchResults);
	void eventInit();
};

// Class UDKBase.UDKEmitCameraEffect
// 0x000C (0x026C - 0x0278)
class AUDKEmitCameraEffect : public AEmitter
{
public:
	float                                              DistFromCamera;                                // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AUDKPlayerController*                        Cam;                                           // 0x0270 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKEmitCameraEffect");
		}

		return uClassPointer;
	};

	void UpdateLocation(float CamFOVDeg, struct FVector& outCamLoc, struct FRotator& outCamRot);
	void RegisterCamera(class AUDKPlayerController* inCam);
	void Destroyed();
	void eventPostBeginPlay();
};

// Class UDKBase.UDKEmitterPool
// 0x0010 (0x02B8 - 0x02C8)
class AUDKEmitterPool : public AEmitterPool
{
public:
	class TArray<struct FAttachedExplosionLight>       RelativeExplosionLights;                       // 0x02B8 (0x0010) [0x0000000000480000] (CPF_Component | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKEmitterPool");
		}

		return uClassPointer;
	};

	class UUDKExplosionLight* SpawnExplosionLight(class UClass* LightClass, const struct FVector& SpawnLocation, class AActor* optionalAttachToActor);
	void OnExplosionLightFinished(class UUDKExplosionLight* Light);
	class UParticleSystemComponent* SpawnEmitter(class UParticleSystem* EmitterTemplate, const struct FVector& SpawnLocation, const struct FRotator& optionalSpawnRotation, class AActor* optionalAttachToActor, class AActor* optionalInInstigator, int32_t optionalMaxDLEPooledReuses, bool optionalBInheritScaleFromBase);
};

// Class UDKBase.UDKExplosionLight
// 0x0030 (0x02D8 - 0x0308)
class UUDKExplosionLight : public UPointLightComponent
{
public:
	uint32_t                                           bCheckFrameRate : 1;                           // 0x02D8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInitialized : 1;                              // 0x02D8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HighDetailFrameTime;                           // 0x02DC (0x0004) [0x0000000000000000]               
	float                                              Lifetime;                                      // 0x02E0 (0x0004) [0x0000000000000000]               
	int32_t                                            TimeShiftIndex;                                // 0x02E4 (0x0004) [0x0000000000000000]               
	class TArray<struct FLightValues>                  TimeShift;                                     // 0x02E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLightFinished__Delegate;                   // 0x02F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKExplosionLight");
		}

		return uClassPointer;
	};

	void OnLightFinished(class UUDKExplosionLight* Light);
	void ResetLight();
};

// Class UDKBase.UDKForcedDirectionVolume
// 0x0030 (0x02D4 - 0x0304)
class AUDKForcedDirectionVolume : public APhysicsVolume
{
public:
	class UClass*                                      TypeToForce;                                   // 0x02D4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIgnoreHoverboards : 1;                        // 0x02DC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDenyExit : 1;                                 // 0x02DC (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bBlockPawns : 1;                               // 0x02DC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bBlockSpectators : 1;                          // 0x02DC (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	class UArrowComponent*                             Arrow;                                         // 0x02E0 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     ArrowDirection;                                // 0x02E8 (0x000C) [0x0000000000000000]               
	class TArray<class AUDKVehicle*>                   TouchingVehicles;                              // 0x02F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKForcedDirectionVolume");
		}

		return uClassPointer;
	};

	bool StopsProjectile(class AProjectile* P);
	void eventUnTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void eventActorEnteredVolume(class AActor* Other);
	void PostBeginPlay();
};

// Class UDKBase.UDKGameInteraction
// 0x0004 (0x036C - 0x0370)
class UUDKGameInteraction : public UUIInteraction
{
public:
	int32_t                                            BlockUIInputSemaphore;                         // 0x036C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKGameInteraction");
		}

		return uClassPointer;
	};

	void NotifyGameSessionEnded();
	void eventBlockUIInput(bool bBlock);
	void eventClearUIInputBlocks();
	bool ShouldProcessUIInput();
};

// Class UDKBase.UDKGameObjective
// 0x0039 (0x0360 - 0x0399)
class AUDKGameObjective : public ANavigationPoint
{
public:
	class TArray<class ANavigationPoint*>              ShootSpots;                                    // 0x0360 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bAllowOnlyShootable : 1;                       // 0x0370 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bUnderAttack : 1;                              // 0x0370 (0x0004) [0x0000000100000020] [0x00000002] (CPF_Net | CPF_RepNotify)
	struct FVector                                     HUDLocation;                                   // 0x0374 (0x000C) [0x0000000000000000]               
	class UTexture2D*                                  IconHudTexture;                                // 0x0380 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FTextureCoordinates                         IconCoords;                                    // 0x0388 (0x0010) [0x0000000000000000]               
	uint8_t                                            DefenderTeamIndex;                             // 0x0398 (0x0001) [0x0000000100000020] (CPF_Net | CPF_RepNotify)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKGameObjective");
		}

		return uClassPointer;
	};

	uint8_t GetTeamNum();
	void DrawIcon(class UCanvas* Canvas, const struct FVector& IconLocation, float IconWidth, float IconAlpha, class AUDKPlayerController* PlayerOwner, const struct FLinearColor& DrawColor);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	void TriggerFlagEvent(const class FName& EventType, class AController* EventInstigator);
	bool BotNearObjective(class AAIController* C);
	class AActor* eventGetBestViewTarget();
	void ObjectiveChanged();
};

// Class UDKBase.UDKGameSettingsCommon
// 0x0000 (0x00F4 - 0x00F4)
class UUDKGameSettingsCommon : public UOnlineGameSettings
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKGameSettingsCommon");
		}

		return uClassPointer;
	};

	static class FString BlobToString(class FString& outInBlob);
	static bool StringToBlob(class FString& outInString, class FString& outOutBlob);
};

// Class UDKBase.UDKGameViewportClient
// 0x0018 (0x01A8 - 0x01C0)
class UUDKGameViewportClient : public UGameViewportClient
{
public:
	class FString                                      HintLocFileName;                               // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bDimScreen : 1;                                // 0x01B8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FColor                                      DimColor;                                      // 0x01BC (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKGameViewportClient");
		}

		return uClassPointer;
	};

	class FString LoadRandomLocalizedHintMessage(const class FString& Category1Name, const class FString& Category2Name);
};

// Class UDKBase.UDKHUD
// 0x0054 (0x0684 - 0x06D8)
class AUDKHUD : public AMobileHUD
{
public:
	class UFont*                                       GlowFonts[2];                                  // 0x0684 (0x0010) [0x0000000000000000]               
	float                                              PulseDuration;                                 // 0x0694 (0x0004) [0x0000000000000000]               
	float                                              PulseSplit;                                    // 0x0698 (0x0004) [0x0000000000000000]               
	float                                              PulseMultiplier;                               // 0x069C (0x0004) [0x0000000000000000]               
	struct FFontRenderInfo                             TextRenderInfo;                                // 0x06A0 (0x0028) [0x0000000000000000]               
	class UFont*                                       ConsoleIconFont;                               // 0x06C8 (0x0008) [0x0000000000000000]               
	class UFont*                                       BindTextFont;                                  // 0x06D0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKHUD");
		}

		return uClassPointer;
	};

	static void TranslateBindToFont(const class FString& InBindStr, class UFont*& outDrawFont, class FString& outOutBindStr);
	void DrawGlowText(const class FString& Text, float X, float Y, float optionalMaxHeightInPixels, float optionalPulseTime, bool optionalBRightJustified);
};

// Class UDKBase.UDKJumpPad
// 0x002C (0x0360 - 0x038C)
class AUDKJumpPad : public ANavigationPoint
{
public:
	struct FVector                                     JumpVelocity;                                  // 0x0360 (0x000C) [0x0000000000000000]               
	class APathNode*                                   JumpTarget;                                    // 0x036C (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   JumpSound;                                     // 0x0374 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              JumpTime;                                      // 0x037C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              JumpAirControl;                                // 0x0380 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UAudioComponent*                             JumpAmbientSound;                              // 0x0384 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKJumpPad");
		}

		return uClassPointer;
	};

	bool eventSuggestMovePreparation(class APawn* Other);
	void eventPostTouch(class AActor* Other);
	void eventTouch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal);
};

// Class UDKBase.UDKKActorBreakable
// 0x004C (0x0368 - 0x03B4)
class AUDKKActorBreakable : public AKActor
{
public:
	uint32_t                                           bHasHealth : 1;                                // 0x0368 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDamageOnEncroachment : 1;                     // 0x0368 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bResetDOEWhenAsleep : 1;                       // 0x0368 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bTakeDamageOnEncroachment : 1;                 // 0x0368 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bBreakWhenCausingDamage : 1;                   // 0x0368 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bBroken : 1;                                   // 0x0368 (0x0004) [0x0000000100000000] [0x00000020] (CPF_RepNotify)
	int32_t                                            Health;                                        // 0x036C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EncroachDamage_Other;                          // 0x0370 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            EncroachDamage_Self;                           // 0x0374 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      DmgTypeClass;                                  // 0x0378 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DOEResetThreshold;                             // 0x0380 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             BrokenTemplate;                                // 0x0384 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 InstigatorController;                          // 0x038C (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnBreakApart__Delegate;                      // 0x0394 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEncroach__Delegate;                        // 0x03A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKKActorBreakable");
		}

		return uClassPointer;
	};

	void eventReplicatedEvent(const class FName& VarName);
	void BreakApart();
	bool EncroachingOn(class AActor* Other);
	void eventTakeDamage(int32_t Damage, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& optionalHitInfo, class AActor* optionalDamageCauser);
	bool OnEncroach(class AActor* Other);
	void OnBreakApart();
};

// Class UDKBase.UDKMapInfo
// 0x0004 (0x0068 - 0x006C)
class UUDKMapInfo : public UMapInfo
{
public:
	float                                              VisibilityModifier;                            // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKMapInfo");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKMapMusicInfo
// 0x00F4 (0x0068 - 0x015C)
class UUDKMapMusicInfo : public UObject
{
public:
	struct FMusicForAMap                               MapMusic;                                      // 0x0068 (0x007C) [0x0000000000000001] (CPF_Edit)    
	struct FStingersForAMap                            MapStingers;                                   // 0x00E4 (0x0078) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKMapMusicInfo");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKOnlineEventTracker
// 0x0000 (0x0068 - 0x0068)
class UUDKOnlineEventTracker : public UOnlineEventTracker
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKOnlineEventTracker");
		}

		return uClassPointer;
	};

	bool eventRaiseEvent(const class FString& EventName, const class TArray<class FString>& EventParams);
	void eventShutDown();
	void eventInit();
};

// Class UDKBase.UDKParticleSystemComponent
// 0x0014 (0x03D0 - 0x03E4)
class UUDKParticleSystemComponent : public UParticleSystemComponent
{
public:
	float                                              FOV;                                           // 0x03D0 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bHasSavedScale3D : 1;                          // 0x03D4 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FVector                                     SavedScale3D;                                  // 0x03D8 (0x000C) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKParticleSystemComponent");
		}

		return uClassPointer;
	};

	void SetFOV(float NewFOV);
};

// Class UDKBase.UDKPawn
// 0x0228 (0x0554 - 0x077C)
class AUDKPawn : public AGamePawn
{
public:
	uint32_t                                           bReadyToDoubleJump : 1;                        // 0x0554 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRequiresDoubleJump : 1;                       // 0x0554 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanDoubleJump : 1;                            // 0x0554 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNoJumpAdjust : 1;                             // 0x0554 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bIsHoverboardAnimPawn : 1;                     // 0x0554 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bFeigningDeath : 1;                            // 0x0554 (0x0004) [0x0000000100000020] [0x00000020] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bNotifyStopFalling : 1;                        // 0x0554 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bIsInvisible : 1;                              // 0x0554 (0x0004) [0x0000000100000020] [0x00000080] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bSmoothNetUpdates : 1;                         // 0x0554 (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bPuttingDownWeapon : 1;                        // 0x0554 (0x0004) [0x0000000100000020] [0x00000200] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bPlayingFeignDeathRecovery : 1;                // 0x0554 (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bCanPlayFallingImpacts : 1;                    // 0x0554 (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bEnableFootPlacement : 1;                      // 0x0554 (0x0004) [0x0000000000000000] [0x00001000] 
	uint32_t                                           bPostRenderOtherTeam : 1;                      // 0x0554 (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bBlendOutTakeHitPhysics : 1;                   // 0x0554 (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bUpdateEyeheight : 1;                          // 0x0554 (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bTearOffGibs : 1;                              // 0x0554 (0x0004) [0x0000000000000020] [0x00010000] (CPF_Net)
	float                                              MaxDoubleJumpHeight;                           // 0x0558 (0x0004) [0x0000000000000000]               
	int32_t                                            MultiJumpRemaining;                            // 0x055C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxMultiJump;                                  // 0x0560 (0x0004) [0x0000000000000000]               
	int32_t                                            MultiJumpBoost;                                // 0x0564 (0x0004) [0x0000000000000000]               
	float                                              CustomGravityScaling;                          // 0x0568 (0x0004) [0x0000000000000020] (CPF_Net)     
	struct FPlayEmoteInfo                              EmoteRepInfo;                                  // 0x056C (0x0010) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	float                                              LastEmoteTime;                                 // 0x057C (0x0004) [0x0000000000000000]               
	float                                              MinTimeBetweenEmotes;                          // 0x0580 (0x0004) [0x0000000000000000]               
	uint8_t                                            BigTeleportCount;                              // 0x0584 (0x0001) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	uint8_t                                            WeaponOverlayFlags;                            // 0x0585 (0x0001) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	uint8_t                                            UnknownData00[0x2];                              // 0x0586 (0x0002) MISSED OFFSET
	struct FUTTakeHitInfo                              LastTakeHitInfo;                               // 0x0588 (0x002C) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	float                                              LastTakeHitTimeout;                            // 0x05B4 (0x0004) [0x0000000000000000]               
	float                                              FireRateMultiplier;                            // 0x05B8 (0x0004) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	float                                              HeadScale;                                     // 0x05BC (0x0004) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	float                                              MaxSmoothNetUpdateDist;                        // 0x05C0 (0x0004) [0x0000000000000000]               
	float                                              NoSmoothNetUpdateDist;                         // 0x05C4 (0x0004) [0x0000000000000000]               
	float                                              SmoothNetUpdateTime;                           // 0x05C8 (0x0004) [0x0000000000000000]               
	struct FVector                                     MeshTranslationOffset;                         // 0x05CC (0x000C) [0x0000000000000000]               
	float                                              OldZ;                                          // 0x05D8 (0x0004) [0x0000000000000000]               
	class UAudioComponent*                             PawnAmbientSound;                              // 0x05DC (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USoundCue*                                   PawnAmbientSoundCue;                           // 0x05E4 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	struct FDrivenWeaponPawnInfo                       DrivenWeaponPawn;                              // 0x05EC (0x0014) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class UAudioComponent*                             WeaponAmbientSound;                            // 0x0600 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USoundCue*                                   WeaponAmbientSoundCue;                         // 0x0608 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class UMaterial*                                   ReplicatedBodyMaterial;                        // 0x0610 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class TArray<class UMaterialInstanceConstant*>     BodyMaterialInstances;                         // 0x0618 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMaterialInterface*                          OverlayMaterialInstance;                       // 0x0628 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class USkelControlSingleBone*                      RootRotControl;                                // 0x0630 (0x0008) [0x0000000000000000]               
	class UAnimNodeAimOffset*                          AimNode;                                       // 0x0638 (0x0008) [0x0000000000000000]               
	class UGameSkelCtrl_Recoil*                        GunRecoilNode;                                 // 0x0640 (0x0008) [0x0000000000000000]               
	class UGameSkelCtrl_Recoil*                        LeftRecoilNode;                                // 0x0648 (0x0008) [0x0000000000000000]               
	class UGameSkelCtrl_Recoil*                        RightRecoilNode;                               // 0x0650 (0x0008) [0x0000000000000000]               
	class TArray<class AUDKBot*>                       Trackers;                                      // 0x0658 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BodyMatFadeDuration;                           // 0x0668 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                CurrentBodyMatColor;                           // 0x066C (0x0010) [0x0000000000000000]               
	float                                              RemainingBodyMatDuration;                      // 0x067C (0x0004) [0x0000000000000000]               
	float                                              ClientBodyMatDuration;                         // 0x0680 (0x0004) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	struct FLinearColor                                BodyMatColor;                                  // 0x0684 (0x0010) [0x0000000000000000]               
	struct FRotator                                    CompressedBodyMatColor;                        // 0x0694 (0x000C) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	float                                              StartFallImpactTime;                           // 0x06A0 (0x0004) [0x0000000000000000]               
	class FName                                        TorsoBoneName;                                 // 0x06A4 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   FallImpactSound;                               // 0x06AC (0x0008) [0x0000000000000000]               
	float                                              FallSpeedThreshold;                            // 0x06B4 (0x0004) [0x0000000000000000]               
	class UStaticMeshComponent*                        BlobShadow;                                    // 0x06B8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      OverlayMesh;                                   // 0x06C0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        LeftFootBone;                                  // 0x06C8 (0x0008) [0x0000000000000000]               
	class FName                                        RightFootBone;                                 // 0x06D0 (0x0008) [0x0000000000000000]               
	class FName                                        LeftFootControlName;                           // 0x06D8 (0x0008) [0x0000000000000000]               
	class FName                                        RightFootControlName;                          // 0x06E0 (0x0008) [0x0000000000000000]               
	float                                              BaseTranslationOffset;                         // 0x06E8 (0x0004) [0x0000000000000000]               
	float                                              CrouchTranslationOffset;                       // 0x06EC (0x0004) [0x0000000000000000]               
	float                                              OldLocationZ;                                  // 0x06F0 (0x0004) [0x0000000000000000]               
	float                                              ZSmoothingRate;                                // 0x06F4 (0x0004) [0x0000000000000002] (CPF_Const)   
	float                                              MaxFootPlacementDistSquared;                   // 0x06F8 (0x0004) [0x0000000000000000]               
	class USkelControlFootPlacement*                   LeftLegControl;                                // 0x06FC (0x0008) [0x0000000000000000]               
	class USkelControlFootPlacement*                   RightLegControl;                               // 0x0704 (0x0008) [0x0000000000000000]               
	class FName                                        DamageParameterName;                           // 0x070C (0x0008) [0x0000000000000000]               
	class FName                                        SaturationParameterName;                       // 0x0714 (0x0008) [0x0000000000000000]               
	float                                              LastPostRenderTraceTime;                       // 0x071C (0x0004) [0x0000000000000000]               
	float                                              TeamBeaconMaxDist;                             // 0x0720 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartedFallingTime;                            // 0x0724 (0x0004) [0x0000000000000000]               
	float                                              SlopeBoostFriction;                            // 0x0728 (0x0004) [0x0000000000000000]               
	class UAnimNodeAimOffset*                          FlyingDirOffset;                               // 0x072C (0x0008) [0x0000000000000000]               
	int32_t                                            MaxLeanRoll;                                   // 0x0734 (0x0004) [0x0000000000000000]               
	float                                              FeignDeathPhysicsBlendOutSpeed;                // 0x0738 (0x0004) [0x0000000000000000]               
	float                                              SwimmingZOffset;                               // 0x073C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SwimmingZOffsetSpeed;                          // 0x0740 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CrouchMeshZOffset;                             // 0x0744 (0x0004) [0x0000000000000000]               
	float                                              TakeHitPhysicsBlendOutSpeed;                   // 0x0748 (0x0004) [0x0000000000000000]               
	class UUDKSkeletalMeshComponent*                   ArmsMesh[2];                                   // 0x074C (0x0010) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            RootYaw;                                       // 0x075C (0x0004) [0x0000000000000000]               
	float                                              RootYawSpeed;                                  // 0x0760 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxYawAim;                                     // 0x0764 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector2D                                   CurrentSkelAim;                                // 0x0768 (0x0008) [0x0000000000000000]               
	struct FVector                                     HUDLocation;                                   // 0x0770 (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKPawn");
		}

		return uClassPointer;
	};

	void eventStuckFalling();
	void eventUpdateEyeHeight(float DeltaTime);
	void eventTakeHitBlendedOut();
	void eventStartFeignDeathRecoveryAnim();
	void SetHandIKEnabled(bool bEnabled);
	void SetWeaponAttachmentVisibility(bool bAttachmentVisible);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	bool SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool optionalBRequireFallLanding, struct FVector& outJumpVelocity);
	void eventStartCrouch(float HeightAdjust);
	void eventEndCrouch(float HeightAdjust);
	void eventStoppedFalling();
	void eventHoldGameObject(class AUDKCarriedObject* UDKGameObj);
	bool IsInvisible();
	struct FVector GetTargetLocation(class AActor* optionalRequestedBy, bool optionalBRequestAlternateLoc);
	void EnsureOverlayComponentLast();
	void RestorePreRagdollCollisionComponent();
	void GetBoundingCylinder(float& outCollisionRadius, float& outCollisionHeight);
};

// Class UDKBase.UDKPickupFactory
// 0x00C0 (0x038C - 0x044C)
class AUDKPickupFactory : public APickupFactory
{
public:
	uint32_t                                           bIsRespawning : 1;                             // 0x038C (0x0004) [0x0000000100000020] [0x00000001] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bPulseBase : 1;                                // 0x038C (0x0004) [0x0000000100000020] [0x00000002] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bIsDisabled : 1;                               // 0x038C (0x0004) [0x0000000100000020] [0x00000004] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bFloatingPickup : 1;                           // 0x038C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bRandomStart : 1;                              // 0x038C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bRotatingPickup : 1;                           // 0x038C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bUpdatingPickup : 1;                           // 0x038C (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bDoVisibilityFadeIn : 1;                       // 0x038C (0x0004) [0x0000000000000000] [0x00000080] 
	class UStaticMeshComponent*                        BaseMesh;                                      // 0x0390 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	class UMaterialInstanceConstant*                   BaseMaterialInstance;                          // 0x0398 (0x0008) [0x0000000000000000]               
	struct FLinearColor                                BaseBrightEmissive;                            // 0x03A0 (0x0010) [0x0000000000000000]               
	struct FLinearColor                                BaseDimEmissive;                               // 0x03B0 (0x0010) [0x0000000000000000]               
	float                                              BasePulseRate;                                 // 0x03C0 (0x0004) [0x0000000000000000]               
	float                                              BasePulseTime;                                 // 0x03C4 (0x0004) [0x0000000000000000]               
	float                                              PulseThreshold;                                // 0x03C8 (0x0004) [0x0000000000000000]               
	struct FLinearColor                                BaseTargetEmissive;                            // 0x03CC (0x0010) [0x0000000000000000]               
	struct FLinearColor                                BaseEmissive;                                  // 0x03DC (0x0010) [0x0000000000000000]               
	class FName                                        BaseMaterialParamName;                         // 0x03EC (0x0008) [0x0000000000000000]               
	float                                              BobTimer;                                      // 0x03F4 (0x0004) [0x0000000000000000]               
	float                                              BobOffset;                                     // 0x03F8 (0x0004) [0x0000000000000000]               
	float                                              BobSpeed;                                      // 0x03FC (0x0004) [0x0000000000000000]               
	float                                              BobBaseOffset;                                 // 0x0400 (0x0004) [0x0000000000000000]               
	float                                              YawRotationRate;                               // 0x0404 (0x0004) [0x0000000000000000]               
	struct FVector                                     PivotTranslation;                              // 0x0408 (0x000C) [0x0000000000000000]               
	class FName                                        VisibilityParamName;                           // 0x0414 (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MIC_Visibility;                                // 0x041C (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   MIC_VisibilitySecondMaterial;                  // 0x0424 (0x0008) [0x0000000000000000]               
	class UParticleSystemComponent*                    Glow;                                          // 0x042C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class FName                                        GlowEmissiveParam;                             // 0x0434 (0x0008) [0x0000000000000000]               
	class UPrimitiveComponent*                         Spinner;                                       // 0x043C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UUDKParticleSystemComponent*                 SpinningParticleEffects;                       // 0x0444 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKPickupFactory");
		}

		return uClassPointer;
	};

	void SetPickupHidden();
	void SetPickupVisible();
};

// Class UDKBase.UDKPlayerController
// 0x04BC (0x077C - 0x0C38)
class AUDKPlayerController : public AGamePlayerController
{
public:
	class UCameraAnimInst*                             CameraAnimPlayer;                              // 0x077C (0x0008) [0x0000000000000000]               
	class AUDKEmitCameraEffect*                        CameraEffect;                                  // 0x0784 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDedicatedServerSpectator : 1;                 // 0x078C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAcuteHearing : 1;                             // 0x078C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bConsolePlayer : 1;                            // 0x078C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bPulseTeamColor : 1;                           // 0x078C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bUsePhysicsRotation : 1;                       // 0x078C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     ShakeOffset;                                   // 0x0790 (0x000C) [0x0000000000000000]               
	struct FRotator                                    ShakeRot;                                      // 0x079C (0x000C) [0x0000000000000000]               
	struct FPostProcessSettings                        CamOverridePostProcess;                        // 0x07A8 (0x023C) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPostProcessSettings                        PostProcessModifier;                           // 0x09E4 (0x023C) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class AActor*>                        PotentiallyHiddenActors;                       // 0x0C20 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              VehicleCheckRadiusScaling;                     // 0x0C30 (0x0004) [0x0000000000000000]               
	float                                              PulseTimer;                                    // 0x0C34 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKPlayerController");
		}

		return uClassPointer;
	};

	class APawn* GetTargetAdhesionFrictionTarget(float MaxDistance, struct FVector& outCamLoc, struct FRotator& outCamRot);
	void ClearCameraEffect();
	void ClientSpawnCameraEffect(class UClass* CameraEffectClass);
	void RemoveCameraEffect(class AUDKEmitCameraEffect* CamEmitter);
	bool IsMouseAvailable();
	bool IsKeyboardAvailable();
	void SetHardwarePhysicsEnabled(bool bEnabled);
	void SetGamma(float GammaValue);
};

// Class UDKBase.UDKPlayerInput
// 0x0000 (0x0578 - 0x0578)
class UUDKPlayerInput : public UMobilePlayerInput
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKPlayerInput");
		}

		return uClassPointer;
	};

	class FString GetUDKBindNameFromCommand(const class FString& BindCommand);
};

// Class UDKBase.UDKProfileSettings
// 0x0000 (0x00CC - 0x00CC)
class UUDKProfileSettings : public UOnlineProfileSettings
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKProfileSettings");
		}

		return uClassPointer;
	};

	static void ResetKeysToDefault(class ULocalPlayer* optionalInPlayerOwner);
	void ResetToDefault(int32_t ProfileId);
};

// Class UDKBase.UDKProjectile
// 0x0044 (0x02A4 - 0x02E8)
class AUDKProjectile : public AProjectile
{
public:
	uint32_t                                           bWideCheck : 1;                                // 0x02A4 (0x0004) [0x0000000000000020] [0x00000001] (CPF_Net)
	uint32_t                                           bShuttingDown : 1;                             // 0x02A4 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCheckProjectileLight : 1;                     // 0x02A4 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bNotBlockedByShield : 1;                       // 0x02A4 (0x0004) [0x0000000000000000] [0x00000008] 
	float                                              CheckRadius;                                   // 0x02A8 (0x0004) [0x0000000000000000]               
	float                                              AccelRate;                                     // 0x02AC (0x0004) [0x0000000000000000]               
	class AActor*                                      SeekTarget;                                    // 0x02B0 (0x0008) [0x0000000000000020] (CPF_Net)     
	float                                              BaseTrackingStrength;                          // 0x02B8 (0x0004) [0x0000000000000000]               
	float                                              HomingTrackingStrength;                        // 0x02BC (0x0004) [0x0000000000000000]               
	struct FVector                                     InitialDir;                                    // 0x02C0 (0x000C) [0x0000000000000020] (CPF_Net)     
	float                                              LastLockWarningTime;                           // 0x02CC (0x0004) [0x0000000000000000]               
	float                                              LockWarningInterval;                           // 0x02D0 (0x0004) [0x0000000000000000]               
	float                                              TerminalVelocity;                              // 0x02D4 (0x0004) [0x0000000000000000]               
	float                                              Buoyancy;                                      // 0x02D8 (0x0004) [0x0000000000000000]               
	float                                              CustomGravityScaling;                          // 0x02DC (0x0004) [0x0000000000000000]               
	class AVehicle*                                    InstigatorBaseVehicle;                         // 0x02E0 (0x0008) [0x0000000000000020] (CPF_Net)     

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKProjectile");
		}

		return uClassPointer;
	};

	void eventCreateProjectileLight();
	float GetTerminalVelocity();
};

// Class UDKBase.UDKScout
// 0x0018 (0x0630 - 0x0648)
class AUDKScout : public AScout
{
public:
	uint32_t                                           bRequiresDoubleJump : 1;                       // 0x0630 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              MaxDoubleJumpHeight;                           // 0x0634 (0x0004) [0x0000000000000000]               
	class UClass*                                      PrototypePawnClass;                            // 0x0638 (0x0008) [0x0000000000000000]               
	class FName                                        SizePersonFindName;                            // 0x0640 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKScout");
		}

		return uClassPointer;
	};

	bool SuggestJumpVelocity(const struct FVector& Destination, const struct FVector& Start, bool optionalBRequireFallLanding, struct FVector& outJumpVelocity);
};

// Class UDKBase.UDKScriptedNavigationPoint
// 0x0004 (0x0360 - 0x0364)
class AUDKScriptedNavigationPoint : public ANavigationPoint
{
public:
	uint32_t                                           bScriptSpecifyEndAnchor : 1;                   // 0x0360 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bScriptNotifyAnchorFindingResult : 1;          // 0x0360 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bAnchorMustBeReachable : 1;                    // 0x0360 (0x0004) [0x0000000000000000] [0x00000004] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKScriptedNavigationPoint");
		}

		return uClassPointer;
	};

	void eventNotifyAnchorFindingResult(class ANavigationPoint* EndAnchor, class APawn* RouteFinder);
	class ANavigationPoint* eventSpecifyEndAnchor(class APawn* RouteFinder);
};

// Class UDKBase.UDKSkeletalMeshComponent
// 0x000C (0x0824 - 0x0830)
class UUDKSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	float                                              FOV;                                           // 0x0824 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	uint32_t                                           bForceLoadTextures : 1;                        // 0x0828 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ClearStreamingTime;                            // 0x082C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkeletalMeshComponent");
		}

		return uClassPointer;
	};

	void SetFOV(float NewFOV);
	void eventPreloadTextures(bool bForcePreload, float ClearTime);
};

// Class UDKBase.UDKTeamOwnedInfo
// 0x0008 (0x0248 - 0x0250)
class AUDKTeamOwnedInfo : public AReplicationInfo
{
public:
	class ATeamInfo*                                   Team;                                          // 0x0248 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKTeamOwnedInfo");
		}

		return uClassPointer;
	};

	uint8_t GetTeamNum();
};

// Class UDKBase.UDKSquadAI
// 0x0050 (0x0250 - 0x02A0)
class AUDKSquadAI : public AUDKTeamOwnedInfo
{
public:
	class AUDKGameObjective*                           SquadObjective;                                // 0x0250 (0x0008) [0x0000000000000020] (CPF_Net)     
	class ANavigationPoint*                            RouteObjective;                                // 0x0258 (0x0008) [0x0000000000000000]               
	class TArray<class ANavigationPoint*>              ObjectiveRouteCache;                           // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class ANavigationPoint*>              PreviousObjectiveRouteCache;                   // 0x0270 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AUDKBot*                                     PendingSquadRouteMaker;                        // 0x0280 (0x0008) [0x0000000000000000]               
	int32_t                                            SquadRouteIteration;                           // 0x0288 (0x0004) [0x0000000000000000]               
	class TArray<struct FAlternateRoute>               SquadRoutes;                                   // 0x028C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxSquadRoutes;                                // 0x029C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSquadAI");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKTeamPlayerStart
// 0x0014 (0x0370 - 0x0384)
class AUDKTeamPlayerStart : public APlayerStart
{
public:
	uint8_t                                            TeamNumber;                                    // 0x0370 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x3];                              // 0x0371 (0x0003) MISSED OFFSET
	class TArray<class UTexture2D*>                    TeamSprites;                                   // 0x0374 (0x0010) [0x0000000800400000] (CPF_NeedCtorLink | CPF_EditorOnly)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKTeamPlayerStart");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKTeleporterBase
// 0x0040 (0x038C - 0x03CC)
class AUDKTeleporterBase : public ATeleporter
{
public:
	class USceneCaptureComponent*                      PortalCaptureComponent;                        // 0x038C (0x0008) [0x00000000040A0009] (CPF_Edit | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	class UTextureRenderTarget2D*                      TextureTarget;                                 // 0x0394 (0x0008) [0x0000000000000000]               
	int32_t                                            TextureResolutionX;                            // 0x039C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            TextureResolutionY;                            // 0x03A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      PortalViewTarget;                              // 0x03A4 (0x0008) [0x0000000000000000]               
	class UMaterialInterface*                          PortalMaterial;                                // 0x03AC (0x0008) [0x0000000000000000]               
	class UMaterialInstanceConstant*                   PortalMaterialInstance;                        // 0x03B4 (0x0008) [0x0000000000000000]               
	class FName                                        PortalTextureParameter;                        // 0x03BC (0x0008) [0x0000000000000000]               
	class USoundCue*                                   TeleportingSound;                              // 0x03C4 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKTeleporterBase");
		}

		return uClassPointer;
	};

	bool eventAccept(class AActor* Incoming, class AActor* Source);
	void InitializePortalEffect(class AActor* Dest);
	void eventPostBeginPlay();
};

// Class UDKBase.UDKTrajectoryReachSpec
// 0x0000 (0x00D0 - 0x00D0)
class UUDKTrajectoryReachSpec : public UAdvancedReachSpec
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKTrajectoryReachSpec");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKJumpPadReachSpec
// 0x0000 (0x00D0 - 0x00D0)
class UUDKJumpPadReachSpec : public UUDKTrajectoryReachSpec
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKJumpPadReachSpec");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataProvider_SearchResult
// 0x0030 (0x00A4 - 0x00D4)
class UUDKUIDataProvider_SearchResult : public UUIDataProvider_Settings
{
public:
	class FName                                        PlayerRatioTag;                                // 0x00A4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FName                                        GameModeFriendlyNameTag;                       // 0x00AC (0x0008) [0x0000000000000002] (CPF_Const)   
	class FName                                        ServerFlagsTag;                                // 0x00B4 (0x0008) [0x0000000000000002] (CPF_Const)   
	class FName                                        MapNameTag;                                    // 0x00BC (0x0008) [0x0000000000000002] (CPF_Const)   
	class FString                                      IconFontPathName;                              // 0x00C4 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_SearchResult");
		}

		return uClassPointer;
	};

	bool IsPrivateServer();
};

// Class UDKBase.UDKUIDataProvider_SimpleElementProvider
// 0x0000 (0x0078 - 0x0078)
class UUDKUIDataProvider_SimpleElementProvider : public UUIDataProvider
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_SimpleElementProvider");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataProvider_ServerDetails
// 0x0004 (0x0078 - 0x007C)
class UUDKUIDataProvider_ServerDetails : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	int32_t                                            SearchResultsRow;                              // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_ServerDetails");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataProvider_StringArray
// 0x0010 (0x0078 - 0x0088)
class UUDKUIDataProvider_StringArray : public UUDKUIDataProvider_SimpleElementProvider
{
public:
	class TArray<class FString>                        Strings;                                       // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_StringArray");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataStore_MenuItems
// 0x0038 (0x00F8 - 0x0130)
class UUDKUIDataStore_MenuItems : public UUIDataStore_GameResource
{
public:
	class UClass*                                      MapInfoDataProviderClass;                      // 0x00F8 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              EnabledMutators;                               // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              MapCycle;                                      // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<int32_t>                              WeaponPriority;                                // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataStore_MenuItems");
		}

		return uClassPointer;
	};

	void AddListElementProvidersKey(const class FName& KeyName, class UUDKUIResourceDataProvider* Provider);
	void RemoveListElementProvidersKey(const class FName& KeyName);
	void eventInitializeListElementProviders();
	bool GetProviderSet(const class FName& ProviderFieldName, class TArray<class UUDKUIResourceDataProvider*>& outOutProviders);
	static void GetAllResourceDataProviders(class UClass* ProviderClass, class TArray<class UUDKUIResourceDataProvider*>& outProviders);
};

// Class UDKBase.UDKUIDataStore_Options
// 0x0058 (0x00F8 - 0x0150)
class UUDKUIDataStore_Options : public UUIDataStore_GameResource
{
public:
	struct FMultiMap_Mirror                            OptionProviders;                               // 0x00F8 (0x0048) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<class UUDKUIResourceDataProvider*>    DynamicProviders;                              // 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataStore_Options");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataStore_StringAliasBindingMap
// 0x005C (0x00FC - 0x0158)
class UUDKUIDataStore_StringAliasBindingMap : public UUIDataStore_StringAliasMap
{
public:
	int32_t                                            FakePlatform;                                  // 0x00FC (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FMap_Mirror                                 CommandToBindNames;                            // 0x0100 (0x0048) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class TArray<struct FControllerMap>                ControllerMapArray;                            // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringAliasBindingMap");
		}

		return uClassPointer;
	};

	void ClearBoundKeyCache();
	void AddMappingToBoundKeyCache(const class FString& Command, const class FString& MappingStr, int32_t FieldIndex);
	bool FindMappingInBoundKeyCache(const class FString& Command, class FString& outMappingStr, int32_t& outFieldIndex);
	int32_t GetBoundStringWithFieldName(const class FString& FieldName, class FString& outMappedString, int32_t& outStartIndex, class FString& outBindString);
	int32_t GetStringWithFieldName(const class FString& FieldName, class FString& outMappedString);
};

// Class UDKBase.UDKUIDataStore_StringAliasMap
// 0x0004 (0x00FC - 0x0100)
class UUDKUIDataStore_StringAliasMap : public UUIDataStore_StringAliasMap
{
public:
	int32_t                                            FakePlatform;                                  // 0x00FC (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringAliasMap");
		}

		return uClassPointer;
	};

	int32_t GetStringWithFieldName(const class FString& FieldName, class FString& outMappedString);
};

// Class UDKBase.UDKUIDataStore_StringList
// 0x0010 (0x00A0 - 0x00B0)
class UUDKUIDataStore_StringList : public UUIDataStore_StringBase
{
public:
	class TArray<struct FEStringListData>              StringData;                                    // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataStore_StringList");
		}

		return uClassPointer;
	};

	int32_t eventNum(const class FName& FieldName);
	int32_t eventSetCurrentValueIndex(const class FName& FieldName, int32_t NewValueIndex);
	int32_t eventGetCurrentValueIndex(const class FName& FieldName);
	bool eventGetCurrentValue(const class FName& FieldName, class FString& outOut_Value);
	class FString GetStr(const class FName& FieldName, int32_t StrIndex);
	int32_t FindStr(const class FName& FieldName, const class FString& SearchString);
	void Empty(const class FName& FieldName, bool optionalBBatchOp);
	void RemoveStrByIndex(const class FName& FieldName, int32_t Index, int32_t optionalCount, bool optionalBBatchOp);
	void RemoveStr(const class FName& FieldName, const class FString& StringToRemove, bool optionalBBatchOp);
	int32_t GetFieldIndex(const class FName& FieldName);
	void eventRegistered(class ULocalPlayer* PlayerOwner);
};

// Class UDKBase.UDKUIResourceDataProvider
// 0x0024 (0x009C - 0x00C0)
class UUDKUIResourceDataProvider : public UUIResourceDataProvider
{
public:
	class FString                                      FriendlyName;                                  // 0x009C (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           bSearchAllInis : 1;                            // 0x00AC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bRemoveOn360 : 1;                              // 0x00AC (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bRemoveOnPC : 1;                               // 0x00AC (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           bRemoveOnPS3 : 1;                              // 0x00AC (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	class FString                                      IniName;                                       // 0x00B0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIResourceDataProvider");
		}

		return uClassPointer;
	};

	bool eventShouldBeFiltered();
};

// Class UDKBase.UDKUIDataProvider_MapInfo
// 0x0044 (0x00C0 - 0x0104)
class UUDKUIDataProvider_MapInfo : public UUDKUIResourceDataProvider
{
public:
	int32_t                                            MapId;                                         // 0x00C0 (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      MapName;                                       // 0x00C4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      NumPlayers;                                    // 0x00D4 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x00E4 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      PreviewImageMarkup;                            // 0x00F4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_MapInfo");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKUIDataProvider_MenuOption
// 0x0068 (0x00C0 - 0x0128)
class UUDKUIDataProvider_MenuOption : public UUDKUIResourceDataProvider
{
public:
	uint8_t                                            OptionType;                                    // 0x00C0 (0x0001) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData00[0x3];                              // 0x00C1 (0x0003) MISSED OFFSET
	class TArray<class FName>                          OptionSet;                                     // 0x00C4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DataStoreMarkup;                               // 0x00D4 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FName                                        RequiredGameMode;                              // 0x00E4 (0x0008) [0x0000000000004000] (CPF_Config)  
	class FString                                      CustomFriendlyName;                            // 0x00EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Description;                                   // 0x00FC (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           bEditableCombo : 1;                            // 0x010C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bNumericCombo : 1;                             // 0x010C (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint32_t                                           bKeyboardOrMouseOption : 1;                    // 0x010C (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           bOnlineOnly : 1;                               // 0x010C (0x0004) [0x0000000000004000] [0x00000008] (CPF_Config)
	uint32_t                                           bOfflineOnly : 1;                              // 0x010C (0x0004) [0x0000000000004000] [0x00000010] (CPF_Config)
	int32_t                                            EditBoxMaxLength;                              // 0x0110 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FUIRangeData                                RangeData;                                     // 0x0114 (0x0014) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKUIDataProvider_MenuOption");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKVehicleBase
// 0x0004 (0x0718 - 0x071C)
class AUDKVehicleBase : public ASVehicle
{
public:
	uint32_t                                           bShouldEject : 1;                              // 0x0718 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleBase");
		}

		return uClassPointer;
	};

	void HandleDeadVehicleDriver();
	void DriverLeft();
	void StopFiringWeapon();
	bool BotFire(bool bFinished);
	uint8_t ChooseFireMode();
	void DetachDriver(class APawn* P);
	void EjectDriver();
	class FName GetVehicleDrivingStatName();
	void ApplyWeaponEffects(int32_t OverlayFlags, int32_t optionalSeatIndex);
	bool DriverEnter(class APawn* P);
	void DrivingStatusChanged();
	bool NeedToTurn(const struct FVector& targ);
	float GetDamageScaling();
	void ServerChangeSeat(int32_t RequestedSeat);
	void ServerAdjacentSeat(int32_t Direction, class AController* C);
	void AdjacentSeat(int32_t Direction, class AController* C);
	void SwitchWeapon(uint8_t NewGroup);
	void eventHoldGameObject(class AUDKCarriedObject* GameObj);
};

// Class UDKBase.UDKVehicle
// 0x0208 (0x071C - 0x0924)
class AUDKVehicle : public AUDKVehicleBase
{
public:
	uint32_t                                           bEjectKilledBodies : 1;                        // 0x071C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHomingTarget : 1;                             // 0x071C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bFrontalCollision : 1;                         // 0x071C (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	uint32_t                                           bFrontalCollisionWithFixed : 1;                // 0x071C (0x0004) [0x0000000000000002] [0x00000008] (CPF_Const)
	uint32_t                                           bNoZDampingInAir : 1;                          // 0x071C (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bNoZDamping : 1;                               // 0x071C (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bIsDisabled : 1;                               // 0x071C (0x0004) [0x0000000100000020] [0x00000040] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bIsBurning : 1;                                // 0x071C (0x0004) [0x0000000000000000] [0x00000080] 
	uint32_t                                           bEjectPassengersWhenFlipped : 1;               // 0x071C (0x0004) [0x0000000000000000] [0x00000100] 
	uint32_t                                           bIsScraping : 1;                               // 0x071C (0x0004) [0x0000000000000000] [0x00000200] 
	uint32_t                                           bTakeWaterDamageWhileDriving : 1;              // 0x071C (0x0004) [0x0000000000000000] [0x00000400] 
	uint32_t                                           bIsInDestroyablePenetration : 1;               // 0x071C (0x0004) [0x0000000000000000] [0x00000800] 
	uint32_t                                           bDeadVehicle : 1;                              // 0x071C (0x0004) [0x0000000100000020] [0x00001000] (CPF_Net | CPF_RepNotify)
	uint32_t                                           bJostleWhileDriving : 1;                       // 0x071C (0x0004) [0x0000000000000000] [0x00002000] 
	uint32_t                                           bFloatWhenDriven : 1;                          // 0x071C (0x0004) [0x0000000000000000] [0x00004000] 
	uint32_t                                           bAllowedExit : 1;                              // 0x071C (0x0004) [0x0000000000000000] [0x00008000] 
	uint32_t                                           bUseAlternatePaths : 1;                        // 0x071C (0x0004) [0x0000000000000000] [0x00010000] 
	uint32_t                                           bShowLocked : 1;                               // 0x071C (0x0004) [0x0000000000000000] [0x00020000] 
	uint32_t                                           bTeamLocked : 1;                               // 0x071C (0x0004) [0x0000000000000020] [0x00040000] (CPF_Net)
	uint32_t                                           bDisableRepulsorsAtMaxFallSpeed : 1;           // 0x071C (0x0004) [0x0000000000000000] [0x00080000] 
	uint32_t                                           bTrickJumping : 1;                             // 0x071C (0x0004) [0x0000000000000020] [0x00100000] (CPF_Net)
	uint32_t                                           bGrab1 : 1;                                    // 0x071C (0x0004) [0x0000000000000020] [0x00200000] (CPF_Net)
	uint32_t                                           bGrab2 : 1;                                    // 0x071C (0x0004) [0x0000000000000020] [0x00400000] (CPF_Net)
	uint32_t                                           bForceSpinWarmup : 1;                          // 0x071C (0x0004) [0x0000000000000020] [0x00800000] (CPF_Net)
	float                                              RemainingBurn;                                 // 0x0720 (0x0004) [0x0000000000000000]               
	class TArray<struct FBurnOutDatum>                 BurnOutMaterialInstances;                      // 0x0724 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAudioComponent*                             TireAudioComp;                                 // 0x0734 (0x0008) [0x00000000040A000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)
	class TArray<struct FMaterialSoundEffect>          TireSoundList;                                 // 0x073C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FName                                        CurrentTireMaterial;                           // 0x074C (0x0008) [0x0000000000000000]               
	float                                              MaxWheelEffectDistSq;                          // 0x0754 (0x0004) [0x0000000000000000]               
	class TArray<struct FMaterialParticleEffect>       WheelParticleEffects;                          // 0x0758 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastCheckUpsideDownTime;                       // 0x0768 (0x0004) [0x0000000000000000]               
	float                                              FlippedCount;                                  // 0x076C (0x0004) [0x0000000000000000]               
	class UAudioComponent*                             ScrapeSound;                                   // 0x0770 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              FireDamageThreshold;                           // 0x0778 (0x0004) [0x0000000000000000]               
	float                                              FireDamagePerSec;                              // 0x077C (0x0004) [0x0000000000000000]               
	float                                              AccruedFireDamage;                             // 0x0780 (0x0004) [0x0000000000000000]               
	float                                              UpsideDownDamagePerSec;                        // 0x0784 (0x0004) [0x0000000000000000]               
	float                                              OccupiedUpsideDownDamagePerSec;                // 0x0788 (0x0004) [0x0000000000000000]               
	float                                              WaterDamage;                                   // 0x078C (0x0004) [0x0000000000000000]               
	float                                              AccumulatedWaterDamage;                        // 0x0790 (0x0004) [0x0000000000000000]               
	class TArray<int32_t>                              GroundEffectIndices;                           // 0x0794 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              MaxGroundEffectDist;                           // 0x07A4 (0x0004) [0x0000000000000000]               
	class FName                                        GroundEffectDistParameterName;                 // 0x07A8 (0x0008) [0x0000000000000000]               
	class UParticleSystem*                             WaterGroundEffect;                             // 0x07B0 (0x0008) [0x0000000000000000]               
	struct FRotator                                    WeaponRotation;                                // 0x07B8 (0x000C) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class TArray<struct FVehicleSeat>                  Seats;                                         // 0x07C4 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            SeatMask;                                      // 0x07D4 (0x0004) [0x0000000000000020] (CPF_Net)     
	class TArray<struct FVehicleAnim>                  VehicleAnims;                                  // 0x07D8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FVehicleSound>                 VehicleSounds;                                 // 0x07E8 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class FName                                        DrivingAnim;                                   // 0x07F8 (0x0008) [0x0000000000000000]               
	float                                              DestroyOnPenetrationThreshold;                 // 0x0800 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DestroyOnPenetrationDuration;                  // 0x0804 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TimeInDestroyablePenetration;                  // 0x0808 (0x0004) [0x0000000000000000]               
	float                                              LastDeathImpactTime;                           // 0x080C (0x0004) [0x0000000000000000]               
	class USoundCue*                                   LargeChunkImpactSound;                         // 0x0810 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   MediumChunkImpactSound;                        // 0x0818 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   SmallChunkImpactSound;                         // 0x0820 (0x0008) [0x0000000000000000]               
	float                                              CustomGravityScaling;                          // 0x0828 (0x0004) [0x0000000000000021] (CPF_Edit | CPF_Net)
	class TArray<struct FDamageParamScales>            DamageParamScaleLevels;                        // 0x082C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UUDKSkelControl_Damage*>        DamageSkelControls;                            // 0x083C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FFDamageMorphTargets>          DamageMorphTargets;                            // 0x084C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UMaterialInstanceConstant*                   DamageMaterialInstance[2];                     // 0x085C (0x0010) [0x0000000000000000]               
	struct FUTTakeHitInfo                              LastTakeHitInfo;                               // 0x086C (0x002C) [0x0000000000000020] (CPF_Net)     
	float                                              LastTakeHitTimeout;                            // 0x0898 (0x0004) [0x0000000000000000]               
	class TArray<struct FVehicleEffect>                VehicleEffects;                                // 0x089C (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	class AController*                                 KillerController;                              // 0x08AC (0x0008) [0x0000000000000020] (CPF_Net)     
	float                                              LastJumpOutCheck;                              // 0x08B4 (0x0004) [0x0000000000000000]               
	class FName                                        WaterEffectType;                               // 0x08B8 (0x0008) [0x0000000000000000]               
	class TArray<int32_t>                              ContrailEffectIndices;                         // 0x08C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FName                                        ContrailColorParameterName;                    // 0x08D0 (0x0008) [0x0000000000000000]               
	float                                              ObjectiveGetOutDist;                           // 0x08D8 (0x0004) [0x0000000000000000]               
	class TArray<class AUDKBot*>                       Trackers;                                      // 0x08DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Team;                                          // 0x08EC (0x0001) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	uint8_t                                            UnknownData00[0x3];                              // 0x08ED (0x0003) MISSED OFFSET
	float                                              ExtraReachDownThreshold;                       // 0x08F0 (0x0004) [0x0000000000000000]               
	float                                              ResetTime;                                     // 0x08F4 (0x0004) [0x0000000000000000]               
	float                                              MinRunOverSpeed;                               // 0x08F8 (0x0004) [0x0000000000000000]               
	float                                              LastRunOverWarningTime;                        // 0x08FC (0x0004) [0x0000000000000000]               
	float                                              MinRunOverWarningAim;                          // 0x0900 (0x0004) [0x0000000000000000]               
	float                                              TeamBeaconMaxDist;                             // 0x0904 (0x0004) [0x0000000000000000]               
	float                                              LastPostRenderTraceTime;                       // 0x0908 (0x0004) [0x0000000000000000]               
	float                                              ShowLockedMaxDist;                             // 0x090C (0x0004) [0x0000000000000000]               
	struct FVector                                     HUDLocation;                                   // 0x0910 (0x000C) [0x0000000000000000]               
	class UParticleSystemComponent*                    HoverboardDust;                                // 0x091C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicle");
		}

		return uClassPointer;
	};

	void eventUpdateHoverboardDustEffect(float DustHeight);
	void eventPostInitRigidBody(class UPrimitiveComponent* PrimComp);
	void eventTakeFireDamage();
	void eventCheckReset();
	void eventTakeWaterDamage();
	void eventRBPenetrationDestroy();
	void eventMorphTargetDestroyed(int32_t MorphNodeIndex);
	void ApplyMorphDamage(const struct FVector& HitLocation, int32_t Damage, const struct FVector& Momentum);
	void UpdateDamageMaterial();
	void InitDamageSkel();
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	bool InUseableRange(class AUDKPlayerController* PC, float Dist);
	void NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir);
	uint8_t GetTeamNum();
	void eventSelfDestruct(class AActor* ImpactedActor);
	bool CheckAutoDestruct(class ATeamInfo* InstigatorTeam, float CheckRadius);
	float GetMaxRiseForce();
	void eventJumpOutCheck();
	void eventReceivedHealthChange();
	void eventPlayTakeHitEffects();
	bool OnTouchForcedDirVolume(class AUDKForcedDirectionVolume* Vol);
	float GetGravityZ();
	void eventOnPropertyChange(const class FName& PropName);
	void eventLockOnWarning(class AUDKProjectile* IncomingMissile);
	class UClass* GetRanOverDamageType();
	bool IsSeatControllerReplicationViewer(int32_t SeatIndex);
	int32_t GetBarrelIndex(int32_t SeatIndex);
	struct FVector GetSeatPivotPoint(int32_t SeatIndex);
	void ForceWeaponRotation(int32_t SeatIndex, const struct FRotator& NewRotation);
	uint8_t SeatFiringMode(int32_t SeatIndex, uint8_t optionalNewFireMode, bool optionalBReadValue);
	uint8_t SeatFlashCount(int32_t SeatIndex, uint8_t optionalNewCount, bool optionalBReadValue);
	struct FVector SeatFlashLocation(int32_t SeatIndex, const struct FVector& optionalNewLoc, bool optionalBReadValue);
	struct FRotator SeatWeaponRotation(int32_t SeatIndex, const struct FRotator& optionalNewRot, bool optionalBReadValue);
};

// Class UDKBase.UDKWeaponPawn
// 0x0014 (0x071C - 0x0730)
class AUDKWeaponPawn : public AUDKVehicleBase
{
public:
	class AUDKVehicle*                                 MyVehicle;                                     // 0x071C (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	class AUDKWeapon*                                  MyVehicleWeapon;                               // 0x0724 (0x0008) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	int32_t                                            MySeatIndex;                                   // 0x072C (0x0004) [0x0000000100000020] (CPF_Net | CPF_RepNotify)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKWeaponPawn");
		}

		return uClassPointer;
	};

	struct FVector GetTargetLocation(class AActor* optionalRequestedBy, bool optionalBRequestAlternateLoc);
};

// Class UDKBase.UDKVehicleFactory
// 0x0038 (0x0360 - 0x0398)
class AUDKVehicleFactory : public ANavigationPoint
{
public:
	class FString                                      VehicleClassPath;                              // 0x0360 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bHasLockedVehicle : 1;                         // 0x0370 (0x0004) [0x0000000000000020] [0x00000001] (CPF_Net)
	uint32_t                                           bReplicateChildVehicle : 1;                    // 0x0370 (0x0004) [0x0000000000000000] [0x00000002] 
	class UClass*                                      VehicleClass;                                  // 0x0374 (0x0008) [0x0000000000000000]               
	class AUDKVehicle*                                 ChildVehicle;                                  // 0x037C (0x0008) [0x0000000000000020] (CPF_Net)     
	float                                              RespawnProgress;                               // 0x0384 (0x0004) [0x0000000000000000]               
	struct FVector                                     HUDLocation;                                   // 0x0388 (0x000C) [0x0000000000000000]               
	int32_t                                            TeamNum;                                       // 0x0394 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleFactory");
		}

		return uClassPointer;
	};

	uint8_t GetTeamNum();
	void SetHUDLocation(const struct FVector& NewHUDLocation);
	void eventSpawnVehicle();
};

// Class UDKBase.UDKVehicleMovementEffect
// 0x0020 (0x0248 - 0x0268)
class AUDKVehicleMovementEffect : public AActor
{
public:
	class UStaticMeshComponent*                        AirEffect;                                     // 0x0248 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              MinVelocityForAirEffect;                       // 0x0250 (0x0004) [0x0000000000000000]               
	float                                              MaxVelocityForAirEffect;                       // 0x0254 (0x0004) [0x0000000000000000]               
	class FName                                        AirEffectScalar;                               // 0x0258 (0x0008) [0x0000000000000000]               
	float                                              AirMaxDelta;                                   // 0x0260 (0x0004) [0x0000000000000000]               
	float                                              AirCurrentLevel;                               // 0x0264 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleMovementEffect");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKVehicleSimCar
// 0x0080 (0x0100 - 0x0180)
class UUDKVehicleSimCar : public USVehicleSimCar
{
public:
	struct FInterpCurveFloat                           TorqueVSpeedCurve;                             // 0x0100 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FInterpCurveFloat                           EngineRPMCurve;                                // 0x0114 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              LSDFactor;                                     // 0x0128 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ThrottleSpeed;                                 // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinRPM;                                        // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              MaxRPM;                                        // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              ActualThrottle;                                // 0x0138 (0x0004) [0x0000000000000000]               
	uint32_t                                           bForceThrottle : 1;                            // 0x013C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasForcedThrottle : 1;                        // 0x013C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bDriverlessBraking : 1;                        // 0x013C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bAutoHandbrake : 1;                            // 0x013C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              SteeringReductionFactor;                       // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SteeringReductionRampUpRate;                   // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentSteeringReduction;                      // 0x0148 (0x0004) [0x0000000000000000]               
	int32_t                                            NumWheelsForFullSteering;                      // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SteeringReductionSpeed;                        // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SteeringReductionMinSpeed;                     // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinHardTurnSpeed;                              // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HardTurnMotorTorque;                           // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              HandbrakeSpeed;                                // 0x0160 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ActualHandbrake;                               // 0x0164 (0x0004) [0x0000000000000000]               
	float                                              FrontalCollisionGripFactor;                    // 0x0168 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ConsoleHardTurnGripFactor;                     // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpeedBasedTurnDamping;                         // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AirControlTurnTorque;                          // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InAirUprightTorqueFactor;                      // 0x0178 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InAirUprightMaxTorque;                         // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleSimCar");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKVehicleSimChopper
// 0x00A4 (0x00C8 - 0x016C)
class UUDKVehicleSimChopper : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxReverseForce;                               // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LongDamping;                                   // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxStrafeForce;                                // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LatDamping;                                    // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DirectionChangeForce;                          // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRiseForce;                                  // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              UpDamping;                                     // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnTorqueFactor;                              // 0x00E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnTorqueMax;                                 // 0x00EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnDamping;                                   // 0x00F0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxYawRate;                                    // 0x00F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchTorqueFactor;                             // 0x00F8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchTorqueMax;                                // 0x00FC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchDamping;                                  // 0x0100 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollTorqueTurnFactor;                          // 0x0104 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollTorqueStrafeFactor;                        // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollTorqueMax;                                 // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollDamping;                                   // 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StopThreshold;                                 // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRandForce;                                  // 0x0118 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RandForceInterval;                             // 0x011C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bAllowZThrust : 1;                             // 0x0120 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bFullThrustOnDirectionChange : 1;              // 0x0120 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bShouldCutThrustMaxOnImpact : 1;               // 0x0120 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bRecentlyHit : 1;                              // 0x0120 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bStrafeAffectsTurnDamping : 1;                 // 0x0120 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bHeadingInitialized : 1;                       // 0x0120 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bStabilizeStops : 1;                           // 0x0120 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	float                                              StrafeTurnDamping;                             // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              TargetHeading;                                 // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              TargetPitch;                                   // 0x012C (0x0004) [0x0000000000000000]               
	float                                              PitchViewCorrelation;                          // 0x0130 (0x0004) [0x0000000000000000]               
	struct FVector                                     RandForce;                                     // 0x0134 (0x000C) [0x0000000000000000]               
	struct FVector                                     RandTorque;                                    // 0x0140 (0x000C) [0x0000000000000000]               
	float                                              AccumulatedTime;                               // 0x014C (0x0004) [0x0000000000000000]               
	float                                              StabilizationForceMultiplier;                  // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentStabilizationMultiplier;                // 0x0154 (0x0004) [0x0000000000000000]               
	struct FVector                                     OldVelocity;                                   // 0x0158 (0x000C) [0x0000000000000000]               
	float                                              StoppedBrakeTorque;                            // 0x0164 (0x0004) [0x0000000000000000]               
	float                                              HardLimitAirSpeedScale;                        // 0x0168 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleSimChopper");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKVehicleSimHover
// 0x0004 (0x016C - 0x0170)
class UUDKVehicleSimHover : public UUDKVehicleSimChopper
{
public:
	uint32_t                                           bDisableWheelsWhenOff : 1;                     // 0x016C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bRepulsorCollisionEnabled : 1;                 // 0x016C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bCanClimbSlopes : 1;                           // 0x016C (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bUnPoweredDriving : 1;                         // 0x016C (0x0004) [0x0000000000000000] [0x00000008] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleSimHover");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKVehicleSimHoverboard
// 0x0084 (0x00C8 - 0x014C)
class UUDKVehicleSimHoverboard : public USVehicleSimBase
{
public:
	float                                              MaxThrustForce;                                // 0x00C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxReverseForce;                               // 0x00CC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxReverseVelocity;                            // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LongDamping;                                   // 0x00D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxStrafeForce;                                // 0x00D8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LatDamping;                                    // 0x00DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRiseForce;                                  // 0x00E0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnTorqueFactor;                              // 0x00E4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpinTurnTorqueScale;                           // 0x00E8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxTurnTorque;                                 // 0x00EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           TurnDampingSpeedFunc;                          // 0x00F0 (0x0014) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bIsOverDeepWater : 1;                          // 0x0104 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInAJump : 1;                                  // 0x0104 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bLeftGround : 1;                               // 0x0104 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              StopThreshold;                                 // 0x0108 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WaterCheckLevel;                               // 0x010C (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   OverWaterSound;                                // 0x0110 (0x0008) [0x0000000000000000]               
	struct FVector                                     GroundNormal;                                  // 0x0118 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              TakeoffYaw;                                    // 0x0124 (0x0004) [0x0000000000000000]               
	float                                              TrickJumpWarmup;                               // 0x0128 (0x0004) [0x0000000000000000]               
	float                                              SpinHeadingOffset;                             // 0x012C (0x0004) [0x0000000000000000]               
	float                                              AutoSpin;                                      // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              SpinSpeed;                                     // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LandedCountdown;                               // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              CurrentSteerOffset;                            // 0x013C (0x0004) [0x0000000000000000]               
	float                                              HoverboardSlalomMaxAngle;                      // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SlalomSpeed;                                   // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentLookYaw;                                // 0x0148 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleSimHoverboard");
		}

		return uClassPointer;
	};

	void UpdateLeanConstraint(class URB_ConstraintInstance* LeanUprightConstraintInstance, const struct FVector& LeanY, const struct FVector& LeanZ);
	void InitWheels(class AUDKVehicle* Vehicle);
};

// Class UDKBase.UDKVehicleWheel
// 0x0010 (0x0158 - 0x0168)
class UUDKVehicleWheel : public USVehicleWheel
{
public:
	uint32_t                                           bUseMaterialSpecificEffects : 1;               // 0x0158 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisableWheelOnDeath : 1;                      // 0x0158 (0x0004) [0x0000000000000000] [0x00000002] 
	class UParticleSystemComponent*                    OldWheelParticleComp;                          // 0x015C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              EffectDesiredSpinDir;                          // 0x0164 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKVehicleWheel");
		}

		return uClassPointer;
	};

	void OldEffectFinished(class UParticleSystemComponent* PSystem);
	void eventSetParticleEffect(class AUDKVehicle* OwnerVehicle, class UParticleSystem* NewTemplate);
};

// Class UDKBase.UDKWeapon
// 0x0028 (0x038C - 0x03B4)
class AUDKWeapon : public AWeapon
{
public:
	class UMeshComponent*                              OverlayMesh;                                   // 0x038C (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint32_t                                           bLeadTarget : 1;                               // 0x0394 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bConsiderProjectileAcceleration : 1;           // 0x0394 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            AmmoCount;                                     // 0x0398 (0x0004) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	uint8_t                                            HitEnemy;                                      // 0x039C (0x0001) [0x0000000100000020] (CPF_Net | CPF_RepNotify)
	uint8_t                                            UnknownData00[0x3];                              // 0x039D (0x0003) MISSED OFFSET
	float                                              AimTraceRange;                                 // 0x03A0 (0x0004) [0x0000000000000000]               
	class TArray<class AActor*>                        AimingTraceIgnoredActors;                      // 0x03A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKWeapon");
		}

		return uClassPointer;
	};

	void eventSetPosition(class AUDKPawn* Holder);
	void EnsureWeaponOverlayComponentLast();
	uint8_t BestMode();
	bool eventIsAimCorrect();
	void PostBeginPlay();
};

// Class UDKBase.UDKWeaponShield
// 0x0004 (0x0248 - 0x024C)
class AUDKWeaponShield : public AActor
{
public:
	uint32_t                                           bIgnoreFlaggedProjectiles : 1;                 // 0x0248 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKWeaponShield");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendBase
// 0x0018 (0x0164 - 0x017C)
class UUDKAnimBlendBase : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                     // 0x0164 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class TArray<float>                                ChildBlendTimes;                               // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint32_t                                           bTickAnimInScript : 1;                         // 0x0178 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendBase");
		}

		return uClassPointer;
	};

	void eventTickAnim(float DeltaSeconds);
	float GetAnimDuration(int32_t ChildIndex);
	float GetBlendTime(int32_t ChildIndex, bool optionalBGetDefault);
};

// Class UDKBase.UDKAnimBlendByFall
// 0x0020 (0x017C - 0x019C)
class UUDKAnimBlendByFall : public UUDKAnimBlendBase
{
public:
	uint32_t                                           bIgnoreDoubleJumps : 1;                        // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDidDoubleJump : 1;                            // 0x017C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bDodgeFall : 1;                                // 0x017C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              PreLandTime;                                   // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PreLandStartUprightTime;                       // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ToDblJumpUprightTime;                          // 0x0188 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            FallState;                                     // 0x018C (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            UnknownData00[0x3];                              // 0x018D (0x0003) MISSED OFFSET
	float                                              LastFallingVelocity;                           // 0x0190 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UUDKAnimNodeJumpLeanOffset*                  CachedLeanNode;                                // 0x0194 (0x0008) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByFall");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByHoverJump
// 0x0010 (0x019C - 0x01AC)
class UUDKAnimBlendByHoverJump : public UUDKAnimBlendByFall
{
public:
	class APawn*                                       OwnerP;                                        // 0x019C (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class AUDKVehicle*                                 OwnerHV;                                       // 0x01A4 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverJump");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByFlying
// 0x0030 (0x017C - 0x01AC)
class UUDKAnimBlendByFlying : public UUDKAnimBlendBase
{
public:
	uint8_t                                            FlyingState;                                   // 0x017C (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            UnknownData00[0x3];                              // 0x017D (0x0003) MISSED OFFSET
	class AUDKPawn*                                    Pawn;                                          // 0x0180 (0x0008) [0x0000000000000000]               
	class UUDKAnimBlendBase*                           FlyingMode;                                    // 0x0188 (0x0008) [0x0000000000000000]               
	class UAnimNodeAimOffset*                          FlyingDir;                                     // 0x0190 (0x0008) [0x0000000000000000]               
	class FName                                        StartingAnimName;                              // 0x0198 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bHasStartingAnim : 1;                          // 0x01A0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bHasEndingAnim : 1;                            // 0x01A0 (0x0004) [0x0000000000000000] [0x00000002] 
	class FName                                        EndingAnimName;                                // 0x01A4 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByFlying");
		}

		return uClassPointer;
	};

	void UpdateFlyingState();
};

// Class UDKBase.UDKAnimBlendByHoverboarding
// 0x000C (0x017C - 0x0188)
class UUDKAnimBlendByHoverboarding : public UUDKAnimBlendBase
{
public:
	int32_t                                            LastActiveChildIndex;                          // 0x017C (0x0004) [0x0000000000000000]               
	float                                              BoardLeanAmount;                               // 0x0180 (0x0004) [0x0000000000000000]               
	float                                              FallTimeBeforeAnim;                            // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboarding");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByIdle
// 0x0000 (0x017C - 0x017C)
class UUDKAnimBlendByIdle : public UUDKAnimBlendBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByIdle");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByPhysics
// 0x0040 (0x017C - 0x01BC)
class UUDKAnimBlendByPhysics : public UUDKAnimBlendBase
{
public:
	int32_t                                            PhysicsMap[12];                                // 0x017C (0x0030) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            LastPhysics;                                   // 0x01AC (0x0004) [0x0000000000000000]               
	float                                              LandBlendDelay;                                // 0x01B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PendingChildIndex;                             // 0x01B4 (0x0004) [0x0000000000000000]               
	float                                              PendingTimeToGo;                               // 0x01B8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByPhysics");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByPhysicsVolume
// 0x0018 (0x017C - 0x0194)
class UUDKAnimBlendByPhysicsVolume : public UUDKAnimBlendBase
{
public:
	class TArray<struct FPhysicsVolumeParams>          PhysicsParamList;                              // 0x017C (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class APhysicsVolume*                              LastPhysicsVolume;                             // 0x018C (0x0008) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByPhysicsVolume");
		}

		return uClassPointer;
	};

	void eventPhysicsVolumeChanged(class APhysicsVolume* NewVolume);
};

// Class UDKBase.UDKAnimBlendByPosture
// 0x0000 (0x017C - 0x017C)
class UUDKAnimBlendByPosture : public UUDKAnimBlendBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByPosture");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByTurnInPlace
// 0x0010 (0x017C - 0x018C)
class UUDKAnimBlendByTurnInPlace : public UUDKAnimBlendBase
{
public:
	float                                              RootYawSpeedThresh;                            // 0x017C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnInPlaceBlendSpeed;                         // 0x0180 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AUDKPawn*                                    OwnerUTP;                                      // 0x0184 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByTurnInPlace");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByVehicle
// 0x000C (0x017C - 0x0188)
class UUDKAnimBlendByVehicle : public UUDKAnimBlendBase
{
public:
	uint32_t                                           bLastPawnDriving : 1;                          // 0x017C (0x0004) [0x0000000000000000] [0x00000001] 
	class AVehicle*                                    LastVehicle;                                   // 0x0180 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByVehicle");
		}

		return uClassPointer;
	};

	void UpdateVehicleState();
};

// Class UDKBase.UDKAnimBlendByDriving
// 0x0000 (0x0150 - 0x0150)
class UUDKAnimBlendByDriving : public UAnimNodeBlend
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByDriving");
		}

		return uClassPointer;
	};

	void UpdateDrivingState();
};

// Class UDKBase.UDKAnimBlendByHoverboardTilt
// 0x0023 (0x013D - 0x0160)
class UUDKAnimBlendByHoverboardTilt : public UAnimNodeBlendBase
{
public:
	uint8_t                                            UnknownData00[0x3];                              // 0x013D (0x0003) MISSED OFFSET
	struct FVector                                     UpVector;                                      // 0x0140 (0x000C) [0x0000000000000000]               
	float                                              TiltScale;                                     // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TiltDeadZone;                                  // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TiltYScale;                                    // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        UpperBodyName;                                 // 0x0158 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboardTilt");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByHoverboardTurn
// 0x000F (0x013D - 0x014C)
class UUDKAnimBlendByHoverboardTurn : public UAnimNodeBlendBase
{
public:
	uint8_t                                            UnknownData00[0x3];                              // 0x013D (0x0003) MISSED OFFSET
	float                                              TurnScale;                                     // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxBlendPerSec;                                // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentAnimWeight;                             // 0x0148 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByHoverboardTurn");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendBySlotActive
// 0x0008 (0x0184 - 0x018C)
class UUDKAnimBlendBySlotActive : public UAnimNodeBlendPerBone
{
public:
	class UAnimNodeSlot*                               ChildSlot;                                     // 0x0184 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendBySlotActive");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendBySpeed
// 0x0008 (0x0150 - 0x0158)
class UUDKAnimBlendBySpeed : public UAnimNodeBlend
{
public:
	float                                              MinSpeed;                                      // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSpeed;                                      // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendBySpeed");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimBlendByWeapon
// 0x0010 (0x0184 - 0x0194)
class UUDKAnimBlendByWeapon : public UAnimNodeBlendPerBone
{
public:
	uint32_t                                           bLooping : 1;                                  // 0x0184 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class FName                                        LoopingAnim;                                   // 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendTime;                                     // 0x0190 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByWeapon");
		}

		return uClassPointer;
	};

	void eventAnimStopFire(float optionalSpecialBlendTime);
	void AnimFire(const class FName& FireSequence, bool bAutoFire, float optionalAnimRate, float optionalSpecialBlendTime, const class FName& optionalLoopSequence);
};

// Class UDKBase.UDKAnimBlendByWeapType
// 0x0000 (0x0184 - 0x0184)
class UUDKAnimBlendByWeapType : public UAnimNodeBlendPerBone
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimBlendByWeapType");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimNodeCopyBoneTranslation
// 0x0073 (0x013D - 0x01B0)
class UUDKAnimNodeCopyBoneTranslation : public UAnimNodeBlendBase
{
public:
	uint8_t                                            UnknownData00[0x3];                              // 0x013D (0x0003) MISSED OFFSET
	class UAnimNodeAimOffset*                          CachedAimNode;                                 // 0x0140 (0x0008) [0x0000000000000000]               
	class FName                                        OldAimProfileName;                             // 0x0148 (0x0008) [0x0000000000000000]               
	class TArray<struct FBoneCopyInfo>                 DefaultBoneCopyArray;                          // 0x0150 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBoneCopyInfo>                 DualWieldBoneCopyArray;                        // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class TArray<struct FBoneCopyInfo>                 ActiveBoneCopyArray;                           // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<uint8_t>                              RequiredBones;                                 // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UUDKAnimNodeSeqWeap*>           SeqWeaps;                                      // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UUDKAnimBlendByWeapType*>       WeapTypeBlends;                                // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeCopyBoneTranslation");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimNodeFramePlayer
// 0x0000 (0x01A4 - 0x01A4)
class UUDKAnimNodeFramePlayer : public UAnimNodeSequence
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeFramePlayer");
		}

		return uClassPointer;
	};

	void SetAnimPosition(float Perc);
	void SetAnimation(const class FName& Sequence, float RateScale);
};

// Class UDKBase.UDKAnimNodeJumpLeanOffset
// 0x0030 (0x0198 - 0x01C8)
class UUDKAnimNodeJumpLeanOffset : public UAnimNodeAimOffset
{
public:
	float                                              JumpLeanStrength;                              // 0x0198 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxLeanChangeSpeed;                            // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bMultiplyByZVelocity : 1;                      // 0x01A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bDodging : 1;                                  // 0x01A0 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bOldDodging : 1;                               // 0x01A0 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bDoubleJumping : 1;                            // 0x01A0 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bOldDoubleJumping : 1;                         // 0x01A0 (0x0004) [0x0000000000000000] [0x00000010] 
	class UAnimNodeAimOffset*                          CachedAimNode;                                 // 0x01A4 (0x0008) [0x0000000000000000]               
	class FName                                        OldAimProfileName;                             // 0x01AC (0x0008) [0x0000000000000000]               
	struct FVector2D                                   PreBlendAim;                                   // 0x01B4 (0x0008) [0x0000000000000000]               
	float                                              LeanWeight;                                    // 0x01BC (0x0004) [0x0000000000000000]               
	float                                              LeanWeightTarget;                              // 0x01C0 (0x0004) [0x0000000000000000]               
	float                                              BlendTimeToGo;                                 // 0x01C4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeJumpLeanOffset");
		}

		return uClassPointer;
	};

	void SetLeanWeight(float WeightTarget, float BlendTime);
};

// Class UDKBase.UDKAnimNodeSequence
// 0x0014 (0x01A4 - 0x01B8)
class UUDKAnimNodeSequence : public UAnimNodeSequence
{
public:
	uint32_t                                           bAutoStart : 1;                                // 0x01A4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLoopLastSequence : 1;                         // 0x01A4 (0x0004) [0x0000000000000000] [0x00000002] 
	class TArray<class FName>                          SeqStack;                                      // 0x01A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeSequence");
		}

		return uClassPointer;
	};

	void eventOnInit();
	void PlayAnimationSet(const class TArray<class FName>& Sequences, float SeqRate, bool bLoopLast);
	void PlayAnimation(const class FName& Sequence, float SeqRate, bool bSeqLoop);
};

// Class UDKBase.UDKAnimNodeSeqWeap
// 0x0028 (0x01B8 - 0x01E0)
class UUDKAnimNodeSeqWeap : public UUDKAnimNodeSequence
{
public:
	class FName                                        DefaultAnim;                                   // 0x01B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        DualPistolAnim;                                // 0x01C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        SinglePistolAnim;                              // 0x01C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        ShoulderRocketAnim;                            // 0x01D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        StingerAnim;                                   // 0x01D8 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeSeqWeap");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_CantileverBeam
// 0x0040 (0x0198 - 0x01D8)
class UUDKSkelControl_CantileverBeam : public USkelControlLookAt
{
public:
	struct FVector                                     WorldSpaceGoal;                                // 0x0198 (0x000C) [0x0000000000000000]               
	struct FVector                                     InitialWorldSpaceGoalOffset;                   // 0x01A4 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Velocity;                                      // 0x01B0 (0x000C) [0x0000000000000000]               
	float                                              SpringStiffness;                               // 0x01BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpringDamping;                                 // 0x01C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PercentBeamVelocityTransfer;                   // 0x01C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EntireBeamVelocity__Delegate;                // 0x01C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_CantileverBeam");
		}

		return uClassPointer;
	};

	struct FVector EntireBeamVelocity();
};

// Class UDKBase.UDKSkelControl_Damage
// 0x00A8 (0x012C - 0x01D4)
class UUDKSkelControl_Damage : public USkelControlSingleBone
{
public:
	uint32_t                                           bInitialized : 1;                              // 0x012C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bOnDamageActive : 1;                           // 0x012C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bControlStrFollowsHealth : 1;                  // 0x012C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsBroken : 1;                                 // 0x012C (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bIsBreaking : 1;                               // 0x012C (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bOnDeathActive : 1;                            // 0x012C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bOnDeathUseForSecondaryExplosion : 1;          // 0x012C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	class AUDKVehicle*                                 OwnerVehicle;                                  // 0x0130 (0x0008) [0x0000000000000000]               
	float                                              HealthPerc;                                    // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              DamageBoneScale;                               // 0x013C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            DamageMax;                                     // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ActivationThreshold;                           // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 BreakMesh;                                     // 0x0148 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakThreshold;                                // 0x0150 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BreakTime;                                     // 0x0154 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DefaultBreakDir;                               // 0x0158 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DamageScale;                                   // 0x0164 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PS_DamageOnBreak;                              // 0x0170 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PS_DamageTrail;                                // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FName                                        BrokenBone;                                    // 0x0180 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              BreakTimer;                                    // 0x0188 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              OwnerVehicleMaxHealth;                         // 0x018C (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     BreakSpeed;                                    // 0x0190 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              DeathPercentToActuallySpawn;                   // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DeathBoneScale;                                // 0x01A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStaticMesh*                                 DeathStaticMesh;                               // 0x01A4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DeathImpulseDir;                               // 0x01AC (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     DeathScale;                                    // 0x01B8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PS_DeathOnBreak;                               // 0x01C4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             PS_DeathTrail;                                 // 0x01CC (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_Damage");
		}

		return uClassPointer;
	};

	float eventRestorePart();
	void eventBreakApartOnDeath(const struct FVector& PartLocation, bool bIsVisible);
	void eventBreakApart(const struct FVector& PartLocation, bool bIsVisible);
};

// Class UDKBase.UDKSkelControl_DamageHinge
// 0x0014 (0x01D4 - 0x01E8)
class UUDKSkelControl_DamageHinge : public UUDKSkelControl_Damage
{
public:
	float                                              MaxAngle;                                      // 0x01D4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            PivotAxis;                                     // 0x01D8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x3];                              // 0x01D9 (0x0003) MISSED OFFSET
	float                                              AVModifier;                                    // 0x01DC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentAngle;                                  // 0x01E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              SpringStiffness;                               // 0x01E4 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_DamageHinge");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_DamageSpring
// 0x0048 (0x01D4 - 0x021C)
class UUDKSkelControl_DamageSpring : public UUDKSkelControl_Damage
{
public:
	struct FRotator                                    MaxAngle;                                      // 0x01D4 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    MinAngle;                                      // 0x01E0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                       // 0x01EC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpringStiffness;                               // 0x01F0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AVModifier;                                    // 0x01F4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    CurrentAngle;                                  // 0x01F8 (0x000C) [0x0000000000002000] (CPF_Transient)
	float                                              RandomPortion;                                 // 0x0204 (0x0004) [0x0000000000000000]               
	struct FVector                                     LastHitMomentum;                               // 0x0208 (0x000C) [0x0000000000000000]               
	float                                              LastHitTime;                                   // 0x0214 (0x0004) [0x0000000000000000]               
	float                                              MomentumPortion;                               // 0x0218 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_DamageSpring");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_HoverboardSuspension
// 0x0024 (0x012C - 0x0150)
class UUDKSkelControl_HoverboardSuspension : public USkelControlSingleBone
{
public:
	float                                              TransIgnore;                                   // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TransScale;                                    // 0x0130 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TransOffset;                                   // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxTrans;                                      // 0x0138 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinTrans;                                      // 0x013C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RotScale;                                      // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRot;                                        // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxRotRate;                                    // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentRot;                                    // 0x014C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardSuspension");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_HoverboardSwing
// 0x0028 (0x012C - 0x0154)
class UUDKSkelControl_HoverboardSwing : public USkelControlSingleBone
{
public:
	int32_t                                            SwingHistoryWindow;                            // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SwingHistorySlot;                              // 0x0130 (0x0004) [0x0000000000000000]               
	class TArray<float>                                SwingHistory;                                  // 0x0134 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SwingScale;                                    // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxSwing;                                      // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxUseVel;                                     // 0x014C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CurrentSwing;                                  // 0x0150 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardSwing");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_HoverboardVibration
// 0x0014 (0x012C - 0x0140)
class UUDKSkelControl_HoverboardVibration : public USkelControlSingleBone
{
public:
	float                                              VibFrequency;                                  // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VibSpeedAmpScale;                              // 0x0130 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VibTurnAmpScale;                               // 0x0134 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VibMaxAmplitude;                               // 0x0138 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              VibInput;                                      // 0x013C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_HoverboardVibration");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_HugGround
// 0x0024 (0x012C - 0x0150)
class UUDKSkelControl_HugGround : public USkelControlSingleBone
{
public:
	float                                              DesiredGroundDist;                             // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxDist;                                       // 0x0130 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class FName                                        ParentBone;                                    // 0x0134 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bOppositeFromParent : 1;                       // 0x013C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              XYDistFromParentBone;                          // 0x0140 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ZDistFromParentBone;                           // 0x0144 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxTranslationPerSec;                          // 0x0148 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastUpdateTime;                                // 0x014C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_HugGround");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_LockRotation
// 0x0028 (0x00FC - 0x0124)
class UUDKSkelControl_LockRotation : public USkelControlBase
{
public:
	uint32_t                                           bLockPitch : 1;                                // 0x00FC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLockYaw : 1;                                  // 0x00FC (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLockRoll : 1;                                 // 0x00FC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FRotator                                    LockRotation;                                  // 0x0100 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    MaxDelta;                                      // 0x010C (0x000C) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            LockRotationSpace;                             // 0x0118 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x3];                              // 0x0119 (0x0003) MISSED OFFSET
	class FName                                        RotationSpaceBoneName;                         // 0x011C (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_LockRotation");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_LookAt
// 0x0010 (0x0198 - 0x01A8)
class UUDKSkelControl_LookAt : public USkelControlLookAt
{
public:
	uint32_t                                           bLimitYaw : 1;                                 // 0x0198 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bLimitPitch : 1;                               // 0x0198 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bLimitRoll : 1;                                // 0x0198 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bShowPerAxisLimits : 1;                        // 0x0198 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	float                                              YawLimit;                                      // 0x019C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchLimit;                                    // 0x01A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RollLimit;                                     // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_LookAt");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_MassBoneScaling
// 0x0010 (0x00FC - 0x010C)
class UUDKSkelControl_MassBoneScaling : public USkelControlBase
{
public:
	class TArray<float>                                BoneScales;                                    // 0x00FC (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_MassBoneScaling");
		}

		return uClassPointer;
	};

	float GetBoneScale(const class FName& BoneName);
	void SetBoneScale(const class FName& BoneName, float Scale);
};

// Class UDKBase.UDKSkelControl_PropellerBlade
// 0x0014 (0x012C - 0x0140)
class UUDKSkelControl_PropellerBlade : public USkelControlSingleBone
{
public:
	float                                              MaxRotationsPerSecond;                         // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SpinUpTime;                                    // 0x0130 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bCounterClockwise : 1;                         // 0x0134 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              RotationsPerSecond;                            // 0x0138 (0x0004) [0x0000000000000000]               
	float                                              DesiredRotationsPerSecond;                     // 0x013C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_PropellerBlade");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_Rotate
// 0x0018 (0x012C - 0x0144)
class UUDKSkelControl_Rotate : public USkelControlSingleBone
{
public:
	struct FRotator                                    DesiredBoneRotation;                           // 0x012C (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    DesiredBoneRotationRate;                       // 0x0138 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_Rotate");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_SpinControl
// 0x0010 (0x012C - 0x013C)
class UUDKSkelControl_SpinControl : public USkelControlSingleBone
{
public:
	float                                              DegreesPerSecond;                              // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Axis;                                          // 0x0130 (0x000C) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_SpinControl");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKSkelControl_TurretConstrained
// 0x0060 (0x012C - 0x018C)
class UUDKSkelControl_TurretConstrained : public USkelControlSingleBone
{
public:
	uint32_t                                           bConstrainPitch : 1;                           // 0x012C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bConstrainYaw : 1;                             // 0x012C (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bConstrainRoll : 1;                            // 0x012C (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bInvertPitch : 1;                              // 0x012C (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	uint32_t                                           bInvertYaw : 1;                                // 0x012C (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	uint32_t                                           bInvertRoll : 1;                               // 0x012C (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	uint32_t                                           bFixedWhenFiring : 1;                          // 0x012C (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	uint32_t                                           bResetWhenUnattended : 1;                      // 0x012C (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	uint32_t                                           bIsInMotion : 1;                               // 0x012C (0x0004) [0x0000000000000000] [0x00000100] 
	struct FTurretConstraintData                       MaxAngle;                                      // 0x0130 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FTurretConstraintData                       MinAngle;                                      // 0x013C (0x000C) [0x0000000000000001] (CPF_Edit)    
	class TArray<struct FTurretStepData>               Steps;                                         // 0x0148 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              LagDegreesPerSecond;                           // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PitchSpeedScale;                               // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    DesiredBoneRotation;                           // 0x0160 (0x000C) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            AssociatedSeatIndex;                           // 0x016C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FRotator                                    ConstrainedBoneRotation;                       // 0x0170 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __OnTurretStatusChange__Delegate;              // 0x017C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_TurretConstrained");
		}

		return uClassPointer;
	};

	bool WouldConstrainPitch(int32_t TestPitch, class USkeletalMeshComponent* SkelComp);
	void InitTurret(const struct FRotator& InitRot, class USkeletalMeshComponent* SkelComp);
	void OnTurretStatusChange(bool bIsMoving);
};

// Class UDKBase.UDKSkelControl_VehicleFlap
// 0x0020 (0x012C - 0x014C)
class UUDKSkelControl_VehicleFlap : public USkelControlSingleBone
{
public:
	float                                              MaxPitch;                                      // 0x012C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OldZPitch;                                     // 0x0130 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchTime;                                  // 0x0134 (0x0004) [0x0000000000000000]               
	float                                              MaxPitchChange;                                // 0x0138 (0x0004) [0x0000000000000000]               
	class FName                                        RightFlapControl;                              // 0x013C (0x0008) [0x0000000000000000]               
	class FName                                        LeftFlapControl;                               // 0x0144 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKSkelControl_VehicleFlap");
		}

		return uClassPointer;
	};

};

// Class UDKBase.SimplePawn
// 0x0040 (0x0554 - 0x0594)
class ASimplePawn : public AGamePawn
{
public:
	uint32_t                                           bFixedView : 1;                                // 0x0554 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FixedViewLoc;                                  // 0x0558 (0x000C) [0x0000000000000000]               
	struct FRotator                                    FixedViewRot;                                  // 0x0564 (0x000C) [0x0000000000000000]               
	float                                              Bob;                                           // 0x0570 (0x0004) [0x0000000000000000]               
	float                                              AppliedBob;                                    // 0x0574 (0x0004) [0x0000000000000000]               
	float                                              BobTime;                                       // 0x0578 (0x0004) [0x0000000000000000]               
	struct FVector                                     WalkBob;                                       // 0x057C (0x000C) [0x0000000000000000]               
	float                                              OldZ;                                          // 0x0588 (0x0004) [0x0000000000000000]               
	float                                              CastlePawnSpeed;                               // 0x058C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              CastlePawnAccel;                               // 0x0590 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.SimplePawn");
		}

		return uClassPointer;
	};

	struct FVector GetPawnViewLocation();
	void eventTickSpecial(float DeltaTime);
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	void FixedView();
	void PostBeginPlay();
};

// Class UDKBase.SimplePC
// 0x00FC (0x077C - 0x0878)
class ASimplePC : public AGamePlayerController
{
public:
	float                                              AutoRotationAccelRate;                         // 0x077C (0x0004) [0x0000000000000000]               
	float                                              AutoRotationBrakeDecelRate;                    // 0x0780 (0x0004) [0x0000000000000000]               
	float                                              MaxAutoRotationVelocity;                       // 0x0784 (0x0004) [0x0000000000000000]               
	float                                              BreathAutoRotationAccelRate;                   // 0x0788 (0x0004) [0x0000000000000000]               
	float                                              BreathAutoRotationBrakeDecelRate;              // 0x078C (0x0004) [0x0000000000000000]               
	float                                              MaxBreathAutoRotationVelocity;                 // 0x0790 (0x0004) [0x0000000000000000]               
	float                                              RangeBasedYawAccelStrength;                    // 0x0794 (0x0004) [0x0000000000000000]               
	float                                              RangeBasedAccelMaxDistance;                    // 0x0798 (0x0004) [0x0000000000000000]               
	uint32_t                                           bLookAtDestination : 1;                        // 0x079C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCameraBreathing : 1;                          // 0x079C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bSmoothRotation : 1;                           // 0x079C (0x0004) [0x0000000000004000] [0x00000004] (CPF_Config)
	uint32_t                                           bApplyBackTouchToViewOffset : 1;               // 0x079C (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bFingerIsDown : 1;                             // 0x079C (0x0004) [0x0000000000000000] [0x00000010] 
	struct FVector                                     LookAtDestination;                             // 0x07A0 (0x000C) [0x0000000000000000]               
	float                                              LookAtDestAutoPitchAmount;                     // 0x07AC (0x0004) [0x0000000000000000]               
	struct FVector                                     CameraBreathCenterLocation;                    // 0x07B0 (0x000C) [0x0000000000000000]               
	struct FRotator                                    CameraBreathRotator;                           // 0x07BC (0x000C) [0x0000000000000000]               
	struct FVector                                     CameraBreathSampleLocation;                    // 0x07C8 (0x000C) [0x0000000000000000]               
	float                                              LastCameraBreathDeltaSelectTime;               // 0x07D4 (0x0004) [0x0000000000000000]               
	float                                              TimeBetweenCameraBreathChanges;                // 0x07D8 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   AutoRotationVelocity;                          // 0x07DC (0x0008) [0x0000000000000000]               
	struct FVector2D                                   ViewportSize;                                  // 0x07E4 (0x0008) [0x0000000000000000]               
	class TArray<class USoundCue*>                     FootstepSounds;                                // 0x07EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              DistanceUntilNextFootstepSound;                // 0x07FC (0x0004) [0x0000000000000000]               
	class FString                                      ServerCommandline;                             // 0x0800 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              OldTurn;                                       // 0x0810 (0x0004) [0x0000000000000000]               
	float                                              OldLookup;                                     // 0x0814 (0x0004) [0x0000000000000000]               
	float                                              RotationSmoothingFactor;                       // 0x0818 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultInputGroup;                             // 0x081C (0x0004) [0x0000000000004000] (CPF_Config)  
	class UMobilePlayerInput*                          MPI;                                           // 0x0820 (0x0008) [0x0000000000000000]               
	class UMobileInputZone*                            SliderZone;                                    // 0x0828 (0x0008) [0x0000000000000000]               
	class UMobileInputZone*                            StickMoveZone;                                 // 0x0830 (0x0008) [0x0000000000000000]               
	class UMobileInputZone*                            StickLookZone;                                 // 0x0838 (0x0008) [0x0000000000000000]               
	class UMobileInputZone*                            FreeLookZone;                                  // 0x0840 (0x0008) [0x0000000000000000]               
	int32_t                                            NoTapToMoves;                                  // 0x0848 (0x0004) [0x0000000000000000]               
	float                                              LastEnteredTapToMove;                          // 0x084C (0x0004) [0x0000000000000000]               
	float                                              TotalTimeInTapToMove;                          // 0x0850 (0x0004) [0x0000000000000000]               
	float                                              TimeOfLastUserViewChange;                      // 0x0854 (0x0004) [0x0000000000000000]               
	struct FVector2D                                   TouchCenter;                                   // 0x0858 (0x0008) [0x0000000000000000]               
	struct FRotator                                    LastOffset;                                    // 0x0860 (0x000C) [0x0000000000000000]               
	struct FRotator                                    MatineeOffset;                                 // 0x086C (0x000C) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.SimplePC");
		}

		return uClassPointer;
	};

	void SetFootstepsToSnow();
	void SetFootstepsToStone();
	void PlayerTick(float DeltaTime);
	void eventGetPlayerViewPoint(struct FVector& outOut_Location, struct FRotator& outOut_Rotation);
	void eventNotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee);
	void OffsetMatineeTouch(int32_t Handle, uint8_t Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int32_t TouchpadIndex);
	void ActivateControlGroup();
	void UpdateCameraBreathing();
	void CheckDistanceToDestination(float DistToDestination);
	void ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator& outOut_ViewRotation);
	void UpdateRotation(float DeltaTime);
	void PlayerMove(float DeltaTime);
	void SetNextFootstepDistance();
	bool IsStickMoveActive();
	void PostBeginPlay();
	void SetupZones();
	void ReceivedGameClass(class UClass* GameClass);
	void OnConsoleCommand(class USeqAct_ConsoleCommand* inAction);
	void eventInitInputSystem();
};

// Class UDKBase.CastleGame
// 0x0004 (0x04A4 - 0x04A8)
class ACastleGame : public ASimpleGame
{
public:
	uint32_t                                           bAllowAttractMode : 1;                         // 0x04A4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CastleGame");
		}

		return uClassPointer;
	};

	static class UClass* eventSetGameType(const class FString& MapName, const class FString& Options, const class FString& Portal);
	bool PreventDeath(class APawn* KilledPawn, class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void eventOnEngineHasLoaded();
};

// Class UDKBase.CastlePC
// 0x00A8 (0x0878 - 0x0920)
class ACastlePC : public ASimplePC
{
public:
	uint32_t                                           bSuppressSplash : 1;                           // 0x0878 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           bSplashHasBeenShown : 1;                       // 0x0878 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bIsInAttractMode : 1;                          // 0x0878 (0x0004) [0x0000000000000000] [0x00000004] 
	uint32_t                                           bIsInBenchmarkMode : 1;                        // 0x0878 (0x0004) [0x0000000000000000] [0x00000008] 
	uint32_t                                           bBenchmarkLoopCompleted : 1;                   // 0x0878 (0x0004) [0x0000000000000000] [0x00000010] 
	uint32_t                                           bDoneInitialFade : 1;                          // 0x0878 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bPauseMenuOpen : 1;                            // 0x0878 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bAutoSlide : 1;                                // 0x0878 (0x0004) [0x0000000000000000] [0x00000080] 
	int32_t                                            BenchmarkNumFrames;                            // 0x087C (0x0004) [0x0000000000000000]               
	float                                              BenchmarkElapsedTime;                          // 0x0880 (0x0004) [0x0000000000000000]               
	class UMobileMenuPause*                            PauseMenu;                                     // 0x0884 (0x0008) [0x0000000000000000]               
	class UMobileMenuDebug*                            DebugMenu;                                     // 0x088C (0x0008) [0x0000000000000000]               
	float                                              SliderStart;                                   // 0x0894 (0x0004) [0x0000000000000000]               
	float                                              SliderEnd;                                     // 0x0898 (0x0004) [0x0000000000000000]               
	float                                              SliderTravelTime;                              // 0x089C (0x0004) [0x0000000000000000]               
	float                                              SliderTravelDuration;                          // 0x08A0 (0x0004) [0x0000000000000000]               
	float                                              AutoAttractTime;                               // 0x08A4 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   OpenMenuSound;                                 // 0x08A8 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   CloseMenuSound;                                // 0x08B0 (0x0008) [0x0000000000000000]               
	class UMobileMenuControls*                         TutMenu;                                       // 0x08B8 (0x0008) [0x0000000000000000]               
	float                                              StuckThreshHold;                               // 0x08C0 (0x0004) [0x0000000000000000]               
	float                                              TapToMoveAutoPitchAmount;                      // 0x08C4 (0x0004) [0x0000000000000000]               
	class UStaticMesh*                                 TapToMoveVisualMesh;                           // 0x08C8 (0x0008) [0x0000000000000000]               
	float                                              TapToMoveVisualMinDist;                        // 0x08D0 (0x0004) [0x0000000000000000]               
	float                                              TapToMoveVisualRotateSpeed;                    // 0x08D4 (0x0004) [0x0000000000000000]               
	float                                              TapToMoveVisualAnimDuration;                   // 0x08D8 (0x0004) [0x0000000000000000]               
	struct FVector                                     TapToMoveDestination;                          // 0x08DC (0x000C) [0x0000000000000000]               
	float                                              LastDistToDestination;                         // 0x08E8 (0x0004) [0x0000000000000000]               
	float                                              TapToMoveVisualEffectStartTime;                // 0x08EC (0x0004) [0x0000000000000000]               
	float                                              TapToMoveVisualEffectEndTime;                  // 0x08F0 (0x0004) [0x0000000000000000]               
	class USoundCue*                                   TapToMoveSound;                                // 0x08F4 (0x0008) [0x0000000000000000]               
	class USoundCue*                                   InvalidTapToMoveSound;                         // 0x08FC (0x0008) [0x0000000000000000]               
	class USoundCue*                                   TapToMoveStopSound;                            // 0x0904 (0x0008) [0x0000000000000000]               
	class AKActorSpawnable*                            TapToMoveVisualActor;                          // 0x090C (0x0008) [0x0000000000000000]               
	uint8_t                                            TutorialStage;                                 // 0x0914 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3];                              // 0x0915 (0x0003) MISSED OFFSET
	class UMobileInputZone*                            TutorialLookZone;                              // 0x0918 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CastlePC");
		}

		return uClassPointer;
	};

	void SetFootstepsToSnow();
	void SetFootstepsToStone();
	void StartTutorials();
	void FlashHelp(float Duration);
	void ShowSplash();
	void PlayerTick(float DeltaTime);
	bool ProcessMenuSlide(class UMobileInputZone* Zone, uint8_t EventType, int32_t SlideValue, const struct FVector2D& ViewportSizes);
	bool MenuSliderTap(class UMobileInputZone* Zone, uint8_t EventType, const struct FVector2D& TouchLocation);
	void OpenMenu();
	void ResetMenu();
	void AutoSlide(float Destination);
	bool ExitAttractTap(class UMobileInputZone* Zone, uint8_t EventType, const struct FVector2D& TouchLocation);
	void ExitAttractMode();
	void OnFlyThroughLoopCompleted();
	void EnterAttractMode(bool optionalBeginBenchmarking);
	void eventNotifyDirectorControl(bool bNowControlling, class USeqAct_Interp* CurrentMatinee);
	void CheckDistanceToDestination(float DistToDestination);
	void ProcessViewRotation(float DeltaTime, const struct FRotator& DeltaRot, struct FRotator& outOut_ViewRotation);
	void PlayerLookAtDestination();
	void DoTapToMove(const struct FVector& NewDestination, bool bShouldLookAtDestination);
	bool TapToMoveTap(class UMobileInputZone* Zone, uint8_t EventType, const struct FVector2D& TouchLocation);
	class AActor* TraceForTapToMove(class APawn* TraceOwner, const struct FVector& End, const struct FVector& Start, struct FVector& outHitLocation, struct FVector& outHitNormal);
	void CheckInactivity();
	void SaveControllerStats();
	void SetupZones();
	void eventOnEngineInitialTick();
	void eventDestroyed();
	void PostBeginPlay();
};

// Class UDKBase.MobileMenuControls
// 0x0024 (0x00D8 - 0x00FC)
class UMobileMenuControls : public UMobileMenuScene
{
public:
	float                                              FadeTime;                                      // 0x00D8 (0x0004) [0x0000000000000000]               
	float                                              FadeDuration;                                  // 0x00DC (0x0004) [0x0000000000000000]               
	float                                              AnimTime;                                      // 0x00E0 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFadeOut : 1;                                  // 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAnimate : 1;                                  // 0x00E4 (0x0004) [0x0000000000000000] [0x00000002] 
	class UMobileMenuImage*                            Icon;                                          // 0x00E8 (0x0008) [0x0000000000000000]               
	class UMobileMenuImage*                            msg;                                           // 0x00F0 (0x0008) [0x0000000000000000]               
	float                                              Scale;                                         // 0x00F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileMenuControls");
		}

		return uClassPointer;
	};

	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void Setup(bool bTap);
	void FadeOut();
};

// Class UDKBase.MobileMenuBase
// 0x0028 (0x00D8 - 0x0100)
class UMobileMenuBase : public UMobileMenuScene
{
public:
	class UTexture2D*                                  iPadBackgroundTexture;                         // 0x00D8 (0x0008) [0x0000000000000000]               
	struct FUVCoords                                   iPadBackgroundCoords;                          // 0x00E0 (0x0014) [0x0000000000000000]               
	float                                              FadeTime;                                      // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              FadeDuration;                                  // 0x00F8 (0x0004) [0x0000000000000000]               
	uint32_t                                           bFadeOut : 1;                                  // 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bCloseOnFadeOut : 1;                           // 0x00FC (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileMenuBase");
		}

		return uClassPointer;
	};

	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void Fade(bool bIsFadeOut, float FadeDur);
};

// Class UDKBase.MobileMenuDebug
// 0x0000 (0x0100 - 0x0100)
class UMobileMenuDebug : public UMobileMenuBase
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileMenuDebug");
		}

		return uClassPointer;
	};

	void eventOnTouch(class UMobileMenuObject* Sender, uint8_t EventType, float TouchX, float TouchY);
};

// Class UDKBase.MobileMenuPause
// 0x0024 (0x00D8 - 0x00FC)
class UMobileMenuPause : public UMobileMenuScene
{
public:
	class UMobileMenuControls*                         FadingControlsMenu;                            // 0x00D8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bHelpFadingOut : 1;                            // 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bFlashHelp : 1;                                // 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HelpFadeTime;                                  // 0x00E4 (0x0004) [0x0000000000000000]               
	float                                              HelpFadeDuration;                              // 0x00E8 (0x0004) [0x0000000000000000]               
	float                                              ShownSize;                                     // 0x00EC (0x0004) [0x0000000000000000]               
	float                                              Scale;                                         // 0x00F0 (0x0004) [0x0000000000000000]               
	float                                              FlashDuration;                                 // 0x00F4 (0x0004) [0x0000000000000000]               
	float                                              FlashTime;                                     // 0x00F8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileMenuPause");
		}

		return uClassPointer;
	};

	void SetDefaultUI();
	void SetAttractModeUI(bool bIsInBenchmarkMode);
	void ReleaseHelp();
	void FlashHelp(float Duration);
	bool OnSceneTouch(uint8_t EventType, float X, float Y, bool bInside);
	void RenderScene(class UCanvas* Canvas, float RenderDelta);
	void HackInactiveAlpha(float NewValue);
	void OnResetMenu();
	void eventOnTouch(class UMobileMenuObject* Sender, uint8_t EventType, float TouchX, float TouchY);
	void eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class UDKBase.MobileMenuSplash
// 0x0004 (0x00D8 - 0x00DC)
class UMobileMenuSplash : public UMobileMenuScene
{
public:
	float                                              HelpFlashDuration;                             // 0x00D8 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileMenuSplash");
		}

		return uClassPointer;
	};

	void Closed();
	void eventOnTouch(class UMobileMenuObject* Sender, uint8_t EventType, float TouchX, float TouchY);
	void eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class UDKBase.CloudGame
// 0x0000 (0x04A4 - 0x04A4)
class ACloudGame : public ASimpleGame
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CloudGame");
		}

		return uClassPointer;
	};

};

// Class UDKBase.CloudHUD
// 0x0000 (0x06D8 - 0x06D8)
class ACloudHUD : public AUDKHUD
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CloudHUD");
		}

		return uClassPointer;
	};

	void PostRender();
};

// Class UDKBase.CloudPC
// 0x003C (0x0878 - 0x08B4)
class ACloudPC : public ASimplePC
{
public:
	class UCloudSaveData*                              SaveData;                                      // 0x0878 (0x0008) [0x0000000000000000]               
	int32_t                                            Slot1DocIndex;                                 // 0x0880 (0x0004) [0x0000000000000000]               
	int32_t                                            Slot2DocIndex;                                 // 0x0884 (0x0004) [0x0000000000000000]               
	class UCloudStorageBase*                           Cloud;                                         // 0x0888 (0x0008) [0x0000000000000000]               
	class UFacebookIntegration*                        Facebook;                                      // 0x0890 (0x0008) [0x0000000000000000]               
	class UInGameAdManager*                            AdManager;                                     // 0x0898 (0x0008) [0x0000000000000000]               
	class UMicroTransactionBase*                       MicroTrans;                                    // 0x08A0 (0x0008) [0x0000000000000000]               
	class UTwitterIntegrationBase*                     Twitter;                                       // 0x08A8 (0x0008) [0x0000000000000000]               
	uint32_t                                           bIsFBAuthenticating : 1;                       // 0x08B0 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bAdHasBeenShown : 1;                           // 0x08B0 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CloudPC");
		}

		return uClassPointer;
	};

	void OnTwitterAuthorizeComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnTwitterRequestComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnTweetComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGameTwitter();
	void CloudGameBuyConsumable();
	void MicroQueryProducts();
	void OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnProductQueryComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGameFacebook();
	void OnFBDialogComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnFBFriendsListComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnFBRequestComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnFBAuthComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void eventOnUserClosedAdvertisement(struct FPlatformInterfaceDelegateResult& outResult);
	void OnUserClickedAdvertisement(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGameToggleAd();
	void CloudGetDocs();
	void CloudConflictDetected(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudReadDocument(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGotDocuments(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGetAndIncrement();
	void CloudIncrementValue(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudValueChanged(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudLogValue(struct FPlatformInterfaceDelegateResult& outResult);
	void CloudGameLoad(int32_t Slot);
	void CloudGameSave(int32_t Slot);
	void CloudGameFight();
	void eventDestroyed();
	void PostBeginPlay();
};

// Class UDKBase.CloudSaveData
// 0x0008 (0x0068 - 0x0070)
class UCloudSaveData : public UObject
{
public:
	int32_t                                            Exp;                                           // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            Gold;                                          // 0x006C (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CloudSaveData");
		}

		return uClassPointer;
	};

};

// Class UDKBase.CloudMenuMicroTrans
// 0x0020 (0x00D8 - 0x00F8)
class UCloudMenuMicroTrans : public UMobileMenuScene
{
public:
	class ACloudPC*                                    PC;                                            // 0x00D8 (0x0008) [0x0000000000000000]               
	class UMicroTransactionBase*                       MicroTrans;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	class UMobileMenuButton*                           ProductButtons[2];                             // 0x00E8 (0x0010) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.CloudMenuMicroTrans");
		}

		return uClassPointer;
	};

	void OnProductPurchaseComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void OnProductQueryComplete(struct FPlatformInterfaceDelegateResult& outResult);
	void Closed();
	void eventOnTouch(class UMobileMenuObject* Sender, uint8_t EventType, float TouchX, float TouchY);
	void eventInitMenuScene(class UMobilePlayerInput* PlayerInput, int32_t ScreenWidth, int32_t ScreenHeight, bool bIsFirstInitialization);
};

// Class UDKBase.MobileGameCrowdAgent
// 0x0000 (0x057C - 0x057C)
class AMobileGameCrowdAgent : public AGameCrowdAgentSkeletal
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileGameCrowdAgent");
		}

		return uClassPointer;
	};

	void OnSetMaterial(class USeqAct_SetMaterial* Action);
	void PlayDeath(const struct FVector& KillMomentum);
};

// Class UDKBase.MobilePlaceablePawn
// 0x0024 (0x0554 - 0x0578)
class AMobilePlaceablePawn : public AGamePawn
{
public:
	uint32_t                                           bFixedView : 1;                                // 0x0554 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FVector                                     FixedViewLoc;                                  // 0x0558 (0x000C) [0x0000000000000000]               
	struct FRotator                                    FixedViewRot;                                  // 0x0564 (0x000C) [0x0000000000000000]               
	class ULightEnvironmentComponent*                  LightEnvironment;                              // 0x0570 (0x0008) [0x00000000040A000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_EditConst | CPF_Component | CPF_EditInline)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobilePlaceablePawn");
		}

		return uClassPointer;
	};

	struct FVector GetPawnViewLocation();
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	bool eventRestoreAnimSetsToDefault();
	void FixedView();
};

// Class UDKBase.MobileProjectile
// 0x003C (0x02A4 - 0x02E0)
class AMobileProjectile : public AProjectile
{
public:
	float                                              AccelRate;                                     // 0x02A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bShuttingDown : 1;                             // 0x02A8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bInitOnSpawnWithRotation : 1;                  // 0x02A8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	uint32_t                                           bSuppressExplosionFX : 1;                      // 0x02A8 (0x0004) [0x0000000000000000] [0x00000004] 
	class UParticleSystemComponent*                    ProjEffects;                                   // 0x02AC (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UParticleSystem*                             ProjFlightTemplate;                            // 0x02B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UParticleSystem*                             ProjExplosionTemplate;                         // 0x02BC (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              MaxEffectDistance;                             // 0x02C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class USoundCue*                                   ExplosionSound;                                // 0x02C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class TArray<class UClass*>                        ActorsToIgnoreWhenHit;                         // 0x02D0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.MobileProjectile");
		}

		return uClassPointer;
	};

	class APawn* GetPawnOwner();
	bool CalcCamera(float fDeltaTime, struct FVector& outOut_CamLoc, struct FRotator& outOut_CamRot, float& outOut_FOV);
	void MyOnParticleSystemFinished(class UParticleSystemComponent* PSC);
	void Destroyed();
	void HideProjectile();
	void eventTornOff();
	void ShutDown();
	void SpawnExplosionEffects(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void SetExplosionEffectParameters(class UParticleSystemComponent* ProjExplosion);
	void SpawnFlightEffects();
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void ProcessTouch(class AActor* Other, const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Init(const struct FVector& Direction);
	void eventSetInitialState();
	void PostBeginPlay();
	void eventLanded(const struct FVector& HitLocation, const struct FVector& HitNormal, class AActor* FloorActor);
};

// Class UDKBase.SeqAct_MobileCrowdSpawner
// 0x0000 (0x01A4 - 0x01A4)
class USeqAct_MobileCrowdSpawner : public USeqAct_GameCrowdSpawner
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.SeqAct_MobileCrowdSpawner");
		}

		return uClassPointer;
	};

};

// Class UDKBase.UDKAnimNodeSequenceByBoneRotation
// 0x001C (0x01A4 - 0x01C0)
class UUDKAnimNodeSequenceByBoneRotation : public UAnimNodeSequence
{
public:
	class FName                                        BoneName;                                      // 0x01A4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            BoneAxis;                                      // 0x01AC (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x3];                              // 0x01AD (0x0003) MISSED OFFSET
	class TArray<struct FAnimByRotation>               AnimList;                                      // 0x01B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKAnimNodeSequenceByBoneRotation");
		}

		return uClassPointer;
	};

	void eventOnBecomeRelevant();
};

// Class UDKBase.UDKMobileInputZone
// 0x0030 (0x0268 - 0x0298)
class UUDKMobileInputZone : public UMobileInputZone
{
public:
	float                                              HoldPlayerDistance;                            // 0x0268 (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FActivePress>                  CurrentPresses;                                // 0x026C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FVector                                     TraceHitLocation;                              // 0x027C (0x000C) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      LastTappedActor;                               // 0x0288 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              TimeOfLastUntouch;                             // 0x0290 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlayerTouchStartTime;                          // 0x0294 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKMobileInputZone");
		}

		return uClassPointer;
	};

	bool ProcessGameplayInput(class UMobileInputZone* Zone, float DeltaTime, int32_t Handle, uint8_t EventType, const struct FVector2D& TouchLocation);
	void TraceFromScreenToWorld(const struct FVector2D& ScreenPos, const struct FVector& optionalExtent, class AActor*& outOutHitActor, struct FVector& outOutHitLocation);
	bool IsTouchingPlayerPawn();
};

// Class UDKBase.UDKOnlineStatsRead
// 0x0000 (0x00C8 - 0x00C8)
class UUDKOnlineStatsRead : public UOnlineStatsRead
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class UDKBase.UDKOnlineStatsRead");
		}

		return uClassPointer;
	};

};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
