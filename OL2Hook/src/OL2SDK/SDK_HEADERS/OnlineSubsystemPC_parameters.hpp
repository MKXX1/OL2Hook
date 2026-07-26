/*
#############################################################################################
# Outlast 2 (OLGame) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.7
# ========================================================================================= #
# File: OnlineSubsystemPC_parameters.hpp
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
# Parameters
# ========================================================================================= #
*/

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// [0x00424000] 
struct UOnlineSubsystemPC_execGetAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FAchievementDetails>           Achievements;                                     // 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            TitleId;                                          // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x0018 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadAchievementsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                 // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadAchievementsComplete_Params
{
	int32_t                                            TitleId;                                          // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
// [0x00024000] 
struct UOnlineSubsystemPC_execReadAchievements_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            TitleId;                                          // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadText : 1;                              // 0x0008 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldReadImages : 1;                            // 0x000C (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddUnlockAchievementCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnUnlockAchievementComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
// [0x00024000] 
struct UOnlineSubsystemPC_execUnlockAchievement_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            AchievementId;                                    // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	float                                              PercentComplete;                                  // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// [0x00020000] 
struct UOnlineSubsystemPC_execDeleteMessage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            MessageIndex;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnmuteAll
// [0x00020000] 
struct UOnlineSubsystemPC_execUnmuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.MuteAll
// [0x00020000] 
struct UOnlineSubsystemPC_execMuteAll_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bAllowFriends : 1;                                // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFriendMessageReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             MessageDelegate;                                  // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendMessageReceived_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                SendingPlayer;                                    // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      SendingNick;                                      // 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
// [0x00420000] 
struct UOnlineSubsystemPC_execGetFriendMessages_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FOnlineFriendMessage>          FriendMessages;                                   // 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnJoinFriendGameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
// [0x00020000] 
struct UOnlineSubsystemPC_execJoinFriendGame_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReceivedGameInviteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                       // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReceivedGameInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      InviterName;                                      // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
// [0x00024000] 
struct UOnlineSubsystemPC_execSendGameInviteToFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FUniqueNetId>                  Friends;                                          // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Text;                                             // 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
// [0x00024000] 
struct UOnlineSubsystemPC_execSendGameInviteToFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Text;                                             // 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execSendMessageToFriendW_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Friend;                                           // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          // 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFriendInviteReceivedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             InviteDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendInviteReceived_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      RequestingNick;                                   // 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x0024 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execRemoveFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                FormerFriend;                                     // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
// [0x00020000] 
struct UOnlineSubsystemPC_execDenyFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
// [0x00020000] 
struct UOnlineSubsystemPC_execAcceptFriendInvite_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                RequestingPlayer;                                 // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddAddFriendByNameCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnAddFriendByNameComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
// [0x00024000] 
struct UOnlineSubsystemPC_execAddFriendByName_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      FriendName;                                       // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Message;                                          // 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
// [0x00024000] 
struct UOnlineSubsystemPC_execAddFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewFriend;                                        // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      Message;                                          // 0x0014 (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0024 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPC_execWritePlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
// [0x00020002] 
struct UOnlineSubsystemPC_execGetPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        ReturnValue;                                      // 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadPlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadPlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
// [0x00024000] 
struct UOnlineSubsystemPC_execReadPlayerStorage_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            DeviceID;                                         // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
// [0x00020000] 
struct UOnlineSubsystemPC_execReadPlayerStorageForNetId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NetId;                                            // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UOnlinePlayerStorage*                        PlayerStorage;                                    // 0x0014 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;        // 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                            // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddWritePlayerStorageCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;               // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnWritePlayerStorageComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
// [0x00420000] 
struct UOnlineSubsystemPC_execGetKeyboardInputResults_Params
{
	uint8_t                                            bWasCanceled;                                     // 0x0000 (0x0001) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnKeyboardInputComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
// [0x00024000] 
struct UOnlineSubsystemPC_execShowKeyboardUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      TitleText;                                        // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      DescriptionText;                                  // 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bIsPassword : 1;                                  // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           bShouldValidate : 1;                              // 0x0028 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	class FString                                      DefaultText;                                      // 0x002C (0x0010) [0x0000000000400090] (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
	int32_t                                            MaxResultLength;                                  // 0x003C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0040 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
// [0x00420000] 
struct UOnlineSubsystemPC_execSetOnlineStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StatusId;                                         // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FLocalizedStringSetting>       LocalizedStringSettings;                          // 0x0008 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class TArray<struct FSettingsProperty>             Properties;                                       // 0x0018 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                      // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
// [0x00020002] 
struct UOnlineSubsystemPC_execGetLocale_Params
{
	int32_t                                            ReturnValue;                                      // 0x0000 (0x0004) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// [0x00020002] 
struct UOnlineSubsystemPC_execGetNATType_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnConnectionStatusChange_Params
{
	uint8_t                                            ConnectionStatus;                                 // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// [0x00020002] 
struct UOnlineSubsystemPC_execIsControllerConnected_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnControllerChange_Params
{
	int32_t                                            ControllerId;                                     // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsConnected : 1;                                 // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPC_execSetNetworkNotificationPosition_Params
{
	uint8_t                                            NewPos;                                           // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
// [0x00020000] 
struct UOnlineSubsystemPC_execGetNetworkNotificationPosition_Params
{
	uint8_t                                            ReturnValue;                                      // 0x0000 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                               // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnExternalUIChange_Params
{
	uint32_t                                           bIsOpening : 1;                                   // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                               // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLinkStatusChange_Params
{
	uint32_t                                           bIsConnected : 1;                                 // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
// [0x00020002] 
struct UOnlineSubsystemPC_execHasLinkConnection_Params
{
	uint32_t                                           ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// [0x00020802] 
struct UOnlineSubsystemPC_eventGetPlayerNicknameFromIndex_Params
{
	int32_t                                            UserIndex;                                        // 0x0000 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
// [0x00420000] 
struct UOnlineSubsystemPC_execCalcAggregateSkill_Params
{
	class TArray<struct FDouble>                       Mus;                                              // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<struct FDouble>                       Sigmas;                                           // 0x0010 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                   // 0x0020 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	struct FDouble                                     OutAggregateSigma;                                // 0x0028 (0x0008) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
// [0x00420000] 
struct UOnlineSubsystemPC_execRegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ClientStatGuid;                                   // 0x0010 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
// [0x00020000] 
struct UOnlineSubsystemPC_execGetClientStatGuid_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;             // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnRegisterHostStatGuidComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
// [0x00420000] 
struct UOnlineSubsystemPC_execRegisterHostStatGuid_Params
{
	class FString                                      HostStatGuid;                                     // 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
// [0x00020000] 
struct UOnlineSubsystemPC_execGetHostStatGuid_Params
{
	class FString                                      ReturnValue;                                      // 0x0000 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// [0x00420000] 
struct UOnlineSubsystemPC_execWriteOnlinePlayerScores_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            LeaderboardId;                                    // 0x0008 (0x0004) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FOnlinePlayerScore>            PlayerScores;                                     // 0x000C (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x001C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                 // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFlushOnlineStatsComplete_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0008 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
// [0x00020000] 
struct UOnlineSubsystemPC_execFlushOnlineStats_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// [0x00020000] 
struct UOnlineSubsystemPC_execWriteOnlineStats_Params
{
	class FName                                        SessionName;                                      // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                Player;                                           // 0x0008 (0x0010) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsWrite*                           StatsWrite;                                       // 0x0018 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
// [0x00020000] 
struct UOnlineSubsystemPC_execFreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                  // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
struct UOnlineSubsystemPC_execReadOnlineStatsByRankAroundPlayer_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            NumRows;                                          // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// [0x00024000] 
struct UOnlineSubsystemPC_execReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0000 (0x0008) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            StartIndex;                                       // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            NumToRead;                                        // 0x000C (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForFriends
// [0x00020000] 
struct UOnlineSubsystemPC_execReadOnlineStatsForFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// [0x00420000] 
struct UOnlineSubsystemPC_execReadOnlineStats_Params
{
	class TArray<struct FUniqueNetId>                  Players;                                          // 0x0000 (0x0010) [0x0000000000400182] (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                        // 0x0010 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadOnlineStatsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetSpeechRecognitionObject
// [0x00020000] 
struct UOnlineSubsystemPC_execSetSpeechRecognitionObject_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class USpeechRecognition*                          SpeechRecogObj;                                   // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SelectVocabulary
// [0x00020000] 
struct UOnlineSubsystemPC_execSelectVocabulary_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            VocabularyId;                                     // 0x0004 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0008 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRecognitionCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddRecognitionCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             RecognitionDelegate;                              // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRecognitionComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnRecognitionComplete_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetRecognitionResults
// [0x00420000] 
struct UOnlineSubsystemPC_execGetRecognitionResults_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FSpeechRecognizedWord>         Words;                                            // 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StopSpeechRecognition
// [0x00020000] 
struct UOnlineSubsystemPC_execStopSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StartSpeechRecognition
// [0x00020000] 
struct UOnlineSubsystemPC_execStartSpeechRecognition_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StopNetworkedVoice
// [0x00020000] 
struct UOnlineSubsystemPC_execStopNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StartNetworkedVoice
// [0x00020000] 
struct UOnlineSubsystemPC_execStartNetworkedVoice_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnmuteRemoteTalker
// [0x00024000] 
struct UOnlineSubsystemPC_execUnmuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsSystemWide : 1;                                // 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.MuteRemoteTalker
// [0x00024000] 
struct UOnlineSubsystemPC_execMuteRemoteTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsSystemWide : 1;                                // 0x0014 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetRemoteTalkerPriority
// [0x00020000] 
struct UOnlineSubsystemPC_execSetRemoteTalkerPriority_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Priority;                                         // 0x0014 (0x0004) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0018 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsHeadsetPresent
// [0x00020000] 
struct UOnlineSubsystemPC_execIsHeadsetPresent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsRemotePlayerTalking
// [0x00020000] 
struct UOnlineSubsystemPC_execIsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalPlayerTalking
// [0x00020000] 
struct UOnlineSubsystemPC_execIsLocalPlayerTalking_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnregisterRemoteTalker
// [0x00020000] 
struct UOnlineSubsystemPC_execUnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterRemoteTalker
// [0x00020000] 
struct UOnlineSubsystemPC_execRegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                         // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnregisterLocalTalker
// [0x00020000] 
struct UOnlineSubsystemPC_execUnregisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterLocalTalker
// [0x00020000] 
struct UOnlineSubsystemPC_execRegisterLocalTalker_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
// [0x00424000] 
struct UOnlineSubsystemPC_execGetFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FOnlineFriend>                 Friends;                                          // 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	int32_t                                            Count;                                            // 0x0014 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0018 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint8_t                                            ReturnValue;                                      // 0x001C (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddReadFriendsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                      // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
// [0x00024002] 
struct UOnlineSubsystemPC_execReadFriendsList_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	int32_t                                            Count;                                            // 0x0004 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	int32_t                                            StartingAt;                                       // 0x0008 (0x0004) [0x0000000000000090] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
	// int32_t                                         Index;                                            // 0x0010 (0x0004) [0x0000000000000000]               
	// struct FScriptDelegate                          CallDelegate;                                     // 0x0014 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadFriendsComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                              // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            LocalUserNum;                                     // 0x0010 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginStatusChange_Params
{
	uint8_t                                            NewStatus;                                        // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                NewId;                                            // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddWriteProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;             // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnWriteProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
// [0x00020400] 
struct UOnlineSubsystemPC_execWriteProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
// [0x00020002] 
struct UOnlineSubsystemPC_execGetProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ReturnValue;                                      // 0x0004 (0x0008) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddReadProfileSettingsCompleteDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;              // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadProfileSettingsComplete_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bWasSuccessful : 1;                               // 0x0004 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
// [0x00020400] 
struct UOnlineSubsystemPC_execReadProfileSettings_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class UOnlineProfileSettings*                      ProfileSettings;                                  // 0x0004 (0x0008) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x000C (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0014 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddFriendsChangeDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             FriendsDelegate;                                  // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	// int32_t                                         RemoveIndex;                                      // 0x0010 (0x0004) [0x0000000000000000]               
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
// [0x00020002] 
struct UOnlineSubsystemPC_execAddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execIsGuestLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execIsLocalLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
// [0x00020000] 
struct UOnlineSubsystemPC_execShowFriendsUI_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
// [0x00020000] 
struct UOnlineSubsystemPC_execIsMuted_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// [0x00420000] 
struct UOnlineSubsystemPC_execAreAnyFriends_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class TArray<struct FFriendsQuery>                 Query;                                            // 0x0004 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
// [0x00020000] 
struct UOnlineSubsystemPC_execIsFriend_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
// [0x00020000] 
struct UOnlineSubsystemPC_execCanShowPresenceInformation_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
// [0x00020000] 
struct UOnlineSubsystemPC_execCanViewPlayerProfiles_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
// [0x00020000] 
struct UOnlineSubsystemPC_execCanPurchaseContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanDownloadUserContent
// [0x00020000] 
struct UOnlineSubsystemPC_execCanDownloadUserContent_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicate
// [0x00020000] 
struct UOnlineSubsystemPC_execCanCommunicate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
// [0x00020000] 
struct UOnlineSubsystemPC_execCanPlayOnline_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
// [0x00020002] 
struct UOnlineSubsystemPC_execGetPlayerNickname_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      ReturnValue;                                      // 0x0004 (0x0010) [0x0000000000400580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
// [0x00420002] 
struct UOnlineSubsystemPC_execGetUniquePlayerId_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FUniqueNetId                                PlayerID;                                         // 0x0004 (0x0010) [0x0000000000000180] (CPF_Parm | CPF_OutParm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0014 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// [0x00020002] 
struct UOnlineSubsystemPC_execGetLoginStatus_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ReturnValue;                                      // 0x0001 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLogoutCompletedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LogoutDelegate;                                   // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLogoutCompleted_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
// [0x00020000] 
struct UOnlineSubsystemPC_execLogout_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddLoginFailedDelegate_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	struct FScriptDelegate                             LoginDelegate;                                    // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginFailed_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	uint8_t                                            ErrorCode;                                        // 0x0001 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
// [0x00020000] 
struct UOnlineSubsystemPC_execAutoLogin_Params
{
	uint32_t                                           ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
// [0x00024000] 
struct UOnlineSubsystemPC_execLogin_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
	class FString                                      LoginName;                                        // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class FString                                      Password;                                         // 0x0014 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           bWantsLocalOnly : 1;                              // 0x0024 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0028 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
// [0x00024000] 
struct UOnlineSubsystemPC_execShowLoginUI_Params
{
	uint32_t                                           bShowOnlineOnly : 1;                              // 0x0000 (0x0004) [0x0000000000000090] [0x00000001] (CPF_OptionalParm | CPF_Parm)
	uint32_t                                           ReturnValue : 1;                                  // 0x0004 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnFriendsChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPlayerTalkingDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPlayerTalkingDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                   // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPlayerTalkingStateChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                           // 0x0000 (0x0010) [0x0000000000000080] (CPF_Parm)    
	uint32_t                                           bIsTalking : 1;                                   // 0x0010 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
// [0x00020000] 
struct UOnlineSubsystemPC_execGetTitleFileState_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint8_t                                            ReturnValue;                                      // 0x0010 (0x0001) [0x0000000000000580] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// [0x00420000] 
struct UOnlineSubsystemPC_execGetTitleFileContents_Params
{
	class FString                                      Filename;                                         // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	class TArray<uint8_t>                              FileContents;                                     // 0x0010 (0x0010) [0x0000000000400180] (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0020 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineSubsystemPC_execAddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
// [0x00020000] 
struct UOnlineSubsystemPC_execReadTitleFile_Params
{
	class FString                                      FileToRead;                                       // 0x0000 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
	uint32_t                                           ReturnValue : 1;                                  // 0x0010 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineSubsystemPC_execOnReadTitleFileComplete_Params
{
	uint32_t                                           bWasSuccessful : 1;                               // 0x0000 (0x0004) [0x0000000000000080] [0x00000001] (CPF_Parm)
	class FString                                      Filename;                                         // 0x0004 (0x0010) [0x0000000000400080] (CPF_Parm | CPF_NeedCtorLink)
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnMutingChange_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginCancelled_Params
{
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
// [0x00120000] 
struct UOnlineSubsystemPC_execOnLoginChange_Params
{
	uint8_t                                            LocalUserNum;                                     // 0x0000 (0x0001) [0x0000000000000080] (CPF_Parm)    
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
// [0x00020C00] 
struct UOnlineSubsystemPC_eventInit_Params
{
	uint32_t                                           ReturnValue : 1;                                  // 0x0000 (0x0004) [0x0000000000000580] [0x00000001] (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
