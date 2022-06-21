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
	 * Function orderInstance.orderInstance_C.CheckRama
	 */
	struct AorderInstance_C_CheckRama_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.choosePackageIcon
	 */
	struct AorderInstance_C_choosePackageIcon_Params
	{
	public:
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.constructOrderSMS
	 */
	struct AorderInstance_C_constructOrderSMS_Params
	{
	public:
		TArray<class FText>                                        MessageTemplates;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FText                                                MessageText;                                             // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function orderInstance.orderInstance_C.calcPackagingPattern
	 */
	struct AorderInstance_C_calcPackagingPattern_Params
	{
	public:
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    leftToDivide;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                PackageName;                                             // 0x0000(0x0018)  (Parm, OutParm)
		int32_t                                                    packageQuantity;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      packageSize;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      packageWeight;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    restLeft;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    gramsPerPack;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          packageIcon;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.generatePackageContents
	 */
	struct AorderInstance_C_generatePackageContents_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        OutInventory;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
		TArray<class FName>                                        OutIDs;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            OutQuantity;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            OutAmounts;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<struct FMixProportionsStruct>                       OutMixProportions;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function orderInstance.orderInstance_C.spawnOrderPackage
	 */
	struct AorderInstance_C_spawnOrderPackage_Params
	{
	public:
		bool                                                       spawnAtHome;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function orderInstance.orderInstance_C.calcPrepTime
	 */
	struct AorderInstance_C_calcPrepTime_Params
	{
	public:
		float                                                      TimeSeconds;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.setSmuggleDateTime
	 */
	struct AorderInstance_C_setSmuggleDateTime_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.findRandomSmugLocation
	 */
	struct AorderInstance_C_findRandomSmugLocation_Params
	{
	public:
		class AsmuggleLocation_C*                                  Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.getSmuggleLocRef
	 */
	struct AorderInstance_C_getSmuggleLocRef_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.UserConstructionScript
	 */
	struct AorderInstance_C_UserConstructionScript_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.ReceiveBeginPlay
	 */
	struct AorderInstance_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.ReceiveTick
	 */
	struct AorderInstance_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.SetupOrder
	 */
	struct AorderInstance_C_SetupOrder_Params
	{
	public:
		TArray<struct FdrugData>                                   drugData;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FName>                                        DrugIDs;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<int32_t>                                            drugQuantities;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      spawnTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.checkOrderSpawnTime
	 */
	struct AorderInstance_C_checkOrderSpawnTime_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.spawnOrderNow
	 */
	struct AorderInstance_C_spawnOrderNow_Params
	{	};

	/**
	 * Function orderInstance.orderInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AorderInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance
	 */
	struct AorderInstance_C_ExecuteUbergraph_orderInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
