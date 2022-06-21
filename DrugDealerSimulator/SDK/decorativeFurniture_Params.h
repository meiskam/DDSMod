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
	 * Function decorativeFurniture.decorativeFurniture_C.respawnFurniture
	 */
	struct AdecorativeFurniture_C_respawnFurniture_Params
	{	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.UserConstructionScript
	 */
	struct AdecorativeFurniture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.ReceiveBeginPlay
	 */
	struct AdecorativeFurniture_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.InteractionActivate
	 */
	struct AdecorativeFurniture_C_InteractionActivate_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.InputToggleOn
	 */
	struct AdecorativeFurniture_C_InputToggleOn_Params
	{	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.InputToggleOff
	 */
	struct AdecorativeFurniture_C_InputToggleOff_Params
	{	};

	/**
	 * Function decorativeFurniture.decorativeFurniture_C.ExecuteUbergraph_decorativeFurniture
	 */
	struct AdecorativeFurniture_C_ExecuteUbergraph_decorativeFurniture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
