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
	 * Function dealerArrestPopup.dealerArrestPopup_C.Construct
	 */
	struct UdealerArrestPopup_C_Construct_Params
	{	};

	/**
	 * Function dealerArrestPopup.dealerArrestPopup_C.Setup
	 */
	struct UdealerArrestPopup_C_Setup_Params
	{
	public:
		class FText                                                ClientName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Released;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function dealerArrestPopup.dealerArrestPopup_C.killMe
	 */
	struct UdealerArrestPopup_C_killMe_Params
	{	};

	/**
	 * Function dealerArrestPopup.dealerArrestPopup_C.ExecuteUbergraph_dealerArrestPopup
	 */
	struct UdealerArrestPopup_C_ExecuteUbergraph_dealerArrestPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
