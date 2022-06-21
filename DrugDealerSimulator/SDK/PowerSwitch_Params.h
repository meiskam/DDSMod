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
	 * Function PowerSwitch.PowerSwitch_C.VerifyHasKey
	 */
	struct APowerSwitch_C_VerifyHasKey_Params
	{
	public:
		class AplayerCharacterBP_C*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasKey;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.DisablePower
	 */
	struct APowerSwitch_C_DisablePower_Params
	{
	public:
		class AplayerCharacterBP_C*                                Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.HasPower
	 */
	struct APowerSwitch_C_HasPower_Params
	{
	public:
		bool                                                       Power;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.UserConstructionScript
	 */
	struct APowerSwitch_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.ReceiveTick
	 */
	struct APowerSwitch_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.InteractionActivate
	 */
	struct APowerSwitch_C_InteractionActivate_Params
	{
	public:
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.ExecuteUbergraph_PowerSwitch
	 */
	struct APowerSwitch_C_ExecuteUbergraph_PowerSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PowerSwitch.PowerSwitch_C.PowerStateChange__DelegateSignature
	 */
	struct APowerSwitch_C_PowerStateChange__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
