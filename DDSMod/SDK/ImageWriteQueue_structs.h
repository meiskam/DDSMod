#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0060
struct FImageWriteOptions
{
	EDesiredImageFormat                                Format;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnComplete;                                               // 0x0008(0x0014) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	int                                                CompressionQuality;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverwriteFile;                                           // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAsync;                                                   // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x42];                                      // 0x001E(0x0042) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
