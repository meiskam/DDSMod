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
	 * WidgetBlueprintGeneratedClass AppManageList.AppManageList_C
	 * Size -> 0x00A8 (FullSize[0x02B0] - InheritedSize[0x0208])
	 */
	class UAppManageList_C : public UUserWidget
	{
	public:
		class UVerticalBox*                                        eqList;                                                  // 0x0208(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        furnitureList;                                           // 0x0210(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0218(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_1;                                             // 0x0220(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_3;                                             // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txtPrice;                                                // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                EmptyText;                                               // 0x0240(0x0018) Edit, BlueprintVisible
		TArray<int32_t>                                            StoredIndexes;                                           // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FScriptMulticastDelegate                             ListContentChanged;                                      // 0x0268(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int32_t>                                            StoredIndexesQuan;                                       // 0x0278(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       SaleList;                                                // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShipList;                                                // 0x0289(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BBSA[0x6];                                   // 0x028A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ArentAppartmentArea_C*                               AppartmentRef;                                           // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          txtPrice_1;                                              // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerCanAfford;                                         // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X8EH[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             MemPayload;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleDropQuantity(int32_t Quantity);
		struct FSlateColor Get_txtPrice_ColorAndOpacity_1();
		void FindEqPrice(const class FName& EquipmentID, int32_t* ItemSourcePrice);
		ESlateVisibility Get_txtPrice_Visibility_1();
		void CountMoney(int32_t* countedMoney);
		ESlateVisibility GetVisibility_3();
		void RemoveListIndex(int32_t Index, int32_t Quantity);
		void AddListIndex(int32_t Index, int32_t Quantity, bool SkipDispatch);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void isListEmpty(bool* Empty);
		ESlateVisibility GetVisibility_2();
		void AddListItem(const class FName& ItemID, int32_t SourceIndex, int32_t Quan);
		void ClearList(bool PurgeArrays);
		ESlateVisibility Get_furnitureList_Visibility_1();
		ESlateVisibility GetVisibility_1();
		void ListContentChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
