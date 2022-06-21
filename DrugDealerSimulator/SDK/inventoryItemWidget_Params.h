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
	 * Function inventoryItemWidget.inventoryItemWidget_C.DisplayMixProportions
	 */
	struct UinventoryItemWidget_C_DisplayMixProportions_Params
	{	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnDrop
	 */
	struct UinventoryItemWidget_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.Get_TextBlock_1_Visibility_1
	 */
	struct UinventoryItemWidget_C_Get_TextBlock_1_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_4
	 */
	struct UinventoryItemWidget_C_GetVisibility_4_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_3
	 */
	struct UinventoryItemWidget_C_GetVisibility_3_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_2
	 */
	struct UinventoryItemWidget_C_GetVisibility_2_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.SetLooted
	 */
	struct UinventoryItemWidget_C_SetLooted_Params
	{	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.VerifyLooting
	 */
	struct UinventoryItemWidget_C_VerifyLooting_Params
	{	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.Get_bgImage_ToolTipWidget_1
	 */
	struct UinventoryItemWidget_C_Get_bgImage_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.GetShortName
	 */
	struct UinventoryItemWidget_C_GetShortName_Params
	{
	public:
		class FText                                                ShortName;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.GetVisibility_1
	 */
	struct UinventoryItemWidget_C_GetVisibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.formToText
	 */
	struct UinventoryItemWidget_C_formToText_Params
	{
	public:
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDoubleClick
	 */
	struct UinventoryItemWidget_C_OnMouseButtonDoubleClick_Params
	{
	public:
		struct FGeometry                                           InMyGeometry;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       InMouseEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.widgetSetup
	 */
	struct UinventoryItemWidget_C_widgetSetup_Params
	{
	public:
		int32_t                                                    setPrice;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       showPrice;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       workStation;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShowAsGrid;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SetAmount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                CustomName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnDragDetected
	 */
	struct UinventoryItemWidget_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnMouseButtonDown
	 */
	struct UinventoryItemWidget_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.Construct
	 */
	struct UinventoryItemWidget_C_Construct_Params
	{	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.Tick
	 */
	struct UinventoryItemWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnDragCancelled
	 */
	struct UinventoryItemWidget_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.Destruct
	 */
	struct UinventoryItemWidget_C_Destruct_Params
	{	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnDragEnter
	 */
	struct UinventoryItemWidget_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.OnDragLeave
	 */
	struct UinventoryItemWidget_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function inventoryItemWidget.inventoryItemWidget_C.ExecuteUbergraph_inventoryItemWidget
	 */
	struct UinventoryItemWidget_C_ExecuteUbergraph_inventoryItemWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
