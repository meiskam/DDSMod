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
	 * Function appartmentManager.appartmentManager_C.getWallPicker
	 */
	struct AappartmentManager_C_getWallPicker_Params
	{
	public:
		int32_t                                                    apartmentID;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AappartmentViewerPawn_C*                             viewerPawn;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AappartmentWallPicker_C*                             wallPicker;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentManager.appartmentManager_C.rentBoostRespect
	 */
	struct AappartmentManager_C_rentBoostRespect_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.countAvailableApartments
	 */
	struct AappartmentManager_C_countAvailableApartments_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.processRentTransaction
	 */
	struct AappartmentManager_C_processRentTransaction_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function appartmentManager.appartmentManager_C.UserConstructionScript
	 */
	struct AappartmentManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.rentAction
	 */
	struct AappartmentManager_C_rentAction_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.ConfirmRentAction
	 */
	struct AappartmentManager_C_ConfirmRentAction_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.cancelRenting
	 */
	struct AappartmentManager_C_cancelRenting_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.refreshEndRenting
	 */
	struct AappartmentManager_C_refreshEndRenting_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.checkAppartmentPayments
	 */
	struct AappartmentManager_C_checkAppartmentPayments_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.prevViewAppartment
	 */
	struct AappartmentManager_C_prevViewAppartment_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.nextViewAppartment
	 */
	struct AappartmentManager_C_nextViewAppartment_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.refreshAppartments
	 */
	struct AappartmentManager_C_refreshAppartments_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.terminateRenting
	 */
	struct AappartmentManager_C_terminateRenting_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.ChangeViewAppartment
	 */
	struct AappartmentManager_C_ChangeViewAppartment_Params
	{
	public:
		int32_t                                                    AppartmentID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentManager.appartmentManager_C.startAppartmentViewer
	 */
	struct AappartmentManager_C_startAppartmentViewer_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.ReceiveTick
	 */
	struct AappartmentManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentManager.appartmentManager_C.ReceiveBeginPlay
	 */
	struct AappartmentManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.sendDebtInfo
	 */
	struct AappartmentManager_C_sendDebtInfo_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.firstRentAction
	 */
	struct AappartmentManager_C_firstRentAction_Params
	{	};

	/**
	 * Function appartmentManager.appartmentManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AappartmentManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager
	 */
	struct AappartmentManager_C_ExecuteUbergraph_appartmentManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
