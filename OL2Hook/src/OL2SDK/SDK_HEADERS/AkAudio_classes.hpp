/*
#############################################################################################
# Outlast 2 (OLGame) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.7
# ========================================================================================= #
# File: AkAudio_classes.hpp
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


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum AkAudio.InterpTrackAkEvent.EPlayingDirectionConditional
enum EPlayingDirectionConditional
{
	EPlayingDirectionConditional_EPDC_BothSide         = 0,
	EPlayingDirectionConditional_EPDC_Forward          = 1,
	EPlayingDirectionConditional_EPDC_Backward         = 2,
	EPlayingDirectionConditional_EPDC_END              = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0008 (0x00A4 - 0x00AC)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                  // 0x00A4 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAmbientSound
// 0x000C (0x0250 - 0x025C)
class AAkAmbientSound : public AKeypoint
{
public:
	uint32_t                                           bAutoPlay : 1;                                 // 0x0250 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bStopPending : 1;                              // 0x0250 (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           StopWhenOwnerIsDestroyed : 1;                  // 0x0250 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	uint32_t                                           bIsPlaying : 1;                                // 0x0250 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                     // 0x0254 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkAudioDevice
// 0x0038 (0x0070 - 0x00A8)
class UAkAudioDevice : public USubsystem
{
public:
	uint8_t                                            UnknownData00[0x38];                            // 0x0070 (0x0038) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkAudioDevice");
		}

		return uClassPointer;
	};

};

// Class AkAudio.AkComponent
// 0x0017 (0x008D - 0x00A4)
class UAkComponent : public UActorComponent
{
public:
	uint8_t                                            UnknownData00[0x3];                              // 0x008D (0x0003) MISSED OFFSET
	class FName                                        BoneName;                                      // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UAkEvent*                                    AutoPlayEvent;                                 // 0x0098 (0x0008) [0x0000000000000000]               
	uint32_t                                           bStopWhenOwnerDestroyed : 1;                   // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.AkComponent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.Interface_AkEventHandler
// 0x0000 (0x0068 - 0x0068)
class UInterface_AkEventHandler : public UInterface
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.Interface_AkEventHandler");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkEvent
// 0x001C (0x00C8 - 0x00E4)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	class FName                                        BoneName;                                      // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            ConditionalSide;                               // 0x00D0 (0x0001) [0x0000000000000001] (CPF_Edit)    
	uint8_t                                            UnknownData00[0x3];                              // 0x00D1 (0x0003) MISSED OFFSET
	class TArray<struct FAkEventTrackKey>              AkEvents;                                      // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackAkRTPC
// 0x0010 (0x00E0 - 0x00F0)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class FString                                      Param;                                         // 0x00E0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0068 - 0x006C)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                            // 0x0068 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x0068 - 0x0068)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkLoadBank
// 0x0010 (0x0174 - 0x0184)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	uint32_t                                           Async : 1;                                     // 0x0174 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint32_t                                           bWaitingCallback : 1;                          // 0x0174 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UAkBank*                                     Bank;                                          // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Signal;                                        // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostEvent
// 0x0018 (0x0174 - 0x018C)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	class FName                                        BoneName;                                      // 0x0174 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           bIgnoreVOSystem : 1;                           // 0x017C (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            Signal;                                        // 0x0180 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UAkEvent*                                    Event;                                         // 0x0184 (0x0008) [0x0000000000000001] (CPF_Edit)    

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0018 (0x0158 - 0x0170)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	class FName                                        BoneName;                                      // 0x0158 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class FString                                      Trigger;                                       // 0x0160 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0018 (0x0174 - 0x018C)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class FString                                      Param;                                         // 0x0174 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              Value;                                         // 0x0184 (0x0004) [0x0000000000000001] (CPF_Edit)    
	uint32_t                                           Running : 1;                                   // 0x0188 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetState
// 0x0020 (0x0158 - 0x0178)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class FString                                      StateGroup;                                    // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      State;                                         // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0020 (0x0158 - 0x0178)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class FString                                      SwitchGroup;                                   // 0x0158 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class FString                                      Switch;                                        // 0x0168 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		}

		return uClassPointer;
	};

};

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x0158 - 0x0158)
class USeqAct_AkStopAll : public USequenceAction
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
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
