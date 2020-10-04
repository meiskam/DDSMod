#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass keijiFinalAnimBP.keijiFinalAnimBP_C
// 0x065D (0x09BD - 0x0360)
class UkeijiFinalAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6990C17A44D96BA282F7FFB676C64017;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5E9F2E8A4D72A91AF42D1DBD5ADA7592;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F52EA8374F65723411A2D2B1FC98001D;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_620918F0478003E0E59E7CADE16A00DD;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BCAB126244DC6C9B52C7B4B7702594F5;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CF03E16D415206F872BC66B912ED980F;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A1FEEA064CD7AEC4252919985059F5FA;// 0x0510(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_00B1203C4EBD7EF1050CC2A6F141ACA8;// 0x0558(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_00BD8C0545A94E513B180E9C8A449006;// 0x05F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_517C5FC04B588A2C889FE7AF8AF08B24;// 0x0638(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3763BF62485358A2B96FAEA1C5B52DC8;// 0x06D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0ED5FB71420545EF7C13D785BE1EE702;// 0x0718(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_63DB09614648003BEB2C1EB213F59566;// 0x07B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7942A8F94AA4368F13E9F5B975C849D8;// 0x07F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_94FC5F9749F56554FBE868B0BF8011A2;// 0x0898(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D7E8574147CCC9E0204E11A6903FEFB5;// 0x08D8(0x00E0)
	int                                                AnimStep;                                                 // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reset;                                                    // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass keijiFinalAnimBP.keijiFinalAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiFinalAnimBP_AnimGraphNode_TransitionResult_A1FEEA064CD7AEC4252919985059F5FA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiFinalAnimBP_AnimGraphNode_TransitionResult_F52EA8374F65723411A2D2B1FC98001D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiFinalAnimBP_AnimGraphNode_TransitionResult_BCAB126244DC6C9B52C7B4B7702594F5();
	void ExecuteUbergraph_keijiFinalAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
