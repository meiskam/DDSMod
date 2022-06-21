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
	 * Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon
	 */
	struct AtempInfiniteDrugSource_C_getPackageIcon_Params
	{
	public:
		int32_t                                                    Quan;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EdrugForm                                                  Form;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript
	 */
	struct AtempInfiniteDrugSource_C_UserConstructionScript_Params
	{	};

	/**
	 * Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay
	 */
	struct AtempInfiniteDrugSource_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource
	 */
	struct AtempInfiniteDrugSource_C_resupplySource_Params
	{	};

	/**
	 * Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource
	 */
	struct AtempInfiniteDrugSource_C_ExecuteUbergraph_tempInfiniteDrugSource_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
