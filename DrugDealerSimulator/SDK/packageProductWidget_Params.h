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
	 * Function packageProductWidget.packageProductWidget_C.choosePackageIcon
	 */
	struct UpackageProductWidget_C_choosePackageIcon_Params
	{
	public:
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.addToPlayerInventory
	 */
	struct UpackageProductWidget_C_addToPlayerInventory_Params
	{
	public:
		bool                                                       AllAdded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.checkFitInventory
	 */
	struct UpackageProductWidget_C_checkFitInventory_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.renderPackageList
	 */
	struct UpackageProductWidget_C_renderPackageList_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.addPackage
	 */
	struct UpackageProductWidget_C_addPackage_Params
	{
	public:
		int32_t                                                    Size;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.generateDurgIcon
	 */
	struct UpackageProductWidget_C_generateDurgIcon_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.checkButtonActivity
	 */
	struct UpackageProductWidget_C_checkButtonActivity_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.checkCanFitInventory
	 */
	struct UpackageProductWidget_C_checkCanFitInventory_Params
	{
	public:
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.Construct
	 */
	struct UpackageProductWidget_C_Construct_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.Tick
	 */
	struct UpackageProductWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.Setup
	 */
	struct UpackageProductWidget_C_Setup_Params
	{
	public:
		class AworkStationEquipmentBase_C*                         EqRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpackageProductWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.killMe
	 */
	struct UpackageProductWidget_C_killMe_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpackageProductWidget_C_BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UpackageProductWidget_C_BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function packageProductWidget.packageProductWidget_C.ExecuteUbergraph_packageProductWidget
	 */
	struct UpackageProductWidget_C_ExecuteUbergraph_packageProductWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
