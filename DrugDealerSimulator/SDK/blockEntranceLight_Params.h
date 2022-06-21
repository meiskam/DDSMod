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
	 * Function blockEntranceLight.blockEntranceLight_C.UserConstructionScript
	 */
	struct AblockEntranceLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function blockEntranceLight.blockEntranceLight_C.ReceiveBeginPlay
	 */
	struct AblockEntranceLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function blockEntranceLight.blockEntranceLight_C.turnLightOn
	 */
	struct AblockEntranceLight_C_turnLightOn_Params
	{	};

	/**
	 * Function blockEntranceLight.blockEntranceLight_C.turnLightOff
	 */
	struct AblockEntranceLight_C_turnLightOff_Params
	{	};

	/**
	 * Function blockEntranceLight.blockEntranceLight_C.ToggleShadows
	 */
	struct AblockEntranceLight_C_ToggleShadows_Params
	{
	public:
		bool                                                       on;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function blockEntranceLight.blockEntranceLight_C.ExecuteUbergraph_blockEntranceLight
	 */
	struct AblockEntranceLight_C_ExecuteUbergraph_blockEntranceLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
