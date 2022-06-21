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
	 * BlueprintGeneratedClass BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent.BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTService_Bird_Shuffle_SkyTarget_WhenNearCurrent_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
		void ExecuteUbergraph_BTService_Bird_Shuffle_SkyTarget_WhenNearCurrent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
