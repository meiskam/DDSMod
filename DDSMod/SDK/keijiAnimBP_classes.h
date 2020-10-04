#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass keijiAnimBP.keijiAnimBP_C
// 0x065D (0x09BD - 0x0360)
class UkeijiAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_67F8DB9C4BEE4DFDCD13AB99C1CC06C1;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_82BB96E74C8D3AC7C8D846AE085B87E4;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FC1550E479D46404466E18806FF5013;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_423AFFDF4668E54C8CE012ABBB840A37;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_988FDD3A4C67AD193F4C51A6240DFC50;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8BE11A0949D0D409B1FA8B902C6A08D1;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E52C48A4969649C4F06D7A1A4B2AF4A;// 0x0510(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7227D923454D11523CA530A2D2BA17AA;// 0x0558(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2E6991DF49640D4B03660A91E963B2FB;// 0x05F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2138226A42024EB2D2D4FCBB72A503D2;// 0x0638(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_279DD9A34926A7A322DFF38AE1DFB999;// 0x06D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2B02D74E4D7CB3AE0503C5BFC3BE9C66;// 0x0718(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2B6B76F54950A7E3FE3F73BB5F83AF14;// 0x07B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B98197FB4799EC891D9B95B39EB49608;// 0x07F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_98DB83824BA2C52318F43397E95120DD;// 0x0898(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DB22571E428141ACB61378B563C83DF7;// 0x08D8(0x00E0)
	int                                                AnimStep;                                                 // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Reset;                                                    // 0x09BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass keijiAnimBP.keijiAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiAnimBP_AnimGraphNode_TransitionResult_3E52C48A4969649C4F06D7A1A4B2AF4A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiAnimBP_AnimGraphNode_TransitionResult_5FC1550E479D46404466E18806FF5013();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_keijiAnimBP_AnimGraphNode_TransitionResult_988FDD3A4C67AD193F4C51A6240DFC50();
	void ExecuteUbergraph_keijiAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
