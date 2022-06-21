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
	 * Class HTML5Networking.WebSocketConnection
	 * Size -> 0x0010 (FullSize[0x1928] - InheritedSize[0x1918])
	 */
	class UWebSocketConnection : public UNetConnection
	{
	public:
		unsigned char                                              UnknownData_VTKG[0x10];                                  // 0x1918(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HTML5Networking.WebSocketNetDriver
	 * Size -> 0x0010 (FullSize[0x06A8] - InheritedSize[0x0698])
	 */
	class UWebSocketNetDriver : public UNetDriver
	{
	public:
		int32_t                                                    WebSocketPort;                                           // 0x0698(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVNM[0xC];                                   // 0x069C(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
