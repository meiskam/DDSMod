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
	 * Function appartmentLight.appartmentLight_C.UserConstructionScript
	 */
	struct AappartmentLight_C_UserConstructionScript_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.lightFlicker__FinishedFunc
	 */
	struct AappartmentLight_C_lightFlicker__FinishedFunc_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.lightFlicker__UpdateFunc
	 */
	struct AappartmentLight_C_lightFlicker__UpdateFunc_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.LongRadiusChanged
	 */
	struct AappartmentLight_C_LongRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function appartmentLight.appartmentLight_C.ReceiveBeginPlay
	 */
	struct AappartmentLight_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.toggleLight
	 */
	struct AappartmentLight_C_toggleLight_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.enableShadows
	 */
	struct AappartmentLight_C_enableShadows_Params
	{	};

	/**
	 * Function appartmentLight.appartmentLight_C.ShortRadiusChanged
	 */
	struct AappartmentLight_C_ShortRadiusChanged_Params
	{
	public:
		bool                                                       InRadius;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function appartmentLight.appartmentLight_C.ExecuteUbergraph_appartmentLight
	 */
	struct AappartmentLight_C_ExecuteUbergraph_appartmentLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
