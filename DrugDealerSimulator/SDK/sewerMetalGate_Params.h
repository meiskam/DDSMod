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
	 * Function sewerMetalGate.sewerMetalGate_C.DoorCanInteract
	 */
	struct AsewerMetalGate_C_DoorCanInteract_Params
	{
	public:
		bool                                                       CanInteract;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                FailReason;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function sewerMetalGate.sewerMetalGate_C.UserConstructionScript
	 */
	struct AsewerMetalGate_C_UserConstructionScript_Params
	{	};

	/**
	 * Function sewerMetalGate.sewerMetalGate_C.ReceiveBeginPlay
	 */
	struct AsewerMetalGate_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sewerMetalGate.sewerMetalGate_C.ReceiveTick
	 */
	struct AsewerMetalGate_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sewerMetalGate.sewerMetalGate_C.ExecuteUbergraph_sewerMetalGate
	 */
	struct AsewerMetalGate_C_ExecuteUbergraph_sewerMetalGate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
