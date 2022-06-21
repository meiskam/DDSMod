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
	 * Function actionOptionWidget.actionOptionWidget_C.Setup
	 */
	struct UactionOptionWidget_C_Setup_Params
	{
	public:
		bool                                                       InitActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                ActionName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function actionOptionWidget.actionOptionWidget_C.SetActive
	 */
	struct UactionOptionWidget_C_SetActive_Params
	{
	public:
		bool                                                       Activated;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function actionOptionWidget.actionOptionWidget_C.Construct
	 */
	struct UactionOptionWidget_C_Construct_Params
	{	};

	/**
	 * Function actionOptionWidget.actionOptionWidget_C.ExecuteUbergraph_actionOptionWidget
	 */
	struct UactionOptionWidget_C_ExecuteUbergraph_actionOptionWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
