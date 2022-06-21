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
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.Get_btnChose_ToolTipWidget_1
	 */
	struct UAppManageShippmentListItem_C_Get_btnChose_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedCancel
	 */
	struct UAppManageShippmentListItem_C_UserClickedCancel_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.Setup
	 */
	struct UAppManageShippmentListItem_C_Setup_Params
	{
	public:
		class ArentAppartmentArea_C*                               AppartmentRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UappartmentModeWidget_C*                             appModeWidget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAppManageShippmentListItem_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.UserClickedConfirm
	 */
	struct UAppManageShippmentListItem_C_UserClickedConfirm_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function AppManageShippmentListItem.AppManageShippmentListItem_C.ExecuteUbergraph_AppManageShippmentListItem
	 */
	struct UAppManageShippmentListItem_C_ExecuteUbergraph_AppManageShippmentListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
