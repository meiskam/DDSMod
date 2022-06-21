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
	 * Function interactiveBaseObject.interactiveBaseObject_C.VerifyBaseSizing
	 */
	struct AinteractiveBaseObject_C_VerifyBaseSizing_Params
	{
	public:
		bool                                                       ok;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.GetEquipmentMeta
	 */
	struct AinteractiveBaseObject_C_GetEquipmentMeta_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FappartmentEquipment                                EquipmentMeta;                                           // 0x0000(0x0050)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.GetItemMeta
	 */
	struct AinteractiveBaseObject_C_GetItemMeta_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FNewItemStructure                                   ItemMeta;                                                // 0x0000(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.CheckForInnerClasses
	 */
	struct AinteractiveBaseObject_C_CheckForInnerClasses_Params
	{
	public:
		int32_t                                                    innerIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DeepIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Match;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.reconstructEquipmentData
	 */
	struct AinteractiveBaseObject_C_reconstructEquipmentData_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.removeFromWorkStation
	 */
	struct AinteractiveBaseObject_C_removeFromWorkStation_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.objectCanStoreApartment
	 */
	struct AinteractiveBaseObject_C_objectCanStoreApartment_Params
	{
	public:
		bool                                                       CanStore;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                Reason;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.verifyCorrectNaming
	 */
	struct AinteractiveBaseObject_C_verifyCorrectNaming_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.GetActionNames
	 */
	struct AinteractiveBaseObject_C_GetActionNames_Params
	{
	public:
		class FText                                                OverrideKey;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                keyOverride;                                             // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Object_Name;                                             // 0x0000(0x0018)  (Parm, OutParm)
		class FText                                                Action_Name;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.beenActivated
	 */
	struct AinteractiveBaseObject_C_beenActivated_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.UserConstructionScript
	 */
	struct AinteractiveBaseObject_C_UserConstructionScript_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.ReceiveBeginPlay
	 */
	struct AinteractiveBaseObject_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.ReceiveTick
	 */
	struct AinteractiveBaseObject_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.adaptPlaceMaterial
	 */
	struct AinteractiveBaseObject_C_adaptPlaceMaterial_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.SetAsGizmo
	 */
	struct AinteractiveBaseObject_C_SetAsGizmo_Params
	{	};

	/**
	 * Function interactiveBaseObject.interactiveBaseObject_C.ExecuteUbergraph_interactiveBaseObject
	 */
	struct AinteractiveBaseObject_C_ExecuteUbergraph_interactiveBaseObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
