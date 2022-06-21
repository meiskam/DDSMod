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
	 * Function newTaskWidget.newTaskWidget_C.getStatusNam
	 */
	struct UnewTaskWidget_C_getStatusNam_Params
	{
	public:
		EtaskStatuses                                              Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                StatusNam;                                               // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function newTaskWidget.newTaskWidget_C.Construct
	 */
	struct UnewTaskWidget_C_Construct_Params
	{	};

	/**
	 * Function newTaskWidget.newTaskWidget_C.Setup
	 */
	struct UnewTaskWidget_C_Setup_Params
	{
	public:
		class FText                                                heading;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Desc;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EtaskStatuses                                              TaskStatus;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget
	 */
	struct UnewTaskWidget_C_ExecuteUbergraph_newTaskWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
