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
	 * Function streetLight.streetLight_C.UserConstructionScript
	 */
	struct AstreetLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function streetLight.streetLight_C.ReceiveBeginPlay
	 */
	struct AstreetLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function streetLight.streetLight_C.turnOn
	 */
	struct AstreetLight_C_turnOn_Params
	{	};

	/**
	 * Function streetLight.streetLight_C.turnOff
	 */
	struct AstreetLight_C_turnOff_Params
	{	};

	/**
	 * Function streetLight.streetLight_C.eventLightChange
	 */
	struct AstreetLight_C_eventLightChange_Params
	{
	public:
		bool                                                       on;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function streetLight.streetLight_C.ExecuteUbergraph_streetLight
	 */
	struct AstreetLight_C_ExecuteUbergraph_streetLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
