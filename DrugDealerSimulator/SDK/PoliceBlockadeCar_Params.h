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
	 * Function PoliceBlockadeCar.PoliceBlockadeCar_C.UserConstructionScript
	 */
	struct APoliceBlockadeCar_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveBeginPlay
	 */
	struct APoliceBlockadeCar_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PoliceBlockadeCar.PoliceBlockadeCar_C.ReceiveTick
	 */
	struct APoliceBlockadeCar_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PoliceBlockadeCar.PoliceBlockadeCar_C.ExecuteUbergraph_PoliceBlockadeCar
	 */
	struct APoliceBlockadeCar_C_ExecuteUbergraph_PoliceBlockadeCar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
