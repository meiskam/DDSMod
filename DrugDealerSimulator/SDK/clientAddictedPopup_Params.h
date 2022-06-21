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
	 * Function clientAddictedPopup.clientAddictedPopup_C.Construct
	 */
	struct UclientAddictedPopup_C_Construct_Params
	{	};

	/**
	 * Function clientAddictedPopup.clientAddictedPopup_C.Setup
	 */
	struct UclientAddictedPopup_C_Setup_Params
	{
	public:
		class FText                                                ClientName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ClientAddictionDrug;                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup
	 */
	struct UclientAddictedPopup_C_ExecuteUbergraph_clientAddictedPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
