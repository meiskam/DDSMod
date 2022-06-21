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
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPlayerForFlashdrive
	 */
	struct ApoliceArchiveComputerBP_C_checkPlayerForFlashdrive_Params
	{
	public:
		bool                                                       hasFlashDrive;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.UserConstructionScript
	 */
	struct ApoliceArchiveComputerBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveBeginPlay
	 */
	struct ApoliceArchiveComputerBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.ReceiveTick
	 */
	struct ApoliceArchiveComputerBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyDown
	 */
	struct ApoliceArchiveComputerBP_C_KeyDown_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.KeyRelease
	 */
	struct ApoliceArchiveComputerBP_C_KeyRelease_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkStillFocus
	 */
	struct ApoliceArchiveComputerBP_C_checkStillFocus_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.checkPen
	 */
	struct ApoliceArchiveComputerBP_C_checkPen_Params
	{	};

	/**
	 * Function policeArchiveComputerBP.policeArchiveComputerBP_C.ExecuteUbergraph_policeArchiveComputerBP
	 */
	struct ApoliceArchiveComputerBP_C_ExecuteUbergraph_policeArchiveComputerBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
