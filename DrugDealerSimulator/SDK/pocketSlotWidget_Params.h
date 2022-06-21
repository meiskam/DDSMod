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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.Get_TextBlock_1_Visibility_1
	 */
	struct UpocketSlotWidget_C_Get_TextBlock_1_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.CanDropItem
	 */
	struct UpocketSlotWidget_C_CanDropItem_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutSize;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.checkDataSame
	 */
	struct UpocketSlotWidget_C_checkDataSame_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       CanDrop;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.showQuantityDialogue
	 */
	struct UpocketSlotWidget_C_showQuantityDialogue_Params
	{
	public:
		int32_t                                                    Quan;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UinventoryItemWidget_C*                              Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.processDropOperation
	 */
	struct UpocketSlotWidget_C_processDropOperation_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.checkSource
	 */
	struct UpocketSlotWidget_C_checkSource_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       CanDrop;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.Get_itemIcon_ToolTipWidget_1
	 */
	struct UpocketSlotWidget_C_Get_itemIcon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.OnDragDetected
	 */
	struct UpocketSlotWidget_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.OnMouseButtonDown
	 */
	struct UpocketSlotWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.clearSlot
	 */
	struct UpocketSlotWidget_C_clearSlot_Params
	{	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.OnDrop
	 */
	struct UpocketSlotWidget_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.setSlot
	 */
	struct UpocketSlotWidget_C_setSlot_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                CustomTagName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FMixProportionsStruct                               MixProportions;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.OnDragLeave
	 */
	struct UpocketSlotWidget_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.OnDragEnter
	 */
	struct UpocketSlotWidget_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.Construct
	 */
	struct UpocketSlotWidget_C_Construct_Params
	{	};

	/**
	 * Function pocketSlotWidget.pocketSlotWidget_C.ExecuteUbergraph_pocketSlotWidget
	 */
	struct UpocketSlotWidget_C_ExecuteUbergraph_pocketSlotWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
