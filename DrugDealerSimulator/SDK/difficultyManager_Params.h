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
	 * Function difficultyManager.difficultyManager_C.UserConstructionScript
	 */
	struct AdifficultyManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function difficultyManager.difficultyManager_C.ReceiveBeginPlay
	 */
	struct AdifficultyManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function difficultyManager.difficultyManager_C.applyDifficultyRuntime
	 */
	struct AdifficultyManager_C_applyDifficultyRuntime_Params
	{
	public:
		EdifficultyLevels                                          NewDifficulty;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function difficultyManager.difficultyManager_C.ExecuteUbergraph_difficultyManager
	 */
	struct AdifficultyManager_C_ExecuteUbergraph_difficultyManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
