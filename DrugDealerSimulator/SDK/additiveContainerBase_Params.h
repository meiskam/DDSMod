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
	 * Function additiveContainerBase.additiveContainerBase_C.changeLabel
	 */
	struct AadditiveContainerBase_C_changeLabel_Params
	{
	public:
		bool                                                       setEmpty;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                NewLabel;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.UserConstructionScript
	 */
	struct AadditiveContainerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.ReceiveBeginPlay
	 */
	struct AadditiveContainerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.ReceiveTick
	 */
	struct AadditiveContainerBase_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.addSubstance
	 */
	struct AadditiveContainerBase_C_addSubstance_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.setLabel
	 */
	struct AadditiveContainerBase_C_setLabel_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.showLabel
	 */
	struct AadditiveContainerBase_C_showLabel_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.hideLabel
	 */
	struct AadditiveContainerBase_C_hideLabel_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.customiseLabel
	 */
	struct AadditiveContainerBase_C_customiseLabel_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.tryAddSubstance
	 */
	struct AadditiveContainerBase_C_tryAddSubstance_Params
	{	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.UserClickedConfirm
	 */
	struct AadditiveContainerBase_C_UserClickedConfirm_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.UserClickedCancel
	 */
	struct AadditiveContainerBase_C_UserClickedCancel_Params
	{
	public:
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function additiveContainerBase.additiveContainerBase_C.ExecuteUbergraph_additiveContainerBase
	 */
	struct AadditiveContainerBase_C_ExecuteUbergraph_additiveContainerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
