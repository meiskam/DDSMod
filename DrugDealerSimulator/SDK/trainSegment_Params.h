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
	 * Function trainSegment.trainSegment_C.turnOffset
	 */
	struct AtrainSegment_C_turnOffset_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function trainSegment.trainSegment_C.UserConstructionScript
	 */
	struct AtrainSegment_C_UserConstructionScript_Params
	{	};

	/**
	 * Function trainSegment.trainSegment_C.ReceiveBeginPlay
	 */
	struct AtrainSegment_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function trainSegment.trainSegment_C.ReceiveTick
	 */
	struct AtrainSegment_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function trainSegment.trainSegment_C.AnihilateTrain
	 */
	struct AtrainSegment_C_AnihilateTrain_Params
	{	};

	/**
	 * Function trainSegment.trainSegment_C.playHorn
	 */
	struct AtrainSegment_C_playHorn_Params
	{	};

	/**
	 * Function trainSegment.trainSegment_C.trainShake
	 */
	struct AtrainSegment_C_trainShake_Params
	{	};

	/**
	 * Function trainSegment.trainSegment_C.ExecuteUbergraph_trainSegment
	 */
	struct AtrainSegment_C_ExecuteUbergraph_trainSegment_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
