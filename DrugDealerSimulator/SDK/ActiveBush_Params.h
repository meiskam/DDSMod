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
	 * Function ActiveBush.ActiveBush_C.UserConstructionScript
	 */
	struct AActiveBush_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ActiveBush.ActiveBush_C.ReceiveTick
	 */
	struct AActiveBush_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveBush.ActiveBush_C.ReceiveActorBeginOverlap
	 */
	struct AActiveBush_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveBush.ActiveBush_C.ReceiveActorEndOverlap
	 */
	struct AActiveBush_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActiveBush.ActiveBush_C.PlaySound
	 */
	struct AActiveBush_C_PlaySound_Params
	{	};

	/**
	 * Function ActiveBush.ActiveBush_C.ExecuteUbergraph_ActiveBush
	 */
	struct AActiveBush_C_ExecuteUbergraph_ActiveBush_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
