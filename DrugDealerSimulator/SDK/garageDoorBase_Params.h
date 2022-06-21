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
	 * Function garageDoorBase.garageDoorBase_C.getGarageOptions
	 */
	struct AgarageDoorBase_C_getGarageOptions_Params
	{
	public:
		TArray<class FText>                                        ReturnNames;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class FString>                                      Actions;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.UserConstructionScript
	 */
	struct AgarageDoorBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc
	 */
	struct AgarageDoorBase_C_openClose__FinishedFunc_Params
	{	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc
	 */
	struct AgarageDoorBase_C_openClose__UpdateFunc_Params
	{	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay
	 */
	struct AgarageDoorBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.toggleGarageDoor
	 */
	struct AgarageDoorBase_C_toggleGarageDoor_Params
	{	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.executeGarageOption
	 */
	struct AgarageDoorBase_C_executeGarageOption_Params
	{
	public:
		class FString                                              optionString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase
	 */
	struct AgarageDoorBase_C_ExecuteUbergraph_garageDoorBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
