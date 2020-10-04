#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MusicBPM.MusicBPM
// 0x0018
struct FMusicBPM
{
	class USoundWave*                                  Wave_2_3CCB60D041D3DEAFDDF33DB76DF8D2F3;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BPM_5_776834BB42EB10B637E60C851A6677D8;                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lenght_8_96E4828643DEDA4DDDE4ACA2BBC78150;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionTime_10_269D79154988BB2223382FB760E30BFA;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InertiaTime_13_10A5E21247B97ED98DA92B803ADF255E;          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
