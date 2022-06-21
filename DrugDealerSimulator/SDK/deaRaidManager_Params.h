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
	 * Function deaRaidManager.deaRaidManager_C.countRaidSecondsTotal
	 */
	struct AdeaRaidManager_C_countRaidSecondsTotal_Params
	{
	public:
		int32_t                                                    secondsCounted;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.UserConstructionScript
	 */
	struct AdeaRaidManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__FinishedFunc
	 */
	struct AdeaRaidManager_C_raidMusicFadeOut__FinishedFunc_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.raidMusicFadeOut__UpdateFunc
	 */
	struct AdeaRaidManager_C_raidMusicFadeOut__UpdateFunc_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.ReceiveBeginPlay
	 */
	struct AdeaRaidManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.ReceiveTick
	 */
	struct AdeaRaidManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.StartKurwaRaid
	 */
	struct AdeaRaidManager_C_StartKurwaRaid_Params
	{
	public:
		class ArentAppartmentArea_C*                               ApartmentRef;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.raidCountdown
	 */
	struct AdeaRaidManager_C_raidCountdown_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.overrideEndCountdown
	 */
	struct AdeaRaidManager_C_overrideEndCountdown_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.fadeOutRaidMusic
	 */
	struct AdeaRaidManager_C_fadeOutRaidMusic_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.checkPlayerRanAway
	 */
	struct AdeaRaidManager_C_checkPlayerRanAway_Params
	{	};

	/**
	 * Function deaRaidManager.deaRaidManager_C.ExecuteUbergraph_deaRaidManager
	 */
	struct AdeaRaidManager_C_ExecuteUbergraph_deaRaidManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
