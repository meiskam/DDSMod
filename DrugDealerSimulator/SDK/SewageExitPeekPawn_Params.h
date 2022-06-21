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
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.UserConstructionScript
	 */
	struct ASewageExitPeekPawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_Escape_K2Node_InputKeyEvent_4
	 */
	struct ASewageExitPeekPawn_C_InpActEvt_Escape_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_F10_K2Node_InputKeyEvent_3
	 */
	struct ASewageExitPeekPawn_C_InpActEvt_F10_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
	 */
	struct ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
	 */
	struct ASewageExitPeekPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveTick
	 */
	struct ASewageExitPeekPawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1
	 */
	struct ASewageExitPeekPawn_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.Setup
	 */
	struct ASewageExitPeekPawn_C_Setup_Params
	{
	public:
		class AsewageExit_C*                                       ExitLadderRef;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceivePossessed
	 */
	struct ASewageExitPeekPawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.ReceiveUnpossessed
	 */
	struct ASewageExitPeekPawn_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewageExitPeekPawn.SewageExitPeekPawn_C.ExecuteUbergraph_SewageExitPeekPawn
	 */
	struct ASewageExitPeekPawn_C_ExecuteUbergraph_SewageExitPeekPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
