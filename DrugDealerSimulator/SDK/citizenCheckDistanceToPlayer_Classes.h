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
	 * BlueprintGeneratedClass citizenCheckDistanceToPlayer.citizenCheckDistanceToPlayer_C
	 * Size -> 0x000C (FullSize[0x00A4] - InheritedSize[0x0098])
	 */
	class UcitizenCheckDistanceToPlayer_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      playerFarDistance;                                       // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_citizenCheckDistanceToPlayer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
