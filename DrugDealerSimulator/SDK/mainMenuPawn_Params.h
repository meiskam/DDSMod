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
	 * Function mainMenuPawn.mainMenuPawn_C.UserConstructionScript
	 */
	struct AmainMenuPawn_C_UserConstructionScript_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.zoomIn__FinishedFunc
	 */
	struct AmainMenuPawn_C_zoomIn__FinishedFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.zoomIn__UpdateFunc
	 */
	struct AmainMenuPawn_C_zoomIn__UpdateFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__FinishedFunc
	 */
	struct AmainMenuPawn_C_CamZoomLoop__FinishedFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.CamZoomLoop__UpdateFunc
	 */
	struct AmainMenuPawn_C_CamZoomLoop__UpdateFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.museicFade__FinishedFunc
	 */
	struct AmainMenuPawn_C_museicFade__FinishedFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.museicFade__UpdateFunc
	 */
	struct AmainMenuPawn_C_museicFade__UpdateFunc_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.ReceiveBeginPlay
	 */
	struct AmainMenuPawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.fadeOutMusic
	 */
	struct AmainMenuPawn_C_fadeOutMusic_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.startMusic
	 */
	struct AmainMenuPawn_C_startMusic_Params
	{	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.updateCamSlide
	 */
	struct AmainMenuPawn_C_updateCamSlide_Params
	{
	public:
		float                                                      CamX;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CamY;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature
	 */
	struct AmainMenuPawn_C_BndEvt__muzykaIntro_K2Node_ComponentBoundEvent_0_OnAudioPlaybackPercent__DelegateSignature_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function mainMenuPawn.mainMenuPawn_C.ExecuteUbergraph_mainMenuPawn
	 */
	struct AmainMenuPawn_C_ExecuteUbergraph_mainMenuPawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
