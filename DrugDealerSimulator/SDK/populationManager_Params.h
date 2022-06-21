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
	 * Function populationManager.populationManager_C.RefreshGoHomePoints
	 */
	struct ApopulationManager_C_RefreshGoHomePoints_Params
	{	};

	/**
	 * Function populationManager.populationManager_C.chooseNpcClass
	 */
	struct ApopulationManager_C_chooseNpcClass_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanSpawn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function populationManager.populationManager_C.UserConstructionScript
	 */
	struct ApopulationManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function populationManager.populationManager_C.ReceiveBeginPlay
	 */
	struct ApopulationManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function populationManager.populationManager_C.refreshCitizenStatus
	 */
	struct ApopulationManager_C_refreshCitizenStatus_Params
	{	};

	/**
	 * Function populationManager.populationManager_C.personGotHome
	 */
	struct ApopulationManager_C_personGotHome_Params
	{
	public:
		class AbaseNPC_C*                                          Person;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function populationManager.populationManager_C.burstMothafuckers
	 */
	struct ApopulationManager_C_burstMothafuckers_Params
	{	};

	/**
	 * Function populationManager.populationManager_C.populationTimeLapse
	 */
	struct ApopulationManager_C_populationTimeLapse_Params
	{
	public:
		float                                                      EndHour;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function populationManager.populationManager_C.ExecuteUbergraph_populationManager
	 */
	struct ApopulationManager_C_ExecuteUbergraph_populationManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
