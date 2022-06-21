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
	 * Function CashDrawerBP.CashDrawerBP_C.ProcessValuables
	 */
	struct ACashDrawerBP_C_ProcessValuables_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.CanAccessContainer
	 */
	struct ACashDrawerBP_C_CanAccessContainer_Params
	{
	public:
		bool                                                       CanAccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                DeclineReason;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.UserConstructionScript
	 */
	struct ACashDrawerBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__FinishedFunc
	 */
	struct ACashDrawerBP_C_DrawerOpening__FinishedFunc_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.DrawerOpening__UpdateFunc
	 */
	struct ACashDrawerBP_C_DrawerOpening__UpdateFunc_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.LongRadiusChanged
	 */
	struct ACashDrawerBP_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.OpenDrawer
	 */
	struct ACashDrawerBP_C_OpenDrawer_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.CloseDrawer
	 */
	struct ACashDrawerBP_C_CloseDrawer_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.closeEventScript
	 */
	struct ACashDrawerBP_C_closeEventScript_Params
	{	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.ShortRadiusChanged
	 */
	struct ACashDrawerBP_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.MoneyDeposited
	 */
	struct ACashDrawerBP_C_MoneyDeposited_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CashDrawerBP.CashDrawerBP_C.ExecuteUbergraph_CashDrawerBP
	 */
	struct ACashDrawerBP_C_ExecuteUbergraph_CashDrawerBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
