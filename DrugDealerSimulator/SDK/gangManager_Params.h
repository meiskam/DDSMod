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
	 * Function gangManager.gangManager_C.gangLevelLimitRaise
	 */
	struct AgangManager_C_gangLevelLimitRaise_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.reconstructOrderFlow
	 */
	struct AgangManager_C_reconstructOrderFlow_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.reconstructDropRef
	 */
	struct AgangManager_C_reconstructDropRef_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.modifyGangSatisfaction
	 */
	struct AgangManager_C_modifyGangSatisfaction_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function gangManager.gangManager_C.restartOrderTimer
	 */
	struct AgangManager_C_restartOrderTimer_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.getGangOrderMessageFormat
	 */
	struct AgangManager_C_getGangOrderMessageFormat_Params
	{
	public:
		class FText                                                MessageFormat;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function gangManager.gangManager_C.getFinaliseTaskDescription
	 */
	struct AgangManager_C_getFinaliseTaskDescription_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function gangManager.gangManager_C.testDropForQuantity
	 */
	struct AgangManager_C_testDropForQuantity_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.checkOrderDrop
	 */
	struct AgangManager_C_checkOrderDrop_Params
	{
	public:
		bool                                                       OrderOK;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function gangManager.gangManager_C.sendGangOrder
	 */
	struct AgangManager_C_sendGangOrder_Params
	{
	public:
		bool                                                       SkipMessage;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ExpectedDrugID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ExpectedDrugMinQuality;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    packageSizes;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    packageQuantity;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function gangManager.gangManager_C.UserConstructionScript
	 */
	struct AgangManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.ReceiveBeginPlay
	 */
	struct AgangManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.ReceiveTick
	 */
	struct AgangManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function gangManager.gangManager_C.unlockKeijiGang
	 */
	struct AgangManager_C_unlockKeijiGang_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.unlockBallenaGang
	 */
	struct AgangManager_C_unlockBallenaGang_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.retryInitiate
	 */
	struct AgangManager_C_retryInitiate_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.checkGangPlaceStatus
	 */
	struct AgangManager_C_checkGangPlaceStatus_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.gangMessageResponse
	 */
	struct AgangManager_C_gangMessageResponse_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function gangManager.gangManager_C.spawnGangMember
	 */
	struct AgangManager_C_spawnGangMember_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.constructNewGangOrder
	 */
	struct AgangManager_C_constructNewGangOrder_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.checkDeliveryTime
	 */
	struct AgangManager_C_checkDeliveryTime_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.unlockDeliveryMessage
	 */
	struct AgangManager_C_unlockDeliveryMessage_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.TestGangOrder
	 */
	struct AgangManager_C_TestGangOrder_Params
	{	};

	/**
	 * Function gangManager.gangManager_C.TestGangMultiplier
	 */
	struct AgangManager_C_TestGangMultiplier_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Rep;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function gangManager.gangManager_C.ExecuteUbergraph_gangManager
	 */
	struct AgangManager_C_ExecuteUbergraph_gangManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
