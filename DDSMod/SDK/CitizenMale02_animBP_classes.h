#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CitizenMale02_animBP.CitizenMale02_animBP_C
// 0x0588 (0x08E8 - 0x0360)
class UCitizenMale02_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2593A7FA4E0F50D926F24DA67EE45E03;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AE92CF74F4C39142C9408BD3C23CFCD;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D5ED19BE4AC337301C76D6A7CBC21522;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2318AC42437256D781E3E499F9F3FA3C;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5C2513249A59FAEB1C754B5BE0920BE;// 0x0480(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A825970B4B825BA9B5B246BD135D1A55;// 0x04C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_86E158CE4E3ED28C378A63809363DABC;// 0x0568(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EEA263794374854EA3820988BE2A3950;// 0x05A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_401A53424C32601C0368228FF65E2D8E;// 0x0648(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_94E154A84117FF85A3CB4184C647F151;// 0x0688(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A21CDBBC4F087D876C31948CAF01B2C5;// 0x07B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_82368E154DD03348ABA997816FA23527;// 0x07F0(0x00E0)
	float                                              RotRate;                                                  // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class APawn*                                       Owner;                                                    // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenMale02_animBP.CitizenMale02_animBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale02_animBP_AnimGraphNode_TransitionResult_2318AC42437256D781E3E499F9F3FA3C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale02_animBP_AnimGraphNode_TransitionResult_D5ED19BE4AC337301C76D6A7CBC21522();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale02_animBP_AnimGraphNode_TransitionResult_E5C2513249A59FAEB1C754B5BE0920BE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale02_animBP_AnimGraphNode_TransitionResult_9AE92CF74F4C39142C9408BD3C23CFCD();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_CitizenMale02_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
