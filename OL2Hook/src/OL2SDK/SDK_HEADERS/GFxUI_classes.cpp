/*
#############################################################################################
# Outlast 2 (OLGame) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.7
# ========================================================================================= #
# File: GFxUI_classes.cpp
# ========================================================================================= #
# Credits: ItsBranK, TheFeckless
# Links: www.github.com/CodeRedModding/CodeRed-Generator
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GFxUI.GFxFSCmdHandler.FSCommand
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler.FSCommand");
	}

	UGFxFSCmdHandler_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	FSCommand_Params.Movie = Movie;
	FSCommand_Params.Event = Event;
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
}

// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::CloseAllMoviePlayers()
{
	static UFunction* uFnCloseAllMoviePlayers = nullptr;

	if (!uFnCloseAllMoviePlayers)
	{
		uFnCloseAllMoviePlayers = UFunction::FindFunction("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");
	}

	UGFxInteraction_execCloseAllMoviePlayers_Params CloseAllMoviePlayers_Params;
	memset(&CloseAllMoviePlayers_Params, 0, sizeof(CloseAllMoviePlayers_Params));

	this->ProcessEvent(uFnCloseAllMoviePlayers, &CloseAllMoviePlayers_Params, nullptr);
}

// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static UFunction* uFnNotifySplitscreenLayoutChanged = nullptr;

	if (!uFnNotifySplitscreenLayoutChanged)
	{
		uFnNotifySplitscreenLayoutChanged = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");
	}

	UGFxInteraction_execNotifySplitscreenLayoutChanged_Params NotifySplitscreenLayoutChanged_Params;
	memset(&NotifySplitscreenLayoutChanged_Params, 0, sizeof(NotifySplitscreenLayoutChanged_Params));

	this->ProcessEvent(uFnNotifySplitscreenLayoutChanged, &NotifySplitscreenLayoutChanged_Params, nullptr);
}

// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static UFunction* uFnNotifyPlayerRemoved = nullptr;

	if (!uFnNotifyPlayerRemoved)
	{
		uFnNotifyPlayerRemoved = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");
	}

	UGFxInteraction_execNotifyPlayerRemoved_Params NotifyPlayerRemoved_Params;
	memset(&NotifyPlayerRemoved_Params, 0, sizeof(NotifyPlayerRemoved_Params));
	NotifyPlayerRemoved_Params.PlayerIndex = PlayerIndex;
	NotifyPlayerRemoved_Params.RemovedPlayer = RemovedPlayer;

	this->ProcessEvent(uFnNotifyPlayerRemoved, &NotifyPlayerRemoved_Params, nullptr);
}

// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static UFunction* uFnNotifyPlayerAdded = nullptr;

	if (!uFnNotifyPlayerAdded)
	{
		uFnNotifyPlayerAdded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyPlayerAdded");
	}

	UGFxInteraction_execNotifyPlayerAdded_Params NotifyPlayerAdded_Params;
	memset(&NotifyPlayerAdded_Params, 0, sizeof(NotifyPlayerAdded_Params));
	NotifyPlayerAdded_Params.PlayerIndex = PlayerIndex;
	NotifyPlayerAdded_Params.AddedPlayer = AddedPlayer;

	this->ProcessEvent(uFnNotifyPlayerAdded, &NotifyPlayerAdded_Params, nullptr);
}

// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxInteraction::NotifyGameSessionEnded()
{
	static UFunction* uFnNotifyGameSessionEnded = nullptr;

	if (!uFnNotifyGameSessionEnded)
	{
		uFnNotifyGameSessionEnded = UFunction::FindFunction("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");
	}

	UGFxInteraction_execNotifyGameSessionEnded_Params NotifyGameSessionEnded_Params;
	memset(&NotifyGameSessionEnded_Params, 0, sizeof(NotifyGameSessionEnded_Params));

	this->ProcessEvent(uFnNotifyGameSessionEnded, &NotifyGameSessionEnded_Params, nullptr);
}

// Function GFxUI.GFxInteraction.GetFocusMovie
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int32_t ControllerId)
{
	static UFunction* uFnGetFocusMovie = nullptr;

	if (!uFnGetFocusMovie)
	{
		uFnGetFocusMovie = UFunction::FindFunction("Function GFxUI.GFxInteraction.GetFocusMovie");
	}

	UGFxInteraction_execGetFocusMovie_Params GetFocusMovie_Params;
	memset(&GetFocusMovie_Params, 0, sizeof(GetFocusMovie_Params));
	GetFocusMovie_Params.ControllerId = ControllerId;

	this->ProcessEvent(uFnGetFocusMovie, &GetFocusMovie_Params, nullptr);

	return GetFocusMovie_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static UFunction* uFnUpdateSplitscreenLayout = nullptr;

	if (!uFnUpdateSplitscreenLayout)
	{
		uFnUpdateSplitscreenLayout = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");
	}

	UGFxMoviePlayer_execUpdateSplitscreenLayout_Params UpdateSplitscreenLayout_Params;
	memset(&UpdateSplitscreenLayout_Params, 0, sizeof(UpdateSplitscreenLayout_Params));

	this->ProcessEvent(uFnUpdateSplitscreenLayout, &UpdateSplitscreenLayout_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityVisibilityEffect = nullptr;

	if (!uFnApplyPriorityVisibilityEffect)
	{
		uFnApplyPriorityVisibilityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");
	}

	UGFxMoviePlayer_execApplyPriorityVisibilityEffect_Params ApplyPriorityVisibilityEffect_Params;
	memset(&ApplyPriorityVisibilityEffect_Params, 0, sizeof(ApplyPriorityVisibilityEffect_Params));
	ApplyPriorityVisibilityEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityVisibilityEffect, &ApplyPriorityVisibilityEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// [0x00020000] (FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static UFunction* uFnApplyPriorityBlurEffect = nullptr;

	if (!uFnApplyPriorityBlurEffect)
	{
		uFnApplyPriorityBlurEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");
	}

	UGFxMoviePlayer_execApplyPriorityBlurEffect_Params ApplyPriorityBlurEffect_Params;
	memset(&ApplyPriorityBlurEffect_Params, 0, sizeof(ApplyPriorityBlurEffect_Params));
	ApplyPriorityBlurEffect_Params.bRemoveEffect = bRemoveEffect;

	this->ProcessEvent(uFnApplyPriorityBlurEffect, &ApplyPriorityBlurEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bRequestedBlurState            (CPF_Parm)
// uint32_t                       bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::eventApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static UFunction* uFnApplyPriorityEffect = nullptr;

	if (!uFnApplyPriorityEffect)
	{
		uFnApplyPriorityEffect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");
	}

	UGFxMoviePlayer_eventApplyPriorityEffect_Params ApplyPriorityEffect_Params;
	memset(&ApplyPriorityEffect_Params, 0, sizeof(ApplyPriorityEffect_Params));
	ApplyPriorityEffect_Params.bRequestedBlurState = bRequestedBlurState;
	ApplyPriorityEffect_Params.bRequestedHiddenState = bRequestedHiddenState;

	this->ProcessEvent(uFnApplyPriorityEffect, &ApplyPriorityEffect_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    EventName                      (CPF_Parm)
// class FName                    SoundThemeName                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::PlaySoundFromThemeW(const class FName& EventName, const class FName& SoundThemeName)
{
	static UFunction* uFnPlaySoundFromThemeW = nullptr;

	if (!uFnPlaySoundFromThemeW)
	{
		uFnPlaySoundFromThemeW = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");
	}

	UGFxMoviePlayer_execPlaySoundFromThemeW_Params PlaySoundFromThemeW_Params;
	memset(&PlaySoundFromThemeW_Params, 0, sizeof(PlaySoundFromThemeW_Params));
	memcpy_s(&PlaySoundFromThemeW_Params.EventName, sizeof(PlaySoundFromThemeW_Params.EventName), &EventName, sizeof(EventName));
	memcpy_s(&PlaySoundFromThemeW_Params.SoundThemeName, sizeof(PlaySoundFromThemeW_Params.SoundThemeName), &SoundThemeName, sizeof(SoundThemeName));

	this->ProcessEvent(uFnPlaySoundFromThemeW, &PlaySoundFromThemeW_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnFocusLost
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusLost(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusLost = nullptr;

	if (!uFnOnFocusLost)
	{
		uFnOnFocusLost = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusLost");
	}

	UGFxMoviePlayer_eventOnFocusLost_Params OnFocusLost_Params;
	memset(&OnFocusLost_Params, 0, sizeof(OnFocusLost_Params));
	OnFocusLost_Params.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent(uFnOnFocusLost, &OnFocusLost_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnFocusGained
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::eventOnFocusGained(int32_t LocalPlayerIndex)
{
	static UFunction* uFnOnFocusGained = nullptr;

	if (!uFnOnFocusGained)
	{
		uFnOnFocusGained = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnFocusGained");
	}

	UGFxMoviePlayer_eventOnFocusGained_Params OnFocusGained_Params;
	memset(&OnFocusGained_Params, 0, sizeof(OnFocusGained_Params));
	OnFocusGained_Params.LocalPlayerIndex = LocalPlayerIndex;

	this->ProcessEvent(uFnOnFocusGained, &OnFocusGained_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Command                        (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(const class FString& Command)
{
	static UFunction* uFnConsoleCommand = nullptr;

	if (!uFnConsoleCommand)
	{
		uFnConsoleCommand = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConsoleCommand");
	}

	UGFxMoviePlayer_execConsoleCommand_Params ConsoleCommand_Params;
	memset(&ConsoleCommand_Params, 0, sizeof(ConsoleCommand_Params));
	memcpy_s(&ConsoleCommand_Params.Command, sizeof(ConsoleCommand_Params.Command), &Command, sizeof(Command));

	this->ProcessEvent(uFnConsoleCommand, &ConsoleCommand_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.GetPC
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class APlayerController*       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::eventGetPC()
{
	static UFunction* uFnGetPC = nullptr;

	if (!uFnGetPC)
	{
		uFnGetPC = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetPC");
	}

	UGFxMoviePlayer_eventGetPC_Params GetPC_Params;
	memset(&GetPC_Params, 0, sizeof(GetPC_Params));

	this->ProcessEvent(uFnGetPC, &GetPC_Params, nullptr);

	return GetPC_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetLP
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::eventGetLP()
{
	static UFunction* uFnGetLP = nullptr;

	if (!uFnGetLP)
	{
		uFnGetLP = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetLP");
	}

	UGFxMoviePlayer_eventGetLP_Params GetLP_Params;
	memset(&GetLP_Params, 0, sizeof(GetLP_Params));

	this->ProcessEvent(uFnGetLP, &GetLP_Params, nullptr);

	return GetLP_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.Init
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Init");
	}

	UGFxMoviePlayer_execInit_Params Init_Params;
	memset(&Init_Params, 0, sizeof(Init_Params));
	Init_Params.LocPlay = LocPlay;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// class FName                    Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const class FName& Path)
{
	static UFunction* uFnSetWidgetPathBinding = nullptr;

	if (!uFnSetWidgetPathBinding)
	{
		uFnSetWidgetPathBinding = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");
	}

	UGFxMoviePlayer_execSetWidgetPathBinding_Params SetWidgetPathBinding_Params;
	memset(&SetWidgetPathBinding_Params, 0, sizeof(SetWidgetPathBinding_Params));
	SetWidgetPathBinding_Params.WidgetToBind = WidgetToBind;
	memcpy_s(&SetWidgetPathBinding_Params.Path, sizeof(SetWidgetPathBinding_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnSetWidgetPathBinding, &SetWidgetPathBinding_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventPostWidgetInit()
{
	static UFunction* uFnPostWidgetInit = nullptr;

	if (!uFnPostWidgetInit)
	{
		uFnPostWidgetInit = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostWidgetInit");
	}

	UGFxMoviePlayer_eventPostWidgetInit_Params PostWidgetInit_Params;
	memset(&PostWidgetInit_Params, 0, sizeof(PostWidgetInit_Params));

	this->ProcessEvent(uFnPostWidgetInit, &PostWidgetInit_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");
	}

	UGFxMoviePlayer_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetUnloaded_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxMoviePlayer::eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.WidgetInitialized");
	}

	UGFxMoviePlayer_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetInitialized_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ClassName                      (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(const class FString& ClassName)
{
	static UFunction* uFnActionScriptConstructor = nullptr;

	if (!uFnActionScriptConstructor)
	{
		uFnActionScriptConstructor = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");
	}

	UGFxMoviePlayer_execActionScriptConstructor_Params ActionScriptConstructor_Params;
	memset(&ActionScriptConstructor_Params, 0, sizeof(ActionScriptConstructor_Params));
	memcpy_s(&ActionScriptConstructor_Params.ClassName, sizeof(ActionScriptConstructor_Params.ClassName), &ClassName, sizeof(ClassName));

	this->ProcessEvent(uFnActionScriptConstructor, &ActionScriptConstructor_Params, nullptr);

	return ActionScriptConstructor_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(const class FString& Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptObject");
	}

	UGFxMoviePlayer_execActionScriptObject_Params ActionScriptObject_Params;
	memset(&ActionScriptObject_Params, 0, sizeof(ActionScriptObject_Params));
	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);

	return ActionScriptObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptString
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::ActionScriptString(const class FString& Path)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptString");
	}

	UGFxMoviePlayer_execActionScriptString_Params ActionScriptString_Params;
	memset(&ActionScriptString_Params, 0, sizeof(ActionScriptString_Params));
	memcpy_s(&ActionScriptString_Params.Path, sizeof(ActionScriptString_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);

	return ActionScriptString_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::ActionScriptFloat(const class FString& Path)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");
	}

	UGFxMoviePlayer_execActionScriptFloat_Params ActionScriptFloat_Params;
	memset(&ActionScriptFloat_Params, 0, sizeof(ActionScriptFloat_Params));
	memcpy_s(&ActionScriptFloat_Params.Path, sizeof(ActionScriptFloat_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);

	return ActionScriptFloat_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::ActionScriptInt(const class FString& Path)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptInt");
	}

	UGFxMoviePlayer_execActionScriptInt_Params ActionScriptInt_Params;
	memset(&ActionScriptInt_Params, 0, sizeof(ActionScriptInt_Params));
	memcpy_s(&ActionScriptInt_Params.Path, sizeof(ActionScriptInt_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);

	return ActionScriptInt_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(const class FString& Path)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");
	}

	UGFxMoviePlayer_execActionScriptVoid_Params ActionScriptVoid_Params;
	memset(&ActionScriptVoid_Params, 0, sizeof(ActionScriptVoid_Params));
	memcpy_s(&ActionScriptVoid_Params.Path, sizeof(ActionScriptVoid_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.Invoke
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FASValue>  args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(const class FString& method, const class TArray<struct FASValue>& args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Invoke");
	}

	UGFxMoviePlayer_execInvoke_Params Invoke_Params;
	memset(&Invoke_Params, 0, sizeof(Invoke_Params));
	memcpy_s(&Invoke_Params.method, sizeof(Invoke_Params.method), &method, sizeof(method));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);

	return Invoke_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Object                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");
	}

	UGFxMoviePlayer_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memset(&ActionScriptSetFunction_Params, 0, sizeof(ActionScriptSetFunction_Params));
	ActionScriptSetFunction_Params.Object = Object;
	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.CreateArray
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static UFunction* uFnCreateArray = nullptr;

	if (!uFnCreateArray)
	{
		uFnCreateArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateArray");
	}

	UGFxMoviePlayer_execCreateArray_Params CreateArray_Params;
	memset(&CreateArray_Params, 0, sizeof(CreateArray_Params));

	this->ProcessEvent(uFnCreateArray, &CreateArray_Params, nullptr);

	return CreateArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.CreateObject
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  ASClass                        (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)
// class TArray<struct FASValue>  args                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxMoviePlayer::CreateObject(const class FString& ASClass, class UClass* Type, const class TArray<struct FASValue>& args)
{
	static UFunction* uFnCreateObject = nullptr;

	if (!uFnCreateObject)
	{
		uFnCreateObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.CreateObject");
	}

	UGFxMoviePlayer_execCreateObject_Params CreateObject_Params;
	memset(&CreateObject_Params, 0, sizeof(CreateObject_Params));
	memcpy_s(&CreateObject_Params.ASClass, sizeof(CreateObject_Params.ASClass), &ASClass, sizeof(ASClass));
	CreateObject_Params.Type = Type;
	memcpy_s(&CreateObject_Params.args, sizeof(CreateObject_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnCreateObject, &CreateObject_Params, nullptr);

	return CreateObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<class FString>    Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableStringArray(const class FString& Path, int32_t Index, const class TArray<class FString>& Arg)
{
	static UFunction* uFnSetVariableStringArray = nullptr;

	if (!uFnSetVariableStringArray)
	{
		uFnSetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");
	}

	UGFxMoviePlayer_execSetVariableStringArray_Params SetVariableStringArray_Params;
	memset(&SetVariableStringArray_Params, 0, sizeof(SetVariableStringArray_Params));
	memcpy_s(&SetVariableStringArray_Params.Path, sizeof(SetVariableStringArray_Params.Path), &Path, sizeof(Path));
	SetVariableStringArray_Params.Index = Index;
	memcpy_s(&SetVariableStringArray_Params.Arg, sizeof(SetVariableStringArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableStringArray, &SetVariableStringArray_Params, nullptr);

	return SetVariableStringArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<float>            Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableFloatArray(const class FString& Path, int32_t Index, const class TArray<float>& Arg)
{
	static UFunction* uFnSetVariableFloatArray = nullptr;

	if (!uFnSetVariableFloatArray)
	{
		uFnSetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");
	}

	UGFxMoviePlayer_execSetVariableFloatArray_Params SetVariableFloatArray_Params;
	memset(&SetVariableFloatArray_Params, 0, sizeof(SetVariableFloatArray_Params));
	memcpy_s(&SetVariableFloatArray_Params.Path, sizeof(SetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	SetVariableFloatArray_Params.Index = Index;
	memcpy_s(&SetVariableFloatArray_Params.Arg, sizeof(SetVariableFloatArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableFloatArray, &SetVariableFloatArray_Params, nullptr);

	return SetVariableFloatArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<int32_t>          Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableIntArray(const class FString& Path, int32_t Index, const class TArray<int32_t>& Arg)
{
	static UFunction* uFnSetVariableIntArray = nullptr;

	if (!uFnSetVariableIntArray)
	{
		uFnSetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");
	}

	UGFxMoviePlayer_execSetVariableIntArray_Params SetVariableIntArray_Params;
	memset(&SetVariableIntArray_Params, 0, sizeof(SetVariableIntArray_Params));
	memcpy_s(&SetVariableIntArray_Params.Path, sizeof(SetVariableIntArray_Params.Path), &Path, sizeof(Path));
	SetVariableIntArray_Params.Index = Index;
	memcpy_s(&SetVariableIntArray_Params.Arg, sizeof(SetVariableIntArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableIntArray, &SetVariableIntArray_Params, nullptr);

	return SetVariableIntArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableArray
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<struct FASValue>  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::SetVariableArray(const class FString& Path, int32_t Index, const class TArray<struct FASValue>& Arg)
{
	static UFunction* uFnSetVariableArray = nullptr;

	if (!uFnSetVariableArray)
	{
		uFnSetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableArray");
	}

	UGFxMoviePlayer_execSetVariableArray_Params SetVariableArray_Params;
	memset(&SetVariableArray_Params, 0, sizeof(SetVariableArray_Params));
	memcpy_s(&SetVariableArray_Params.Path, sizeof(SetVariableArray_Params.Path), &Path, sizeof(Path));
	SetVariableArray_Params.Index = Index;
	memcpy_s(&SetVariableArray_Params.Arg, sizeof(SetVariableArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariableArray, &SetVariableArray_Params, nullptr);

	return SetVariableArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<class FString>    Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableStringArray(const class FString& Path, int32_t Index, class TArray<class FString>& Arg)
{
	static UFunction* uFnGetVariableStringArray = nullptr;

	if (!uFnGetVariableStringArray)
	{
		uFnGetVariableStringArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");
	}

	UGFxMoviePlayer_execGetVariableStringArray_Params GetVariableStringArray_Params;
	memset(&GetVariableStringArray_Params, 0, sizeof(GetVariableStringArray_Params));
	memcpy_s(&GetVariableStringArray_Params.Path, sizeof(GetVariableStringArray_Params.Path), &Path, sizeof(Path));
	GetVariableStringArray_Params.Index = Index;
	memcpy_s(&GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableStringArray, &GetVariableStringArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableStringArray_Params.Arg, sizeof(GetVariableStringArray_Params.Arg));

	return GetVariableStringArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<float>            Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableFloatArray(const class FString& Path, int32_t Index, class TArray<float>& Arg)
{
	static UFunction* uFnGetVariableFloatArray = nullptr;

	if (!uFnGetVariableFloatArray)
	{
		uFnGetVariableFloatArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");
	}

	UGFxMoviePlayer_execGetVariableFloatArray_Params GetVariableFloatArray_Params;
	memset(&GetVariableFloatArray_Params, 0, sizeof(GetVariableFloatArray_Params));
	memcpy_s(&GetVariableFloatArray_Params.Path, sizeof(GetVariableFloatArray_Params.Path), &Path, sizeof(Path));
	GetVariableFloatArray_Params.Index = Index;
	memcpy_s(&GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableFloatArray, &GetVariableFloatArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableFloatArray_Params.Arg, sizeof(GetVariableFloatArray_Params.Arg));

	return GetVariableFloatArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<int32_t>          Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableIntArray(const class FString& Path, int32_t Index, class TArray<int32_t>& Arg)
{
	static UFunction* uFnGetVariableIntArray = nullptr;

	if (!uFnGetVariableIntArray)
	{
		uFnGetVariableIntArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");
	}

	UGFxMoviePlayer_execGetVariableIntArray_Params GetVariableIntArray_Params;
	memset(&GetVariableIntArray_Params, 0, sizeof(GetVariableIntArray_Params));
	memcpy_s(&GetVariableIntArray_Params.Path, sizeof(GetVariableIntArray_Params.Path), &Path, sizeof(Path));
	GetVariableIntArray_Params.Index = Index;
	memcpy_s(&GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableIntArray, &GetVariableIntArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableIntArray_Params.Arg, sizeof(GetVariableIntArray_Params.Arg));

	return GetVariableIntArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableArray
// [0x00420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class TArray<struct FASValue>  Arg                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableArray(const class FString& Path, int32_t Index, class TArray<struct FASValue>& Arg)
{
	static UFunction* uFnGetVariableArray = nullptr;

	if (!uFnGetVariableArray)
	{
		uFnGetVariableArray = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableArray");
	}

	UGFxMoviePlayer_execGetVariableArray_Params GetVariableArray_Params;
	memset(&GetVariableArray_Params, 0, sizeof(GetVariableArray_Params));
	memcpy_s(&GetVariableArray_Params.Path, sizeof(GetVariableArray_Params.Path), &Path, sizeof(Path));
	GetVariableArray_Params.Index = Index;
	memcpy_s(&GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnGetVariableArray, &GetVariableArray_Params, nullptr);

	memcpy_s(&Arg, sizeof(Arg), &GetVariableArray_Params.Arg, sizeof(GetVariableArray_Params.Arg));

	return GetVariableArray_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetVariableObject
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              Object                         (CPF_Parm)

void UGFxMoviePlayer::SetVariableObject(const class FString& Path, class UGFxObject* Object)
{
	static UFunction* uFnSetVariableObject = nullptr;

	if (!uFnSetVariableObject)
	{
		uFnSetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableObject");
	}

	UGFxMoviePlayer_execSetVariableObject_Params SetVariableObject_Params;
	memset(&SetVariableObject_Params, 0, sizeof(SetVariableObject_Params));
	memcpy_s(&SetVariableObject_Params.Path, sizeof(SetVariableObject_Params.Path), &Path, sizeof(Path));
	SetVariableObject_Params.Object = Object;

	this->ProcessEvent(uFnSetVariableObject, &SetVariableObject_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetVariableString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(const class FString& Path, const class FString& S)
{
	static UFunction* uFnSetVariableString = nullptr;

	if (!uFnSetVariableString)
	{
		uFnSetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableString");
	}

	UGFxMoviePlayer_execSetVariableString_Params SetVariableString_Params;
	memset(&SetVariableString_Params, 0, sizeof(SetVariableString_Params));
	memcpy_s(&SetVariableString_Params.Path, sizeof(SetVariableString_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariableString_Params.S, sizeof(SetVariableString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetVariableString, &SetVariableString_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetVariableInt
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableInt(const class FString& Path, int32_t I)
{
	static UFunction* uFnSetVariableInt = nullptr;

	if (!uFnSetVariableInt)
	{
		uFnSetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableInt");
	}

	UGFxMoviePlayer_execSetVariableInt_Params SetVariableInt_Params;
	memset(&SetVariableInt_Params, 0, sizeof(SetVariableInt_Params));
	memcpy_s(&SetVariableInt_Params.Path, sizeof(SetVariableInt_Params.Path), &Path, sizeof(Path));
	SetVariableInt_Params.I = I;

	this->ProcessEvent(uFnSetVariableInt, &SetVariableInt_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableNumber(const class FString& Path, float F)
{
	static UFunction* uFnSetVariableNumber = nullptr;

	if (!uFnSetVariableNumber)
	{
		uFnSetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableNumber");
	}

	UGFxMoviePlayer_execSetVariableNumber_Params SetVariableNumber_Params;
	memset(&SetVariableNumber_Params, 0, sizeof(SetVariableNumber_Params));
	memcpy_s(&SetVariableNumber_Params.Path, sizeof(SetVariableNumber_Params.Path), &Path, sizeof(Path));
	SetVariableNumber_Params.F = F;

	this->ProcessEvent(uFnSetVariableNumber, &SetVariableNumber_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetVariableBool
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableBool(const class FString& Path, bool B)
{
	static UFunction* uFnSetVariableBool = nullptr;

	if (!uFnSetVariableBool)
	{
		uFnSetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariableBool");
	}

	UGFxMoviePlayer_execSetVariableBool_Params SetVariableBool_Params;
	memset(&SetVariableBool_Params, 0, sizeof(SetVariableBool_Params));
	memcpy_s(&SetVariableBool_Params.Path, sizeof(SetVariableBool_Params.Path), &Path, sizeof(Path));
	SetVariableBool_Params.B = B;

	this->ProcessEvent(uFnSetVariableBool, &SetVariableBool_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetVariable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariable(const class FString& Path, const struct FASValue& Arg)
{
	static UFunction* uFnSetVariable = nullptr;

	if (!uFnSetVariable)
	{
		uFnSetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetVariable");
	}

	UGFxMoviePlayer_execSetVariable_Params SetVariable_Params;
	memset(&SetVariable_Params, 0, sizeof(SetVariable_Params));
	memcpy_s(&SetVariable_Params.Path, sizeof(SetVariable_Params.Path), &Path, sizeof(Path));
	memcpy_s(&SetVariable_Params.Arg, sizeof(SetVariable_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetVariable, &SetVariable_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.GetVariableObject
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(const class FString& Path, class UClass* Type)
{
	static UFunction* uFnGetVariableObject = nullptr;

	if (!uFnGetVariableObject)
	{
		uFnGetVariableObject = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableObject");
	}

	UGFxMoviePlayer_execGetVariableObject_Params GetVariableObject_Params;
	memset(&GetVariableObject_Params, 0, sizeof(GetVariableObject_Params));
	memcpy_s(&GetVariableObject_Params.Path, sizeof(GetVariableObject_Params.Path), &Path, sizeof(Path));
	GetVariableObject_Params.Type = Type;

	this->ProcessEvent(uFnGetVariableObject, &GetVariableObject_Params, nullptr);

	return GetVariableObject_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableString
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxMoviePlayer::GetVariableString(const class FString& Path)
{
	static UFunction* uFnGetVariableString = nullptr;

	if (!uFnGetVariableString)
	{
		uFnGetVariableString = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableString");
	}

	UGFxMoviePlayer_execGetVariableString_Params GetVariableString_Params;
	memset(&GetVariableString_Params, 0, sizeof(GetVariableString_Params));
	memcpy_s(&GetVariableString_Params.Path, sizeof(GetVariableString_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableString, &GetVariableString_Params, nullptr);

	return GetVariableString_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableInt
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxMoviePlayer::GetVariableInt(const class FString& Path)
{
	static UFunction* uFnGetVariableInt = nullptr;

	if (!uFnGetVariableInt)
	{
		uFnGetVariableInt = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableInt");
	}

	UGFxMoviePlayer_execGetVariableInt_Params GetVariableInt_Params;
	memset(&GetVariableInt_Params, 0, sizeof(GetVariableInt_Params));
	memcpy_s(&GetVariableInt_Params.Path, sizeof(GetVariableInt_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableInt, &GetVariableInt_Params, nullptr);

	return GetVariableInt_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

float UGFxMoviePlayer::GetVariableNumber(const class FString& Path)
{
	static UFunction* uFnGetVariableNumber = nullptr;

	if (!uFnGetVariableNumber)
	{
		uFnGetVariableNumber = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableNumber");
	}

	UGFxMoviePlayer_execGetVariableNumber_Params GetVariableNumber_Params;
	memset(&GetVariableNumber_Params, 0, sizeof(GetVariableNumber_Params));
	memcpy_s(&GetVariableNumber_Params.Path, sizeof(GetVariableNumber_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableNumber, &GetVariableNumber_Params, nullptr);

	return GetVariableNumber_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariableBool
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

bool UGFxMoviePlayer::GetVariableBool(const class FString& Path)
{
	static UFunction* uFnGetVariableBool = nullptr;

	if (!uFnGetVariableBool)
	{
		uFnGetVariableBool = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariableBool");
	}

	UGFxMoviePlayer_execGetVariableBool_Params GetVariableBool_Params;
	memset(&GetVariableBool_Params, 0, sizeof(GetVariableBool_Params));
	memcpy_s(&GetVariableBool_Params.Path, sizeof(GetVariableBool_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariableBool, &GetVariableBool_Params, nullptr);

	return GetVariableBool_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetVariable
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(const class FString& Path)
{
	static UFunction* uFnGetVariable = nullptr;

	if (!uFnGetVariable)
	{
		uFnGetVariable = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVariable");
	}

	UGFxMoviePlayer_execGetVariable_Params GetVariable_Params;
	memset(&GetVariable_Params, 0, sizeof(GetVariable_Params));
	memcpy_s(&GetVariable_Params.Path, sizeof(GetVariable_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnGetVariable, &GetVariable_Params, nullptr);

	return GetVariable_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

int32_t UGFxMoviePlayer::GetAVMVersion()
{
	static UFunction* uFnGetAVMVersion = nullptr;

	if (!uFnGetAVMVersion)
	{
		uFnGetAVMVersion = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetAVMVersion");
	}

	UGFxMoviePlayer_execGetAVMVersion_Params GetAVMVersion_Params;
	memset(&GetAVMVersion_Params, 0, sizeof(GetAVMVersion_Params));

	this->ProcessEvent(uFnGetAVMVersion, &GetAVMVersion_Params, nullptr);

	return GetAVMVersion_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)
// class FName                    ButtonName                     (CPF_Parm)
// uint8_t                        InputEvent                     (CPF_Parm)

bool UGFxMoviePlayer::eventFilterButtonInput(int32_t ControllerId, const class FName& ButtonName, uint8_t InputEvent)
{
	static UFunction* uFnFilterButtonInput = nullptr;

	if (!uFnFilterButtonInput)
	{
		uFnFilterButtonInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FilterButtonInput");
	}

	UGFxMoviePlayer_eventFilterButtonInput_Params FilterButtonInput_Params;
	memset(&FilterButtonInput_Params, 0, sizeof(FilterButtonInput_Params));
	FilterButtonInput_Params.ControllerId = ControllerId;
	memcpy_s(&FilterButtonInput_Params.ButtonName, sizeof(FilterButtonInput_Params.ButtonName), &ButtonName, sizeof(ButtonName));
	FilterButtonInput_Params.InputEvent = InputEvent;

	this->ProcessEvent(uFnFilterButtonInput, &FilterButtonInput_Params, nullptr);

	return FilterButtonInput_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static UFunction* uFnFlushPlayerInput = nullptr;

	if (!uFnFlushPlayerInput)
	{
		uFnFlushPlayerInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");
	}

	UGFxMoviePlayer_execFlushPlayerInput_Params FlushPlayerInput_Params;
	memset(&FlushPlayerInput_Params, 0, sizeof(FlushPlayerInput_Params));
	FlushPlayerInput_Params.capturekeysonly = capturekeysonly;

	this->ProcessEvent(uFnFlushPlayerInput, &FlushPlayerInput_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static UFunction* uFnClearFocusIgnoreKeys = nullptr;

	if (!uFnClearFocusIgnoreKeys)
	{
		uFnClearFocusIgnoreKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");
	}

	UGFxMoviePlayer_execClearFocusIgnoreKeys_Params ClearFocusIgnoreKeys_Params;
	memset(&ClearFocusIgnoreKeys_Params, 0, sizeof(ClearFocusIgnoreKeys_Params));

	this->ProcessEvent(uFnClearFocusIgnoreKeys, &ClearFocusIgnoreKeys_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const class FName& Key)
{
	static UFunction* uFnAddFocusIgnoreKey = nullptr;

	if (!uFnAddFocusIgnoreKey)
	{
		uFnAddFocusIgnoreKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");
	}

	UGFxMoviePlayer_execAddFocusIgnoreKey_Params AddFocusIgnoreKey_Params;
	memset(&AddFocusIgnoreKey_Params, 0, sizeof(AddFocusIgnoreKey_Params));
	memcpy_s(&AddFocusIgnoreKey_Params.Key, sizeof(AddFocusIgnoreKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnAddFocusIgnoreKey, &AddFocusIgnoreKey_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static UFunction* uFnClearCaptureKeys = nullptr;

	if (!uFnClearCaptureKeys)
	{
		uFnClearCaptureKeys = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");
	}

	UGFxMoviePlayer_execClearCaptureKeys_Params ClearCaptureKeys_Params;
	memset(&ClearCaptureKeys_Params, 0, sizeof(ClearCaptureKeys_Params));

	this->ProcessEvent(uFnClearCaptureKeys, &ClearCaptureKeys_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(const class FName& Key)
{
	static UFunction* uFnAddCaptureKey = nullptr;

	if (!uFnAddCaptureKey)
	{
		uFnAddCaptureKey = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.AddCaptureKey");
	}

	UGFxMoviePlayer_execAddCaptureKey_Params AddCaptureKey_Params;
	memset(&AddCaptureKey_Params, 0, sizeof(AddCaptureKey_Params));
	memcpy_s(&AddCaptureKey_Params.Key, sizeof(AddCaptureKey_Params.Key), &Key, sizeof(Key));

	this->ProcessEvent(uFnAddCaptureKey, &AddCaptureKey_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetMovieConvertMovementInputToUIInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bConvertInput                  (CPF_Parm)

void UGFxMoviePlayer::SetMovieConvertMovementInputToUIInput(bool bConvertInput)
{
	static UFunction* uFnSetMovieConvertMovementInputToUIInput = nullptr;

	if (!uFnSetMovieConvertMovementInputToUIInput)
	{
		uFnSetMovieConvertMovementInputToUIInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieConvertMovementInputToUIInput");
	}

	UGFxMoviePlayer_execSetMovieConvertMovementInputToUIInput_Params SetMovieConvertMovementInputToUIInput_Params;
	memset(&SetMovieConvertMovementInputToUIInput_Params, 0, sizeof(SetMovieConvertMovementInputToUIInput_Params));
	SetMovieConvertMovementInputToUIInput_Params.bConvertInput = bConvertInput;

	this->ProcessEvent(uFnSetMovieConvertMovementInputToUIInput, &SetMovieConvertMovementInputToUIInput_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* uFnSetMovieCanReceiveInput = nullptr;

	if (!uFnSetMovieCanReceiveInput)
	{
		uFnSetMovieCanReceiveInput = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveInput_Params SetMovieCanReceiveInput_Params;
	memset(&SetMovieCanReceiveInput_Params, 0, sizeof(SetMovieCanReceiveInput_Params));
	SetMovieCanReceiveInput_Params.bCanReceiveInput = bCanReceiveInput;

	this->ProcessEvent(uFnSetMovieCanReceiveInput, &SetMovieCanReceiveInput_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* uFnSetMovieCanReceiveFocus = nullptr;

	if (!uFnSetMovieCanReceiveFocus)
	{
		uFnSetMovieCanReceiveFocus = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");
	}

	UGFxMoviePlayer_execSetMovieCanReceiveFocus_Params SetMovieCanReceiveFocus_Params;
	memset(&SetMovieCanReceiveFocus_Params, 0, sizeof(SetMovieCanReceiveFocus_Params));
	SetMovieCanReceiveFocus_Params.bCanReceiveFocus = bCanReceiveFocus;

	this->ProcessEvent(uFnSetMovieCanReceiveFocus, &SetMovieCanReceiveFocus_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matPersp                       (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix& matPersp)
{
	static UFunction* uFnSetPerspective3D = nullptr;

	if (!uFnSetPerspective3D)
	{
		uFnSetPerspective3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPerspective3D");
	}

	UGFxMoviePlayer_execSetPerspective3D_Params SetPerspective3D_Params;
	memset(&SetPerspective3D_Params, 0, sizeof(SetPerspective3D_Params));
	memcpy_s(&SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp), &matPersp, sizeof(matPersp));

	this->ProcessEvent(uFnSetPerspective3D, &SetPerspective3D_Params, nullptr);

	memcpy_s(&matPersp, sizeof(matPersp), &SetPerspective3D_Params.matPersp, sizeof(SetPerspective3D_Params.matPersp));
}

// Function GFxUI.GFxMoviePlayer.SetView3D
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 matView                        (CPF_Const | CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix& matView)
{
	static UFunction* uFnSetView3D = nullptr;

	if (!uFnSetView3D)
	{
		uFnSetView3D = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetView3D");
	}

	UGFxMoviePlayer_execSetView3D_Params SetView3D_Params;
	memset(&SetView3D_Params, 0, sizeof(SetView3D_Params));
	memcpy_s(&SetView3D_Params.matView, sizeof(SetView3D_Params.matView), &matView, sizeof(matView));

	this->ProcessEvent(uFnSetView3D, &SetView3D_Params, nullptr);

	memcpy_s(&matView, sizeof(matView), &SetView3D_Params.matView, sizeof(SetView3D_Params.matView));
}

// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// float                          x0                             (CPF_Parm | CPF_OutParm)
// float                          y0                             (CPF_Parm | CPF_OutParm)
// float                          X1                             (CPF_Parm | CPF_OutParm)
// float                          Y1                             (CPF_Parm | CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float& x0, float& y0, float& X1, float& Y1)
{
	static UFunction* uFnGetVisibleFrameRect = nullptr;

	if (!uFnGetVisibleFrameRect)
	{
		uFnGetVisibleFrameRect = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");
	}

	UGFxMoviePlayer_execGetVisibleFrameRect_Params GetVisibleFrameRect_Params;
	memset(&GetVisibleFrameRect_Params, 0, sizeof(GetVisibleFrameRect_Params));
	GetVisibleFrameRect_Params.x0 = x0;
	GetVisibleFrameRect_Params.y0 = y0;
	GetVisibleFrameRect_Params.X1 = X1;
	GetVisibleFrameRect_Params.Y1 = Y1;

	this->ProcessEvent(uFnGetVisibleFrameRect, &GetVisibleFrameRect_Params, nullptr);

	x0 = GetVisibleFrameRect_Params.x0;
	y0 = GetVisibleFrameRect_Params.y0;
	X1 = GetVisibleFrameRect_Params.X1;
	Y1 = GetVisibleFrameRect_Params.Y1;
}

// Function GFxUI.GFxMoviePlayer.SetAlignment
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(uint8_t A)
{
	static UFunction* uFnSetAlignment = nullptr;

	if (!uFnSetAlignment)
	{
		uFnSetAlignment = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetAlignment");
	}

	UGFxMoviePlayer_execSetAlignment_Params SetAlignment_Params;
	memset(&SetAlignment_Params, 0, sizeof(SetAlignment_Params));
	SetAlignment_Params.A = A;

	this->ProcessEvent(uFnSetAlignment, &SetAlignment_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(uint8_t SM)
{
	static UFunction* uFnSetViewScaleMode = nullptr;

	if (!uFnSetViewScaleMode)
	{
		uFnSetViewScaleMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");
	}

	UGFxMoviePlayer_execSetViewScaleMode_Params SetViewScaleMode_Params;
	memset(&SetViewScaleMode_Params, 0, sizeof(SetViewScaleMode_Params));
	SetViewScaleMode_Params.SM = SM;

	this->ProcessEvent(uFnSetViewScaleMode, &SetViewScaleMode_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetViewport
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        X                              (CPF_Parm)
// int32_t                        Y                              (CPF_Parm)
// int32_t                        Width                          (CPF_Parm)
// int32_t                        Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height)
{
	static UFunction* uFnSetViewport = nullptr;

	if (!uFnSetViewport)
	{
		uFnSetViewport = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetViewport");
	}

	UGFxMoviePlayer_execSetViewport_Params SetViewport_Params;
	memset(&SetViewport_Params, 0, sizeof(SetViewport_Params));
	SetViewport_Params.X = X;
	SetViewport_Params.Y = Y;
	SetViewport_Params.Width = Width;
	SetViewport_Params.Height = Height;

	this->ProcessEvent(uFnSetViewport, &SetViewport_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static UFunction* uFnGetGameViewportClient = nullptr;

	if (!uFnGetGameViewportClient)
	{
		uFnGetGameViewportClient = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");
	}

	UGFxMoviePlayer_execGetGameViewportClient_Params GetGameViewportClient_Params;
	memset(&GetGameViewportClient_Params, 0, sizeof(GetGameViewportClient_Params));

	this->ProcessEvent(uFnGetGameViewportClient, &GetGameViewportClient_Params, nullptr);

	return GetGameViewportClient_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetPriority
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(uint8_t NewPriority)
{
	static UFunction* uFnSetPriority = nullptr;

	if (!uFnSetPriority)
	{
		uFnSetPriority = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPriority");
	}

	UGFxMoviePlayer_execSetPriority_Params SetPriority_Params;
	memset(&SetPriority_Params, 0, sizeof(SetPriority_Params));
	SetPriority_Params.NewPriority = NewPriority;

	this->ProcessEvent(uFnSetPriority, &SetPriority_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Resource                       (CPF_Parm | CPF_NeedCtorLink)
// class UTexture*                Texture                        (CPF_Parm)

bool UGFxMoviePlayer::SetExternalTexture(const class FString& Resource, class UTexture* Texture)
{
	static UFunction* uFnSetExternalTexture = nullptr;

	if (!uFnSetExternalTexture)
	{
		uFnSetExternalTexture = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalTexture");
	}

	UGFxMoviePlayer_execSetExternalTexture_Params SetExternalTexture_Params;
	memset(&SetExternalTexture_Params, 0, sizeof(SetExternalTexture_Params));
	memcpy_s(&SetExternalTexture_Params.Resource, sizeof(SetExternalTexture_Params.Resource), &Resource, sizeof(Resource));
	SetExternalTexture_Params.Texture = Texture;

	this->ProcessEvent(uFnSetExternalTexture, &SetExternalTexture_Params, nullptr);

	return SetExternalTexture_Params.ReturnValue;
}

// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static UFunction* uFnSetExternalInterface = nullptr;

	if (!uFnSetExternalInterface)
	{
		uFnSetExternalInterface = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetExternalInterface");
	}

	UGFxMoviePlayer_execSetExternalInterface_Params SetExternalInterface_Params;
	memset(&SetExternalInterface_Params, 0, sizeof(SetExternalInterface_Params));
	SetExternalInterface_Params.H = H;

	this->ProcessEvent(uFnSetExternalInterface, &SetExternalInterface_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetTimingMode
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint8_t                        Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(uint8_t Mode)
{
	static UFunction* uFnSetTimingMode = nullptr;

	if (!uFnSetTimingMode)
	{
		uFnSetTimingMode = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetTimingMode");
	}

	UGFxMoviePlayer_execSetTimingMode_Params SetTimingMode_Params;
	memset(&SetTimingMode_Params, 0, sizeof(SetTimingMode_Params));
	SetTimingMode_Params.Mode = Mode;

	this->ProcessEvent(uFnSetTimingMode, &SetTimingMode_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static UFunction* uFnSetMovieInfo = nullptr;

	if (!uFnSetMovieInfo)
	{
		uFnSetMovieInfo = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetMovieInfo");
	}

	UGFxMoviePlayer_execSetMovieInfo_Params SetMovieInfo_Params;
	memset(&SetMovieInfo_Params, 0, sizeof(SetMovieInfo_Params));
	SetMovieInfo_Params.Data = Data;

	this->ProcessEvent(uFnSetMovieInfo, &SetMovieInfo_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// [0x00020803] (FUNC_Final | FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventConditionalClearPause()
{
	static UFunction* uFnConditionalClearPause = nullptr;

	if (!uFnConditionalClearPause)
	{
		uFnConditionalClearPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");
	}

	UGFxMoviePlayer_eventConditionalClearPause_Params ConditionalClearPause_Params;
	memset(&ConditionalClearPause_Params, 0, sizeof(ConditionalClearPause_Params));

	this->ProcessEvent(uFnConditionalClearPause, &ConditionalClearPause_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnCleanup
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnCleanup()
{
	static UFunction* uFnOnCleanup = nullptr;

	if (!uFnOnCleanup)
	{
		uFnOnCleanup = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnCleanup");
	}

	UGFxMoviePlayer_eventOnCleanup_Params OnCleanup_Params;
	memset(&OnCleanup_Params, 0, sizeof(OnCleanup_Params));

	this->ProcessEvent(uFnOnCleanup, &OnCleanup_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnClose
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGFxMoviePlayer::eventOnClose()
{
	static UFunction* uFnOnClose = nullptr;

	if (!uFnOnClose)
	{
		uFnOnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnClose");
	}

	UGFxMoviePlayer_eventOnClose_Params OnClose_Params;
	memset(&OnClose_Params, 0, sizeof(OnClose_Params));

	this->ProcessEvent(uFnOnClose, &OnClose_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.Close
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       Unload                         (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static UFunction* uFnClose = nullptr;

	if (!uFnClose)
	{
		uFnClose = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Close");
	}

	UGFxMoviePlayer_execClose_Params Close_Params;
	memset(&Close_Params, 0, sizeof(Close_Params));
	Close_Params.Unload = Unload;

	this->ProcessEvent(uFnClose, &Close_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.SetPause
// [0x00024400] (FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       bPausePlayback                 (CPF_OptionalParm | CPF_Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static UFunction* uFnSetPause = nullptr;

	if (!uFnSetPause)
	{
		uFnSetPause = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.SetPause");
	}

	UGFxMoviePlayer_execSetPause_Params SetPause_Params;
	memset(&SetPause_Params, 0, sizeof(SetPause_Params));
	SetPause_Params.bPausePlayback = bPausePlayback;

	this->ProcessEvent(uFnSetPause, &SetPause_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static UFunction* uFnOnPostAdvance = nullptr;

	if (!uFnOnPostAdvance)
	{
		uFnOnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.OnPostAdvance");
	}

	UGFxMoviePlayer_execOnPostAdvance_Params OnPostAdvance_Params;
	memset(&OnPostAdvance_Params, 0, sizeof(OnPostAdvance_Params));
	OnPostAdvance_Params.DeltaTime = DeltaTime;

	this->ProcessEvent(uFnOnPostAdvance, &OnPostAdvance_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.PostAdvance
// [0x00020400] (FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static UFunction* uFnPostAdvance = nullptr;

	if (!uFnPostAdvance)
	{
		uFnPostAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.PostAdvance");
	}

	UGFxMoviePlayer_execPostAdvance_Params PostAdvance_Params;
	memset(&PostAdvance_Params, 0, sizeof(PostAdvance_Params));
	PostAdvance_Params.DeltaTime = DeltaTime;

	this->ProcessEvent(uFnPostAdvance, &PostAdvance_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.Advance
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static UFunction* uFnAdvance = nullptr;

	if (!uFnAdvance)
	{
		uFnAdvance = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Advance");
	}

	UGFxMoviePlayer_execAdvance_Params Advance_Params;
	memset(&Advance_Params, 0, sizeof(Advance_Params));
	Advance_Params.Time = Time;

	this->ProcessEvent(uFnAdvance, &Advance_Params, nullptr);
}

// Function GFxUI.GFxMoviePlayer.Start
// [0x00024C00] (FUNC_Native | FUNC_Event | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint32_t                       StartPaused                    (CPF_OptionalParm | CPF_Parm)

bool UGFxMoviePlayer::eventStart(bool StartPaused)
{
	static UFunction* uFnStart = nullptr;

	if (!uFnStart)
	{
		uFnStart = UFunction::FindFunction("Function GFxUI.GFxMoviePlayer.Start");
	}

	UGFxMoviePlayer_eventStart_Params Start_Params;
	memset(&Start_Params, 0, sizeof(Start_Params));
	Start_Params.StartPaused = StartPaused;

	this->ProcessEvent(uFnStart, &Start_Params, nullptr);

	return Start_Params.ReturnValue;
}

// Function GFxUI.GFxObject.WidgetUnloaded
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetUnloaded(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetUnloaded = nullptr;

	if (!uFnWidgetUnloaded)
	{
		uFnWidgetUnloaded = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetUnloaded");
	}

	UGFxObject_eventWidgetUnloaded_Params WidgetUnloaded_Params;
	memset(&WidgetUnloaded_Params, 0, sizeof(WidgetUnloaded_Params));
	memcpy_s(&WidgetUnloaded_Params.WidgetName, sizeof(WidgetUnloaded_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetUnloaded_Params.WidgetPath, sizeof(WidgetUnloaded_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetUnloaded_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetUnloaded, &WidgetUnloaded_Params, nullptr);

	return WidgetUnloaded_Params.ReturnValue;
}

// Function GFxUI.GFxObject.WidgetInitialized
// [0x00020800] (FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FName                    WidgetName                     (CPF_Parm)
// class FName                    WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)

bool UGFxObject::eventWidgetInitialized(const class FName& WidgetName, const class FName& WidgetPath, class UGFxObject* Widget)
{
	static UFunction* uFnWidgetInitialized = nullptr;

	if (!uFnWidgetInitialized)
	{
		uFnWidgetInitialized = UFunction::FindFunction("Function GFxUI.GFxObject.WidgetInitialized");
	}

	UGFxObject_eventWidgetInitialized_Params WidgetInitialized_Params;
	memset(&WidgetInitialized_Params, 0, sizeof(WidgetInitialized_Params));
	memcpy_s(&WidgetInitialized_Params.WidgetName, sizeof(WidgetInitialized_Params.WidgetName), &WidgetName, sizeof(WidgetName));
	memcpy_s(&WidgetInitialized_Params.WidgetPath, sizeof(WidgetInitialized_Params.WidgetPath), &WidgetPath, sizeof(WidgetPath));
	WidgetInitialized_Params.Widget = Widget;

	this->ProcessEvent(uFnWidgetInitialized, &WidgetInitialized_Params, nullptr);

	return WidgetInitialized_Params.ReturnValue;
}

// Function GFxUI.GFxObject.AttachMovie
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  symbolname                     (CPF_Parm | CPF_NeedCtorLink)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::AttachMovie(const class FString& symbolname, const class FString& instancename, int32_t Depth, class UClass* Type)
{
	static UFunction* uFnAttachMovie = nullptr;

	if (!uFnAttachMovie)
	{
		uFnAttachMovie = UFunction::FindFunction("Function GFxUI.GFxObject.AttachMovie");
	}

	UGFxObject_execAttachMovie_Params AttachMovie_Params;
	memset(&AttachMovie_Params, 0, sizeof(AttachMovie_Params));
	memcpy_s(&AttachMovie_Params.symbolname, sizeof(AttachMovie_Params.symbolname), &symbolname, sizeof(symbolname));
	memcpy_s(&AttachMovie_Params.instancename, sizeof(AttachMovie_Params.instancename), &instancename, sizeof(instancename));
	AttachMovie_Params.Depth = Depth;
	AttachMovie_Params.Type = Type;

	this->ProcessEvent(uFnAttachMovie, &AttachMovie_Params, nullptr);

	return AttachMovie_Params.ReturnValue;
}

// Function GFxUI.GFxObject.CreateEmptyMovieClip
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  instancename                   (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Depth                          (CPF_OptionalParm | CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(const class FString& instancename, int32_t Depth, class UClass* Type)
{
	static UFunction* uFnCreateEmptyMovieClip = nullptr;

	if (!uFnCreateEmptyMovieClip)
	{
		uFnCreateEmptyMovieClip = UFunction::FindFunction("Function GFxUI.GFxObject.CreateEmptyMovieClip");
	}

	UGFxObject_execCreateEmptyMovieClip_Params CreateEmptyMovieClip_Params;
	memset(&CreateEmptyMovieClip_Params, 0, sizeof(CreateEmptyMovieClip_Params));
	memcpy_s(&CreateEmptyMovieClip_Params.instancename, sizeof(CreateEmptyMovieClip_Params.instancename), &instancename, sizeof(instancename));
	CreateEmptyMovieClip_Params.Depth = Depth;
	CreateEmptyMovieClip_Params.Type = Type;

	this->ProcessEvent(uFnCreateEmptyMovieClip, &CreateEmptyMovieClip_Params, nullptr);

	return CreateEmptyMovieClip_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GotoAndStopI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        frame                          (CPF_Parm)

void UGFxObject::GotoAndStopI(int32_t frame)
{
	static UFunction* uFnGotoAndStopI = nullptr;

	if (!uFnGotoAndStopI)
	{
		uFnGotoAndStopI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStopI");
	}

	UGFxObject_execGotoAndStopI_Params GotoAndStopI_Params;
	memset(&GotoAndStopI_Params, 0, sizeof(GotoAndStopI_Params));
	GotoAndStopI_Params.frame = frame;

	this->ProcessEvent(uFnGotoAndStopI, &GotoAndStopI_Params, nullptr);
}

// Function GFxUI.GFxObject.GotoAndStop
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndStop(const class FString& frame)
{
	static UFunction* uFnGotoAndStop = nullptr;

	if (!uFnGotoAndStop)
	{
		uFnGotoAndStop = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndStop");
	}

	UGFxObject_execGotoAndStop_Params GotoAndStop_Params;
	memset(&GotoAndStop_Params, 0, sizeof(GotoAndStop_Params));
	memcpy_s(&GotoAndStop_Params.frame, sizeof(GotoAndStop_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndStop, &GotoAndStop_Params, nullptr);
}

// Function GFxUI.GFxObject.GotoAndPlayI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        frame                          (CPF_Parm)

void UGFxObject::GotoAndPlayI(int32_t frame)
{
	static UFunction* uFnGotoAndPlayI = nullptr;

	if (!uFnGotoAndPlayI)
	{
		uFnGotoAndPlayI = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlayI");
	}

	UGFxObject_execGotoAndPlayI_Params GotoAndPlayI_Params;
	memset(&GotoAndPlayI_Params, 0, sizeof(GotoAndPlayI_Params));
	GotoAndPlayI_Params.frame = frame;

	this->ProcessEvent(uFnGotoAndPlayI, &GotoAndPlayI_Params, nullptr);
}

// Function GFxUI.GFxObject.GotoAndPlay
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  frame                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::GotoAndPlay(const class FString& frame)
{
	static UFunction* uFnGotoAndPlay = nullptr;

	if (!uFnGotoAndPlay)
	{
		uFnGotoAndPlay = UFunction::FindFunction("Function GFxUI.GFxObject.GotoAndPlay");
	}

	UGFxObject_execGotoAndPlay_Params GotoAndPlay_Params;
	memset(&GotoAndPlay_Params, 0, sizeof(GotoAndPlay_Params));
	memcpy_s(&GotoAndPlay_Params.frame, sizeof(GotoAndPlay_Params.frame), &frame, sizeof(frame));

	this->ProcessEvent(uFnGotoAndPlay, &GotoAndPlay_Params, nullptr);
}

// Function GFxUI.GFxObject.ActionScriptArray
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class TArray<class UGFxObject*> ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class TArray<class UGFxObject*> UGFxObject::ActionScriptArray(const class FString& Path)
{
	static UFunction* uFnActionScriptArray = nullptr;

	if (!uFnActionScriptArray)
	{
		uFnActionScriptArray = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptArray");
	}

	UGFxObject_execActionScriptArray_Params ActionScriptArray_Params;
	memset(&ActionScriptArray_Params, 0, sizeof(ActionScriptArray_Params));
	memcpy_s(&ActionScriptArray_Params.Path, sizeof(ActionScriptArray_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptArray, &ActionScriptArray_Params, nullptr);

	return ActionScriptArray_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Path                           (CPF_Parm | CPF_NeedCtorLink)

class UGFxObject* UGFxObject::ActionScriptObject(const class FString& Path)
{
	static UFunction* uFnActionScriptObject = nullptr;

	if (!uFnActionScriptObject)
	{
		uFnActionScriptObject = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptObject");
	}

	UGFxObject_execActionScriptObject_Params ActionScriptObject_Params;
	memset(&ActionScriptObject_Params, 0, sizeof(ActionScriptObject_Params));
	memcpy_s(&ActionScriptObject_Params.Path, sizeof(ActionScriptObject_Params.Path), &Path, sizeof(Path));

	this->ProcessEvent(uFnActionScriptObject, &ActionScriptObject_Params, nullptr);

	return ActionScriptObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::ActionScriptString(const class FString& method)
{
	static UFunction* uFnActionScriptString = nullptr;

	if (!uFnActionScriptString)
	{
		uFnActionScriptString = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptString");
	}

	UGFxObject_execActionScriptString_Params ActionScriptString_Params;
	memset(&ActionScriptString_Params, 0, sizeof(ActionScriptString_Params));
	memcpy_s(&ActionScriptString_Params.method, sizeof(ActionScriptString_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptString, &ActionScriptString_Params, nullptr);

	return ActionScriptString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::ActionScriptFloat(const class FString& method)
{
	static UFunction* uFnActionScriptFloat = nullptr;

	if (!uFnActionScriptFloat)
	{
		uFnActionScriptFloat = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptFloat");
	}

	UGFxObject_execActionScriptFloat_Params ActionScriptFloat_Params;
	memset(&ActionScriptFloat_Params, 0, sizeof(ActionScriptFloat_Params));
	memcpy_s(&ActionScriptFloat_Params.method, sizeof(ActionScriptFloat_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptFloat, &ActionScriptFloat_Params, nullptr);

	return ActionScriptFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::ActionScriptInt(const class FString& method)
{
	static UFunction* uFnActionScriptInt = nullptr;

	if (!uFnActionScriptInt)
	{
		uFnActionScriptInt = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptInt");
	}

	UGFxObject_execActionScriptInt_Params ActionScriptInt_Params;
	memset(&ActionScriptInt_Params, 0, sizeof(ActionScriptInt_Params));
	memcpy_s(&ActionScriptInt_Params.method, sizeof(ActionScriptInt_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptInt, &ActionScriptInt_Params, nullptr);

	return ActionScriptInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptVoid
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  method                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptVoid(const class FString& method)
{
	static UFunction* uFnActionScriptVoid = nullptr;

	if (!uFnActionScriptVoid)
	{
		uFnActionScriptVoid = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptVoid");
	}

	UGFxObject_execActionScriptVoid_Params ActionScriptVoid_Params;
	memset(&ActionScriptVoid_Params, 0, sizeof(ActionScriptVoid_Params));
	memcpy_s(&ActionScriptVoid_Params.method, sizeof(ActionScriptVoid_Params.method), &method, sizeof(method));

	this->ProcessEvent(uFnActionScriptVoid, &ActionScriptVoid_Params, nullptr);
}

// Function GFxUI.GFxObject.Invoke
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class TArray<struct FASValue>  args                           (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Invoke(const class FString& Member, const class TArray<struct FASValue>& args)
{
	static UFunction* uFnInvoke = nullptr;

	if (!uFnInvoke)
	{
		uFnInvoke = UFunction::FindFunction("Function GFxUI.GFxObject.Invoke");
	}

	UGFxObject_execInvoke_Params Invoke_Params;
	memset(&Invoke_Params, 0, sizeof(Invoke_Params));
	memcpy_s(&Invoke_Params.Member, sizeof(Invoke_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Invoke_Params.args, sizeof(Invoke_Params.args), &args, sizeof(args));

	this->ProcessEvent(uFnInvoke, &Invoke_Params, nullptr);

	return Invoke_Params.ReturnValue;
}

// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              Target                         (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunctionOn = nullptr;

	if (!uFnActionScriptSetFunctionOn)
	{
		uFnActionScriptSetFunctionOn = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");
	}

	UGFxObject_execActionScriptSetFunctionOn_Params ActionScriptSetFunctionOn_Params;
	memset(&ActionScriptSetFunctionOn_Params, 0, sizeof(ActionScriptSetFunctionOn_Params));
	ActionScriptSetFunctionOn_Params.Target = Target;
	memcpy_s(&ActionScriptSetFunctionOn_Params.Member, sizeof(ActionScriptSetFunctionOn_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunctionOn, &ActionScriptSetFunctionOn_Params, nullptr);
}

// Function GFxUI.GFxObject.ActionScriptSetFunction
// [0x00080401] (FUNC_Final | FUNC_Native | FUNC_Protected | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(const class FString& Member)
{
	static UFunction* uFnActionScriptSetFunction = nullptr;

	if (!uFnActionScriptSetFunction)
	{
		uFnActionScriptSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.ActionScriptSetFunction");
	}

	UGFxObject_execActionScriptSetFunction_Params ActionScriptSetFunction_Params;
	memset(&ActionScriptSetFunction_Params, 0, sizeof(ActionScriptSetFunction_Params));
	memcpy_s(&ActionScriptSetFunction_Params.Member, sizeof(ActionScriptSetFunction_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnActionScriptSetFunction, &ActionScriptSetFunction_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMemberString(int32_t Index, const class FString& Member, const class FString& S)
{
	static UFunction* uFnSetElementMemberString = nullptr;

	if (!uFnSetElementMemberString)
	{
		uFnSetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberString");
	}

	UGFxObject_execSetElementMemberString_Params SetElementMemberString_Params;
	memset(&SetElementMemberString_Params, 0, sizeof(SetElementMemberString_Params));
	SetElementMemberString_Params.Index = Index;
	memcpy_s(&SetElementMemberString_Params.Member, sizeof(SetElementMemberString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMemberString_Params.S, sizeof(SetElementMemberString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetElementMemberString, &SetElementMemberString_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementMemberInt(int32_t Index, const class FString& Member, int32_t I)
{
	static UFunction* uFnSetElementMemberInt = nullptr;

	if (!uFnSetElementMemberInt)
	{
		uFnSetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberInt");
	}

	UGFxObject_execSetElementMemberInt_Params SetElementMemberInt_Params;
	memset(&SetElementMemberInt_Params, 0, sizeof(SetElementMemberInt_Params));
	SetElementMemberInt_Params.Index = Index;
	memcpy_s(&SetElementMemberInt_Params.Member, sizeof(SetElementMemberInt_Params.Member), &Member, sizeof(Member));
	SetElementMemberInt_Params.I = I;

	this->ProcessEvent(uFnSetElementMemberInt, &SetElementMemberInt_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementMemberFloat(int32_t Index, const class FString& Member, float F)
{
	static UFunction* uFnSetElementMemberFloat = nullptr;

	if (!uFnSetElementMemberFloat)
	{
		uFnSetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberFloat");
	}

	UGFxObject_execSetElementMemberFloat_Params SetElementMemberFloat_Params;
	memset(&SetElementMemberFloat_Params, 0, sizeof(SetElementMemberFloat_Params));
	SetElementMemberFloat_Params.Index = Index;
	memcpy_s(&SetElementMemberFloat_Params.Member, sizeof(SetElementMemberFloat_Params.Member), &Member, sizeof(Member));
	SetElementMemberFloat_Params.F = F;

	this->ProcessEvent(uFnSetElementMemberFloat, &SetElementMemberFloat_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetElementMemberBool(int32_t Index, const class FString& Member, bool B)
{
	static UFunction* uFnSetElementMemberBool = nullptr;

	if (!uFnSetElementMemberBool)
	{
		uFnSetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberBool");
	}

	UGFxObject_execSetElementMemberBool_Params SetElementMemberBool_Params;
	memset(&SetElementMemberBool_Params, 0, sizeof(SetElementMemberBool_Params));
	SetElementMemberBool_Params.Index = Index;
	memcpy_s(&SetElementMemberBool_Params.Member, sizeof(SetElementMemberBool_Params.Member), &Member, sizeof(Member));
	SetElementMemberBool_Params.B = B;

	this->ProcessEvent(uFnSetElementMemberBool, &SetElementMemberBool_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMemberObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementMemberObject(int32_t Index, const class FString& Member, class UGFxObject* val)
{
	static UFunction* uFnSetElementMemberObject = nullptr;

	if (!uFnSetElementMemberObject)
	{
		uFnSetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMemberObject");
	}

	UGFxObject_execSetElementMemberObject_Params SetElementMemberObject_Params;
	memset(&SetElementMemberObject_Params, 0, sizeof(SetElementMemberObject_Params));
	SetElementMemberObject_Params.Index = Index;
	memcpy_s(&SetElementMemberObject_Params.Member, sizeof(SetElementMemberObject_Params.Member), &Member, sizeof(Member));
	SetElementMemberObject_Params.val = val;

	this->ProcessEvent(uFnSetElementMemberObject, &SetElementMemberObject_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementMember(int32_t Index, const class FString& Member, const struct FASValue& Arg)
{
	static UFunction* uFnSetElementMember = nullptr;

	if (!uFnSetElementMember)
	{
		uFnSetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementMember");
	}

	UGFxObject_execSetElementMember_Params SetElementMember_Params;
	memset(&SetElementMember_Params, 0, sizeof(SetElementMember_Params));
	SetElementMember_Params.Index = Index;
	memcpy_s(&SetElementMember_Params.Member, sizeof(SetElementMember_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetElementMember_Params.Arg, sizeof(SetElementMember_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetElementMember, &SetElementMember_Params, nullptr);
}

// Function GFxUI.GFxObject.GetElementMemberString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetElementMemberString(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberString = nullptr;

	if (!uFnGetElementMemberString)
	{
		uFnGetElementMemberString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberString");
	}

	UGFxObject_execGetElementMemberString_Params GetElementMemberString_Params;
	memset(&GetElementMemberString_Params, 0, sizeof(GetElementMemberString_Params));
	GetElementMemberString_Params.Index = Index;
	memcpy_s(&GetElementMemberString_Params.Member, sizeof(GetElementMemberString_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberString, &GetElementMemberString_Params, nullptr);

	return GetElementMemberString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetElementMemberInt(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberInt = nullptr;

	if (!uFnGetElementMemberInt)
	{
		uFnGetElementMemberInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberInt");
	}

	UGFxObject_execGetElementMemberInt_Params GetElementMemberInt_Params;
	memset(&GetElementMemberInt_Params, 0, sizeof(GetElementMemberInt_Params));
	GetElementMemberInt_Params.Index = Index;
	memcpy_s(&GetElementMemberInt_Params.Member, sizeof(GetElementMemberInt_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberInt, &GetElementMemberInt_Params, nullptr);

	return GetElementMemberInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetElementMemberFloat(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberFloat = nullptr;

	if (!uFnGetElementMemberFloat)
	{
		uFnGetElementMemberFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberFloat");
	}

	UGFxObject_execGetElementMemberFloat_Params GetElementMemberFloat_Params;
	memset(&GetElementMemberFloat_Params, 0, sizeof(GetElementMemberFloat_Params));
	GetElementMemberFloat_Params.Index = Index;
	memcpy_s(&GetElementMemberFloat_Params.Member, sizeof(GetElementMemberFloat_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberFloat, &GetElementMemberFloat_Params, nullptr);

	return GetElementMemberFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetElementMemberBool(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMemberBool = nullptr;

	if (!uFnGetElementMemberBool)
	{
		uFnGetElementMemberBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberBool");
	}

	UGFxObject_execGetElementMemberBool_Params GetElementMemberBool_Params;
	memset(&GetElementMemberBool_Params, 0, sizeof(GetElementMemberBool_Params));
	GetElementMemberBool_Params.Index = Index;
	memcpy_s(&GetElementMemberBool_Params.Member, sizeof(GetElementMemberBool_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMemberBool, &GetElementMemberBool_Params, nullptr);

	return GetElementMemberBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMemberObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementMemberObject(int32_t Index, const class FString& Member, class UClass* Type)
{
	static UFunction* uFnGetElementMemberObject = nullptr;

	if (!uFnGetElementMemberObject)
	{
		uFnGetElementMemberObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMemberObject");
	}

	UGFxObject_execGetElementMemberObject_Params GetElementMemberObject_Params;
	memset(&GetElementMemberObject_Params, 0, sizeof(GetElementMemberObject_Params));
	GetElementMemberObject_Params.Index = Index;
	memcpy_s(&GetElementMemberObject_Params.Member, sizeof(GetElementMemberObject_Params.Member), &Member, sizeof(Member));
	GetElementMemberObject_Params.Type = Type;

	this->ProcessEvent(uFnGetElementMemberObject, &GetElementMemberObject_Params, nullptr);

	return GetElementMemberObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementMember
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int32_t Index, const class FString& Member)
{
	static UFunction* uFnGetElementMember = nullptr;

	if (!uFnGetElementMember)
	{
		uFnGetElementMember = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementMember");
	}

	UGFxObject_execGetElementMember_Params GetElementMember_Params;
	memset(&GetElementMember_Params, 0, sizeof(GetElementMember_Params));
	GetElementMember_Params.Index = Index;
	memcpy_s(&GetElementMember_Params.Member, sizeof(GetElementMember_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetElementMember, &GetElementMember_Params, nullptr);

	return GetElementMember_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetElementColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int32_t Index, const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetElementColorTransform = nullptr;

	if (!uFnSetElementColorTransform)
	{
		uFnSetElementColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementColorTransform");
	}

	UGFxObject_execSetElementColorTransform_Params SetElementColorTransform_Params;
	memset(&SetElementColorTransform_Params, 0, sizeof(SetElementColorTransform_Params));
	SetElementColorTransform_Params.Index = Index;
	memcpy_s(&SetElementColorTransform_Params.cxform, sizeof(SetElementColorTransform_Params.cxform), &cxform, sizeof(cxform));

	this->ProcessEvent(uFnSetElementColorTransform, &SetElementColorTransform_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int32_t Index, float X, float Y)
{
	static UFunction* uFnSetElementPosition = nullptr;

	if (!uFnSetElementPosition)
	{
		uFnSetElementPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementPosition");
	}

	UGFxObject_execSetElementPosition_Params SetElementPosition_Params;
	memset(&SetElementPosition_Params, 0, sizeof(SetElementPosition_Params));
	SetElementPosition_Params.Index = Index;
	SetElementPosition_Params.X = X;
	SetElementPosition_Params.Y = Y;

	this->ProcessEvent(uFnSetElementPosition, &SetElementPosition_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// uint32_t                       Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int32_t Index, bool Visible)
{
	static UFunction* uFnSetElementVisible = nullptr;

	if (!uFnSetElementVisible)
	{
		uFnSetElementVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementVisible");
	}

	UGFxObject_execSetElementVisible_Params SetElementVisible_Params;
	memset(&SetElementVisible_Params, 0, sizeof(SetElementVisible_Params));
	SetElementVisible_Params.Index = Index;
	SetElementVisible_Params.Visible = Visible;

	this->ProcessEvent(uFnSetElementVisible, &SetElementVisible_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int32_t Index, const struct FMatrix& M)
{
	static UFunction* uFnSetElementDisplayMatrix = nullptr;

	if (!uFnSetElementDisplayMatrix)
	{
		uFnSetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayMatrix");
	}

	UGFxObject_execSetElementDisplayMatrix_Params SetElementDisplayMatrix_Params;
	memset(&SetElementDisplayMatrix_Params, 0, sizeof(SetElementDisplayMatrix_Params));
	SetElementDisplayMatrix_Params.Index = Index;
	memcpy_s(&SetElementDisplayMatrix_Params.M, sizeof(SetElementDisplayMatrix_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetElementDisplayMatrix, &SetElementDisplayMatrix_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int32_t Index, const struct FASDisplayInfo& D)
{
	static UFunction* uFnSetElementDisplayInfo = nullptr;

	if (!uFnSetElementDisplayInfo)
	{
		uFnSetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementDisplayInfo");
	}

	UGFxObject_execSetElementDisplayInfo_Params SetElementDisplayInfo_Params;
	memset(&SetElementDisplayInfo_Params, 0, sizeof(SetElementDisplayInfo_Params));
	SetElementDisplayInfo_Params.Index = Index;
	memcpy_s(&SetElementDisplayInfo_Params.D, sizeof(SetElementDisplayInfo_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnSetElementDisplayInfo, &SetElementDisplayInfo_Params, nullptr);
}

// Function GFxUI.GFxObject.GetElementDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int32_t Index)
{
	static UFunction* uFnGetElementDisplayMatrix = nullptr;

	if (!uFnGetElementDisplayMatrix)
	{
		uFnGetElementDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayMatrix");
	}

	UGFxObject_execGetElementDisplayMatrix_Params GetElementDisplayMatrix_Params;
	memset(&GetElementDisplayMatrix_Params, 0, sizeof(GetElementDisplayMatrix_Params));
	GetElementDisplayMatrix_Params.Index = Index;

	this->ProcessEvent(uFnGetElementDisplayMatrix, &GetElementDisplayMatrix_Params, nullptr);

	return GetElementDisplayMatrix_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int32_t Index)
{
	static UFunction* uFnGetElementDisplayInfo = nullptr;

	if (!uFnGetElementDisplayInfo)
	{
		uFnGetElementDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementDisplayInfo");
	}

	UGFxObject_execGetElementDisplayInfo_Params GetElementDisplayInfo_Params;
	memset(&GetElementDisplayInfo_Params, 0, sizeof(GetElementDisplayInfo_Params));
	GetElementDisplayInfo_Params.Index = Index;

	this->ProcessEvent(uFnGetElementDisplayInfo, &GetElementDisplayInfo_Params, nullptr);

	return GetElementDisplayInfo_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElementString(int32_t Index, const class FString& S)
{
	static UFunction* uFnSetElementString = nullptr;

	if (!uFnSetElementString)
	{
		uFnSetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementString");
	}

	UGFxObject_execSetElementString_Params SetElementString_Params;
	memset(&SetElementString_Params, 0, sizeof(SetElementString_Params));
	SetElementString_Params.Index = Index;
	memcpy_s(&SetElementString_Params.S, sizeof(SetElementString_Params.S), &S, sizeof(S));

	this->ProcessEvent(uFnSetElementString, &SetElementString_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetElementInt(int32_t Index, int32_t I)
{
	static UFunction* uFnSetElementInt = nullptr;

	if (!uFnSetElementInt)
	{
		uFnSetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementInt");
	}

	UGFxObject_execSetElementInt_Params SetElementInt_Params;
	memset(&SetElementInt_Params, 0, sizeof(SetElementInt_Params));
	SetElementInt_Params.Index = Index;
	SetElementInt_Params.I = I;

	this->ProcessEvent(uFnSetElementInt, &SetElementInt_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int32_t Index, float F)
{
	static UFunction* uFnSetElementFloat = nullptr;

	if (!uFnSetElementFloat)
	{
		uFnSetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementFloat");
	}

	UGFxObject_execSetElementFloat_Params SetElementFloat_Params;
	memset(&SetElementFloat_Params, 0, sizeof(SetElementFloat_Params));
	SetElementFloat_Params.Index = Index;
	SetElementFloat_Params.F = F;

	this->ProcessEvent(uFnSetElementFloat, &SetElementFloat_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetElementBool(int32_t Index, bool B)
{
	static UFunction* uFnSetElementBool = nullptr;

	if (!uFnSetElementBool)
	{
		uFnSetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementBool");
	}

	UGFxObject_execSetElementBool_Params SetElementBool_Params;
	memset(&SetElementBool_Params, 0, sizeof(SetElementBool_Params));
	SetElementBool_Params.Index = Index;
	SetElementBool_Params.B = B;

	this->ProcessEvent(uFnSetElementBool, &SetElementBool_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElementObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int32_t Index, class UGFxObject* val)
{
	static UFunction* uFnSetElementObject = nullptr;

	if (!uFnSetElementObject)
	{
		uFnSetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetElementObject");
	}

	UGFxObject_execSetElementObject_Params SetElementObject_Params;
	memset(&SetElementObject_Params, 0, sizeof(SetElementObject_Params));
	SetElementObject_Params.Index = Index;
	SetElementObject_Params.val = val;

	this->ProcessEvent(uFnSetElementObject, &SetElementObject_Params, nullptr);
}

// Function GFxUI.GFxObject.SetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        Index                          (CPF_Parm)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::SetElement(int32_t Index, const struct FASValue& Arg)
{
	static UFunction* uFnSetElement = nullptr;

	if (!uFnSetElement)
	{
		uFnSetElement = UFunction::FindFunction("Function GFxUI.GFxObject.SetElement");
	}

	UGFxObject_execSetElement_Params SetElement_Params;
	memset(&SetElement_Params, 0, sizeof(SetElement_Params));
	SetElement_Params.Index = Index;
	memcpy_s(&SetElement_Params.Arg, sizeof(SetElement_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSetElement, &SetElement_Params, nullptr);
}

// Function GFxUI.GFxObject.GetElementString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

class FString UGFxObject::GetElementString(int32_t Index)
{
	static UFunction* uFnGetElementString = nullptr;

	if (!uFnGetElementString)
	{
		uFnGetElementString = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementString");
	}

	UGFxObject_execGetElementString_Params GetElementString_Params;
	memset(&GetElementString_Params, 0, sizeof(GetElementString_Params));
	GetElementString_Params.Index = Index;

	this->ProcessEvent(uFnGetElementString, &GetElementString_Params, nullptr);

	return GetElementString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

int32_t UGFxObject::GetElementInt(int32_t Index)
{
	static UFunction* uFnGetElementInt = nullptr;

	if (!uFnGetElementInt)
	{
		uFnGetElementInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementInt");
	}

	UGFxObject_execGetElementInt_Params GetElementInt_Params;
	memset(&GetElementInt_Params, 0, sizeof(GetElementInt_Params));
	GetElementInt_Params.Index = Index;

	this->ProcessEvent(uFnGetElementInt, &GetElementInt_Params, nullptr);

	return GetElementInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

float UGFxObject::GetElementFloat(int32_t Index)
{
	static UFunction* uFnGetElementFloat = nullptr;

	if (!uFnGetElementFloat)
	{
		uFnGetElementFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementFloat");
	}

	UGFxObject_execGetElementFloat_Params GetElementFloat_Params;
	memset(&GetElementFloat_Params, 0, sizeof(GetElementFloat_Params));
	GetElementFloat_Params.Index = Index;

	this->ProcessEvent(uFnGetElementFloat, &GetElementFloat_Params, nullptr);

	return GetElementFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)

bool UGFxObject::GetElementBool(int32_t Index)
{
	static UFunction* uFnGetElementBool = nullptr;

	if (!uFnGetElementBool)
	{
		uFnGetElementBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementBool");
	}

	UGFxObject_execGetElementBool_Params GetElementBool_Params;
	memset(&GetElementBool_Params, 0, sizeof(GetElementBool_Params));
	GetElementBool_Params.Index = Index;

	this->ProcessEvent(uFnGetElementBool, &GetElementBool_Params, nullptr);

	return GetElementBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElementObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetElementObject(int32_t Index, class UClass* Type)
{
	static UFunction* uFnGetElementObject = nullptr;

	if (!uFnGetElementObject)
	{
		uFnGetElementObject = UFunction::FindFunction("Function GFxUI.GFxObject.GetElementObject");
	}

	UGFxObject_execGetElementObject_Params GetElementObject_Params;
	memset(&GetElementObject_Params, 0, sizeof(GetElementObject_Params));
	GetElementObject_Params.Index = Index;
	GetElementObject_Params.Type = Type;

	this->ProcessEvent(uFnGetElementObject, &GetElementObject_Params, nullptr);

	return GetElementObject_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetElement
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        Index                          (CPF_Parm)

struct FASValue UGFxObject::GetElement(int32_t Index)
{
	static UFunction* uFnGetElement = nullptr;

	if (!uFnGetElement)
	{
		uFnGetElement = UFunction::FindFunction("Function GFxUI.GFxObject.GetElement");
	}

	UGFxObject_execGetElement_Params GetElement_Params;
	memset(&GetElement_Params, 0, sizeof(GetElement_Params));
	GetElement_Params.Index = Index;

	this->ProcessEvent(uFnGetElement, &GetElement_Params, nullptr);

	return GetElement_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetText
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Text                           (CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetText(const class FString& Text, class UTranslationContext* InContext)
{
	static UFunction* uFnSetText = nullptr;

	if (!uFnSetText)
	{
		uFnSetText = UFunction::FindFunction("Function GFxUI.GFxObject.SetText");
	}

	UGFxObject_execSetText_Params SetText_Params;
	memset(&SetText_Params, 0, sizeof(SetText_Params));
	memcpy_s(&SetText_Params.Text, sizeof(SetText_Params.Text), &Text, sizeof(Text));
	SetText_Params.InContext = InContext;

	this->ProcessEvent(uFnSetText, &SetText_Params, nullptr);
}

// Function GFxUI.GFxObject.GetText
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

class FString UGFxObject::GetText()
{
	static UFunction* uFnGetText = nullptr;

	if (!uFnGetText)
	{
		uFnGetText = UFunction::FindFunction("Function GFxUI.GFxObject.GetText");
	}

	UGFxObject_execGetText_Params GetText_Params;
	memset(&GetText_Params, 0, sizeof(GetText_Params));

	this->ProcessEvent(uFnGetText, &GetText_Params, nullptr);

	return GetText_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetVisible
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// uint32_t                       Visible                        (CPF_Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static UFunction* uFnSetVisible = nullptr;

	if (!uFnSetVisible)
	{
		uFnSetVisible = UFunction::FindFunction("Function GFxUI.GFxObject.SetVisible");
	}

	UGFxObject_execSetVisible_Params SetVisible_Params;
	memset(&SetVisible_Params, 0, sizeof(SetVisible_Params));
	SetVisible_Params.Visible = Visible;

	this->ProcessEvent(uFnSetVisible, &SetVisible_Params, nullptr);
}

// Function GFxUI.GFxObject.SetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix3D = nullptr;

	if (!uFnSetDisplayMatrix3D)
	{
		uFnSetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix3D");
	}

	UGFxObject_execSetDisplayMatrix3D_Params SetDisplayMatrix3D_Params;
	memset(&SetDisplayMatrix3D_Params, 0, sizeof(SetDisplayMatrix3D_Params));
	memcpy_s(&SetDisplayMatrix3D_Params.M, sizeof(SetDisplayMatrix3D_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetDisplayMatrix3D, &SetDisplayMatrix3D_Params, nullptr);
}

// Function GFxUI.GFxObject.SetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static UFunction* uFnSetDisplayMatrix = nullptr;

	if (!uFnSetDisplayMatrix)
	{
		uFnSetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayMatrix");
	}

	UGFxObject_execSetDisplayMatrix_Params SetDisplayMatrix_Params;
	memset(&SetDisplayMatrix_Params, 0, sizeof(SetDisplayMatrix_Params));
	memcpy_s(&SetDisplayMatrix_Params.M, sizeof(SetDisplayMatrix_Params.M), &M, sizeof(M));

	this->ProcessEvent(uFnSetDisplayMatrix, &SetDisplayMatrix_Params, nullptr);
}

// Function GFxUI.GFxObject.SetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static UFunction* uFnSetColorTransform = nullptr;

	if (!uFnSetColorTransform)
	{
		uFnSetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.SetColorTransform");
	}

	UGFxObject_execSetColorTransform_Params SetColorTransform_Params;
	memset(&SetColorTransform_Params, 0, sizeof(SetColorTransform_Params));
	memcpy_s(&SetColorTransform_Params.cxform, sizeof(SetColorTransform_Params.cxform), &cxform, sizeof(cxform));

	this->ProcessEvent(uFnSetColorTransform, &SetColorTransform_Params, nullptr);
}

// Function GFxUI.GFxObject.SetPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* uFnSetPosition = nullptr;

	if (!uFnSetPosition)
	{
		uFnSetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.SetPosition");
	}

	UGFxObject_execSetPosition_Params SetPosition_Params;
	memset(&SetPosition_Params, 0, sizeof(SetPosition_Params));
	SetPosition_Params.X = X;
	SetPosition_Params.Y = Y;

	this->ProcessEvent(uFnSetPosition, &SetPosition_Params, nullptr);
}

// Function GFxUI.GFxObject.SetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& D)
{
	static UFunction* uFnSetDisplayInfo = nullptr;

	if (!uFnSetDisplayInfo)
	{
		uFnSetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.SetDisplayInfo");
	}

	UGFxObject_execSetDisplayInfo_Params SetDisplayInfo_Params;
	memset(&SetDisplayInfo_Params, 0, sizeof(SetDisplayInfo_Params));
	memcpy_s(&SetDisplayInfo_Params.D, sizeof(SetDisplayInfo_Params.D), &D, sizeof(D));

	this->ProcessEvent(uFnSetDisplayInfo, &SetDisplayInfo_Params, nullptr);
}

// Function GFxUI.GFxObject.GetDisplayMatrix3D
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static UFunction* uFnGetDisplayMatrix3D = nullptr;

	if (!uFnGetDisplayMatrix3D)
	{
		uFnGetDisplayMatrix3D = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix3D");
	}

	UGFxObject_execGetDisplayMatrix3D_Params GetDisplayMatrix3D_Params;
	memset(&GetDisplayMatrix3D_Params, 0, sizeof(GetDisplayMatrix3D_Params));

	this->ProcessEvent(uFnGetDisplayMatrix3D, &GetDisplayMatrix3D_Params, nullptr);

	return GetDisplayMatrix3D_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetDisplayMatrix
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FMatrix                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static UFunction* uFnGetDisplayMatrix = nullptr;

	if (!uFnGetDisplayMatrix)
	{
		uFnGetDisplayMatrix = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayMatrix");
	}

	UGFxObject_execGetDisplayMatrix_Params GetDisplayMatrix_Params;
	memset(&GetDisplayMatrix_Params, 0, sizeof(GetDisplayMatrix_Params));

	this->ProcessEvent(uFnGetDisplayMatrix, &GetDisplayMatrix_Params, nullptr);

	return GetDisplayMatrix_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetColorTransform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASColorTransform       ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* uFnGetColorTransform = nullptr;

	if (!uFnGetColorTransform)
	{
		uFnGetColorTransform = UFunction::FindFunction("Function GFxUI.GFxObject.GetColorTransform");
	}

	UGFxObject_execGetColorTransform_Params GetColorTransform_Params;
	memset(&GetColorTransform_Params, 0, sizeof(GetColorTransform_Params));

	this->ProcessEvent(uFnGetColorTransform, &GetColorTransform_Params, nullptr);

	return GetColorTransform_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetPosition
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          X                              (CPF_Parm | CPF_OutParm)
// float                          Y                              (CPF_Parm | CPF_OutParm)

bool UGFxObject::GetPosition(float& X, float& Y)
{
	static UFunction* uFnGetPosition = nullptr;

	if (!uFnGetPosition)
	{
		uFnGetPosition = UFunction::FindFunction("Function GFxUI.GFxObject.GetPosition");
	}

	UGFxObject_execGetPosition_Params GetPosition_Params;
	memset(&GetPosition_Params, 0, sizeof(GetPosition_Params));
	GetPosition_Params.X = X;
	GetPosition_Params.Y = Y;

	this->ProcessEvent(uFnGetPosition, &GetPosition_Params, nullptr);

	X = GetPosition_Params.X;
	Y = GetPosition_Params.Y;

	return GetPosition_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetDisplayInfo
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* uFnGetDisplayInfo = nullptr;

	if (!uFnGetDisplayInfo)
	{
		uFnGetDisplayInfo = UFunction::FindFunction("Function GFxUI.GFxObject.GetDisplayInfo");
	}

	UGFxObject_execGetDisplayInfo_Params GetDisplayInfo_Params;
	memset(&GetDisplayInfo_Params, 0, sizeof(GetDisplayInfo_Params));

	this->ProcessEvent(uFnGetDisplayInfo, &GetDisplayInfo_Params, nullptr);

	return GetDisplayInfo_Params.ReturnValue;
}

// Function GFxUI.GFxObject.TranslateString
// [0x00026400] (FUNC_Native | FUNC_Static | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  StringToTranslate              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

class FString UGFxObject::TranslateString(const class FString& StringToTranslate, class UTranslationContext* InContext)
{
	static UFunction* uFnTranslateString = nullptr;

	if (!uFnTranslateString)
	{
		uFnTranslateString = UFunction::FindFunction("Function GFxUI.GFxObject.TranslateString");
	}

	UGFxObject_execTranslateString_Params TranslateString_Params;
	memset(&TranslateString_Params, 0, sizeof(TranslateString_Params));
	memcpy_s(&TranslateString_Params.StringToTranslate, sizeof(TranslateString_Params.StringToTranslate), &StringToTranslate, sizeof(StringToTranslate));
	TranslateString_Params.InContext = InContext;

	UGFxObject::StaticClass()->ProcessEvent(uFnTranslateString, &TranslateString_Params, nullptr);

	return TranslateString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.SetFunction
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UObject*                 context                        (CPF_Parm)
// class FName                    fname                          (CPF_Parm)

void UGFxObject::SetFunction(const class FString& Member, class UObject* context, const class FName& fname)
{
	static UFunction* uFnSetFunction = nullptr;

	if (!uFnSetFunction)
	{
		uFnSetFunction = UFunction::FindFunction("Function GFxUI.GFxObject.SetFunction");
	}

	UGFxObject_execSetFunction_Params SetFunction_Params;
	memset(&SetFunction_Params, 0, sizeof(SetFunction_Params));
	memcpy_s(&SetFunction_Params.Member, sizeof(SetFunction_Params.Member), &Member, sizeof(Member));
	SetFunction_Params.context = context;
	memcpy_s(&SetFunction_Params.fname, sizeof(SetFunction_Params.fname), &fname, sizeof(fname));

	this->ProcessEvent(uFnSetFunction, &SetFunction_Params, nullptr);
}

// Function GFxUI.GFxObject.SetObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetObject(const class FString& Member, class UGFxObject* val)
{
	static UFunction* uFnSetObject = nullptr;

	if (!uFnSetObject)
	{
		uFnSetObject = UFunction::FindFunction("Function GFxUI.GFxObject.SetObject");
	}

	UGFxObject_execSetObject_Params SetObject_Params;
	memset(&SetObject_Params, 0, sizeof(SetObject_Params));
	memcpy_s(&SetObject_Params.Member, sizeof(SetObject_Params.Member), &Member, sizeof(Member));
	SetObject_Params.val = val;

	this->ProcessEvent(uFnSetObject, &SetObject_Params, nullptr);
}

// Function GFxUI.GFxObject.SetString
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class FString                  S                              (CPF_Parm | CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm | CPF_Parm)

void UGFxObject::SetString(const class FString& Member, const class FString& S, class UTranslationContext* InContext)
{
	static UFunction* uFnSetString = nullptr;

	if (!uFnSetString)
	{
		uFnSetString = UFunction::FindFunction("Function GFxUI.GFxObject.SetString");
	}

	UGFxObject_execSetString_Params SetString_Params;
	memset(&SetString_Params, 0, sizeof(SetString_Params));
	memcpy_s(&SetString_Params.Member, sizeof(SetString_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetString_Params.S, sizeof(SetString_Params.S), &S, sizeof(S));
	SetString_Params.InContext = InContext;

	this->ProcessEvent(uFnSetString, &SetString_Params, nullptr);
}

// Function GFxUI.GFxObject.SetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        I                              (CPF_Parm)

void UGFxObject::SetInt(const class FString& Member, int32_t I)
{
	static UFunction* uFnSetInt = nullptr;

	if (!uFnSetInt)
	{
		uFnSetInt = UFunction::FindFunction("Function GFxUI.GFxObject.SetInt");
	}

	UGFxObject_execSetInt_Params SetInt_Params;
	memset(&SetInt_Params, 0, sizeof(SetInt_Params));
	memcpy_s(&SetInt_Params.Member, sizeof(SetInt_Params.Member), &Member, sizeof(Member));
	SetInt_Params.I = I;

	this->ProcessEvent(uFnSetInt, &SetInt_Params, nullptr);
}

// Function GFxUI.GFxObject.SetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetFloat(const class FString& Member, float F)
{
	static UFunction* uFnSetFloat = nullptr;

	if (!uFnSetFloat)
	{
		uFnSetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.SetFloat");
	}

	UGFxObject_execSetFloat_Params SetFloat_Params;
	memset(&SetFloat_Params, 0, sizeof(SetFloat_Params));
	memcpy_s(&SetFloat_Params.Member, sizeof(SetFloat_Params.Member), &Member, sizeof(Member));
	SetFloat_Params.F = F;

	this->ProcessEvent(uFnSetFloat, &SetFloat_Params, nullptr);
}

// Function GFxUI.GFxObject.SetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       B                              (CPF_Parm)

void UGFxObject::SetBool(const class FString& Member, bool B)
{
	static UFunction* uFnSetBool = nullptr;

	if (!uFnSetBool)
	{
		uFnSetBool = UFunction::FindFunction("Function GFxUI.GFxObject.SetBool");
	}

	UGFxObject_execSetBool_Params SetBool_Params;
	memset(&SetBool_Params, 0, sizeof(SetBool_Params));
	memcpy_s(&SetBool_Params.Member, sizeof(SetBool_Params.Member), &Member, sizeof(Member));
	SetBool_Params.B = B;

	this->ProcessEvent(uFnSetBool, &SetBool_Params, nullptr);
}

// Function GFxUI.GFxObject.Set
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm | CPF_NeedCtorLink)

void UGFxObject::Set(const class FString& Member, const struct FASValue& Arg)
{
	static UFunction* uFnSet = nullptr;

	if (!uFnSet)
	{
		uFnSet = UFunction::FindFunction("Function GFxUI.GFxObject.Set");
	}

	UGFxObject_execSet_Params Set_Params;
	memset(&Set_Params, 0, sizeof(Set_Params));
	memcpy_s(&Set_Params.Member, sizeof(Set_Params.Member), &Member, sizeof(Member));
	memcpy_s(&Set_Params.Arg, sizeof(Set_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnSet, &Set_Params, nullptr);
}

// Function GFxUI.GFxObject.GetObject
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm | CPF_Parm)

class UGFxObject* UGFxObject::GetObjectW(const class FString& Member, class UClass* Type)
{
	static UFunction* uFnGetObjectW = nullptr;

	if (!uFnGetObjectW)
	{
		uFnGetObjectW = UFunction::FindFunction("Function GFxUI.GFxObject.GetObject");
	}

	UGFxObject_execGetObjectW_Params GetObjectW_Params;
	memset(&GetObjectW_Params, 0, sizeof(GetObjectW_Params));
	memcpy_s(&GetObjectW_Params.Member, sizeof(GetObjectW_Params.Member), &Member, sizeof(Member));
	GetObjectW_Params.Type = Type;

	this->ProcessEvent(uFnGetObjectW, &GetObjectW_Params, nullptr);

	return GetObjectW_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetString
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

class FString UGFxObject::GetString(const class FString& Member)
{
	static UFunction* uFnGetString = nullptr;

	if (!uFnGetString)
	{
		uFnGetString = UFunction::FindFunction("Function GFxUI.GFxObject.GetString");
	}

	UGFxObject_execGetString_Params GetString_Params;
	memset(&GetString_Params, 0, sizeof(GetString_Params));
	memcpy_s(&GetString_Params.Member, sizeof(GetString_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetString, &GetString_Params, nullptr);

	return GetString_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetInt
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

int32_t UGFxObject::GetInt(const class FString& Member)
{
	static UFunction* uFnGetInt = nullptr;

	if (!uFnGetInt)
	{
		uFnGetInt = UFunction::FindFunction("Function GFxUI.GFxObject.GetInt");
	}

	UGFxObject_execGetInt_Params GetInt_Params;
	memset(&GetInt_Params, 0, sizeof(GetInt_Params));
	memcpy_s(&GetInt_Params.Member, sizeof(GetInt_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetInt, &GetInt_Params, nullptr);

	return GetInt_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetFloat
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// float                          ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

float UGFxObject::GetFloat(const class FString& Member)
{
	static UFunction* uFnGetFloat = nullptr;

	if (!uFnGetFloat)
	{
		uFnGetFloat = UFunction::FindFunction("Function GFxUI.GFxObject.GetFloat");
	}

	UGFxObject_execGetFloat_Params GetFloat_Params;
	memset(&GetFloat_Params, 0, sizeof(GetFloat_Params));
	memcpy_s(&GetFloat_Params.Member, sizeof(GetFloat_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetFloat, &GetFloat_Params, nullptr);

	return GetFloat_Params.ReturnValue;
}

// Function GFxUI.GFxObject.GetBool
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

bool UGFxObject::GetBool(const class FString& Member)
{
	static UFunction* uFnGetBool = nullptr;

	if (!uFnGetBool)
	{
		uFnGetBool = UFunction::FindFunction("Function GFxUI.GFxObject.GetBool");
	}

	UGFxObject_execGetBool_Params GetBool_Params;
	memset(&GetBool_Params, 0, sizeof(GetBool_Params));
	memcpy_s(&GetBool_Params.Member, sizeof(GetBool_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGetBool, &GetBool_Params, nullptr);

	return GetBool_Params.ReturnValue;
}

// Function GFxUI.GFxObject.Get
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// struct FASValue                ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)

struct FASValue UGFxObject::Get(const class FString& Member)
{
	static UFunction* uFnGet = nullptr;

	if (!uFnGet)
	{
		uFnGet = UFunction::FindFunction("Function GFxUI.GFxObject.Get");
	}

	UGFxObject_execGet_Params Get_Params;
	memset(&Get_Params, 0, sizeof(Get_Params));
	memcpy_s(&Get_Params.Member, sizeof(Get_Params.Member), &Member, sizeof(Member));

	this->ProcessEvent(uFnGet, &Get_Params, nullptr);

	return Get_Params.ReturnValue;
}

// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_CloseMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_CloseMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_GetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_GetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_Invoke::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");
	}

	UGFxAction_Invoke_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_InvokeLocalized.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_InvokeLocalized::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_InvokeLocalized.IsValidLevelSequenceObject");
	}

	UGFxAction_InvokeLocalized_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_OpenMovie::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");
	}

	UGFxAction_OpenMovie_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// [0x00020802] (FUNC_Defined | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGFxAction_SetVariable::eventIsValidLevelSequenceObject()
{
	static UFunction* uFnIsValidLevelSequenceObject = nullptr;

	if (!uFnIsValidLevelSequenceObject)
	{
		uFnIsValidLevelSequenceObject = UFunction::FindFunction("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");
	}

	UGFxAction_SetVariable_eventIsValidLevelSequenceObject_Params IsValidLevelSequenceObject_Params;
	memset(&IsValidLevelSequenceObject_Params, 0, sizeof(IsValidLevelSequenceObject_Params));

	this->ProcessEvent(uFnIsValidLevelSequenceObject, &IsValidLevelSequenceObject_Params, nullptr);

	return IsValidLevelSequenceObject_Params.ReturnValue;
}

// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// [0x00020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// class FString                  Cmd                            (CPF_Parm | CPF_NeedCtorLink)
// class FString                  Arg                            (CPF_Parm | CPF_NeedCtorLink)

bool UGFxFSCmdHandler_Kismet::eventFSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const class FString& Cmd, const class FString& Arg)
{
	static UFunction* uFnFSCommand = nullptr;

	if (!uFnFSCommand)
	{
		uFnFSCommand = UFunction::FindFunction("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");
	}

	UGFxFSCmdHandler_Kismet_eventFSCommand_Params FSCommand_Params;
	memset(&FSCommand_Params, 0, sizeof(FSCommand_Params));
	FSCommand_Params.Movie = Movie;
	FSCommand_Params.Event = Event;
	memcpy_s(&FSCommand_Params.Cmd, sizeof(FSCommand_Params.Cmd), &Cmd, sizeof(Cmd));
	memcpy_s(&FSCommand_Params.Arg, sizeof(FSCommand_Params.Arg), &Arg, sizeof(Arg));

	this->ProcessEvent(uFnFSCommand, &FSCommand_Params, nullptr);

	return FSCommand_Params.ReturnValue;
}

// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(const class FString& Event)
{
	static UFunction* uFnASRemoveAllEventListeners = nullptr;

	if (!uFnASRemoveAllEventListeners)
	{
		uFnASRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");
	}

	UGFxClikWidget_execASRemoveAllEventListeners_Params ASRemoveAllEventListeners_Params;
	memset(&ASRemoveAllEventListeners_Params, 0, sizeof(ASRemoveAllEventListeners_Params));
	memcpy_s(&ASRemoveAllEventListeners_Params.Event, sizeof(ASRemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnASRemoveAllEventListeners, &ASRemoveAllEventListeners_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.AS3AddEventListener
// [0x00044003] (FUNC_Final | FUNC_Defined | FUNC_OptionalParm | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// uint32_t                       useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// uint32_t                       useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AS3AddEventListener(const class FString& Type, class UGFxObject* O, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAS3AddEventListener = nullptr;

	if (!uFnAS3AddEventListener)
	{
		uFnAS3AddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AS3AddEventListener");
	}

	UGFxClikWidget_execAS3AddEventListener_Params AS3AddEventListener_Params;
	memset(&AS3AddEventListener_Params, 0, sizeof(AS3AddEventListener_Params));
	memcpy_s(&AS3AddEventListener_Params.Type, sizeof(AS3AddEventListener_Params.Type), &Type, sizeof(Type));
	AS3AddEventListener_Params.O = O;
	AS3AddEventListener_Params.useCapture = useCapture;
	AS3AddEventListener_Params.listenerPriority = listenerPriority;
	AS3AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAS3AddEventListener, &AS3AddEventListener_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.ASAddEventListener
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  Type                           (CPF_Parm | CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// class FString                  func                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(const class FString& Type, class UGFxObject* O, const class FString& func)
{
	static UFunction* uFnASAddEventListener = nullptr;

	if (!uFnASAddEventListener)
	{
		uFnASAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.ASAddEventListener");
	}

	UGFxClikWidget_execASAddEventListener_Params ASAddEventListener_Params;
	memset(&ASAddEventListener_Params, 0, sizeof(ASAddEventListener_Params));
	memcpy_s(&ASAddEventListener_Params.Type, sizeof(ASAddEventListener_Params.Type), &Type, sizeof(Type));
	ASAddEventListener_Params.O = O;
	memcpy_s(&ASAddEventListener_Params.func, sizeof(ASAddEventListener_Params.func), &func, sizeof(func));

	this->ProcessEvent(uFnASAddEventListener, &ASAddEventListener_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.SetListener
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class UGFxObject*              O                              (CPF_Parm)
// class FString                  Member                         (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, const class FString& Member, const struct FScriptDelegate& Listener)
{
	static UFunction* uFnSetListener = nullptr;

	if (!uFnSetListener)
	{
		uFnSetListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.SetListener");
	}

	UGFxClikWidget_execSetListener_Params SetListener_Params;
	memset(&SetListener_Params, 0, sizeof(SetListener_Params));
	SetListener_Params.O = O;
	memcpy_s(&SetListener_Params.Member, sizeof(SetListener_Params.Member), &Member, sizeof(Member));
	memcpy_s(&SetListener_Params.Listener, sizeof(SetListener_Params.Listener), &Listener, sizeof(Listener));

	this->ProcessEvent(uFnSetListener, &SetListener_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// [0x00040003] (FUNC_Final | FUNC_Defined | FUNC_Private | FUNC_AllFlags)
// Parameter Info:
// class FString                  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// class FName                    Typename                       (CPF_Parm)

class FString UGFxClikWidget::GetEventStringFromTypename(const class FName& Typename)
{
	static UFunction* uFnGetEventStringFromTypename = nullptr;

	if (!uFnGetEventStringFromTypename)
	{
		uFnGetEventStringFromTypename = UFunction::FindFunction("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");
	}

	UGFxClikWidget_execGetEventStringFromTypename_Params GetEventStringFromTypename_Params;
	memset(&GetEventStringFromTypename_Params, 0, sizeof(GetEventStringFromTypename_Params));
	memcpy_s(&GetEventStringFromTypename_Params.Typename, sizeof(GetEventStringFromTypename_Params.Typename), &Typename, sizeof(Typename));

	this->ProcessEvent(uFnGetEventStringFromTypename, &GetEventStringFromTypename_Params, nullptr);

	return GetEventStringFromTypename_Params.ReturnValue;
}

// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// [0x00020002] (FUNC_Defined | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FString                  Event                          (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(const class FString& Event)
{
	static UFunction* uFnRemoveAllEventListeners = nullptr;

	if (!uFnRemoveAllEventListeners)
	{
		uFnRemoveAllEventListeners = UFunction::FindFunction("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");
	}

	UGFxClikWidget_execRemoveAllEventListeners_Params RemoveAllEventListeners_Params;
	memset(&RemoveAllEventListeners_Params, 0, sizeof(RemoveAllEventListeners_Params));
	memcpy_s(&RemoveAllEventListeners_Params.Event, sizeof(RemoveAllEventListeners_Params.Event), &Event, sizeof(Event));

	this->ProcessEvent(uFnRemoveAllEventListeners, &RemoveAllEventListeners_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.AddEventListener
// [0x00024002] (FUNC_Defined | FUNC_OptionalParm | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// class FName                    Type                           (CPF_Parm)
// struct FScriptDelegate         Listener                       (CPF_Parm | CPF_NeedCtorLink)
// uint32_t                       useCapture                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        listenerPriority               (CPF_OptionalParm | CPF_Parm)
// uint32_t                       useWeakReference               (CPF_OptionalParm | CPF_Parm)

void UGFxClikWidget::AddEventListener(const class FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int32_t listenerPriority, bool useWeakReference)
{
	static UFunction* uFnAddEventListener = nullptr;

	if (!uFnAddEventListener)
	{
		uFnAddEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.AddEventListener");
	}

	UGFxClikWidget_execAddEventListener_Params AddEventListener_Params;
	memset(&AddEventListener_Params, 0, sizeof(AddEventListener_Params));
	memcpy_s(&AddEventListener_Params.Type, sizeof(AddEventListener_Params.Type), &Type, sizeof(Type));
	memcpy_s(&AddEventListener_Params.Listener, sizeof(AddEventListener_Params.Listener), &Listener, sizeof(Listener));
	AddEventListener_Params.useCapture = useCapture;
	AddEventListener_Params.listenerPriority = listenerPriority;
	AddEventListener_Params.useWeakReference = useWeakReference;

	this->ProcessEvent(uFnAddEventListener, &AddEventListener_Params, nullptr);
}

// Function GFxUI.GFxClikWidget.EventListener
// [0x00120000] (FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter Info:
// struct FEventData              Data                           (CPF_Parm | CPF_NeedCtorLink)

void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static UFunction* uFnEventListener = nullptr;

	if (!uFnEventListener)
	{
		uFnEventListener = UFunction::FindFunction("Function GFxUI.GFxClikWidget.EventListener");
	}

	UGFxClikWidget_execEventListener_Params EventListener_Params;
	memset(&EventListener_Params, 0, sizeof(EventListener_Params));
	memcpy_s(&EventListener_Params.Data, sizeof(EventListener_Params.Data), &Data, sizeof(Data));

	this->ProcessEvent(uFnEventListener, &EventListener_Params, nullptr);
}

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
