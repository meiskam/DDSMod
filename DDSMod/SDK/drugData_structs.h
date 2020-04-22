#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct drugData.drugData
// 0x00B0
struct FdrugData
{
	struct FText                                       DrugName_2_D42CFE1B49201DD5F14A7B92ED1D9E5F;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       DrugDescription_8_2796A88340BA080A65F5F69051780E3E;       // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  DrugIcon_5_7EE8BD8A4052D5717A2A618C63FAFFDD;              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               colloquialNames_12_E78EF57F4B652CDDBB191CB29ABBE240;      // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              availabilityMultiplier_15_5A44761547697AA7002A4AA4082221A1;// 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EdrugForm>                             drugForm_19_B94E64C64B0B81B32236CCBA49100E18;             // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isWet_21_3DCCFDAF4015574DA4DB7FA14AC0C133;                // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	float                                              toxicity_24_54E19A5F4B81FE2CF3836FA4F83382FC;             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              strength_26_B4E709F44A3C02554E1D3FA63641BBFD;             // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              mixStrengthening_28_C468A65149217056E28526BC06376E13;     // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              addictiveness_30_BF9166F740FC345C0EBDE3BA45E428B2;        // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              humidity_33_A156622A4983A1045007BD9FF1B5905D;             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FString                                     StringID_36_3FD7427C416F05A3FAE41494889710CB;             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             MixStringIDs_41_539D03C54BF6480E05C4DCA079BEC14A;         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      MixStringProportions_43_ABF7A43645EBC16787BC0E8F2906C6C4; // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              useSpeedMultiplier_51_3DAFD0674FC791043364A1A7A6B635CA;   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useStaminaMultiplier_52_5D916ACC4DE860C0D6FF68AF5FD919D3; // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useTimeMultiplier_53_57DC35164D7B9CF4AD17ADAABCC4A38F;    // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useFOVMultiplier_54_9516AF6A4E004500DC492CA399385E01;     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useConfusionMultiplier_55_C149EF9147BCEFD99BC749A9EE662C38;// 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              useDoseTimeout_56_9D3F1C014067339313A823AD1ACFBC36;       // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
