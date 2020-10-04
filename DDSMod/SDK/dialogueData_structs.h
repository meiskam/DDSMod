#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct dialogueData.dialogueData
// 0x0100
struct FdialogueData
{
	struct FText                                       DialogueLine_2_8B15268449F65976C471C581FC5582DB;          // 0x0000(0x0018) (Edit, BlueprintVisible)
	class USoundWave*                                  DialogueAudio_5_AB869F204D883555C2EB44AEBCEA4839;         // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FdialogueResponseData                       Response01_23_59E9B44C445C519843261E8243697FED;           // 0x0020(0x0038) (Edit, BlueprintVisible)
	struct FdialogueResponseData                       Response02_25_88B8209D400E5A6FFF8607B5AEC1A21B;           // 0x0058(0x0038) (Edit, BlueprintVisible)
	struct FdialogueResponseData                       Response03_27_3943CC4D4027A576FA194B9BC91D3965;           // 0x0090(0x0038) (Edit, BlueprintVisible)
	struct FdialogueResponseData                       Response04_29_19AF821E40CCD72AB3556489E54859CB;           // 0x00C8(0x0038) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
