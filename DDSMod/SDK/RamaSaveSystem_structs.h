#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct RamaSaveSystem.RamaAsyncSaveUnit
// 0x0050
struct FRamaAsyncSaveUnit
{
	bool                                               UpdateUI;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Index;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalComponents;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class URamaSaveComponent*>                  RamaSaveComponents;                                       // 0x0010(0x0010) (ExportObject, ZeroConstructor)
	struct FString                                     Filename;                                                 // 0x0020(0x0010) (ZeroConstructor)
	TArray<unsigned char>                              ToBinary;                                                 // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	bool                                               Finished;                                                 // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CompressionStarted;                                       // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct RamaSaveSystem.RamaSaveEngineParams
// 0x0038
struct FRamaSaveEngineParams
{
	TArray<struct FString>                             LoadOnlyActorsWithSaveTags;                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Filename;                                                 // 0x0010(0x0010) (ZeroConstructor)
	bool                                               DestroyActorsBeforeLoad;                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               DontLoadPlayerPawns;                                      // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FString                                     LoadOnlyStreamingLevel;                                   // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct RamaSaveSystem.RamaSaveSystemAssetPathRemap
// 0x0020
struct FRamaSaveSystemAssetPathRemap
{
	struct FString                                     OldPath;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NewPath;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct RamaSaveSystem.RBLoad
// 0x0050
struct FRBLoad
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct RamaSaveSystem.RBSave
// 0x0040
struct FRBSave
{
	struct FVector_NetQuantize100                      PhysicsLocation;                                          // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       PhysicsRotation;                                          // 0x0010(0x0010) (IsPlainOldData)
	struct FVector_NetQuantize100                      LinearVelocity;                                           // 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngularVelocity;                                          // 0x002C(0x000C)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
