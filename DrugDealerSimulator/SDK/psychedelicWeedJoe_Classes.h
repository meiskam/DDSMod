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
	 * BlueprintGeneratedClass psychedelicWeedJoe.psychedelicWeedJoe_C
	 * Size -> 0x0014 (FullSize[0x0AE8] - InheritedSize[0x0AD4])
	 */
	class ApsychedelicWeedJoe_C : public AbaseNPC_C
	{
	public:
		unsigned char                                              UnknownData_UEFD[0x4];                                   // 0x0AD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AD8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AweedMoneySafe_C*                                    moneySafeRef;                                            // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void getReturnLine(TArray<struct FinventoryItemStruct>* Items, TArray<struct FMixProportionsStruct>* ItemMixes, TArray<int32_t>* Quantities, TArray<int32_t>* Amounts, bool Trade_canceled, struct FdialogueData* ReturnData, TArray<int32_t>* ReturnIndexes);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void retryInitiate();
		void ExecuteUbergraph_psychedelicWeedJoe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
