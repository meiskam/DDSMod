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
	 * Function doorBase.doorBase_C.DoorCanInteract
	 */
	struct AdoorBase_C_DoorCanInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                FailReason;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function doorBase.doorBase_C.playDoorSound
	 */
	struct AdoorBase_C_playDoorSound_Params
	{
	public:
		class USoundCue*                                           Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function doorBase.doorBase_C.getDoorOptions
	 */
	struct AdoorBase_C_getDoorOptions_Params
	{
	public:
		TArray<class FText>                                        ActionNames;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class FString>                                      Actions;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function doorBase.doorBase_C.UserConstructionScript
	 */
	struct AdoorBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.doorOpening__FinishedFunc
	 */
	struct AdoorBase_C_doorOpening__FinishedFunc_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.doorOpening__UpdateFunc
	 */
	struct AdoorBase_C_doorOpening__UpdateFunc_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.Timeline_0__FinishedFunc
	 */
	struct AdoorBase_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.Timeline_0__UpdateFunc
	 */
	struct AdoorBase_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.ReceiveBeginPlay
	 */
	struct AdoorBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.openDoor
	 */
	struct AdoorBase_C_openDoor_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.closeDoor
	 */
	struct AdoorBase_C_closeDoor_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.toggleDoor
	 */
	struct AdoorBase_C_toggleDoor_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.closeDoorAuto
	 */
	struct AdoorBase_C_closeDoorAuto_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AdoorBase_C_BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          SweepResult;                                             // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function doorBase.doorBase_C.executeDoorOption
	 */
	struct AdoorBase_C_executeDoorOption_Params
	{
	public:
		class FString                                              doorActionName;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function doorBase.doorBase_C.doorBreachEnd
	 */
	struct AdoorBase_C_doorBreachEnd_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.breachDoor
	 */
	struct AdoorBase_C_breachDoor_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.eventDoorActivated
	 */
	struct AdoorBase_C_eventDoorActivated_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.lockpickReset
	 */
	struct AdoorBase_C_lockpickReset_Params
	{	};

	/**
	 * Function doorBase.doorBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AdoorBase_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function doorBase.doorBase_C.ExecuteUbergraph_doorBase
	 */
	struct AdoorBase_C_ExecuteUbergraph_doorBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
