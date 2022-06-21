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
	 * Function mainComputer.mainComputer_C.GetPlayerDebt
	 */
	struct AmainComputer_C_GetPlayerDebt_Params
	{
	public:
		float                                                      OutDebt;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.GetPlayerOrderLimit
	 */
	struct AmainComputer_C_GetPlayerOrderLimit_Params
	{
	public:
		float                                                      Limit;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.SendLaunderPayment
	 */
	struct AmainComputer_C_SendLaunderPayment_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function mainComputer.mainComputer_C.AddMoneyToLaunder
	 */
	struct AmainComputer_C_AddMoneyToLaunder_Params
	{
	public:
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.ExpandRama
	 */
	struct AmainComputer_C_ExpandRama_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.reconstructDrugOffer
	 */
	struct AmainComputer_C_reconstructDrugOffer_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.getDrugSizeWeight
	 */
	struct AmainComputer_C_getDrugSizeWeight_Params
	{
	public:
		int32_t                                                    packageGrams;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      packageSize;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      packageWeight;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.changePrices
	 */
	struct AmainComputer_C_changePrices_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.generateInitialBankHistory
	 */
	struct AmainComputer_C_generateInitialBankHistory_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.newBankOperation
	 */
	struct AmainComputer_C_newBankOperation_Params
	{
	public:
		bool                                                       Income;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                SourceName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Notify;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Legal;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function mainComputer.mainComputer_C.checkNewDrugAvailability
	 */
	struct AmainComputer_C_checkNewDrugAvailability_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.addUserMessage
	 */
	struct AmainComputer_C_addUserMessage_Params
	{
	public:
		int32_t                                                    UserID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       PlayerMessage;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function mainComputer.mainComputer_C.getOrderRefByID
	 */
	struct AmainComputer_C_getOrderRefByID_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AorderInstance_C*                                    orderInstance;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.constructMessageSentence
	 */
	struct AmainComputer_C_constructMessageSentence_Params
	{
	public:
		bool                                                       LastIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BeforeLastIndex;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       isSingle;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function mainComputer.mainComputer_C.sendNewOrder
	 */
	struct AmainComputer_C_sendNewOrder_Params
	{
	public:
		TArray<struct FdrugData>                                   drugData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        DrugIDs;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            drugQuantities;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function mainComputer.mainComputer_C.UserConstructionScript
	 */
	struct AmainComputer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.ReceiveBeginPlay
	 */
	struct AmainComputer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.ReceiveTick
	 */
	struct AmainComputer_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.openComputer
	 */
	struct AmainComputer_C_openComputer_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.prepareOrderResponse
	 */
	struct AmainComputer_C_prepareOrderResponse_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.ActivateComputer
	 */
	struct AmainComputer_C_ActivateComputer_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.checkBenefitPayment
	 */
	struct AmainComputer_C_checkBenefitPayment_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.checkIllegalIncome
	 */
	struct AmainComputer_C_checkIllegalIncome_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.addPsychedelicsOffer
	 */
	struct AmainComputer_C_addPsychedelicsOffer_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AmainComputer_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainComputer.mainComputer_C.RetryIllegalReminder
	 */
	struct AmainComputer_C_RetryIllegalReminder_Params
	{	};

	/**
	 * Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer
	 */
	struct AmainComputer_C_ExecuteUbergraph_mainComputer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
