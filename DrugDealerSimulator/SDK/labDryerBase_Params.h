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
	 * Function labDryerBase.labDryerBase_C.calcProperties
	 */
	struct AlabDryerBase_C_calcProperties_Params
	{
	public:
		float                                                      inParam;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OutParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function labDryerBase.labDryerBase_C.makeFinalDrugForm
	 */
	struct AlabDryerBase_C_makeFinalDrugForm_Params
	{
	public:
		EdrugForm                                                  In;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EdrugForm                                                  OutDried;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function labDryerBase.labDryerBase_C.UserConstructionScript
	 */
	struct AlabDryerBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.ReceiveBeginPlay
	 */
	struct AlabDryerBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.addSubstance
	 */
	struct AlabDryerBase_C_addSubstance_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.tryAddSubstance
	 */
	struct AlabDryerBase_C_tryAddSubstance_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.workFinished
	 */
	struct AlabDryerBase_C_workFinished_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.startDrying
	 */
	struct AlabDryerBase_C_startDrying_Params
	{	};

	/**
	 * Function labDryerBase.labDryerBase_C.ExecuteUbergraph_labDryerBase
	 */
	struct AlabDryerBase_C_ExecuteUbergraph_labDryerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
