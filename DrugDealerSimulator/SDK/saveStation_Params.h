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
	 * Function saveStation.saveStation_C.clearWidgets
	 */
	struct AsaveStation_C_clearWidgets_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.adaptDifficulty
	 */
	struct AsaveStation_C_adaptDifficulty_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.UserConstructionScript
	 */
	struct AsaveStation_C_UserConstructionScript_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.ReceiveBeginPlay
	 */
	struct AsaveStation_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.ReceiveTick
	 */
	struct AsaveStation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveStation.saveStation_C.ActivateSaveStation
	 */
	struct AsaveStation_C_ActivateSaveStation_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.setTimeout
	 */
	struct AsaveStation_C_setTimeout_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AsaveStation_C_BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AsaveStation_C_BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveStation.saveStation_C.drawCheck
	 */
	struct AsaveStation_C_drawCheck_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.updateDisplayState
	 */
	struct AsaveStation_C_updateDisplayState_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AsaveStation_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_2_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function saveStation.saveStation_C.CheckTimer
	 */
	struct AsaveStation_C_CheckTimer_Params
	{	};

	/**
	 * Function saveStation.saveStation_C.ExecuteUbergraph_saveStation
	 */
	struct AsaveStation_C_ExecuteUbergraph_saveStation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
