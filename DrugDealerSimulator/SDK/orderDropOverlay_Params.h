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
	 * Function orderDropOverlay.orderDropOverlay_C.GetText_1
	 */
	struct UorderDropOverlay_C_GetText_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.GetPlayerOrderLimit
	 */
	struct UorderDropOverlay_C_GetPlayerOrderLimit_Params
	{
	public:
		float                                                      OrderLimit;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.Get_btnEvenCrypto_ToolTipWidget_1
	 */
	struct UorderDropOverlay_C_Get_btnEvenCrypto_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.calcCryptoBoost
	 */
	struct UorderDropOverlay_C_calcCryptoBoost_Params
	{
	public:
		bool                                                       AllowRaise;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.checkOrderButtons
	 */
	struct UorderDropOverlay_C_checkOrderButtons_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.removeFromOrder
	 */
	struct UorderDropOverlay_C_removeFromOrder_Params
	{
	public:
		class FName                                                DrugID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.recalcTotalOrder
	 */
	struct UorderDropOverlay_C_recalcTotalOrder_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.displayAddMessage
	 */
	struct UorderDropOverlay_C_displayAddMessage_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.sortGrid
	 */
	struct UorderDropOverlay_C_sortGrid_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.OnDragDetected
	 */
	struct UorderDropOverlay_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.OnDrop
	 */
	struct UorderDropOverlay_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.Construct
	 */
	struct UorderDropOverlay_C_Construct_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.OnDragCancelled
	 */
	struct UorderDropOverlay_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.OnDragEnter
	 */
	struct UorderDropOverlay_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.OnDragLeave
	 */
	struct UorderDropOverlay_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__addQuantitySpin_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextCommit                                                CommitMethod;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__btnCancelAdd_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__btnAddToOrder_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__btnSendOrder_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__btnBalanceAccept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UorderDropOverlay_C_BndEvt__buyPTC_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.ExecuteUbergraph_orderDropOverlay
	 */
	struct UorderDropOverlay_C_ExecuteUbergraph_orderDropOverlay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderDropOverlay.orderDropOverlay_C.ClickedBuytPTC__DelegateSignature
	 */
	struct UorderDropOverlay_C_ClickedBuytPTC__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
