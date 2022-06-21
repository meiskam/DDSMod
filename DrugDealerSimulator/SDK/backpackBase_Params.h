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
	 * Function backpackBase.backpackBase_C.NewRamaVars
	 */
	struct AbackpackBase_C_NewRamaVars_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.TransferInventory
	 */
	struct AbackpackBase_C_TransferInventory_Params
	{
	public:
		class UInventoryComponent_C*                               PlayerInventory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function backpackBase.backpackBase_C.ReconstructOldInventory
	 */
	struct AbackpackBase_C_ReconstructOldInventory_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.checkBackpackEmpty
	 */
	struct AbackpackBase_C_checkBackpackEmpty_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.UserConstructionScript
	 */
	struct AbackpackBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.ReceiveBeginPlay
	 */
	struct AbackpackBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.ReceiveTick
	 */
	struct AbackpackBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function backpackBase.backpackBase_C.BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
	 */
	struct AbackpackBase_C_BndEvt__Model_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NormalImpulse;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function backpackBase.backpackBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AbackpackBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function backpackBase.backpackBase_C.DelayedPhysics
	 */
	struct AbackpackBase_C_DelayedPhysics_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.Playerbinding
	 */
	struct AbackpackBase_C_Playerbinding_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.RetryPlayerBind
	 */
	struct AbackpackBase_C_RetryPlayerBind_Params
	{	};

	/**
	 * Function backpackBase.backpackBase_C.ExecuteUbergraph_backpackBase
	 */
	struct AbackpackBase_C_ExecuteUbergraph_backpackBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
