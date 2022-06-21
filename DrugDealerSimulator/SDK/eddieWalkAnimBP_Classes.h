#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass eddieWalkAnimBP.eddieWalkAnimBP_C
	 * Size -> 0x0331 (FullSize[0x0691] - InheritedSize[0x0360])
	 */
	class UeddieWalkAnimBP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_2822AB7043070539D13244B6EA70102D;     // 0x0368(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7562A5E14AD2C837AF5E56A097704F5A; // 0x03A8(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21E92CBB49188FCE97631EB5B1D9FCB9; // 0x03F0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_0B0A08984CE60CB6959135960AA4B5D5; // 0x0490(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6EFE5AD344DBC7B4E3B2D89A755CC3D3; // 0x04D0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_170B5B5A434712750FA350A13AADF0F6; // 0x0570(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_78F4C7A04FB61B3801849991ABCC7935; // 0x05B0(0x00E0)
		bool                                                       openDoor;                                                // 0x0690(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_eddieWalkAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
