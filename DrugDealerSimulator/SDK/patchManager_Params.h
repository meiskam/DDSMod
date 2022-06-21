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
	 * Function patchManager.patchManager_C.UserConstructionScript
	 */
	struct ApatchManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function patchManager.patchManager_C.ReceiveBeginPlay
	 */
	struct ApatchManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function patchManager.patchManager_C.activatePatchingScript
	 */
	struct ApatchManager_C_activatePatchingScript_Params
	{
	public:
		int32_t                                                    ScriptIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function patchManager.patchManager_C.ExecuteUbergraph_patchManager
	 */
	struct ApatchManager_C_ExecuteUbergraph_patchManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
