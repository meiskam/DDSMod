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
	 * Function gasStationDoorBP.gasStationDoorBP_C.playDoorSound
	 */
	struct AgasStationDoorBP_C_playDoorSound_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.UserConstructionScript
	 */
	struct AgasStationDoorBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.openPercent__FinishedFunc
	 */
	struct AgasStationDoorBP_C_openPercent__FinishedFunc_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.openPercent__UpdateFunc
	 */
	struct AgasStationDoorBP_C_openPercent__UpdateFunc_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.ReceiveBeginPlay
	 */
	struct AgasStationDoorBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.ReceiveTick
	 */
	struct AgasStationDoorBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.openDoor
	 */
	struct AgasStationDoorBP_C_openDoor_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.closeDoor
	 */
	struct AgasStationDoorBP_C_closeDoor_Params
	{	};

	/**
	 * Function gasStationDoorBP.gasStationDoorBP_C.BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AgasStationDoorBP_C_BndEvt__entryBox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function gasStationDoorBP.gasStationDoorBP_C.ExecuteUbergraph_gasStationDoorBP
	 */
	struct AgasStationDoorBP_C_ExecuteUbergraph_gasStationDoorBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
