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
	 * Function useSlotWidget.useSlotWidget_C.setUseContent
	 */
	struct UuseSlotWidget_C_setUseContent_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    SourceIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              SourceString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.GetToolTipWidget_1
	 */
	struct UuseSlotWidget_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.createUsedPackage
	 */
	struct UuseSlotWidget_C_createUsedPackage_Params
	{
	public:
		struct FinventoryItemStruct                                NewData;                                                 // 0x0000(0x0108)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       UsedAll;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.useSlotItem
	 */
	struct UuseSlotWidget_C_useSlotItem_Params
	{	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.clearSlot
	 */
	struct UuseSlotWidget_C_clearSlot_Params
	{	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.checkItemAvailable
	 */
	struct UuseSlotWidget_C_checkItemAvailable_Params
	{
	public:
		bool                                                       itemAvailable;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.OnDrop
	 */
	struct UuseSlotWidget_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.PreConstruct
	 */
	struct UuseSlotWidget_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.Construct
	 */
	struct UuseSlotWidget_C_Construct_Params
	{	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.SetupSlot
	 */
	struct UuseSlotWidget_C_SetupSlot_Params
	{
	public:
		struct FGuid                                               LocalGuid;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function useSlotWidget.useSlotWidget_C.ExecuteUbergraph_useSlotWidget
	 */
	struct UuseSlotWidget_C_ExecuteUbergraph_useSlotWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
