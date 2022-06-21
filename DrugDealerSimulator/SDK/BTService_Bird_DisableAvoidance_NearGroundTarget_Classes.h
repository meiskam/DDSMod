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
	 * BlueprintGeneratedClass BTService_Bird_DisableAvoidance_NearGroundTarget.BTService_Bird_DisableAvoidance_NearGroundTarget_C
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UBTService_Bird_DisableAvoidance_NearGroundTarget_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                BBKey_DoADownTrace_;                                     // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_BTService_Bird_DisableAvoidance_NearGroundTarget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
