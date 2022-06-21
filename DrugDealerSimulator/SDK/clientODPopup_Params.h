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
	 * Function clientODPopup.clientODPopup_C.Construct
	 */
	struct UclientODPopup_C_Construct_Params
	{	};

	/**
	 * Function clientODPopup.clientODPopup_C.Setup
	 */
	struct UclientODPopup_C_Setup_Params
	{
	public:
		class FText                                                ClientName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ClientOverdoseDrug;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function clientODPopup.clientODPopup_C.killMe
	 */
	struct UclientODPopup_C_killMe_Params
	{	};

	/**
	 * Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup
	 */
	struct UclientODPopup_C_ExecuteUbergraph_clientODPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
