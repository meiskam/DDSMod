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
	 * AnimBlueprintGeneratedClass eddieMainAnimBP.eddieMainAnimBP_C
	 * Size -> 0x00E8 (FullSize[0x0448] - InheritedSize[0x0360])
	 */
	class UeddieMainAnimBP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_71E2D97142C6063582A4289CBF6CFEDB;     // 0x0368(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CFE8EA36482E3727A05109AC9E317033; // 0x03A8(0x00A0)

	public:
		void ExecuteUbergraph_eddieMainAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
