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
	 * BlueprintGeneratedClass BTTask_Bird_Set_FlyAway_ToFalse.BTTask_Bird_Set_FlyAway_ToFalse_C
	 * Size -> 0x0010 (FullSize[0x00B0] - InheritedSize[0x00A0])
	 */
	class UBTTask_Bird_Set_FlyAway_ToFalse_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                BBKey_FlyAway_;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
		void ExecuteUbergraph_BTTask_Bird_Set_FlyAway_ToFalse(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
