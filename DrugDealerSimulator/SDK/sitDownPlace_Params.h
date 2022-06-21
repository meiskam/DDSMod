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
	 * Function sitDownPlace.sitDownPlace_C.UserConstructionScript
	 */
	struct AsitDownPlace_C_UserConstructionScript_Params
	{	};

	/**
	 * Function sitDownPlace.sitDownPlace_C.InpActEvt_Action_K2Node_InputActionEvent_1
	 */
	struct AsitDownPlace_C_InpActEvt_Action_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function sitDownPlace.sitDownPlace_C.ReceiveBeginPlay
	 */
	struct AsitDownPlace_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function sitDownPlace.sitDownPlace_C.SitDown
	 */
	struct AsitDownPlace_C_SitDown_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function sitDownPlace.sitDownPlace_C.Activate
	 */
	struct AsitDownPlace_C_Activate_Params
	{	};

	/**
	 * Function sitDownPlace.sitDownPlace_C.ExecuteUbergraph_sitDownPlace
	 */
	struct AsitDownPlace_C_ExecuteUbergraph_sitDownPlace_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
