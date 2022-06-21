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
	 * Function PM_RecallSelf.PM_RecallSelf_C.ReceiveExecute
	 */
	struct UPM_RecallSelf_C_ReceiveExecute_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PM_RecallSelf.PM_RecallSelf_C.ExecuteUbergraph_PM_RecallSelf
	 */
	struct UPM_RecallSelf_C_ExecuteUbergraph_PM_RecallSelf_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
