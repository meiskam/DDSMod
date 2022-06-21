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
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.setParentReference
	 */
	struct UsaleAreaManageMarker_C_setParentReference_Params
	{	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.Get_alertIcon_ToolTipWidget_1
	 */
	struct UsaleAreaManageMarker_C_Get_alertIcon_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseButtonDown
	 */
	struct UsaleAreaManageMarker_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x0000(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.Construct
	 */
	struct UsaleAreaManageMarker_C_Construct_Params
	{	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseEnter
	 */
	struct UsaleAreaManageMarker_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.OnMouseLeave
	 */
	struct UsaleAreaManageMarker_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UsaleAreaManageMarker_C_BndEvt__btnUnlockArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.reInitiate
	 */
	struct UsaleAreaManageMarker_C_reInitiate_Params
	{	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.updateProgressBar
	 */
	struct UsaleAreaManageMarker_C_updateProgressBar_Params
	{	};

	/**
	 * Function saleAreaManageMarker.saleAreaManageMarker_C.ExecuteUbergraph_saleAreaManageMarker
	 */
	struct UsaleAreaManageMarker_C_ExecuteUbergraph_saleAreaManageMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
