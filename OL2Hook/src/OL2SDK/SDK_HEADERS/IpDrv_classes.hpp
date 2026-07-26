/*
#############################################################################################
# Outlast 2 (OLGame) SDK 1.0.0.0
# Generated with the CodeRedGenerator v1.1.7
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

#define CONST_PLAYER_MATCH                                          0
#define CONST_RANKED_MATCH                                          1
#define CONST_REC_MATCH                                             2
#define CONST_PRIVATE_MATCH                                         3
#define CONST_RANKEDPROVIDERTAG                                     "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                   "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                    "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                    "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.ELinkMode
enum ELinkMode
{
	ELinkMode_MODE_Text                                = 0,
	ELinkMode_MODE_Line                                = 1,
	ELinkMode_MODE_Binary                              = 2,
	ELinkMode_MODE_END                                 = 3
};

// Enum IpDrv.InternetLink.EReceiveMode
enum EReceiveMode
{
	EReceiveMode_RMODE_Manual                          = 0,
	EReceiveMode_RMODE_Event                           = 1,
	EReceiveMode_RMODE_END                             = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum ELineMode
{
	ELineMode_LMODE_auto                               = 0,
	ELineMode_LMODE_DOS                                = 1,
	ELineMode_LMODE_UNIX                               = 2,
	ELineMode_LMODE_MAC                                = 3,
	ELineMode_LMODE_END                                = 4
};

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
enum EMcpChallengeFileStatus
{
	EMcpChallengeFileStatus_MCFS_NotStarted            = 0,
	EMcpChallengeFileStatus_MCFS_Pending               = 1,
	EMcpChallengeFileStatus_MCFS_Success               = 2,
	EMcpChallengeFileStatus_MCFS_Failed                = 3,
	EMcpChallengeFileStatus_MCFS_END                   = 4
};

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
enum EMcpFileCompressionType
{
	EMcpFileCompressionType_MFCT_NONE                  = 0,
	EMcpFileCompressionType_MFCT_ZLIB                  = 1,
	EMcpFileCompressionType_MFCT_END                   = 2
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum EMcpGroupAccessLevel
{
	EMcpGroupAccessLevel_MGAL_Owner                    = 0,
	EMcpGroupAccessLevel_MGAL_Member                   = 1,
	EMcpGroupAccessLevel_MGAL_Public                   = 2,
	EMcpGroupAccessLevel_MGAL_END                      = 3
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum EMcpGroupAcceptState
{
	EMcpGroupAcceptState_MGAS_Error                    = 0,
	EMcpGroupAcceptState_MGAS_Pending                  = 1,
	EMcpGroupAcceptState_MGAS_Accepted                 = 2,
	EMcpGroupAcceptState_MGAS_END                      = 3
};

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum EMcpMessageCompressionType
{
	EMcpMessageCompressionType_MMCT_NONE               = 0,
	EMcpMessageCompressionType_MMCT_LZO                = 1,
	EMcpMessageCompressionType_MMCT_ZLIB               = 2,
	EMcpMessageCompressionType_MMCT_END                = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum EMeshBeaconPacketType
{
	EMeshBeaconPacketType_MB_Packet_UnknownType        = 0,
	EMeshBeaconPacketType_MB_Packet_ClientNewConnectionRequest = 1,
	EMeshBeaconPacketType_MB_Packet_ClientBeginBandwidthTest = 2,
	EMeshBeaconPacketType_MB_Packet_ClientCreateNewSessionResponse = 3,
	EMeshBeaconPacketType_MB_Packet_HostNewConnectionResponse = 4,
	EMeshBeaconPacketType_MB_Packet_HostBandwidthTestRequest = 5,
	EMeshBeaconPacketType_MB_Packet_HostCompletedBandwidthTest = 6,
	EMeshBeaconPacketType_MB_Packet_HostTravelRequest  = 7,
	EMeshBeaconPacketType_MB_Packet_HostCreateNewSessionRequest = 8,
	EMeshBeaconPacketType_MB_Packet_DummyData          = 9,
	EMeshBeaconPacketType_MB_Packet_Heartbeat          = 10,
	EMeshBeaconPacketType_MB_Packet_END                = 11
};

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum EMeshBeaconConnectionResult
{
	EMeshBeaconConnectionResult_MB_ConnectionResult_Succeeded = 0,
	EMeshBeaconConnectionResult_MB_ConnectionResult_Duplicate = 1,
	EMeshBeaconConnectionResult_MB_ConnectionResult_Timeout = 2,
	EMeshBeaconConnectionResult_MB_ConnectionResult_Error = 3,
	EMeshBeaconConnectionResult_MB_ConnectionResult_END = 4
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum EMeshBeaconBandwidthTestState
{
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_NotStarted = 0,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_RequestPending = 1,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_StartPending = 2,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_InProgress = 3,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_Completed = 4,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_Incomplete = 5,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_Timeout = 6,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_Error = 7,
	EMeshBeaconBandwidthTestState_MB_BandwidthTestState_END = 8
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum EMeshBeaconBandwidthTestResult
{
	EMeshBeaconBandwidthTestResult_MB_BandwidthTestResult_Succeeded = 0,
	EMeshBeaconBandwidthTestResult_MB_BandwidthTestResult_Timeout = 1,
	EMeshBeaconBandwidthTestResult_MB_BandwidthTestResult_Error = 2,
	EMeshBeaconBandwidthTestResult_MB_BandwidthTestResult_END = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum EMeshBeaconBandwidthTestType
{
	EMeshBeaconBandwidthTestType_MB_BandwidthTestType_Upstream = 0,
	EMeshBeaconBandwidthTestType_MB_BandwidthTestType_Downstream = 1,
	EMeshBeaconBandwidthTestType_MB_BandwidthTestType_RoundtripLatency = 2,
	EMeshBeaconBandwidthTestType_MB_BandwidthTestType_END = 3
};

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum EMeshBeaconClientState
{
	EMeshBeaconClientState_MBCS_None                   = 0,
	EMeshBeaconClientState_MBCS_Connecting             = 1,
	EMeshBeaconClientState_MBCS_Connected              = 2,
	EMeshBeaconClientState_MBCS_ConnectionFailed       = 3,
	EMeshBeaconClientState_MBCS_AwaitingResponse       = 4,
	EMeshBeaconClientState_MBCS_Closed                 = 5,
	EMeshBeaconClientState_MBCS_END                    = 6
};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum EEventUploadType
{
	EEventUploadType_EUT_GenericStats                  = 0,
	EEventUploadType_EUT_ProfileData                   = 1,
	EEventUploadType_EUT_MatchmakingData               = 2,
	EEventUploadType_EUT_PlaylistPopulation            = 3,
	EEventUploadType_EUT_END                           = 4
};

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum EOnlineImageDownloadState
{
	EOnlineImageDownloadState_PIDS_NotStarted          = 0,
	EOnlineImageDownloadState_PIDS_Downloading         = 1,
	EOnlineImageDownloadState_PIDS_Succeeded           = 2,
	EOnlineImageDownloadState_PIDS_Failed              = 3,
	EOnlineImageDownloadState_PIDS_END                 = 4
};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum EReservationPacketType
{
	EReservationPacketType_RPT_UnknownPacketType       = 0,
	EReservationPacketType_RPT_ClientReservationRequest = 1,
	EReservationPacketType_RPT_ClientReservationUpdateRequest = 2,
	EReservationPacketType_RPT_ClientCancellationRequest = 3,
	EReservationPacketType_RPT_HostReservationResponse = 4,
	EReservationPacketType_RPT_HostReservationCountUpdate = 5,
	EReservationPacketType_RPT_HostTravelRequest       = 6,
	EReservationPacketType_RPT_HostIsReady             = 7,
	EReservationPacketType_RPT_HostHasCancelled        = 8,
	EReservationPacketType_RPT_Heartbeat               = 9,
	EReservationPacketType_RPT_END                     = 10
};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum EPartyReservationResult
{
	EPartyReservationResult_PRR_GeneralError           = 0,
	EPartyReservationResult_PRR_PartyLimitReached      = 1,
	EPartyReservationResult_PRR_IncorrectPlayerCount   = 2,
	EPartyReservationResult_PRR_RequestTimedOut        = 3,
	EPartyReservationResult_PRR_ReservationDuplicate   = 4,
	EPartyReservationResult_PRR_ReservationNotFound    = 5,
	EPartyReservationResult_PRR_ReservationAccepted    = 6,
	EPartyReservationResult_PRR_ReservationDenied      = 7,
	EPartyReservationResult_PRR_END                    = 8
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum EPartyBeaconClientRequest
{
	EPartyBeaconClientRequest_PBClientRequest_NewReservation = 0,
	EPartyBeaconClientRequest_PBClientRequest_UpdateReservation = 1,
	EPartyBeaconClientRequest_PBClientRequest_END      = 2
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum EPartyBeaconClientState
{
	EPartyBeaconClientState_PBCS_None                  = 0,
	EPartyBeaconClientState_PBCS_Connecting            = 1,
	EPartyBeaconClientState_PBCS_Connected             = 2,
	EPartyBeaconClientState_PBCS_ConnectionFailed      = 3,
	EPartyBeaconClientState_PBCS_AwaitingResponse      = 4,
	EPartyBeaconClientState_PBCS_Closed                = 5,
	EPartyBeaconClientState_PBCS_END                   = 6
};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum EPartyBeaconHostState
{
	EPartyBeaconHostState_PBHS_AllowReservations       = 0,
	EPartyBeaconHostState_PBHS_DenyReservations        = 1,
	EPartyBeaconHostState_PBHS_END                     = 2
};

// Enum IpDrv.TcpLink.ELinkState
enum ELinkState
{
	ELinkState_STATE_Initialized                       = 0,
	ELinkState_STATE_Ready                             = 1,
	ELinkState_STATE_Listening                         = 2,
	ELinkState_STATE_Connecting                        = 3,
	ELinkState_STATE_Connected                         = 4,
	ELinkState_STATE_ListenClosePending                = 5,
	ELinkState_STATE_ConnectClosePending               = 6,
	ELinkState_STATE_ListenClosing                     = 7,
	ELinkState_STATE_ConnectClosing                    = 8,
	ELinkState_STATE_END                               = 9
};

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum ETitleFileFileOp
{
	ETitleFileFileOp_TitleFile_None                    = 0,
	ETitleFileFileOp_TitleFile_Save                    = 1,
	ETitleFileFileOp_TitleFile_Load                    = 2,
	ETitleFileFileOp_TitleFile_END                     = 3
};

// Enum IpDrv.WebRequest.ERequestType
enum ERequestType
{
	ERequestType_Request_GET                           = 0,
	ERequestType_Request_POST                          = 1,
	ERequestType_Request_END                           = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0068 - 0x0074)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0068 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x006C (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HTTPDownload
// 0x0130 (0x0AAC - 0x0BDC)
class UHTTPDownload : public UDownload
{
public:
	class FString                                      ProxyServerHost;                               // 0x0AAC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            ProxyServerPort;                               // 0x0ABC (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           MaxRedirection : 1;                            // 0x0AC0 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              ConnectionTimeout;                             // 0x0AC4 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData00[0x114];                          // 0x0AC8 (0x0114) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HTTPDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.InternetLink
// 0x0024 (0x0248 - 0x026C)
class AInternetLink : public AInfo
{
public:
	uint8_t                                            LinkMode;                                      // 0x0248 (0x0001) [0x0000000000000000]               
	uint8_t                                            InLineMode;                                    // 0x0249 (0x0001) [0x0000000000000000]               
	uint8_t                                            OutLineMode;                                   // 0x024A (0x0001) [0x0000000000000000]               
	uint8_t                                            ReceiveMode;                                   // 0x024B (0x0001) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x024C (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Port;                                          // 0x0254 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    RemoteSocket;                                  // 0x0258 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x0260 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x0268 (0x0004) [0x0000000000000002] (CPF_Const)   

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr& outArg);
	bool StringToIpAddr(const class FString& Str, struct FIpAddr& outAddr);
	class FString IpAddrToString(const struct FIpAddr& Arg);
	int32_t GetLastError();
	void Resolve(const class FString& Domain);
	bool ParseURL(const class FString& URL, class FString& outAddr, int32_t& outPortNum, class FString& outLevelName, class FString& outEntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0040 (0x026C - 0x02AC)
class ATcpLink : public AInternetLink
{
public:
	uint8_t                                            LinkState;                                     // 0x026C (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3];                              // 0x026D (0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                    // 0x0270 (0x0014) [0x0000000000000000]               
	class UClass*                                      AcceptClass;                                   // 0x0284 (0x0008) [0x0000000000000000]               
	class TArray<uint8_t>                              SendFIFO;                                      // 0x028C (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FString                                      RecvBuf;                                       // 0x029C (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpLink");
		}

		return uClassPointer;
	};

	void eventReceivedBinary(int32_t Count, uint8_t B[255]);
	void eventReceivedLine(const class FString& Line);
	void eventReceivedText(const class FString& Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int32_t ReadBinary(int32_t Count, uint8_t& outB);
	int32_t ReadText(class FString& outStr);
	int32_t SendBinary(int32_t Count, uint8_t B[255]);
	int32_t SendText(const class FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int32_t BindPort(int32_t optionalPortNum, bool optionalBUseNextAvailable);
};

// Class IpDrv.McpServiceBase
// 0x0018 (0x0068 - 0x0080)
class UMcpServiceBase : public UObject
{
public:
	class FString                                      McpConfigClassName;                            // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                     // 0x0078 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceBase");
		}

		return uClassPointer;
	};

	class FString GetUserAuthURL(const class FString& McpId);
	class FString GetAppAccessURL();
	class FString GetBaseURL();
	void eventInit();
};

// Class IpDrv.MCPBase
// 0x0008 (0x0080 - 0x0088)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0080 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x0088 - 0x00BC)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	class TArray<struct FEventUploadConfig>            EventUploadConfigs;                            // 0x0088 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FPointer>                      MCPEventPostObjects;                           // 0x0098 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<uint8_t>                              DisabledUploadTypes;                           // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bBinaryStats : 1;                              // 0x00B8 (0x0004) [0x0000000000004002] [0x00000001] (CPF_Const | CPF_Config)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		}

		return uClassPointer;
	};

	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, class TArray<uint8_t>& outPayload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const class FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0034 (0x0088 - 0x00BC)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	class TArray<struct FNewsCacheEntry>               NewsItems;                                     // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadNewsDelegates;                             // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint32_t                                           bNeedsTicking : 1;                             // 0x00A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;               // 0x00AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		}

		return uClassPointer;
	};

	class FString GetNews(uint8_t LocalUserNum, uint8_t NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, uint8_t NewsType);
	bool ReadNews(uint8_t LocalUserNum, uint8_t NewsType);
};

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0084 (0x0088 - 0x010C)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	class TArray<struct FScriptDelegate>               ReadTitleFileCompleteDelegates;                // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RequestTitleFileListCompleteDelegates;         // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      BaseUrl;                                       // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileListURL;                            // 0x00B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RequestFileURL;                                // 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              TimeOut;                                       // 0x00D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<struct FFileNameToURLMapping>         FilesToUrls;                                   // 0x00DC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x00EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;    // 0x00FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
	void ClearRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(const struct FScriptDelegate& RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(bool bWasSuccessful, const class FString& ResultStr);
	void RequestTitleFileList();
	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(const class FString& FileToRead);
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x010C - 0x0120)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	class TArray<struct FTitleFileMcp>                 TitleFiles;                                    // 0x010C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x011C (0x0004) [0x0000000000002000] (CPF_Transient)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		}

		return uClassPointer;
	};

	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	bool ReadTitleFile(const class FString& FileToRead);
};

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x010C - 0x011C)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	class TArray<struct FTitleFileWeb>                 TitleFiles;                                    // 0x010C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	void RequestTitleFileList();
	bool ClearDownloadedFile(const class FString& Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void TriggerDelegates(bool bSuccess, const class FString& FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bDidSucceed);
	bool ReadTitleFile(const class FString& FileToRead);
	bool UncompressTitleFileContents(uint8_t FileCompressionType, class TArray<uint8_t>& outCompressedFileContents, class TArray<uint8_t>& outUncompressedFileContents);
};

// Class IpDrv.TitleFileDownloadCache
// 0x0050 (0x0088 - 0x00D8)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	class TArray<struct FTitleFileCacheEntry>          TitleFiles;                                    // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               LoadCompleteDelegates;                         // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               SaveCompleteDelegates;                         // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;           // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;           // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		}

		return uClassPointer;
	};

	bool DeleteTitleFile(const class FString& Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(const class FString& Filename);
	bool ClearCachedFiles();
	class FString GetTitleFileLogicalName(const class FString& Filename);
	class FString GetTitleFileHash(const class FString& Filename);
	uint8_t GetTitleFileState(const class FString& Filename);
	bool GetTitleFileContents(const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(const struct FScriptDelegate& SaveCompleteDelegate);
	void OnSaveTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool SaveTitleFile(const class FString& Filename, const class FString& LogicalName, const class TArray<uint8_t>& FileContents);
	void ClearLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(const struct FScriptDelegate& LoadCompleteDelegate);
	void OnLoadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool LoadTitleFile(const class FString& Filename);
};

// Class IpDrv.McpMessageBase
// 0x0074 (0x0080 - 0x00F4)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	class FString                                      McpMessageManagerClassName;                    // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            CompressionType;                               // 0x0090 (0x0001) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData00[0x3];                              // 0x0091 (0x0003) MISSED OFFSET
	class TArray<struct FMcpMessageContents>           MessageContentsList;                           // 0x0094 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpMessageList>               MessageLists;                                  // 0x00A4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;           // 0x00B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;           // 0x00C4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;           // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;    // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageBase");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void OnQueryMessageContentsComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error);
	void QueryMessageContents(const class FString& MessageId);
	void GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& outMessageList);
	void OnQueryMessagesComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error);
	void QueryMessages(const class FString& ToUniqueUserId);
	void OnDeleteMessageComplete(const class FString& MessageId, bool bWasSuccessful, const class FString& Error);
	void DeleteMessage(const class FString& MessageId);
	void OnCreateMessageComplete(const struct FMcpMessage& Message, bool bWasSuccessful, const class FString& Error);
	void CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& outToUniqueUserIds, class TArray<uint8_t>& outMessageContents);
	static class UMcpMessageBase* CreateInstance();
};

// Class IpDrv.McpMessageManager
// 0x0078 (0x00F4 - 0x016C)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x00F4 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class FString                                      CreateMessageUrl;                              // 0x00FC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteMessageUrl;                              // 0x010C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessagesUrl;                              // 0x011C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMessageContentsUrl;                       // 0x012C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllMessagesUrl;                          // 0x013C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpCompressMessageRequest>    CompressMessageRequests;                       // 0x014C (0x0010) [0x0000000000001000] (CPF_Native)  
	class TArray<struct FMcpUncompressMessageRequest>  UncompressMessageRequests;                     // 0x015C (0x0010) [0x0000000000001000] (CPF_Native)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageManager");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	bool GetMessageByIdW(const class FString& MessageId, struct FMcpMessage& outMessage);
	void CacheMessage(const struct FMcpMessage& Message);
	bool GetMessageContentsW(const class FString& MessageId, class TArray<uint8_t>& outMessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessageContents(const class FString& MessageId);
	void GetMessageListW(const class FString& ToUniqueUserId, struct FMcpMessageList& outMessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryMessages(const class FString& ToUniqueUserId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteMessage(const class FString& MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateMessage(const class FString& FromUniqueUserId, const class FString& FromFriendlyName, const class FString& MessageType, const class FString& PushMessage, const class FString& ValidUntil, class TArray<class FString>& outToUniqueUserIds, class TArray<uint8_t>& outMessageContents);
	void eventFinishedAsyncUncompression(bool bWasSuccessful, const class FString& MessageId, class TArray<uint8_t>& outUncompressedMessageContents);
	bool StartAsyncUncompression(const class FString& MessageId, uint8_t MessageCompressionType, class TArray<uint8_t>& outMessageContent);
	bool StartAsyncCompression(uint8_t MessageCompressionType, class UHttpRequestInterface* Request, class TArray<uint8_t>& outMessageContent);
};

// Class IpDrv.McpUserCloudFileDownload
// 0x00D0 (0x0080 - 0x0150)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	class FString                                      EnumerateCloudFilesUrl;                        // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ReadCloudFileUrl;                              // 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      WriteCloudFileUrl;                             // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteCloudFileUrl;                            // 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpUserCloudFilesEntry>       UserCloudFileRequests;                         // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EnumerateUserFilesCompleteDelegates;           // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ReadUserFileCompleteDelegates;                 // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               WriteUserFileCompleteDelegates;                // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DeleteUserFileCompleteDelegates;               // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(const struct FScriptDelegate& DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnDeleteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool DeleteUserFile(const class FString& UserId, const class FString& Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(const struct FScriptDelegate& WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnWriteUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& outUserIdx, int32_t& outFileIdx);
	bool WriteUserFile(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
	void ClearReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(const struct FScriptDelegate& ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnReadUserFileComplete(bool bWasSuccessful, const class FString& UserId, const class FString& Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	bool ReadUserFile(const class FString& UserId, const class FString& Filename);
	void GetUserFileList(const class FString& UserId, class TArray<struct FEmsFile>& outUserFiles);
	void ClearEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(const struct FScriptDelegate& EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(bool bWasSuccessful, const class FString& UserId);
	void OnEnumerateUserFilesComplete(bool bWasSuccessful, const class FString& UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EnumerateUserFiles(const class FString& UserId);
	bool ClearFile(const class FString& UserId, const class FString& Filename);
	bool ClearFiles(const class FString& UserId);
	bool GetFileContents(const class FString& UserId, const class FString& Filename, class TArray<uint8_t>& outFileContents);
};

// Class IpDrv.MeshBeacon
// 0x0044 (0x0068 - 0x00AC)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MeshBeaconPort;                                // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x0074 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bIsInTick : 1;                                 // 0x007C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	uint32_t                                           bWantsDeferredDestroy : 1;                     // 0x007C (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bShouldTick : 1;                               // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x0080 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0084 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0088 (0x0008) [0x0000000000000000]               
	int32_t                                            SocketSendBufferSize;                          // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketReceiveBufferSize;                       // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthTestBufferSize;                    // 0x0098 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinBandwidthTestBufferSize;                    // 0x009C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestSendTime;                      // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestReceiveTime;                   // 0x00A4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthHistoryEntries;                    // 0x00A8 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeacon");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconClient
// 0x00D4 (0x00AC - 0x0180)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00AC (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FClientConnectionRequest                    ClientPendingRequest;                          // 0x00BC (0x0030) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                          // 0x00EC (0x0014) [0x0000000000000000]               
	uint8_t                                            ClientBeaconState;                             // 0x0100 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x0101 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x2];                              // 0x0102 (0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                      // 0x0104 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionRequestElapsedTime;                  // 0x0108 (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x010C (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x011C (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0124 (0x0008) [0x0000000000000000]               
	uint32_t                                           bUsingRegisteredAddr : 1;                      // 0x012C (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;         // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;    // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;    // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate; // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		}

		return uClassPointer;
	};

	bool SendHostNewGameSessionResponse(bool bSuccess, const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& outPlayers);
	void OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& outBandwidthStats);
	void OnReceivedBandwidthTestRequest(uint8_t TestType);
	void OnConnectionRequestResult(uint8_t ConnectionResult);
	bool BeginBandwidthTest(uint8_t TestType, int32_t TestBufferSize);
	bool RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult& outDesiredHost, struct FClientConnectionRequest& outClientRequest);
	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconHost
// 0x0088 (0x00AC - 0x0134)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	class TArray<struct FClientMeshBeaconConnection>   ClientConnections;                             // 0x00AC (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<struct FUniqueNetId>                  PendingPlayerConnections;                      // 0x00BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                // 0x00CC (0x0010) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bAllowBandwidthTesting : 1;                    // 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConnectionBacklog;                             // 0x00E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate; // 0x00E4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;            // 0x00F4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;           // 0x0104 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;      // 0x0114 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;// 0x0124 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		}

		return uClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const class FName& SessionName, class UClass* SearchClass, class TArray<struct FPlayerMember>& outPlayers);
	void TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t& outPlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(class TArray<struct FUniqueNetId>& outPlayers);
	int32_t GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(class TArray<struct FUniqueNetId>& outPlayers);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& outBandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, uint8_t TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& outNewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, uint8_t TestType, int32_t TestBufferSize);
	void eventDestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0024 (0x01F4 - 0x0218)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x01F4 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x01FC (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x0200 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint32_t                                           bIsUsingSpeechRecognition : 1;                 // 0x0204 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x0208 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                             // 0x0210 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	void GetRegisteredPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outOutRegisteredPlayers);
	bool IsPlayerInSession(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	class FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
};

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x02C4 (0x0068 - 0x032C)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                  // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0070 (0x0008) [0x0000000000000000]               
	uint32_t                                           bAuthReady : 1;                                // 0x0078 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                            // 0x007C (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                            // 0x00B4 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                              // 0x00EC (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                       // 0x0124 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                       // 0x015C (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                         // 0x0194 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	class TArray<struct FScriptDelegate>               AuthReadyDelegates;                            // 0x01CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthRequestDelegates;                    // 0x01DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRequestDelegates;                    // 0x01EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthResponseDelegates;                   // 0x01FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthResponseDelegates;                   // 0x020C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthCompleteDelegates;                   // 0x021C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthCompleteDelegates;                   // 0x022C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientAuthEndSessionRequestDelegates;          // 0x023C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerAuthRetryRequestDelegates;               // 0x024C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ClientConnectionCloseDelegates;                // 0x025C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               ServerConnectionCloseDelegates;                // 0x026C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                       // 0x027C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;               // 0x028C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;               // 0x029C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;              // 0x02AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;              // 0x02BC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;              // 0x02CC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;              // 0x02DC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;     // 0x02EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;          // 0x02FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;           // 0x030C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;           // 0x031C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		}

		return uClassPointer;
	};

	bool GetServerAddr(struct FIpAddr& outOutServerIP, int32_t& outOutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& outOutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& outOutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& outOutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& outOutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession& outOutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession& outOutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession& outOutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP);
	void EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	bool VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort, int32_t& outOutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP);
	void EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort);
	bool VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort, bool bSecure, int32_t& outOutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID);
	bool SendClientAuthResponse(int32_t AuthTicketUID);
	bool SendServerAuthRequest(const struct FUniqueNetId& ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(const struct FScriptDelegate& ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(const struct FScriptDelegate& ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(const struct FScriptDelegate& ServerAuthCompleteDelegate);
	void OnServerAuthComplete(bool bSuccess, const struct FUniqueNetId& ServerUID, class UPlayer* ServerConnection, const class FString& ExtraInfo);
	void ClearClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(const struct FScriptDelegate& ClientAuthCompleteDelegate);
	void OnClientAuthComplete(bool bSuccess, const struct FUniqueNetId& ClientUID, class UPlayer* ClientConnection, const class FString& ExtraInfo);
	void ClearServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(const struct FScriptDelegate& ServerAuthResponseDelegate);
	void OnServerAuthResponse(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t AuthTicketUID);
	void ClearClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(const struct FScriptDelegate& ClientAuthResponseDelegate);
	void OnClientAuthResponse(const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t AuthTicketUID);
	void ClearServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(const struct FScriptDelegate& ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID, const struct FIpAddr& ClientIP, int32_t ClientPort);
	void ClearClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(const struct FScriptDelegate& ClientAuthRequestDelegate);
	void OnClientAuthRequest(const struct FUniqueNetId& ServerUID, const struct FIpAddr& ServerIP, int32_t ServerPort, bool bSecure);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x0328 (0x0068 - 0x0390)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0068 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0078 (0x0008) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FScriptDelegate>               CreateOnlineGameCompleteDelegates;             // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               UpdateOnlineGameCompleteDelegates;             // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               DestroyOnlineGameCompleteDelegates;            // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinOnlineGameCompleteDelegates;               // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               MigrateOnlineGameCompleteDelegates;            // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               JoinMigratedOnlineGameCompleteDelegates;       // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               RecalculateSkillRatingCompleteDelegates;       // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               StartOnlineGameCompleteDelegates;              // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               EndOnlineGameCompleteDelegates;                // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               FindOnlineGamesCompleteDelegates;              // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FScriptDelegate>               CancelFindOnlineGamesCompleteDelegates;        // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            LanBeaconState;                                // 0x0130 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            LanNonce[8];                                   // 0x0131 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            UnknownData00[0x3];                              // 0x0139 (0x0003) MISSED OFFSET
	int32_t                                            LanAnnouncePort;                               // 0x013C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x0140 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x0144 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0148 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x014C (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x0150 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0158 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameWithPartyComplete__Delegate;// 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMatchmakeOnlineGameWithPartyComplete__Delegate;// 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineSessionComplete__Delegate;     // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddSessionMemberComplete__Delegate;        // 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterGameSessionComplete__Delegate;     // 0x0200 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMatchmakingForSessionComplete__Delegate;// 0x0210 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMatchTicketComplete__Delegate;       // 0x0220 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateSessionPropertiesComplete__Delegate; // 0x0230 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameSessionReady__Delegate;                // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptPendingGameSessionComplete__Delegate;// 0x0250 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;              // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMatchStatusChanged__Delegate;              // 0x0270 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLeaveOnlineSessionComplete__Delegate;      // 0x0280 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySessionsForUserComplete__Delegate;    // 0x0290 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineSessionComplete__Delegate;       // 0x02A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x02B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x02C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x02D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x02E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate; // 0x02F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x0300 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;  // 0x0310 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;       // 0x0320 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;  // 0x0330 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetAvailablePlayersFromPartyComplete__Delegate;// 0x0340 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPullReservedPlayersIntoSessionComplete__Delegate;// 0x0350 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPokeInactivePlayersComplete__Delegate;     // 0x0360 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x0370 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetSessionMemberInfoComplete__Delegate;    // 0x0380 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate);
	void AddGetSessionMemberInfoCompleteDelegate(const struct FScriptDelegate& GetSessionMemberInfoCompleteDelegate);
	void OnGetSessionMemberInfoComplete(const class TArray<struct FSessionMemberInfo>& SesionMemberInfo, bool bWasSuccessful);
	bool GetCurrentSessionMemberInfo(uint8_t LocalUserNum, const class FName& SessionName);
	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	void ClearPokeInactivePlayersCompleteDelegate(const struct FScriptDelegate& PokeInactivePlayersCompleteDelegate);
	void AddPokeInactivePlayersCompleteDelegate(const struct FScriptDelegate& PokeInactivePlayersCompleteDelegate);
	void OnPokeInactivePlayersComplete(const class FName& SessionName, bool bWasSuccessful);
	bool PokeInactivePlayers(uint8_t PlayerNum, const class FName& SessionName);
	void ClearPullReservedPlayersIntoSessionCompleteDelegate(const struct FScriptDelegate& PullReservedPlayersIntoSessionCompleteDelegate);
	void AddPullReservedPlayersIntoSessionCompleteDelegate(const struct FScriptDelegate& PullReservedPlayersIntoSessionCompleteDelegate);
	void OnPullReservedPlayersIntoSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool PullReservedPlayersIntoSession(uint8_t PlayerNum, const class FName& SessionName);
	void ClearGetAvailablePlayersFromPartyCompleteDelegate(const struct FScriptDelegate& GetAvailablePlayersFromPartyCompleteDelegate);
	void AddGetAvailablePlayersFromPartyCompleteDelegate(const struct FScriptDelegate& GetAvailablePlayersFromPartyCompleteDelegate);
	void OnGetAvailablePlayersFromPartyComplete(const class TArray<struct FUniqueNetId>& Players, bool bWasSuccessful);
	bool GetAvailablePlayersFromParty(uint8_t PlayerNum);
	bool BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo[80]);
	bool ReadPlatformSpecificSessionInfoBySessionName(const class FName& SessionName, uint8_t& outPlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& outDesiredGame, uint8_t& outPlatformSpecificInfo);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool AcceptGameInvite(uint8_t LocalUserNum, const class FName& SessionName);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult& outInviteResult);
	class TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const class FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const class FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const class FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const class FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool UnregisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const class FName& SessionName, class TArray<struct FUniqueNetId>& outPlayers);
	bool RegisterPlayer(const class FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const class FName& SessionName, class FString& outConnectInfo);
	void ClearJoinOnlineSessionCompleteDelegate(const struct FScriptDelegate& JoinOnlineSessionCompleteDelegate);
	void AddJoinOnlineSessionCompleteDelegate(const struct FScriptDelegate& JoinOnlineSessionCompleteDelegate);
	void OnJoinOnlineSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineSession(uint8_t LocalPlayerNum, const class FName& SessionName);
	void ClearQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate);
	void AddQuerySessionsForUserCompleteDelegate(const struct FScriptDelegate& QuerySessionsForUserCompleteDelegate);
	void OnQuerySessionsForUserComplete(uint8_t LocalPlayerNum, bool bWasSuccessful);
	bool QuerySessionsForUser(uint8_t LocalPlayerNum);
	void LeaveAllOnlineSessions(bool optionalBClearSessionIfHost);
	void ClearLeaveOnlineSessionCompleteDelegate(const struct FScriptDelegate& LeaveOnlineSessionCompleteDelegate);
	void AddLeaveOnlineSessionCompleteDelegate(const struct FScriptDelegate& LeaveOnlineSessionCompleteDelegate);
	void OnLeaveOnlineSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool LeaveOnlineSession(uint8_t LocalPlayerNum, const class FName& SessionName, bool optionalBClearSessionIfHost);
	void ClearMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate);
	void AddMatchStatusChangedDelegate(const struct FScriptDelegate& MatchStatusChangedDelegate);
	void OnMatchStatusChanged(const class FName& SessionName, uint8_t Status);
	void ClearGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void AddGamePlayersChangedDelegate(const struct FScriptDelegate& GamePlayersChangedDelegate);
	void OnGamePlayersChanged(const class FName& SessionName, const class TArray<struct FUniqueNetId>& Players);
	void ClearAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate);
	void AddAcceptPendingGameSessionCompleteDelegate(const struct FScriptDelegate& AcceptPendingGameSessionCompleteDelegate);
	void OnAcceptPendingGameSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	void AcceptPendingGameSession(const class FName& SessionName);
	void ClearGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate);
	void AddGameSessionReadyDelegate(const struct FScriptDelegate& GameSessionReadyDelegate);
	void OnGameSessionReady(const class FName& SessionName);
	void ClearUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate);
	void AddUpdateSessionPropertiesCompleteDelegate(const struct FScriptDelegate& UpdateSessionPropertiesCompleteDelegate);
	void OnUpdateSessionPropertiesComplete(const class FName& SessionName, bool bWasSuccessful);
	bool UpdateSessionProperties(uint8_t ScoutingUserNum, const class FName& SessionName);
	bool DeleteCustomMemberProperty(const class FName& SessionName, const class FString& PropertyName);
	bool SetCustomMemberProperty(const class FName& SessionName, const class FString& PropertyName, const class FString& PropertyValue);
	bool DeleteCustomSessionProperty(const class FName& SessionName, const class FString& PropertyName);
	bool SetCustomSessionProperty(const class FName& SessionName, const class FString& PropertyName, const class FString& PropertyValue);
	void ClearDeleteMatchTicketCompleteDelegate(const struct FScriptDelegate& DeleteMatchTicketCompleteDelegate);
	void AddDeleteMatchTicketCompleteDelegate(const struct FScriptDelegate& DeleteMatchTicketCompleteDelegate);
	void OnDeleteMatchTicketComplete(const class FName& SessionName, bool bWasSuccessful);
	bool DeleteMatchTicketWithHopper(uint8_t ScoutingPlayerNum, const class FName& SessionName, const class FString& HopperName);
	bool DeleteMatchTicket(uint8_t ScoutingPlayerNum, const class FName& SessionName);
	void ClearQueryMatchmakingForSessionCompleteDelegate(const struct FScriptDelegate& QueryMatchmakingForSessionCompleteDelegate);
	void AddQueryMatchmakingForSessionCompleteDelegate(const struct FScriptDelegate& QueryMatchmakingForSessionCompleteDelegate);
	void OnQueryMatchmakingForSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool QueryMatchmakingForSessionWithHopper(uint8_t ScoutingPlayerNum, const class FName& SessionName, int32_t MatchTimeout, const class FString& HopperName, uint8_t optionalCreateGameSessionType);
	bool QueryMatchmakingForSession(uint8_t ScoutingPlayerNum, const class FName& SessionName, int32_t MatchTimeout, uint8_t optionalCreateGameSessionType);
	void ClearRegisterGameSessionCompleteDelegate(const struct FScriptDelegate& RegisterGameSessionCompleteDelegate);
	void AddRegisterGameSessionCompleteDelegate(const struct FScriptDelegate& RegisterGameSessionCompleteDelegate);
	void OnRegisterGameSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool RegisterGameSession(uint8_t ScoutingPlayerNum, const class FName& SessionName);
	void ClearAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate);
	void AddAddSessionMemberCompleteDelegate(const struct FScriptDelegate& AddSessionMemberCompleteDelegate);
	void OnAddSessionMemberComplete(const class FName& SessionName, bool bWasSuccessful);
	bool AddSessionMembers(uint8_t ScoutingPlayerNum, const class FName& SessionName, const class TArray<struct FUniqueNetId>& Members);
	bool AddSessionMember(uint8_t ScoutingPlayerNum, const class FName& SessionName, const struct FUniqueNetId& Member);
	bool AddSessionMemberByString(uint8_t ScoutingPlayerNum, const class FName& SessionName, const class FString& Member);
	void ClearCreateOnlineSessionCompleteDelegate(const struct FScriptDelegate& CreateOnlineSessionCompleteDelegate);
	void AddCreateOnlineSessionCompleteDelegate(const struct FScriptDelegate& CreateOnlineSessionCompleteDelegate);
	void OnCreateOnlineSessionComplete(const class FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineSessionWithTemplate(uint8_t ScoutingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings, const class FString& TemplateName);
	bool CreateOnlineSession(uint8_t ScoutingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	bool InitiatedSessionSearch(const class FName& SessionName);
	bool IsHostOfSession(const class FName& SessionName);
	void ClearMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate);
	void AddMatchmakeOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& MatchmakeOnlineGameWithPartyCompleteDelegate);
	void OnMatchmakeOnlineGameWithPartyComplete(const class FName& SessionName, bool bWasSuccessful);
	bool MatchmakeOnlineGameWithParty(uint8_t ScoutingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	void ClearCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate);
	void AddCreateOnlineGameWithPartyCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameWithPartyCompleteDelegate);
	void OnCreateOnlineGameWithPartyComplete(const class FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGameWithParty(uint8_t ScoutingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(uint8_t PlayerNum, const class FName& SessionName, struct FOnlineGameSearchResult& outDesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const class FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const class FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool optionalBShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const class FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(uint8_t HostingPlayerNum, const class FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const class FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};

// Class IpDrv.OnlinePlaylistManager
// 0x00D0 (0x0068 - 0x0138)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class TArray<struct FPlaylist>                     Playlists;                                     // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class FString>                        PlaylistFileNames;                             // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class FName>                          DatastoresToRefresh;                           // 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            SuccessfulCount;                               // 0x00A4 (0x0004) [0x0000000000000000]               
	int32_t                                            VersionNumber;                                 // 0x00A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<struct FPlaylistPopulation>           PopulationData;                                // 0x00AC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            WorldwideTotalPlayers;                         // 0x00BC (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotalPlayers;                            // 0x00C0 (0x0004) [0x0000000000000000]               
	class UOnlineTitleFileInterface*                   TitleFileInterface_Object;                     // 0x00C4 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineTitleFileInterface*                   TitleFileInterface_Interface;                  // 0x00CC (0x0008) [0x0000000000002000] (CPF_Transient)
	class FString                                      PopulationFileName;                            // 0x00D4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;              // 0x00E4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistPopulationUpdateInterval;              // 0x00E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinPlaylistIdToReport;                         // 0x00EC (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            CurrentPlaylistId;                             // 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	class FName                                        EventsInterfaceName;                           // 0x00F4 (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DataCenterId;                                  // 0x00FC (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      DataCenterFileName;                            // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                      // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistRefreshInterval;                       // 0x0114 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;            // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;   // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		}

		return uClassPointer;
	};

	void ParseDataCenterId(class TArray<uint8_t>& outData);
	void OnReadDataCenterIdComplete(bool bWasSuccessful, const class FString& Filename);
	void ReadDataCenterId();
	void eventSendPlaylistPopulationUpdate(int32_t NumPlayers);
	void GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& outWorldwideTotal, int32_t& outRegionTotal);
	void ParsePlaylistPopulationData(class TArray<uint8_t>& outData);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(bool bWasSuccessful, const class FString& Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int32_t PlaylistId, class TArray<int32_t>& outContentIds);
	class UClass* GetInventorySwapFromPlaylist(int32_t PlaylistId, class UClass* SourceInventory);
	void GetMapCycleFromPlaylist(int32_t PlaylistId, class TArray<class FName>& outMapCycle);
	class FString GetUrlFromPlaylist(int32_t PlaylistId);
	int32_t GetMatchType(int32_t PlaylistId);
	bool IsPlaylistArbitrated(int32_t PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& outLoadBalanceId);
	void GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& outTeamSize, int32_t& outTeamCount, int32_t& outMaxPartySize);
	bool PlaylistSupportsDedicatedServers(int32_t PlaylistId);
	bool HasAnyGameSettings(int32_t PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(bool bWasSuccessful, const class FString& Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(bool bWasSuccessful);
};

// Class IpDrv.PartyBeacon
// 0x0038 (0x0068 - 0x00A0)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            PartyBeaconPort;                               // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x0074 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	uint32_t                                           bIsInTick : 1;                                 // 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bWantsDeferredDestroy : 1;                     // 0x007C (0x0004) [0x0000000000000000] [0x00000002] 
	uint32_t                                           bShouldTick : 1;                               // 0x007C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x0080 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0084 (0x0004) [0x0000000000000000]               
	class FName                                        BeaconName;                                    // 0x0088 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeacon");
		}

		return uClassPointer;
	};

	void OnDestroyComplete();
	void eventDestroyBeacon();
};

// Class IpDrv.PartyBeaconClient
// 0x00B0 (0x00A0 - 0x0150)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A0 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FPartyReservation                           PendingRequest;                                // 0x00B0 (0x0024) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ClientBeaconState;                             // 0x00D4 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x00D5 (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x2];                              // 0x00D6 (0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                     // 0x00D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ReservationRequestElapsedTime;                 // 0x00DC (0x0004) [0x0000000000000000]               
	class FString                                      ResolverClassName;                             // 0x00E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x00F0 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x00F8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;      // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;         // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                     // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& outDesiredHost, class TArray<struct FPlayerReservation>& outPlayersToAdd);
	bool RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult& outDesiredHost, class TArray<struct FPlayerReservation>& outPlayers);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80]);
	void OnReservationCountUpdated(int32_t ReservationRemaining);
	void OnReservationRequestComplete(uint8_t ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x007C (0x00A0 - 0x011C)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	class TArray<struct FClientBeaconConnection>       Clients;                                       // 0x00A0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            NumTeams;                                      // 0x00B0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumPlayersPerTeam;                             // 0x00B4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumReservations;                               // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumConsumedReservations;                       // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	class TArray<struct FPartyReservation>             Reservations;                                  // 0x00C0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class FName                                        OnlineSessionName;                             // 0x00D0 (0x0008) [0x0000000000000000]               
	int32_t                                            ConnectionBacklog;                             // 0x00D8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ForceTeamNum;                                  // 0x00DC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ReservedHostTeamNum;                           // 0x00E0 (0x0004) [0x0000000000000002] (CPF_Const)   
	uint32_t                                           bBestFitTeamAssignment : 1;                    // 0x00E4 (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            BeaconState;                                   // 0x00E8 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            UnknownData00[0x3];                              // 0x00E9 (0x0003) MISSED OFFSET
	struct FScriptDelegate                             __OnReservationChange__Delegate;               // 0x00EC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                // 0x00FC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;      // 0x010C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		}

		return uClassPointer;
	};

	int32_t GetMaxAvailableTeamSize();
	void GetPartyLeaders(class TArray<struct FUniqueNetId>& outPartyLeaders);
	void GetPlayers(class TArray<struct FUniqueNetId>& outPlayers);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void eventUnregisterParty(const struct FUniqueNetId& PartyLeader);
	void eventUnregisterPartyMembers();
	void eventRegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const class FName& SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo[80]);
	void eventDestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int32_t GetExistingReservation(struct FUniqueNetId& outPartyLeader);
	uint8_t UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, class TArray<struct FPlayerReservation>& outPlayerMembers);
	uint8_t AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int32_t TeamNum, bool bIsHost, class TArray<struct FPlayerReservation>& outPlayerMembers);
	bool InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, const class FName& InSessionName, int32_t optionalInForceTeamNum);
	void PauseReservationRequests(bool bPause);
};

// Class IpDrv.TcpipConnection
// 0x0024 (0xB0E0 - 0xB104)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                            UnknownData00[0x24];                            // 0xB0E0 (0x0024) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpNetDriver
// 0x0020 (0x01FC - 0x021C)
class UTcpNetDriver : public UNetDriver
{
public:
	uint32_t                                           AllowPlayerPortUnreach : 1;                    // 0x01FC (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint32_t                                           LogPortUnreach : 1;                            // 0x0200 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                            UnknownData00[0x18];                            // 0x0204 (0x0018) MISSED OFFSET

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.WebRequest
// 0x00E8 (0x0068 - 0x0150)
class UWebRequest : public UObject
{
public:
	class FString                                      RemoteAddr;                                    // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      URI;                                           // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      UserName;                                      // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      Password;                                      // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentLength;                                 // 0x00A8 (0x0004) [0x0000000000000000]               
	class FString                                      ContentType;                                   // 0x00AC (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RequestType;                                   // 0x00BC (0x0001) [0x0000000000000000]               
	uint8_t                                            UnknownData00[0x3];                              // 0x00BD (0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                     // 0x00C0 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 VariableMap;                                   // 0x0108 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebRequest");
		}

		return uClassPointer;
	};

	int32_t GetHexDigit(const class FString& D);
	void DecodeFormData(const class FString& Data);
	void ProcessHeaderString(const class FString& S);
	void Dump();
	void GetVariables(class TArray<class FString>& outVarNames);
	class FString GetVariableNumber(const class FString& VariableName, int32_t Number, const class FString& optionalDefaultValue);
	int32_t GetVariableCount(const class FString& VariableName);
	class FString GetVariable(const class FString& VariableName, const class FString& optionalDefaultValue);
	void AddVariable(const class FString& VariableName, const class FString& Value);
	void GetHeaders(class TArray<class FString>& outHeaders);
	class FString GetHeader(const class FString& HeaderName, const class FString& optionalDefaultValue);
	void AddHeader(const class FString& HeaderName, const class FString& Value);
	class FString EncodeBase64(const class FString& Decoded);
	class FString DecodeBase64(const class FString& Encoded);
};

// Class IpDrv.WebResponse
// 0x0084 (0x0068 - 0x00EC)
class UWebResponse : public UObject
{
public:
	class TArray<class FString>                        Headers;                                       // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                // 0x0078 (0x0048) [0x0000000000001002] (CPF_Const | CPF_Native)
	class FString                                      IncludePath;                                   // 0x00C0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	class FString                                      CharSet;                                       // 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class AWebConnection*                              Connection;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	uint32_t                                           bSentText : 1;                                 // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bSentResponse : 1;                             // 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebResponse");
		}

		return uClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(const class FString& URL);
	void SendStandardHeaders(const class FString& optionalContentType, bool optionalBCache);
	void HTTPError(int32_t ErrorNum, const class FString& optionalData);
	void SendHeaders();
	void AddHeader(const class FString& Header, bool optionalBReplace);
	void HTTPHeader(const class FString& Header);
	void HttpResponse(const class FString& Header);
	void FailAuthentication(const class FString& Realm);
	bool SendCachedFile(const class FString& Filename, const class FString& optionalContentType);
	void eventSendBinary(int32_t Count, uint8_t B[255]);
	void eventSendText(const class FString& Text, bool optionalBNoCRLF);
	void Dump();
	class FString GetHTTPExpiration(int32_t optionalOffsetSeconds);
	class FString LoadParsedUHTM(const class FString& Filename);
	bool IncludeBinaryFile(const class FString& Filename);
	bool IncludeUHTM(const class FString& Filename);
	void ClearSubst();
	void Subst(const class FString& Variable, const class FString& Value, bool optionalBClear);
	bool FileExists(const class FString& Filename);
};

// Class IpDrv.OnlinePlaylistProvider
// 0x0028 (0x009C - 0x00C4)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int32_t                                            PlaylistId;                                    // 0x009C (0x0004) [0x0000000000004000] (CPF_Config)  
	class TArray<class FName>                          PlaylistGameTypeNames;                         // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DisplayName;                                   // 0x00B0 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00C0 (0x0004) [0x0000000000004000] (CPF_Config)  

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x00A0 - 0x0100)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	class FString                                      ProviderClassName;                             // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class TArray<class UUIResourceDataProvider*>       RankedDataProviders;                           // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       UnrankedDataProviders;                         // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       RecModeDataProviders;                          // 0x00D8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class TArray<class UUIResourceDataProvider*>       PrivateDataProviders;                          // 0x00E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                   // 0x00F8 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		}

		return uClassPointer;
	};

	int32_t eventGetMatchTypeForPlaylistId(int32_t PlaylistId);
	static class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(const class FName& ProviderTag, int32_t PlaylistId, int32_t& outProviderIndex);
	bool GetPlaylistProvider(const class FName& ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& outOut_Provider);
	bool GetResourceProviders(const class FName& ProviderTag, class TArray<class UUIResourceDataProvider*>& outOut_Providers);
	void eventInit();
};

// Class IpDrv.WebApplication
// 0x0020 (0x0068 - 0x0088)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0068 (0x0008) [0x0000000000000000]               
	class AWebServer*                                  WebServer;                                     // 0x0070 (0x0008) [0x0000000000000000]               
	class FString                                      Path;                                          // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebApplication");
		}

		return uClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.WebServer
// 0x01CC (0x02AC - 0x0478)
class AWebServer : public ATcpLink
{
public:
	class FString                                      ServerName;                                    // 0x02AC (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Applications[10];                              // 0x02BC (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ApplicationPaths[10];                          // 0x035C (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint32_t                                           bEnabled : 1;                                  // 0x03FC (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	int32_t                                            ListenPort;                                    // 0x0400 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxConnections;                                // 0x0404 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultApplication;                            // 0x0408 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ExpirationSeconds;                             // 0x040C (0x0004) [0x0000000000004000] (CPF_Config)  
	class FString                                      ServerURL;                                     // 0x0410 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[10];                        // 0x0420 (0x0050) [0x0000000000000000]               
	int32_t                                            ConnectionCount;                               // 0x0470 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnID;                                        // 0x0474 (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebServer");
		}

		return uClassPointer;
	};

	class UWebApplication* GetApplication(const class FString& URI, class FString& outSubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0088 - 0x0088)
class UHelloWeb : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HelloWeb");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.ImageServer
// 0x0000 (0x0088 - 0x0088)
class UImageServer : public UWebApplication
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageServer");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.McpServiceConfig
// 0x0040 (0x0068 - 0x00A8)
class UMcpServiceConfig : public UObject
{
public:
	class FString                                      Protocol;                                      // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      Domain;                                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AppKey;                                        // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AppSecret;                                     // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceConfig");
		}

		return uClassPointer;
	};

	class FString GetUserAuthTicket(const class FString& McpId);
};

// Class IpDrv.McpClashMobBase
// 0x0070 (0x0080 - 0x00F0)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	class FString                                      McpClashMobClassName;                          // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;   // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;         // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;// 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;// 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;// 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobBase");
		}

		return uClassPointer;
	};

	void UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserRewardComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress);
	void OnUpdateChallengeUserProgressComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& outOutChallengeUserStatus);
	void QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& outUserIdsToRead);
	void QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnQueryChallengeUserStatusComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnAcceptChallengeComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& UniqueUserId, const class FString& Error);
	void DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& outOutFileContents);
	void DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& outOutChallengeFiles);
	void OnDownloadChallengeFileComplete(bool bWasSuccessful, const class FString& UniqueChallengeId, const class FString& DLName, const class FString& Filename, const class FString& Error);
	void GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& outOutChallengeEvents);
	void QueryChallengeList();
	void OnQueryChallengeListComplete(bool bWasSuccessful, const class FString& Error);
	static class UMcpClashMobBase* CreateInstance();
};

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x011C - 0x011C)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		}

		return uClassPointer;
	};

	class FString GetUrlForFile(const class FString& Filename);
};

// Class IpDrv.McpClashMobManager
// 0x0140 (0x00F0 - 0x0230)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	class FString                                      ChallengeListUrl;                              // 0x00F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ChallengeStatusUrl;                            // 0x0100 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ChallengeMultiStatusUrl;                       // 0x0110 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AcceptChallengeUrl;                            // 0x0120 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateChallengeProgressUrl;                    // 0x0130 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateRewardProgressUrl;                       // 0x0140 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                      // 0x0150 (0x0008) [0x0000000000000000]               
	class TArray<struct FMcpChallengeUserRequest>      ChallengeUserRequests;                         // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeEvent>    ChallengeEvents;                               // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeUserStatus> ChallengeUserStatus;                           // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                       // 0x0188 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FMcpClashMobChallengeUserStatus> TempChallengeUserStatusArray;                  // 0x0208 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineTitleFileCacheInterface*              FileCache_Object;                              // 0x0218 (0x0008) [0x0000000000000000] 
	class UOnlineTitleFileCacheInterface*              FileCache_Interface;                           // 0x0220 (0x0008) [0x0000000000000000]               
	class UMcpClashMobFileDownload*                    FileDownloader;                                // 0x0228 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobManager");
		}

		return uClassPointer;
	};

	void OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserReward(const class FString& UniqueChallengeId, const class FString& UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateChallengeUserProgress(const class FString& UniqueChallengeId, const class FString& UniqueUserId, bool bDidComplete, int32_t GoalProgress);
	void GetChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, struct FMcpClashMobChallengeUserStatus& outOutChallengeUserStatus);
	void OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeMultiUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId, class TArray<class FString>& outUserIdsToRead);
	void OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeUserStatus(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AcceptChallenge(const class FString& UniqueChallengeId, const class FString& UniqueUserId);
	void DeleteCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void ClearCachedChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileContents(const class FString& UniqueChallengeId, const class FString& DLName, class TArray<uint8_t>& outOutFileContents);
	void OnDownloadMcpFileComplete(bool bWasSuccessful, const class FString& DLName);
	void OnLoadCachedFileComplete(bool bWasSuccessful, const class FString& DLName);
	void DownloadChallengeFile(const class FString& UniqueChallengeId, const class FString& DLName);
	void GetChallengeFileList(const class FString& UniqueChallengeId, class TArray<struct FMcpClashMobChallengeFile>& outOutChallengeFiles);
	void GetChallengeList(class TArray<struct FMcpClashMobChallengeEvent>& outOutChallengeEvents);
	void OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryChallengeList();
	void Init();
};

// Class IpDrv.McpGroupsBase
// 0x00B0 (0x0080 - 0x0130)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	class FString                                      McpGroupsManagerClassName;                     // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpGroupList>                 GroupLists;                                    // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;             // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;             // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;             // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;       // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;         // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;      // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;         // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;       // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;       // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsBase");
		}

		return uClassPointer;
	};

	void OnAcceptGroupInviteComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error);
	void AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupID, bool bShouldAccept);
	void GetGroupInviteList(const class FString& UserId, struct FMcpGroupList& outInviteList);
	void OnQueryGroupInvitesComplete(bool bWasSuccessful, const class FString& Error);
	void QueryGroupInvites(const class FString& UniqueUserId);
	void OnDeleteAllGroupsComplete(const class FString& RequesterId, bool bWasSuccessful, const class FString& Error);
	void DeleteAllGroups(const class FString& OwnerId);
	void OnRemoveGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error);
	void RemoveGroupMembers(const class FString& OwnerId, const class FString& GroupID, class TArray<class FString>& outMemberIds);
	void OnAddGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error);
	void AddGroupMembers(const class FString& OwnerId, const class FString& GroupID, bool bRequiresAcceptance, class TArray<class FString>& outMemberIds);
	void GetGroupMembers(const class FString& GroupID, class TArray<struct FMcpGroupMember>& outGroupMembers);
	void OnQueryGroupMembersComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error);
	void QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupID);
	void GetGroupList(const class FString& UserId, struct FMcpGroupList& outGroupList);
	void OnQueryGroupsComplete(const class FString& UserId, bool bWasSuccessful, const class FString& Error);
	void QueryGroups(const class FString& RequesterId);
	void OnDeleteGroupComplete(const class FString& GroupID, bool bWasSuccessful, const class FString& Error);
	void DeleteGroup(const class FString& UniqueUserId, const class FString& GroupID);
	void OnCreateGroupComplete(const struct FMcpGroup& Group, bool bWasSuccessful, const class FString& Error);
	void CreateGroup(const class FString& OwnerId, const class FString& GroupName);
	static class UMcpGroupsBase* CreateInstance();
};

// Class IpDrv.McpGroupsManager
// 0x00D0 (0x0130 - 0x0200)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	class FString                                      CreateGroupUrl;                                // 0x0130 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteGroupUrl;                                // 0x0140 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupsUrl;                                // 0x0150 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryGroupMembersUrl;                          // 0x0160 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AddGroupMembersUrl;                            // 0x0170 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RemoveGroupMembersUrl;                         // 0x0180 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteAllGroupsUrl;                            // 0x0190 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      AcceptGroupInviteUrl;                          // 0x01A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RejectGroupInviteUrl;                          // 0x01B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;      // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;// 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;  // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;// 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsManager");
		}

		return uClassPointer;
	};

	void CacheGroupMember(const class FString& MemberId, const class FString& GroupID, uint8_t AcceptState);
	void CacheGroup(const class FString& RequesterId, const struct FMcpGroup& Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AcceptGroupInvite(const class FString& UniqueUserId, const class FString& GroupID, bool bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteAllGroups(const class FString& UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void RemoveGroupMembers(const class FString& UniqueUserId, const class FString& GroupID, class TArray<class FString>& outMemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void AddGroupMembers(const class FString& UniqueUserId, const class FString& GroupID, bool bRequiresAcceptance, class TArray<class FString>& outMemberIds);
	void GetGroupMembers(const class FString& GroupID, class TArray<struct FMcpGroupMember>& outGroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroupMembers(const class FString& UniqueUserId, const class FString& GroupID);
	void GetGroupList(const class FString& UserId, struct FMcpGroupList& outGroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void QueryGroups(const class FString& RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void DeleteGroup(const class FString& UniqueUserId, const class FString& GroupID);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, bool bWasSuccessful);
	void CreateGroup(const class FString& UniqueUserId, const class FString& GroupName);
};

// Class IpDrv.McpIdMappingBase
// 0x0030 (0x0080 - 0x00B0)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	class FString                                      McpIdMappingClassName;                         // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;              // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;           // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		}

		return uClassPointer;
	};

	void GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& outIDMappings);
	void OnQueryMappingsComplete(const class FString& ExternalType, bool bWasSuccessful, const class FString& Error);
	void QueryMappings(const class FString& ExternalType, class TArray<class FString>& outExternalIds);
	void OnAddMappingComplete(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType, bool bWasSuccessful, const class FString& Error);
	void AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType);
	static class UMcpIdMappingBase* CreateInstance();
};

// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00B0 - 0x0100)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	class TArray<struct FMcpIdMapping>                 AccountMappings;                               // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      AddMappingUrl;                                 // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryMappingUrl;                               // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FAddMappingRequest>            AddMappingRequests;                            // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FQueryMappingRequest>          QueryMappingRequests;                          // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		}

		return uClassPointer;
	};

	void GetIdMappings(const class FString& ExternalType, class TArray<struct FMcpIdMapping>& outIDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryMappings(const class FString& ExternalType, class TArray<class FString>& outExternalIds);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AddMapping(const class FString& McpId, const class FString& ExternalId, const class FString& ExternalType);
};

// Class IpDrv.McpManagedValueManagerBase
// 0x0050 (0x0080 - 0x00D0)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	class FString                                      McpManagedValueManagerClassName;               // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;            // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;             // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;             // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteValueComplete(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, bool bWasSuccessful, const class FString& Error);
	void DeleteValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	void OnUpdateValueComplete(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value, bool bWasSuccessful, const class FString& Error);
	void UpdateValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value);
	int32_t GetValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	class TArray<struct FManagedValue> GetValues(const class FString& McpId, const class FString& SaveSlot);
	void OnReadSaveSlotComplete(const class FString& McpId, const class FString& SaveSlot, bool bWasSuccessful, const class FString& Error);
	void ReadSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	void OnCreateSaveSlotComplete(const class FString& McpId, const class FString& SaveSlot, bool bWasSuccessful, const class FString& Error);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	static class UMcpManagedValueManagerBase* CreateInstance();
};

// Class IpDrv.McpManagedValueManager
// 0x0090 (0x00D0 - 0x0160)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	class FString                                      CreateSaveSlotUrl;                             // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ReadSaveSlotUrl;                               // 0x00E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      UpdateValueUrl;                                // 0x00F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteValueUrl;                                // 0x0100 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FManagedValueSaveSlot>         SaveSlots;                                     // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                        // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                          // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FValueRequestState>            UpdateValueRequests;                           // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FValueRequestState>            DeleteValueRequests;                           // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		}

		return uClassPointer;
	};

	void OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	void OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void UpdateValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId, int32_t Value);
	int32_t GetValue(const class FString& McpId, const class FString& SaveSlot, const class FName& ValueId);
	class TArray<struct FManagedValue> GetValues(const class FString& McpId, const class FString& SaveSlot);
	void OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ReadSaveSlot(const class FString& McpId, const class FString& SaveSlot);
	void ParseValuesForSaveSlot(const class FString& McpId, const class FString& SaveSlot, const class FString& JsonPayload);
	int32_t FindSaveSlotIndex(const class FString& McpId, const class FString& SaveSlot);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlot);
};

// Class IpDrv.McpServerTimeBase
// 0x0020 (0x0080 - 0x00A0)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	class FString                                      McpServerTimeClassName;                        // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;         // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		}

		return uClassPointer;
	};

	class FString GetLastServerTime();
	void OnQueryServerTimeComplete(bool bWasSuccessful, const class FString& DateTimeStr, const class FString& Error);
	void QueryServerTime();
	static class UMcpServerTimeBase* CreateInstance();
};

// Class IpDrv.McpServerTimeManager
// 0x0028 (0x00A0 - 0x00C8)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	class FString                                      TimeStampUrl;                                  // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      LastTimeStamp;                                 // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                         // 0x00C0 (0x0008) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		}

		return uClassPointer;
	};

	class FString GetLastServerTime();
	void OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryServerTime();
};

// Class IpDrv.McpUserInventoryBase
// 0x00B0 (0x0080 - 0x0130)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	class FString                                      McpUserInventoryClassName;                     // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;          // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;       // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;     // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;            // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;             // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;              // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;               // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		}

		return uClassPointer;
	};

	void OnRecordIapComplete(const class FString& McpId, const class FString& SaveSlotId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void RecordIap(const class FString& McpId, const class FString& SaveSlotId, const class FString& Receipt);
	void OnDeleteItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, bool bWasSuccessful, const class FString& Error);
	void DeleteItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void ConsumeItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void EarnItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void SellItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion, class TArray<struct FMcpInventoryItemContainer>& outExpectedResultItems);
	void OnPurchaseItemComplete(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& UpdatedItemIds, bool bWasSuccessful, const class FString& Error);
	void PurchaseItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	bool GetInventoryItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, struct FMcpInventoryItem& outOutInventoryItem);
	void GetInventoryItems(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct FMcpInventoryItem>& outOutInventoryItems);
	void OnQueryInventoryItemsComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void QueryInventoryItems(const class FString& McpId, const class FString& SaveSlotId);
	void OnQuerySaveSlotListComplete(const class FString& McpId, bool bWasSuccessful, const class FString& Error);
	class TArray<class FString> GetSaveSlotList(const class FString& McpId);
	void QuerySaveSlotList(const class FString& McpId);
	void OnDeleteSaveSlotComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void DeleteSaveSlot(const class FString& McpId, const class FString& SaveSlotId);
	void OnCreateSaveSlotComplete(const class FString& McpId, const class FString& SaveSlotId, bool bWasSuccessful, const class FString& Error);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& optionalParentSaveSlotId);
	static class UMcpUserInventoryBase* CreateInstance();
};

// Class IpDrv.McpUserInventoryManager
// 0x00F0 (0x0130 - 0x0220)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	class FString                                      CreateSaveSlotUrl;                             // 0x0130 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteSaveSlotUrl;                             // 0x0140 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ListSaveSlotUrl;                               // 0x0150 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ListItemsUrl;                                  // 0x0160 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      PurchaseItemUrl;                               // 0x0170 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      SellItemUrl;                                   // 0x0180 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      EarnItemUrl;                                   // 0x0190 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      ConsumeItemUrl;                                // 0x01A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteItemUrl;                                 // 0x01B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      IapRecordUrl;                                  // 0x01C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<struct FMcpInventorySaveSlot>         SaveSlots;                                     // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                              // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                          // 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                             // 0x0200 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FInventoryItemRequestState>    ItemRequests;                                  // 0x0210 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		}

		return uClassPointer;
	};

	void OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void RecordIap(const class FString& McpId, const class FString& SaveSlotId, const class FString& Receipt);
	void OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ConsumeItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void EarnItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void SellItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, int32_t Quantity, int32_t StoreVersion, class TArray<struct FMcpInventoryItemContainer>& outExpectedResultItems);
	void OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void PurchaseItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& GlobalItemId, const class TArray<class FString>& PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	int32_t FindItemRequest(const class FString& McpId, const class FString& SaveSlotId, const class FString& ItemId, class TArray<struct FInventoryItemRequestState>& outInItemRequests);
	int32_t FindSaveSlotRequest(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>& outInSaveSlotRequests);
	int32_t FindSaveSlotIndex(const class FString& McpId, const class FString& SaveSlotId);
	void ParseSaveSlotList(const class FString& McpId, const class FString& JsonPayload);
	class TArray<class FString> ParseInventoryForSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& JsonPayload);
	bool GetInventoryItem(const class FString& McpId, const class FString& SaveSlotId, const class FString& InstanceItemId, struct FMcpInventoryItem& outOutInventoryItem);
	void GetInventoryItems(const class FString& McpId, const class FString& SaveSlotId, class TArray<struct FMcpInventoryItem>& outOutInventoryItems);
	void OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryInventoryItems(const class FString& McpId, const class FString& SaveSlotId);
	class TArray<class FString> GetSaveSlotList(const class FString& McpId);
	void OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QuerySaveSlotList(const class FString& McpId);
	void OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteSaveSlot(const class FString& McpId, const class FString& SaveSlotId);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void CreateSaveSlot(const class FString& McpId, const class FString& SaveSlotId, const class FString& optionalParentSaveSlotId);
};

// Class IpDrv.McpUserManagerBase
// 0x0050 (0x0080 - 0x00D0)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	class FString                                      McpUserManagerClassName;                       // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;            // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthenticateUserComplete__Delegate;        // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;              // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;              // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteUserComplete(bool bWasSuccessful, const class FString& Error);
	void DeleteUser(const class FString& McpId);
	bool GetUser(const class FString& McpId, struct FMcpUserStatus& outUser);
	void GetUsers(class TArray<struct FMcpUserStatus>& outUsers);
	void OnQueryUsersComplete(bool bWasSuccessful, const class FString& Error);
	void QueryUsers(class TArray<class FString>& outMcpIds);
	void QueryUser(const class FString& McpId, bool optionalBShouldUpdateLastActive);
	void OnAuthenticateUserComplete(const class FString& McpId, const class FString& Token, bool bWasSuccessful, const class FString& Error);
	void AuthenticateUserMcp(const class FString& McpId, const class FString& ClientSecret, const class FString& UDID);
	void AuthenticateUserFacebook(const class FString& FacebookId, const class FString& FacebookToken, const class FString& UDID);
	void OnRegisterUserComplete(const class FString& McpId, bool bWasSuccessful, const class FString& Error);
	void RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken);
	void RegisterUserGenerated();
	static class UMcpUserManagerBase* CreateInstance();
};

// Class IpDrv.McpUserManager
// 0x00C0 (0x00D0 - 0x0190)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	class TArray<struct FMcpUserStatus>                UserStatuses;                                  // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      RegisterUserMcpUrl;                            // 0x00E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      RegisterUserFacebookUrl;                       // 0x00F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUserUrl;                                  // 0x0100 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      QueryUsersUrl;                                 // 0x0110 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      DeleteUserUrl;                                 // 0x0120 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      FacebookAuthUrl;                               // 0x0130 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class FString                                      McpAuthUrl;                                    // 0x0140 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         RegisterUserRequests;                          // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         QueryUsersRequests;                            // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<struct FUserRequest>                  DeleteUserRequests;                            // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class TArray<class UHttpRequestInterface*>         AuthUserRequests;                              // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManager");
		}

		return uClassPointer;
	};

	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void DeleteUser(const class FString& McpId);
	bool GetUser(const class FString& McpId, struct FMcpUserStatus& outUser);
	void GetUsers(class TArray<struct FMcpUserStatus>& outUsers);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void ParseUsers(const class FString& JsonPayload);
	void QueryUsers(class TArray<class FString>& outMcpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void QueryUser(const class FString& McpId, bool optionalBShouldUpdateLastActive);
	void OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	void AuthenticateUserMcp(const class FString& McpId, const class FString& ClientSecret, const class FString& UDID);
	void AuthenticateUserFacebook(const class FString& FacebookId, const class FString& FacebookToken, const class FString& UDID);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, bool bWasSuccessful);
	int32_t ParseUser(const class FString& JsonPayload);
	void RegisterUserFacebook(const class FString& FacebookId, const class FString& FacebookAuthToken);
	void RegisterUserGenerated();
};

// Class IpDrv.OnlineImageDownloaderWeb
// 0x0024 (0x0068 - 0x008C)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	class TArray<struct FOnlineImageDownload>          DownloadImages;                                // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            MaxSimultaneousDownloads;                      // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;           // 0x007C (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		}

		return uClassPointer;
	};

	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed);
	void DownloadNextImage();
	void ClearAllDownloads();
	void ClearDownloads(const class TArray<class FString>& URLs);
	int32_t GetNumPendingDownloads();
	void RequestOnlineImages(const class TArray<class FString>& URLs);
	class UTexture* GetOnlineImageTexture(const class FString& URL);
	void OnOnlineImageDownloaded(const struct FOnlineImageDownload& CachedEntry);
};

// Class IpDrv.WebConnection
// 0x0044 (0x02AC - 0x02F0)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                     // 0x02AC (0x0008) [0x0000000000000000]               
	class FString                                      ReceivedData;                                  // 0x02B4 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebRequest*                                 Request;                                       // 0x02C4 (0x0008) [0x0000000000000000]               
	class UWebResponse*                                Response;                                      // 0x02CC (0x0008) [0x0000000000000000]               
	class UWebApplication*                             Application;                                   // 0x02D4 (0x0008) [0x0000000000000000]               
	uint32_t                                           bDelayCleanup : 1;                             // 0x02DC (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RawBytesExpecting;                             // 0x02E0 (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValueLength;                                // 0x02E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxLineLength;                                 // 0x02E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ConnID;                                        // 0x02EC (0x0004) [0x0000000000000000]               

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebConnection");
		}

		return uClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const class FString& S);
	void ProcessGet(const class FString& S);
	void ProcessHead(const class FString& S);
	void ReceivedLine(const class FString& S);
	void eventReceivedText(const class FString& Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
#pragma pack(pop)
#endif
