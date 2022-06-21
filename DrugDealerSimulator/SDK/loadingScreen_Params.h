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
	 * Function loadingScreen.loadingScreen_C.setNewTip
	 */
	struct UloadingScreen_C_setNewTip_Params
	{	};

	/**
	 * Function loadingScreen.loadingScreen_C.killLoadingScreen
	 */
	struct UloadingScreen_C_killLoadingScreen_Params
	{
	public:
		float                                                      DelayTime;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function loadingScreen.loadingScreen_C.Construct
	 */
	struct UloadingScreen_C_Construct_Params
	{	};

	/**
	 * Function loadingScreen.loadingScreen_C.ExecuteUbergraph_loadingScreen
	 */
	struct UloadingScreen_C_ExecuteUbergraph_loadingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
