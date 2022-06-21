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
	 * Function wallSprayMarking.wallSprayMarking_C.setSpraySymbol
	 */
	struct AwallSprayMarking_C_setSpraySymbol_Params
	{	};

	/**
	 * Function wallSprayMarking.wallSprayMarking_C.UserConstructionScript
	 */
	struct AwallSprayMarking_C_UserConstructionScript_Params
	{	};

	/**
	 * Function wallSprayMarking.wallSprayMarking_C.ReceiveBeginPlay
	 */
	struct AwallSprayMarking_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function wallSprayMarking.wallSprayMarking_C.ReceiveTick
	 */
	struct AwallSprayMarking_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function wallSprayMarking.wallSprayMarking_C.ExecuteUbergraph_wallSprayMarking
	 */
	struct AwallSprayMarking_C_ExecuteUbergraph_wallSprayMarking_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
