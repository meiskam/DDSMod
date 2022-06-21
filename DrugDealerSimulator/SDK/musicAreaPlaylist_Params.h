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
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.GetNewTrack
	 */
	struct AmusicAreaPlaylist_C_GetNewTrack_Params
	{
	public:
		class USoundBase*                                          Output;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.getMusicVolume
	 */
	struct AmusicAreaPlaylist_C_getMusicVolume_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.areaMusicEnabled
	 */
	struct AmusicAreaPlaylist_C_areaMusicEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.UserConstructionScript
	 */
	struct AmusicAreaPlaylist_C_UserConstructionScript_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__FinishedFunc
	 */
	struct AmusicAreaPlaylist_C_musicVolumeFade__FinishedFunc_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.musicVolumeFade__UpdateFunc
	 */
	struct AmusicAreaPlaylist_C_musicVolumeFade__UpdateFunc_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.ReceiveBeginPlay
	 */
	struct AmusicAreaPlaylist_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.ActivateMusicInArea
	 */
	struct AmusicAreaPlaylist_C_ActivateMusicInArea_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.endMusic
	 */
	struct AmusicAreaPlaylist_C_endMusic_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.firstAreaInitiate
	 */
	struct AmusicAreaPlaylist_C_firstAreaInitiate_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.bypassPlayMusic
	 */
	struct AmusicAreaPlaylist_C_bypassPlayMusic_Params
	{	};

	/**
	 * Function musicAreaPlaylist.musicAreaPlaylist_C.ExecuteUbergraph_musicAreaPlaylist
	 */
	struct AmusicAreaPlaylist_C_ExecuteUbergraph_musicAreaPlaylist_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
