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
	 * Function sitingDownPawn.sitingDownPawn_C.UserConstructionScript
	 */
	struct AsitingDownPawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_5
	 */
	struct AsitingDownPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
	 */
	struct AsitingDownPawn_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_B_K2Node_InputKeyEvent_3
	 */
	struct AsitingDownPawn_C_InpActEvt_B_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_Action_K2Node_InputActionEvent_1
	 */
	struct AsitingDownPawn_C_InpActEvt_Action_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_E_K2Node_InputKeyEvent_2
	 */
	struct AsitingDownPawn_C_InpActEvt_E_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_1
	 */
	struct AsitingDownPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.ReceiveBeginPlay
	 */
	struct AsitingDownPawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_1
	 */
	struct AsitingDownPawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_2
	 */
	struct AsitingDownPawn_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.ReceivePossessed
	 */
	struct AsitingDownPawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.forceStandUp
	 */
	struct AsitingDownPawn_C_forceStandUp_Params
	{	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.CreateChoiceOption
	 */
	struct AsitingDownPawn_C_CreateChoiceOption_Params
	{
	public:
		class FText                                                OptionANam;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                OptionBNam;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              FunctionOnA;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              FunctionOnB;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.forceChoiceA
	 */
	struct AsitingDownPawn_C_forceChoiceA_Params
	{	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.ForceChoiceB
	 */
	struct AsitingDownPawn_C_ForceChoiceB_Params
	{	};

	/**
	 * Function sitingDownPawn.sitingDownPawn_C.ExecuteUbergraph_sitingDownPawn
	 */
	struct AsitingDownPawn_C_ExecuteUbergraph_sitingDownPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
