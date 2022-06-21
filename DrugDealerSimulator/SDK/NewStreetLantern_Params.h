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
	 * Function NewStreetLantern.NewStreetLantern_C.UserConstructionScript
	 */
	struct ANewStreetLantern_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NewStreetLantern.NewStreetLantern_C.LightStateChanged
	 */
	struct ANewStreetLantern_C_LightStateChanged_Params
	{
	public:
		bool                                                       LightVisible;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CastShadows;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NewStreetLantern.NewStreetLantern_C.ExecuteUbergraph_NewStreetLantern
	 */
	struct ANewStreetLantern_C_ExecuteUbergraph_NewStreetLantern_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
