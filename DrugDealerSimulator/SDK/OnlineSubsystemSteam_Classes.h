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
	 * Class OnlineSubsystemSteam.SteamAuthComponentModuleInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamNetConnection
	 * Size -> 0x0008 (FullSize[0x1980] - InheritedSize[0x1978])
	 */
	class USteamNetConnection : public UIpConnection
	{
	public:
		bool                                                       bIsPassthrough;                                          // 0x1978(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78R2[0x7];                                   // 0x1979(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OnlineSubsystemSteam.SteamNetDriver
	 * Size -> 0x0008 (FullSize[0x06E0] - InheritedSize[0x06D8])
	 */
	class USteamNetDriver : public UIpNetDriver
	{
	public:
		unsigned char                                              UnknownData_669G[0x8];                                   // 0x06D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
