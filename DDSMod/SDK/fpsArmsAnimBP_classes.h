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

// AnimBlueprintGeneratedClass fpsArmsAnimBP.fpsArmsAnimBP_C
// 0x07C3 (0x0B23 - 0x0360)
class UfpsArmsAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_27DD5B424D87BE179AD36386CF46C416;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF9116814F3A1F64B51BA69036AA187B;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3CEAF43F462B71A3BEEBD181B15B69BD;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA435425470FBC54B34802AB1BD0A689;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E5A80D9D46124E3BE5CAEE95482C4865;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_912D86B3479A90D9610D6B9C7F00D05C;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3031917A44126AEFF36F52B93B1469F6;// 0x0510(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B32C1B041BB17723D37BFBDB807F696;// 0x0558(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D2DC9CBB410CE9E91515F48992D1E339;// 0x05F8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7FDE4E3347378F1C910122860C60270D;// 0x0638(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3FED405F48C42E32323074AE0C190EF4;// 0x06D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_723CC8E54A7F3EC47D04D381D483486E;// 0x0718(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_CBC9EADB4C5D979AAE3F54894387ADB8;// 0x07B8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_443625294C59F22CA69BE6B1336983FA;// 0x07F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_488375104E7F23378260E3BE76A1F7D8;// 0x0898(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_02B9A3904AB2F8A3B72D28913C2BF3EE;// 0x08D8(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_246AF31246C0B6C5AD5E06862DC2105B;// 0x0A00(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_37011AA24CDF3D3FD75D32A2F8848027;// 0x0A40(0x00E0)
	bool                                               phoneIsUp;                                                // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsJumping;                                                // 0x0B21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasLanded;                                                // 0x0B22(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass fpsArmsAnimBP.fpsArmsAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_fpsArmsAnimBP_AnimGraphNode_TransitionResult_3CEAF43F462B71A3BEEBD181B15B69BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_fpsArmsAnimBP_AnimGraphNode_BlendSpacePlayer_02B9A3904AB2F8A3B72D28913C2BF3EE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_fpsArmsAnimBP_AnimGraphNode_TransitionResult_E5A80D9D46124E3BE5CAEE95482C4865();
	void AnimNotify_Step01();
	void ExecuteUbergraph_fpsArmsAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
