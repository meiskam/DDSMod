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
	 * Function pickupItemBase.pickupItemBase_C.RamaExtend
	 */
	struct ApickupItemBase_C_RamaExtend_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.UserConstructionScript
	 */
	struct ApickupItemBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.setupItem
	 */
	struct ApickupItemBase_C_setupItem_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Object_Name;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Action_Name;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Droped;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SimulatePhysics;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isGizmo;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.resetDroped
	 */
	struct ApickupItemBase_C_resetDroped_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap
	 */
	struct ApickupItemBase_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.pickupEventScript
	 */
	struct ApickupItemBase_C_pickupEventScript_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.objectPickup
	 */
	struct ApickupItemBase_C_objectPickup_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay
	 */
	struct ApickupItemBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.ShortRadiusChanged
	 */
	struct ApickupItemBase_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.LongRadiusChanged
	 */
	struct ApickupItemBase_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.SubclassRamaLoaded
	 */
	struct ApickupItemBase_C_SubclassRamaLoaded_Params
	{	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct ApickupItemBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase
	 */
	struct ApickupItemBase_C_ExecuteUbergraph_pickupItemBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
