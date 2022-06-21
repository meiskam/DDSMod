#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class OnlineSubsystemUtils.IpConnection
	 * Size -> 0x0060 (FullSize[0x1978] - InheritedSize[0x1918])
	 */
	class UIpConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_NNCF[0x60];                                  // 0x1918(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.IpNetDriver
	 * Size -> 0x0040 (FullSize[0x06D8] - InheritedSize[0x0698])
	 */
	class UIpNetDriver : public UNetDriver
	{
	public:
		unsigned char                                              LogPortUnreach : 1;                                      // 0x0698(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AllowPlayerPortUnreach : 1;                              // 0x0698(0x0001) BIT_FIELD Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6LG[0x3];                                   // 0x0699(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaxPortCountToTry;                                       // 0x069C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q5I[0x18];                                  // 0x06A0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ServerDesiredSocketReceiveBufferBytes;                   // 0x06B8(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ServerDesiredSocketSendBufferBytes;                      // 0x06BC(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketReceiveBufferBytes;                   // 0x06C0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ClientDesiredSocketSendBufferBytes;                      // 0x06C4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VQKH[0x10];                                  // 0x06C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, float* Progress);
		void STATIC_GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementID, bool* bFoundID, class FText* Title, class FText* LockedDescription, class FText* UnlockedDescription, bool* bHidden);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0PIY[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7U5L[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		class UAchievementWriteCallbackProxy* STATIC_WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FName& AchievementName, float Progress, int32_t UserTag);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ConnectionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TTD[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UConnectionCallbackProxy* STATIC_ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.CreateSessionCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FI97[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UCreateSessionCallbackProxy* STATIC_CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.DestroySessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PR79[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroySessionCallbackProxy* STATIC_DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndMatchCallbackProxy
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQZF[0x30];                                  // 0x0048(0x0030) MISSED OFFSET (PADDING)

	public:
		class UEndMatchCallbackProxy* STATIC_EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome LocalPlayerOutcome, EMPMatchOutcome OtherPlayersOutcome);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.EndTurnCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_10RH[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UEndTurnCallbackProxy* STATIC_EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindSessionsCallbackProxy
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MFUP[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		class FString STATIC_GetServerName(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetPingInMs(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetMaxPlayers(const struct FBlueprintSessionResult& Result);
		int32_t STATIC_GetCurrentPlayers(const struct FBlueprintSessionResult& Result);
		class UFindSessionsCallbackProxy* STATIC_FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CY3[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		class UFindTurnBasedMatchCallbackProxy* STATIC_FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C5UW[0x38];                                  // 0x0048(0x0038) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseCallbackProxy* STATIC_CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, const struct FInAppPurchaseProductRequest& ProductRequest);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM8I[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseQueryCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<class FString> ProductIdentifiers);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UInAppPurchaseRestoreCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68FV[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UInAppPurchaseRestoreCallbackProxy* STATIC_CreateProxyObjectForInAppPurchaseRestore(TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.JoinSessionCallbackProxy
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XAQZ[0xE0];                                  // 0x0048(0x00E0) MISSED OFFSET (PADDING)

	public:
		class UJoinSessionCallbackProxy* STATIC_JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_WriteLeaderboardInteger(class APlayerController* PlayerController, const class FName& StatName, int32_t StatValue);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULeaderboardFlushCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08ZT[0x20];                                  // 0x0048(0x0020) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardFlushCallbackProxy* STATIC_CreateProxyObjectForFlush(class APlayerController* PlayerController, const class FName& SessionName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class ULeaderboardQueryCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE5B[0x50];                                  // 0x0048(0x0050) MISSED OFFSET (PADDING)

	public:
		class ULeaderboardQueryCallbackProxy* STATIC_CreateProxyObjectForIntQuery(class APlayerController* PlayerController, const class FName& StatName);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.LogoutCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEFL[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		class ULogoutCallbackProxy* STATIC_Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeacon
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class AOnlineBeacon : public AActor
	{
	public:
		unsigned char                                              UnknownData_ICM1[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeaconConnectionInitialTimeout;                          // 0x0330(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeaconConnectionTimeout;                                 // 0x0334(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetDriver*                                          NetDriver;                                               // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NAIB[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconClient
	 * Size -> 0x0050 (FullSize[0x03A0] - InheritedSize[0x0350])
	 */
	class AOnlineBeaconClient : public AOnlineBeacon
	{
	public:
		class AOnlineBeaconHostObject*                             BeaconOwner;                                             // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNetConnection*                                      BeaconConnection;                                        // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBeaconConnectionState                                     ConnectionState;                                         // 0x0360(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WH54[0x3F];                                  // 0x0361(0x003F) MISSED OFFSET (PADDING)

	public:
		void ClientOnConnected();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHost
	 * Size -> 0x00B8 (FullSize[0x0408] - InheritedSize[0x0350])
	 */
	class AOnlineBeaconHost : public AOnlineBeacon
	{
	public:
		int32_t                                                    ListenPort;                                              // 0x0350(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A489[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0358(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A4I7[0xA0];                                  // 0x0368(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineBeaconHostObject
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class AOnlineBeaconHostObject : public AActor
	{
	public:
		class FString                                              BeaconTypeName;                                          // 0x0328(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ClientBeaconActorClass;                                  // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AOnlineBeaconClient*>                         ClientActors;                                            // 0x0340(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
	{
	public:
		class FName                                                VoiceSubsystemNameOverride;                              // 0x0028(0x0008) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CPHC[0xF8];                                  // 0x0030(0x00F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlinePIESettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UOnlinePIESettings : public UDeveloperSettings
	{
	public:
		bool                                                       bOnlinePIEEnabled;                                       // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QU8[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPIELoginSettingsInternal>                   Logins;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.OnlineSessionClient
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UOnlineSessionClient : public UOnlineSession
	{
	public:
		unsigned char                                              UnknownData_JEUE[0x160];                                 // 0x0028(0x0160) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsFromInvite;                                           // 0x0188(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHandlingDisconnect;                                     // 0x0189(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N5FI[0x6];                                   // 0x018A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconClient
	 * Size -> 0x00B0 (FullSize[0x0450] - InheritedSize[0x03A0])
	 */
	class APartyBeaconClient : public AOnlineBeaconClient
	{
	public:
		unsigned char                                              UnknownData_1LJI[0x30];                                  // 0x03A0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DestSessionId;                                           // 0x03D0(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FPartyReservation                                   PendingReservation;                                      // 0x03E0(0x0040) Protected, NativeAccessSpecifierProtected
		EClientRequestType                                         RequestType;                                             // 0x0420(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPendingReservationSent;                                 // 0x0421(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelReservation;                                      // 0x0422(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PG44[0x2D];                                  // 0x0423(0x002D) MISSED OFFSET (PADDING)

	public:
		void ServerUpdateReservationRequest(const class FString& SessionId, const struct FPartyReservation& ReservationUpdate);
		void ServerReservationRequest(const class FString& SessionId, const struct FPartyReservation& Reservation);
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
		void ClientSendReservationUpdates(int32_t NumRemainingReservations);
		void ClientSendReservationFull();
		void ClientReservationResponse(EPartyReservationResult ReservationResponse);
		void ClientCancelReservationResponse(EPartyReservationResult ReservationResponse);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconHost
	 * Size -> 0x0068 (FullSize[0x03B8] - InheritedSize[0x0350])
	 */
	class APartyBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		class UPartyBeaconState*                                   State;                                                   // 0x0350(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_13A9[0x50];                                  // 0x0358(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bLogoutOnSessionTimeout;                                 // 0x03A8(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z45Z[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SessionTimeoutSecs;                                      // 0x03AC(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TravelSessionTimeoutSecs;                                // 0x03B0(0x0004) ZeroConstructor, Transient, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8NMZ[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.PartyBeaconState
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UPartyBeaconState : public UObject
	{
	public:
		class FName                                                SessionName;                                             // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumConsumedReservations;                                 // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReservations;                                         // 0x0034(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumTeams;                                                // 0x0038(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayersPerTeam;                                       // 0x003C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TeamAssignmentMethod;                                    // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReservedHostTeamNum;                                     // 0x0048(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ForceTeamNum;                                            // 0x004C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRestrictCrossConsole;                                   // 0x0050(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_14RZ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPartyReservation>                           Reservations;                                            // 0x0058(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7WWQ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.QuitMatchCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LDFG[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UQuitMatchCallbackProxy* STATIC_QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CBSU[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		class UShowLoginUICallbackProxy* STATIC_ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconClient
	 * Size -> 0x0000 (FullSize[0x03A0] - InheritedSize[0x03A0])
	 */
	class ATestBeaconClient : public AOnlineBeaconClient
	{
	public:
		void ServerPong();
		void ClientPing();
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TestBeaconHost
	 * Size -> 0x0000 (FullSize[0x0350] - InheritedSize[0x0350])
	 */
	class ATestBeaconHost : public AOnlineBeaconHostObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object);
		void STATIC_GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t PlayerIndex, class FString* PlayerDisplayName);
		void STATIC_GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, int32_t* PlayerIndex);
		void STATIC_GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, const class FString& MatchID, bool* bIsMyTurn);
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemUtils.VoipListenerSynthComponent
	 * Size -> 0x0010 (FullSize[0x05D0] - InheritedSize[0x05C0])
	 */
	class UVoipListenerSynthComponent : public USynthComponent
	{
	public:
		unsigned char                                              UnknownData_PW87[0x10];                                  // 0x05C0(0x0010) MISSED OFFSET (PADDING)

	public:
		bool IsIdling();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
