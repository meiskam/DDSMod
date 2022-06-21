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
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.CanAccessContainer
	 */
	struct AContainerMoneyDeposit_C_CanAccessContainer_Params
	{
	public:
		bool                                                       CanAccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                DeclineReason;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.UserConstructionScript
	 */
	struct AContainerMoneyDeposit_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.NewPickupQuest
	 */
	struct AContainerMoneyDeposit_C_NewPickupQuest_Params
	{
	public:
		int32_t                                                    TaskID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.closeEventScript
	 */
	struct AContainerMoneyDeposit_C_closeEventScript_Params
	{	};

	/**
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.DepositCash
	 */
	struct AContainerMoneyDeposit_C_DepositCash_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ContainerMoneyDeposit.ContainerMoneyDeposit_C.ExecuteUbergraph_ContainerMoneyDeposit
	 */
	struct AContainerMoneyDeposit_C_ExecuteUbergraph_ContainerMoneyDeposit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
