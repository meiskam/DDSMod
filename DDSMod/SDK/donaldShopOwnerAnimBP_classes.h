#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C
// 0x0540 (0x08A0 - 0x0360)
class UdonaldShopOwnerAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_82EAC030408C2DCE794725AD5E8F131F;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_963B2D94428E0592F55745B75F727656;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00B806EA4583B25BBCB0B08FE1814671;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_79F3FD82472BFD7B2138BF926F65D6D2;// 0x0438(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_393EF2F54BF9A24684E89FBDE67CFF70;// 0x04D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FF23157A45A9F4DFE104DBB44A831223;// 0x0518(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CB21FA834950C8D1EEC1B5B784BCA3F2;// 0x05B8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E591D156463DBA7F36980EAC47B96EE2;// 0x05F8(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5793F3F143B7A534C8B173B70AEADC09;// 0x06D8(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D373565444A8812DA9AB35B0BE8492D9;// 0x0718(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_907A423848A2AE28A3B60EB896CAE406;// 0x0758(0x0138)
	bool                                               IsClient;                                                 // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0891(0x0003) MISSED OFFSET
	struct FRotator                                    HeadRot;                                                  // 0x0894(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_donaldShopOwnerAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
