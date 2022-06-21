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
	 * Function weedPlantBP.weedPlantBP_C.CheckPlayerWater
	 */
	struct AweedPlantBP_C_CheckPlayerWater_Params
	{
	public:
		class AplayerCharacterBP_C*                                AsPlayer_Character_BP;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayerHasWater;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.onLoadNamingUpdate
	 */
	struct AweedPlantBP_C_onLoadNamingUpdate_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.setPlantMaterial
	 */
	struct AweedPlantBP_C_setPlantMaterial_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.updateLightSources
	 */
	struct AweedPlantBP_C_updateLightSources_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.calcSunRange
	 */
	struct AweedPlantBP_C_calcSunRange_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.adaptDifficulty
	 */
	struct AweedPlantBP_C_adaptDifficulty_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.plantComprimised
	 */
	struct AweedPlantBP_C_plantComprimised_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.checkNpcOverlap
	 */
	struct AweedPlantBP_C_checkNpcOverlap_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Fail;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.generateDrugIcon
	 */
	struct AweedPlantBP_C_generateDrugIcon_Params
	{
	public:
		int32_t                                                    Quan;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.calculateHarvest
	 */
	struct AweedPlantBP_C_calculateHarvest_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.getPlantOptions
	 */
	struct AweedPlantBP_C_getPlantOptions_Params
	{
	public:
		TArray<class FText>                                        Names;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class FString>                                      functions;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.useWater
	 */
	struct AweedPlantBP_C_useWater_Params
	{
	public:
		float                                                      waterToUse;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.UserConstructionScript
	 */
	struct AweedPlantBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.harvestPlant
	 */
	struct AweedPlantBP_C_harvestPlant_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.activateMe
	 */
	struct AweedPlantBP_C_activateMe_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.hydratePlant
	 */
	struct AweedPlantBP_C_hydratePlant_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.fertilisePlant
	 */
	struct AweedPlantBP_C_fertilisePlant_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.removePlant
	 */
	struct AweedPlantBP_C_removePlant_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.showDetails
	 */
	struct AweedPlantBP_C_showDetails_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.hideDetails
	 */
	struct AweedPlantBP_C_hideDetails_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.PlantDied
	 */
	struct AweedPlantBP_C_PlantDied_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.forceLastUpdate
	 */
	struct AweedPlantBP_C_forceLastUpdate_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.weedGizmo
	 */
	struct AweedPlantBP_C_weedGizmo_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.BndEvt__playerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AweedPlantBP_C_BndEvt__playerSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
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
	 * Function weedPlantBP.weedPlantBP_C.BndEvt__playerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct AweedPlantBP_C_BndEvt__playerSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.startTestCompromised
	 */
	struct AweedPlantBP_C_startTestCompromised_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.testCompromised
	 */
	struct AweedPlantBP_C_testCompromised_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.updateGrowth
	 */
	struct AweedPlantBP_C_updateGrowth_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.ReceiveTick
	 */
	struct AweedPlantBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.ReceiveBeginPlay
	 */
	struct AweedPlantBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.trySetRainRef
	 */
	struct AweedPlantBP_C_trySetRainRef_Params
	{	};

	/**
	 * Function weedPlantBP.weedPlantBP_C.ExecuteUbergraph_weedPlantBP
	 */
	struct AweedPlantBP_C_ExecuteUbergraph_weedPlantBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
