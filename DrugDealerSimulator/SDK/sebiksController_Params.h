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
	 * Function sebiksController.sebiksController_C.UserConstructionScript
	 */
	struct AsebiksController_C_UserConstructionScript_Params
	{	};

	/**
	 * Function sebiksController.sebiksController_C.ReceiveBeginPlay
	 */
	struct AsebiksController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sebiksController.sebiksController_C.ReceiveTick
	 */
	struct AsebiksController_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sebiksController.sebiksController_C.tryRespawn
	 */
	struct AsebiksController_C_tryRespawn_Params
	{	};

	/**
	 * Function sebiksController.sebiksController_C.ExecuteUbergraph_sebiksController
	 */
	struct AsebiksController_C_ExecuteUbergraph_sebiksController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
