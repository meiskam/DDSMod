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
	 * BlueprintGeneratedClass PM_CaughtPlayer.PM_CaughtPlayer_C
	 * Size -> 0x0018 (FullSize[0x00B8] - InheritedSize[0x00A0])
	 */
	class UPM_CaughtPlayer_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class APawn*>                                       ignore;                                                  // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_PM_CaughtPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
