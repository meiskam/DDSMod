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
	 * BlueprintGeneratedClass InteractiveTrashBin.InteractiveTrashBin_C
	 * Size -> 0x001B (FullSize[0x050C] - InheritedSize[0x04F1])
	 */
	class AInteractiveTrashBin_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_PC4S[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AdayTimeControler_C*                                 dayTimeCon;                                              // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StealChance;                                             // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PurgeTrashBin();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void RamaLoaded();
		void BinPurge(bool TotalPurge);
		void RetryPurge();
		void ExecuteUbergraph_InteractiveTrashBin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
