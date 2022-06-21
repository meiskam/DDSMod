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
	 * AnimBlueprintGeneratedClass patrolPoliceAnimBP.patrolPoliceAnimBP_C
	 * Size -> 0x0334 (FullSize[0x0694] - InheritedSize[0x0360])
	 */
	class UpatrolPoliceAnimBP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_DB895B8D40C6106D8ECA8085CEC3503B;     // 0x0368(0x0040)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D; // 0x03A8(0x0128)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_84269B814A2ED43FF1D7A68D1287D7F4; // 0x04D0(0x0138)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_984BD4024AD8C45EF6B659B5DCCA089E; // 0x0608(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_0F12084144E6BDBE24B743B9DC0A2D19; // 0x0648(0x0040)
		struct FRotator                                            headRot;                                                 // 0x0688(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_patrolPoliceAnimBP_AnimGraphNode_BlendSpacePlayer_1046287642CA18E6E3A0FFA29E27F59D();
		void ExecuteUbergraph_patrolPoliceAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
