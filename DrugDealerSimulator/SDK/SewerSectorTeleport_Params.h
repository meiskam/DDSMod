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
	 * Function SewerSectorTeleport.SewerSectorTeleport_C.UserConstructionScript
	 */
	struct ASewerSectorTeleport_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SewerSectorTeleport.SewerSectorTeleport_C.InteractionActivate
	 */
	struct ASewerSectorTeleport_C_InteractionActivate_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SewerSectorTeleport.SewerSectorTeleport_C.ExecuteUbergraph_SewerSectorTeleport
	 */
	struct ASewerSectorTeleport_C_ExecuteUbergraph_SewerSectorTeleport_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
