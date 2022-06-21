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
	 * Function FactoryGateDoor.FactoryGateDoor_C.HasPlayerKeys
	 */
	struct AFactoryGateDoor_C_HasPlayerKeys_Params
	{
	public:
		class AplayerCharacterBP_C*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasKeys;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FactoryGateDoor.FactoryGateDoor_C.UserConstructionScript
	 */
	struct AFactoryGateDoor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function FactoryGateDoor.FactoryGateDoor_C.InteractionActivate
	 */
	struct AFactoryGateDoor_C_InteractionActivate_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FactoryGateDoor.FactoryGateDoor_C.Reopen
	 */
	struct AFactoryGateDoor_C_Reopen_Params
	{	};

	/**
	 * Function FactoryGateDoor.FactoryGateDoor_C.ExecuteUbergraph_FactoryGateDoor
	 */
	struct AFactoryGateDoor_C_ExecuteUbergraph_FactoryGateDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
