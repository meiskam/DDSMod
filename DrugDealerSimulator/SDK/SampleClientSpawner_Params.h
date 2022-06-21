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
	 * Function SampleClientSpawner.SampleClientSpawner_C.TrySpawnAreaClient
	 */
	struct ASampleClientSpawner_C_TrySpawnAreaClient_Params
	{
	public:
		class AsprayAreaGizmo_C*                                   AreaGizmo;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              AreaString;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.HasAreaClient
	 */
	struct ASampleClientSpawner_C_HasAreaClient_Params
	{
	public:
		class FString                                              Area;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       HasClient;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.UnregisterClient
	 */
	struct ASampleClientSpawner_C_UnregisterClient_Params
	{
	public:
		class FString                                              Area;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       DirectClear;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.RegisterClient
	 */
	struct ASampleClientSpawner_C_RegisterClient_Params
	{
	public:
		class FString                                              OnArea;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.UserConstructionScript
	 */
	struct ASampleClientSpawner_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.ReceiveBeginPlay
	 */
	struct ASampleClientSpawner_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.CheckSampleClients
	 */
	struct ASampleClientSpawner_C_CheckSampleClients_Params
	{	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.BreakAreaLoop
	 */
	struct ASampleClientSpawner_C_BreakAreaLoop_Params
	{	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.CleanAreas
	 */
	struct ASampleClientSpawner_C_CleanAreas_Params
	{	};

	/**
	 * Function SampleClientSpawner.SampleClientSpawner_C.ExecuteUbergraph_SampleClientSpawner
	 */
	struct ASampleClientSpawner_C_ExecuteUbergraph_SampleClientSpawner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
