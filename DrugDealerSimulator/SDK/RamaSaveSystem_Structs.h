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
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RamaSaveSystem.RamaAsyncSaveUnit
	 * Size -> 0x0050
	 */
	struct FRamaAsyncSaveUnit
	{
	public:
		bool                                                       UpdateUI;                                                // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MLT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Index;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalComponents;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T1T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class URamaSaveComponent*>                          RamaSaveComponents;                                      // 0x0010(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      ToBinary;                                                // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LK2[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Finished;                                                // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CompressionStarted;                                      // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S594[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RamaSaveSystem.RamaSaveEngineParams
	 * Size -> 0x0038
	 */
	struct FRamaSaveEngineParams
	{
	public:
		TArray<class FString>                                      LoadOnlyActorsWithSaveTags;                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DestroyActorsBeforeLoad;                                 // 0x0020(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DontLoadPlayerPawns;                                     // 0x0021(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OL0D[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LoadOnlyStreamingLevel;                                  // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RamaSaveSystem.RamaSaveSystemAssetPathRemap
	 * Size -> 0x0020
	 */
	struct FRamaSaveSystemAssetPathRemap
	{
	public:
		class FString                                              OldPath;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewPath;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RamaSaveSystem.RBLoad
	 * Size -> 0x0050
	 */
	struct FRBLoad
	{
	public:
		unsigned char                                              UnknownData_652Y[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RamaSaveSystem.RBSave
	 * Size -> 0x0040
	 */
	struct FRBSave
	{
	public:
		struct FVector_NetQuantize100                              PhysicsLocation;                                         // 0x0000(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA7Q[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               PhysicsRotation;                                         // 0x0010(0x0010) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              LinearVelocity;                                          // 0x0020(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FVector_NetQuantize100                              AngularVelocity;                                         // 0x002C(0x000C) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFBL[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
