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
	 * Function ballenaClubManager.ballenaClubManager_C.UserConstructionScript
	 */
	struct AballenaClubManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ballenaClubManager.ballenaClubManager_C.openClub
	 */
	struct AballenaClubManager_C_openClub_Params
	{
	public:
		bool                                                       allowEnter;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ballenaClubManager.ballenaClubManager_C.closeClub
	 */
	struct AballenaClubManager_C_closeClub_Params
	{	};

	/**
	 * Function ballenaClubManager.ballenaClubManager_C.ExecuteUbergraph_ballenaClubManager
	 */
	struct AballenaClubManager_C_ExecuteUbergraph_ballenaClubManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
