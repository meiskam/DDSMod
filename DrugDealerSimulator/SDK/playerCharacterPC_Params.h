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
	 * Function playerCharacterPC.playerCharacterPC_C.HasFrontWidgets
	 */
	struct AplayerCharacterPC_C_HasFrontWidgets_Params
	{
	public:
		bool                                                       HasWidgets;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterPC.playerCharacterPC_C.CloseFrontWidget
	 */
	struct AplayerCharacterPC_C_CloseFrontWidget_Params
	{	};

	/**
	 * Function playerCharacterPC.playerCharacterPC_C.RegisterFrontWidget
	 */
	struct AplayerCharacterPC_C_RegisterFrontWidget_Params
	{
	public:
		class UUserWidget*                                         NewItem;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterPC.playerCharacterPC_C.UserConstructionScript
	 */
	struct AplayerCharacterPC_C_UserConstructionScript_Params
	{	};

	/**
	 * Function playerCharacterPC.playerCharacterPC_C.ReceiveBeginPlay
	 */
	struct AplayerCharacterPC_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function playerCharacterPC.playerCharacterPC_C.ExecuteUbergraph_playerCharacterPC
	 */
	struct AplayerCharacterPC_C_ExecuteUbergraph_playerCharacterPC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
