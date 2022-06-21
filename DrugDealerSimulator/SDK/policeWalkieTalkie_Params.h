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
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.checkDisplayWidget
	 */
	struct ApoliceWalkieTalkie_C_checkDisplayWidget_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Display;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.UserConstructionScript
	 */
	struct ApoliceWalkieTalkie_C_UserConstructionScript_Params
	{	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.ReceiveBeginPlay
	 */
	struct ApoliceWalkieTalkie_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.playRadio
	 */
	struct ApoliceWalkieTalkie_C_playRadio_Params
	{
	public:
		class USoundBase*                                          NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.checkReasonToLive
	 */
	struct ApoliceWalkieTalkie_C_checkReasonToLive_Params
	{	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.checkPlayerMoving
	 */
	struct ApoliceWalkieTalkie_C_checkPlayerMoving_Params
	{	};

	/**
	 * Function policeWalkieTalkie.policeWalkieTalkie_C.ExecuteUbergraph_policeWalkieTalkie
	 */
	struct ApoliceWalkieTalkie_C_ExecuteUbergraph_policeWalkieTalkie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
