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
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.PurgeTrashBin
	 */
	struct AInteractiveTrashBin_C_PurgeTrashBin_Params
	{	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.UserConstructionScript
	 */
	struct AInteractiveTrashBin_C_UserConstructionScript_Params
	{	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.ReceiveBeginPlay
	 */
	struct AInteractiveTrashBin_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.RamaLoaded
	 */
	struct AInteractiveTrashBin_C_RamaLoaded_Params
	{	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.BinPurge
	 */
	struct AInteractiveTrashBin_C_BinPurge_Params
	{
	public:
		bool                                                       TotalPurge;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.RetryPurge
	 */
	struct AInteractiveTrashBin_C_RetryPurge_Params
	{	};

	/**
	 * Function InteractiveTrashBin.InteractiveTrashBin_C.ExecuteUbergraph_InteractiveTrashBin
	 */
	struct AInteractiveTrashBin_C_ExecuteUbergraph_InteractiveTrashBin_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
