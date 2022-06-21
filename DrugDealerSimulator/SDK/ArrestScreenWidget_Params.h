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
	 * Function ArrestScreenWidget.ArrestScreenWidget_C.RenderArrestedList
	 */
	struct UArrestScreenWidget_C_RenderArrestedList_Params
	{	};

	/**
	 * Function ArrestScreenWidget.ArrestScreenWidget_C.Construct
	 */
	struct UArrestScreenWidget_C_Construct_Params
	{	};

	/**
	 * Function ArrestScreenWidget.ArrestScreenWidget_C.Setup
	 */
	struct UArrestScreenWidget_C_Setup_Params
	{
	public:
		class AsalesManager_C*                                     salesManager;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UshadyCommInterface_C*                               ParentShady;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ArrestScreenWidget.ArrestScreenWidget_C.BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UArrestScreenWidget_C_BndEvt__btnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ArrestScreenWidget.ArrestScreenWidget_C.ExecuteUbergraph_ArrestScreenWidget
	 */
	struct UArrestScreenWidget_C_ExecuteUbergraph_ArrestScreenWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
