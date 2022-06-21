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
	 * Function packageBase.packageBase_C.UserConstructionScript
	 */
	struct ApackageBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function packageBase.packageBase_C.ReceiveBeginPlay
	 */
	struct ApackageBase_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function packageBase.packageBase_C.takeContents
	 */
	struct ApackageBase_C_takeContents_Params
	{	};

	/**
	 * Function packageBase.packageBase_C.Setup
	 */
	struct ApackageBase_C_Setup_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        contents;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		TArray<int32_t>                                            Quantities;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		float                                                      TotalSize;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalWeight;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function packageBase.packageBase_C.ExecuteUbergraph_packageBase
	 */
	struct ApackageBase_C_ExecuteUbergraph_packageBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
