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
	 * Function TunnelMusic.TunnelMusic_C.PickRandomSound
	 */
	struct ATunnelMusic_C_PickRandomSound_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.UserConstructionScript
	 */
	struct ATunnelMusic_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.ReceiveBeginPlay
	 */
	struct ATunnelMusic_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.ReceiveTick
	 */
	struct ATunnelMusic_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.EventPlayerEnteredTunnels
	 */
	struct ATunnelMusic_C_EventPlayerEnteredTunnels_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.EventPlayerPeeking
	 */
	struct ATunnelMusic_C_EventPlayerPeeking_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.EventPlayerBack
	 */
	struct ATunnelMusic_C_EventPlayerBack_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.EventPlayerLeft
	 */
	struct ATunnelMusic_C_EventPlayerLeft_Params
	{	};

	/**
	 * Function TunnelMusic.TunnelMusic_C.ExecuteUbergraph_TunnelMusic
	 */
	struct ATunnelMusic_C_ExecuteUbergraph_TunnelMusic_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
