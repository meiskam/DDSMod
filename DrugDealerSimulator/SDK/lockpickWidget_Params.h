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
	 * Function lockpickWidget.lockpickWidget_C.compareAngles
	 */
	struct UlockpickWidget_C_compareAngles_Params
	{
	public:
		bool                                                       aligned;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.MouseY
	 */
	struct UlockpickWidget_C_MouseY_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.MouseX
	 */
	struct UlockpickWidget_C_MouseX_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.Tick
	 */
	struct UlockpickWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.resetCircle
	 */
	struct UlockpickWidget_C_resetCircle_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.unlockUp
	 */
	struct UlockpickWidget_C_unlockUp_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.Construct
	 */
	struct UlockpickWidget_C_Construct_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.changeRotTempo
	 */
	struct UlockpickWidget_C_changeRotTempo_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.updateAlignment
	 */
	struct UlockpickWidget_C_updateAlignment_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.unlockDown
	 */
	struct UlockpickWidget_C_unlockDown_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.setBobbyPinCount
	 */
	struct UlockpickWidget_C_setBobbyPinCount_Params
	{
	public:
		int32_t                                                    PinsLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.Destruct
	 */
	struct UlockpickWidget_C_Destruct_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.randomWobble
	 */
	struct UlockpickWidget_C_randomWobble_Params
	{	};

	/**
	 * Function lockpickWidget.lockpickWidget_C.ExecuteUbergraph_lockpickWidget
	 */
	struct UlockpickWidget_C_ExecuteUbergraph_lockpickWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
