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

// AnimBlueprintGeneratedClass CitizenMale03_animBP.CitizenMale03_animBP_C
// 0x0588 (0x08E8 - 0x0360)
class UCitizenMale03_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6DCFACE146E42539FDC6EAA200598235;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE542AA94B7B457D5751EDB52EC232F9;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_800789BC469BA5C983354C9A7881531A;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71BEB6F646831C3C4EB2E396EF02B1DA;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55B0C9EE493AF45A9A1EBD9C6A7C3B11;// 0x0480(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7D08DB15480714E9BAA27F9CD7341898;// 0x04C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7EC5457E4D6F450931FAE4A4E0AFE69A;// 0x0568(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EA785274ADDC8B18BBDB39D32E7B78D;// 0x05A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_51F6FF4543CB1A919C85CF82001CC090;// 0x0648(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4443FE4A4BC18FEB7F81BD834C88C1E2;// 0x0688(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8A30B6B847E012C6B71182A3807A8B9E;// 0x07B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_237D71224AB499B3A59BF983A0846508;// 0x07F0(0x00E0)
	float                                              RotRate;                                                  // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class APawn*                                       Owner;                                                    // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenMale03_animBP.CitizenMale03_animBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale03_animBP_AnimGraphNode_TransitionResult_71BEB6F646831C3C4EB2E396EF02B1DA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale03_animBP_AnimGraphNode_TransitionResult_800789BC469BA5C983354C9A7881531A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale03_animBP_AnimGraphNode_TransitionResult_55B0C9EE493AF45A9A1EBD9C6A7C3B11();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CitizenMale03_animBP_AnimGraphNode_TransitionResult_AE542AA94B7B457D5751EDB52EC232F9();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_CitizenMale03_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
