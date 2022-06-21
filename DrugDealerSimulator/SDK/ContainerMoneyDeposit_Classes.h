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
	 * BlueprintGeneratedClass ContainerMoneyDeposit.ContainerMoneyDeposit_C
	 * Size -> 0x001B (FullSize[0x050C] - InheritedSize[0x04F1])
	 */
	class AContainerMoneyDeposit_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_SDF7[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                moneyDeposit;                                            // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RetrieveCashTaskID;                                      // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanAccessContainer(bool* CanAccess, class FText* DeclineReason);
		void UserConstructionScript();
		void NewPickupQuest(int32_t TaskID);
		void closeEventScript();
		void DepositCash(int32_t Quantity);
		void ExecuteUbergraph_ContainerMoneyDeposit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
