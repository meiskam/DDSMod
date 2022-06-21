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
	 * BlueprintGeneratedClass CashDrawerBP.CashDrawerBP_C
	 * Size -> 0x0031 (FullSize[0x0522] - InheritedSize[0x04F1])
	 */
	class ACashDrawerBP_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_W79Q[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                cashDrawer;                                              // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                cashDrawerBase;                                          // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      DrawerOpening_OpenProgress_67C1793C4523A0CCF4129C8F7D42BCC6; // 0x0510(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         DrawerOpening__Direction_67C1793C4523A0CCF4129C8F7D42BCC6; // 0x0514(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BG49[0x3];                                   // 0x0515(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  DrawerOpening;                                           // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Extended;                                                // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InRadius;                                                // 0x0521(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ProcessValuables();
		void CanAccessContainer(bool* CanAccess, class FText* DeclineReason);
		void UserConstructionScript();
		void DrawerOpening__FinishedFunc();
		void DrawerOpening__UpdateFunc();
		void LongRadiusChanged(bool InRadius);
		void OpenDrawer();
		void CloseDrawer();
		void closeEventScript();
		void ShortRadiusChanged(bool InRadius);
		void MoneyDeposited(int32_t Quantity);
		void ExecuteUbergraph_CashDrawerBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
