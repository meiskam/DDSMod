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
	 * Function launderDoor.launderDoor_C.CheckAvailable
	 */
	struct AlaunderDoor_C_CheckAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function launderDoor.launderDoor_C.GetChanceNooneHome
	 */
	struct AlaunderDoor_C_GetChanceNooneHome_Params
	{
	public:
		bool                                                       NooneHome;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function launderDoor.launderDoor_C.GetOpenReactionTime
	 */
	struct AlaunderDoor_C_GetOpenReactionTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function launderDoor.launderDoor_C.UserConstructionScript
	 */
	struct AlaunderDoor_C_UserConstructionScript_Params
	{	};

	/**
	 * Function launderDoor.launderDoor_C.LongRadiusChanged
	 */
	struct AlaunderDoor_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function launderDoor.launderDoor_C.ReceiveBeginPlay
	 */
	struct AlaunderDoor_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function launderDoor.launderDoor_C.ReceiveTick
	 */
	struct AlaunderDoor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function launderDoor.launderDoor_C.InteractionActivate
	 */
	struct AlaunderDoor_C_InteractionActivate_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function launderDoor.launderDoor_C.OpenKnock
	 */
	struct AlaunderDoor_C_OpenKnock_Params
	{	};

	/**
	 * Function launderDoor.launderDoor_C.ShortRadiusChanged
	 */
	struct AlaunderDoor_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function launderDoor.launderDoor_C.OpenKnock2
	 */
	struct AlaunderDoor_C_OpenKnock2_Params
	{	};

	/**
	 * Function launderDoor.launderDoor_C.VerifyAvailability
	 */
	struct AlaunderDoor_C_VerifyAvailability_Params
	{	};

	/**
	 * Function launderDoor.launderDoor_C.ExecuteUbergraph_launderDoor
	 */
	struct AlaunderDoor_C_ExecuteUbergraph_launderDoor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
