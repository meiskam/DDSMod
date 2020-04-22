#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CitizenMale01_animBP.CitizenMale01_animBP_C
// 0x057C (0x08DC - 0x0360)
class UCitizenMale01_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_EFB4AFEB41AC62DF2BEA788798927999;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F3385A714B79706C247AC9B1A2080176;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6C38DF21457D34131ED2B494503FC731;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A3C303E46868CA482E785AFE8D935F8;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1F60BAFE44AB61205A98B3A0EACABB48;// 0x0480(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07691A2345DAFB356FCDDCA007AFF9AB;// 0x04C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7DB1C312459A7BB48AB34F91BB7E6206;// 0x0568(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A68A79944E2A3A15D069AA868F382C51;// 0x05A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7B1E5FD843E558042E0988B8E395B3E3;// 0x0648(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AFD02DD445C14A808117708862AEB511;// 0x0688(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_94E7F6594BB792B16BE603AABCAD3928;// 0x07B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_08EE342448103D08EC193DB36A404DAE;// 0x07F0(0x00E0)
	float                                              RotRate;                                                  // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenMale01_animBP.CitizenMale01_animBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale01_animBP_AnimGraphNode_TransitionResult_0A3C303E46868CA482E785AFE8D935F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale01_animBP_AnimGraphNode_TransitionResult_6C38DF21457D34131ED2B494503FC731();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale01_animBP_AnimGraphNode_TransitionResult_1F60BAFE44AB61205A98B3A0EACABB48();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale01_animBP_AnimGraphNode_TransitionResult_F3385A714B79706C247AC9B1A2080176();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_CitizenMale01_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
