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
	 * Function NewEntranceLight.NewEntranceLight_C.UserConstructionScript
	 */
	struct ANewEntranceLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NewEntranceLight.NewEntranceLight_C.ReceiveBeginPlay
	 */
	struct ANewEntranceLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NewEntranceLight.NewEntranceLight_C.LightStateChanged
	 */
	struct ANewEntranceLight_C_LightStateChanged_Params
	{
	public:
		bool                                                       LightVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CastShadows;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewEntranceLight.NewEntranceLight_C.ExecuteUbergraph_NewEntranceLight
	 */
	struct ANewEntranceLight_C_ExecuteUbergraph_NewEntranceLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
