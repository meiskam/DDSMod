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
	 * Function playerCharacterBP.playerCharacterBP_C.CheckFallDamage
	 */
	struct AplayerCharacterBP_C_CheckFallDamage_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.FallDamageRegen
	 */
	struct AplayerCharacterBP_C_FallDamageRegen_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ExpandRama
	 */
	struct AplayerCharacterBP_C_ExpandRama_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ReconstructOldInventory
	 */
	struct AplayerCharacterBP_C_ReconstructOldInventory_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.CheckInfluenceSphere
	 */
	struct AplayerCharacterBP_C_CheckInfluenceSphere_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.convertUsedDrugData
	 */
	struct AplayerCharacterBP_C_convertUsedDrugData_Params
	{
	public:
		struct FinventoryItemStruct                                InvData;                                                 // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		struct FinventoryItemStruct                                OutData;                                                 // 0x0000(0x0108)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       Empty;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.drugStringToIndex
	 */
	struct AplayerCharacterBP_C_drugStringToIndex_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.CastFailed
	 */
	struct AplayerCharacterBP_C_CastFailed_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.CheckHoverobjectClass
	 */
	struct AplayerCharacterBP_C_CheckHoverobjectClass_Params
	{
	public:
		int32_t                                                    InnerClass;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DeepClass;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Match;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.restoreGuardLocation
	 */
	struct AplayerCharacterBP_C_restoreGuardLocation_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkBobbyPins
	 */
	struct AplayerCharacterBP_C_checkBobbyPins_Params
	{
	public:
		bool                                                       RemoveOne;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasBobbyPins;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    bobbyPinCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.convertBackpackData
	 */
	struct AplayerCharacterBP_C_convertBackpackData_Params
	{
	public:
		struct FinventoryItemStruct                                BackpackIn;                                              // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		struct FinventoryItemStruct                                BackpackOut;                                             // 0x0000(0x0108)  (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkSeedsInventory
	 */
	struct AplayerCharacterBP_C_checkSeedsInventory_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateWeedPlacement
	 */
	struct AplayerCharacterBP_C_updateWeedPlacement_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.geyKeyNam
	 */
	struct AplayerCharacterBP_C_geyKeyNam_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InActionName;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateBackpackQuan
	 */
	struct AplayerCharacterBP_C_updateBackpackQuan_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.adaptControls
	 */
	struct AplayerCharacterBP_C_adaptControls_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.adaptDifficulty
	 */
	struct AplayerCharacterBP_C_adaptDifficulty_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.confiscateMoney
	 */
	struct AplayerCharacterBP_C_confiscateMoney_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.getPoliceStationTeleportLocation
	 */
	struct AplayerCharacterBP_C_getPoliceStationTeleportLocation_Params
	{
	public:
		struct FCoreUObject_FTransform                             ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.usedDrugUpdateEffects
	 */
	struct AplayerCharacterBP_C_usedDrugUpdateEffects_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.usedDrugCountdown
	 */
	struct AplayerCharacterBP_C_usedDrugCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.useDrugDose
	 */
	struct AplayerCharacterBP_C_useDrugDose_Params
	{
	public:
		struct FdrugData                                           drugData;                                                // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class FText                                                NameOverride;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.quickUseItem
	 */
	struct AplayerCharacterBP_C_quickUseItem_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.staminaDrainCooldown
	 */
	struct AplayerCharacterBP_C_staminaDrainCooldown_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateBackpackMovementChange
	 */
	struct AplayerCharacterBP_C_updateBackpackMovementChange_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateSkillAbilities
	 */
	struct AplayerCharacterBP_C_updateSkillAbilities_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.refreshBackpackData
	 */
	struct AplayerCharacterBP_C_refreshBackpackData_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.returnItemSizing
	 */
	struct AplayerCharacterBP_C_returnItemSizing_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Weight;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateSprayGizmo
	 */
	struct AplayerCharacterBP_C_updateSprayGizmo_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.staminaBreatheFade
	 */
	struct AplayerCharacterBP_C_staminaBreatheFade_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.playFootStepSound
	 */
	struct AplayerCharacterBP_C_playFootStepSound_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.chooseRandomSongID
	 */
	struct AplayerCharacterBP_C_chooseRandomSongID_Params
	{
	public:
		int32_t                                                    ChosenID;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.resetCamLimits
	 */
	struct AplayerCharacterBP_C_resetCamLimits_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.getArmsAnimBP
	 */
	struct AplayerCharacterBP_C_getArmsAnimBP_Params
	{
	public:
		class UfpsArmsAnimBP_C*                                    AnimBP;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.calcChasersDistances
	 */
	struct AplayerCharacterBP_C_calcChasersDistances_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endFugitive
	 */
	struct AplayerCharacterBP_C_endFugitive_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.markAsFugitive
	 */
	struct AplayerCharacterBP_C_markAsFugitive_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.fugitiveCountdown
	 */
	struct AplayerCharacterBP_C_fugitiveCountdown_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateNotifyIcons
	 */
	struct AplayerCharacterBP_C_updateNotifyIcons_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkInventorySizing
	 */
	struct AplayerCharacterBP_C_checkInventorySizing_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkAllPocketsSizing
	 */
	struct AplayerCharacterBP_C_checkAllPocketsSizing_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllFits;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Rest;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.compareInventoryData
	 */
	struct AplayerCharacterBP_C_compareInventoryData_Params
	{
	public:
		struct FinventoryItemStruct                                Compare01;                                               // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		struct FinventoryItemStruct                                Compare02;                                               // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		bool                                                       TheSame;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.addCryptocurrency
	 */
	struct AplayerCharacterBP_C_addCryptocurrency_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.countAllMoney
	 */
	struct AplayerCharacterBP_C_countAllMoney_Params
	{
	public:
		int32_t                                                    allMoneyCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.chargeMoney
	 */
	struct AplayerCharacterBP_C_chargeMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoPopup;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.addMoney
	 */
	struct AplayerCharacterBP_C_addMoney_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipCounting;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.cameraFocus
	 */
	struct AplayerCharacterBP_C_cameraFocus_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkForIllegals
	 */
	struct AplayerCharacterBP_C_checkForIllegals_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.calcVisibilityMultiplier
	 */
	struct AplayerCharacterBP_C_calcVisibilityMultiplier_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.calcSuspicionMultiplier
	 */
	struct AplayerCharacterBP_C_calcSuspicionMultiplier_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.calcMouseYawAction
	 */
	struct AplayerCharacterBP_C_calcMouseYawAction_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.calcMousePitchAction
	 */
	struct AplayerCharacterBP_C_calcMousePitchAction_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Interaction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.displayActionOptions
	 */
	struct AplayerCharacterBP_C_displayActionOptions_Params
	{
	public:
		TArray<class FText>                                        NameList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FString>                                      ActionList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.displayPopup
	 */
	struct AplayerCharacterBP_C_displayPopup_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShowMouse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkItemContents
	 */
	struct AplayerCharacterBP_C_checkItemContents_Params
	{
	public:
		class FString                                              Source;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.clearBackpack
	 */
	struct AplayerCharacterBP_C_clearBackpack_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.setCurrentBackpack
	 */
	struct AplayerCharacterBP_C_setCurrentBackpack_Params
	{
	public:
		class AbackpackBase_C*                                     backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AitemInventoryHolder_C*                              itemHolder;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FinventoryItemStruct                                backpackData;                                            // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		class FName                                                BackpackItemID;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.phoneCallFunction
	 */
	struct AplayerCharacterBP_C_phoneCallFunction_Params
	{
	public:
		class FString                                              functionToCall;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.phoneNewNote
	 */
	struct AplayerCharacterBP_C_phoneNewNote_Params
	{
	public:
		bool                                                       Done;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                noteText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.phoneNewCall
	 */
	struct AplayerCharacterBP_C_phoneNewCall_Params
	{
	public:
		int32_t                                                    callerID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundWave*                                          callAudio;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              functionOnAnswer;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              functionOnDecline;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              functionOnEnd;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                CallText;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.phoneNewMessage
	 */
	struct AplayerCharacterBP_C_phoneNewMessage_Params
	{
	public:
		int32_t                                                    From;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    vcardID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkContainerSizing
	 */
	struct AplayerCharacterBP_C_checkContainerSizing_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    maxQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryAddToPockets
	 */
	struct AplayerCharacterBP_C_tryAddToPockets_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllAdded;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Rest;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.addBackpackContent
	 */
	struct AplayerCharacterBP_C_addBackpackContent_Params
	{
	public:
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ItemPrice;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkBackpackSizing
	 */
	struct AplayerCharacterBP_C_checkBackpackSizing_Params
	{
	public:
		struct FinventoryItemStruct                                itemData;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    maxQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.checkPocketSizing
	 */
	struct AplayerCharacterBP_C_checkPocketSizing_Params
	{
	public:
		struct FinventoryItemStruct                                itemData;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canFit;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    maxQuantity;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.setPocketContent
	 */
	struct AplayerCharacterBP_C_setPocketContent_Params
	{
	public:
		struct FinventoryItemStruct                                itemData;                                                // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    PocketIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    vendorPrice;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.removeFromPocket
	 */
	struct AplayerCharacterBP_C_removeFromPocket_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.removeDraggedItem
	 */
	struct AplayerCharacterBP_C_removeDraggedItem_Params
	{
	public:
		class FString                                              parentTag;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FinventoryItemStruct                                Data;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.removeFromBackpack
	 */
	struct AplayerCharacterBP_C_removeFromBackpack_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryAddToInventory
	 */
	struct AplayerCharacterBP_C_tryAddToInventory_Params
	{
	public:
		struct FinventoryItemStruct                                Item;                                                    // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FText                                                FailReason;                                              // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.capAxisValue
	 */
	struct AplayerCharacterBP_C_capAxisValue_Params
	{
	public:
		float                                                      ForwardAxis;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SideAxis;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ForwardCaped;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SideCaped;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.closeAllForPause
	 */
	struct AplayerCharacterBP_C_closeAllForPause_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.standUpCheck
	 */
	struct AplayerCharacterBP_C_standUpCheck_Params
	{
	public:
		bool                                                       canStandUp;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.cameraLeanUpdate
	 */
	struct AplayerCharacterBP_C_cameraLeanUpdate_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.staminaBreath
	 */
	struct AplayerCharacterBP_C_staminaBreath_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.regainStamina
	 */
	struct AplayerCharacterBP_C_regainStamina_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.drainStamina
	 */
	struct AplayerCharacterBP_C_drainStamina_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Burst;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BurstValue;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.setDefaults
	 */
	struct AplayerCharacterBP_C_setDefaults_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.UserConstructionScript
	 */
	struct AplayerCharacterBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.CrouchAnim__FinishedFunc
	 */
	struct AplayerCharacterBP_C_CrouchAnim__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.CrouchAnim__UpdateFunc
	 */
	struct AplayerCharacterBP_C_CrouchAnim__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.camFovDialogue__FinishedFunc
	 */
	struct AplayerCharacterBP_C_camFovDialogue__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.camFovDialogue__UpdateFunc
	 */
	struct AplayerCharacterBP_C_camFovDialogue__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.taserCamera__FinishedFunc
	 */
	struct AplayerCharacterBP_C_taserCamera__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.taserCamera__UpdateFunc
	 */
	struct AplayerCharacterBP_C_taserCamera__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.Timeline_0__FinishedFunc
	 */
	struct AplayerCharacterBP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.Timeline_0__UpdateFunc
	 */
	struct AplayerCharacterBP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.Timeline_1__FinishedFunc
	 */
	struct AplayerCharacterBP_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.Timeline_1__UpdateFunc
	 */
	struct AplayerCharacterBP_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.headBobbTimeline__FinishedFunc
	 */
	struct AplayerCharacterBP_C_headBobbTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.headBobbTimeline__UpdateFunc
	 */
	struct AplayerCharacterBP_C_headBobbTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.headBobbTimeline__footStep__EventFunc
	 */
	struct AplayerCharacterBP_C_headBobbTimeline__footStep__EventFunc_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_SprintToggle_K2Node_InputActionEvent_32
	 */
	struct AplayerCharacterBP_C_InpActEvt_SprintToggle_K2Node_InputActionEvent_32_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_SprintToggle_K2Node_InputActionEvent_31
	 */
	struct AplayerCharacterBP_C_InpActEvt_SprintToggle_K2Node_InputActionEvent_31_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_CrouchToggle_K2Node_InputActionEvent_30
	 */
	struct AplayerCharacterBP_C_InpActEvt_CrouchToggle_K2Node_InputActionEvent_30_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_JumpObstacle_K2Node_InputActionEvent_29
	 */
	struct AplayerCharacterBP_C_InpActEvt_JumpObstacle_K2Node_InputActionEvent_29_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InventoryToggle_K2Node_InputActionEvent_28
	 */
	struct AplayerCharacterBP_C_InpActEvt_InventoryToggle_K2Node_InputActionEvent_28_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InventoryToggle_K2Node_InputActionEvent_27
	 */
	struct AplayerCharacterBP_C_InpActEvt_InventoryToggle_K2Node_InputActionEvent_27_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Escape_K2Node_InputKeyEvent_7
	 */
	struct AplayerCharacterBP_C_InpActEvt_Escape_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_F10_K2Node_InputKeyEvent_6
	 */
	struct AplayerCharacterBP_C_InpActEvt_F10_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Wait_K2Node_InputActionEvent_26
	 */
	struct AplayerCharacterBP_C_InpActEvt_Wait_K2Node_InputActionEvent_26_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneNext_K2Node_InputActionEvent_25
	 */
	struct AplayerCharacterBP_C_InpActEvt_phoneNext_K2Node_InputActionEvent_25_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phonePrevious_K2Node_InputActionEvent_24
	 */
	struct AplayerCharacterBP_C_InpActEvt_phonePrevious_K2Node_InputActionEvent_24_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneEnter_K2Node_InputActionEvent_23
	 */
	struct AplayerCharacterBP_C_InpActEvt_phoneEnter_K2Node_InputActionEvent_23_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneBack_K2Node_InputActionEvent_22
	 */
	struct AplayerCharacterBP_C_InpActEvt_phoneBack_K2Node_InputActionEvent_22_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_H_K2Node_InputKeyEvent_5
	 */
	struct AplayerCharacterBP_C_InpActEvt_H_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_ScrollUp_K2Node_InputActionEvent_21
	 */
	struct AplayerCharacterBP_C_InpActEvt_ScrollUp_K2Node_InputActionEvent_21_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_ScrollDown_K2Node_InputActionEvent_20
	 */
	struct AplayerCharacterBP_C_InpActEvt_ScrollDown_K2Node_InputActionEvent_20_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19
	 */
	struct AplayerCharacterBP_C_InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18
	 */
	struct AplayerCharacterBP_C_InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17
	 */
	struct AplayerCharacterBP_C_InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16
	 */
	struct AplayerCharacterBP_C_InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15
	 */
	struct AplayerCharacterBP_C_InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14
	 */
	struct AplayerCharacterBP_C_InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13
	 */
	struct AplayerCharacterBP_C_InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_AppartmentMode_K2Node_InputActionEvent_12
	 */
	struct AplayerCharacterBP_C_InpActEvt_AppartmentMode_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_AppartmentMode_K2Node_InputActionEvent_11
	 */
	struct AplayerCharacterBP_C_InpActEvt_AppartmentMode_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InfoToggle_K2Node_InputActionEvent_10
	 */
	struct AplayerCharacterBP_C_InpActEvt_InfoToggle_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Y_K2Node_InputKeyEvent_4
	 */
	struct AplayerCharacterBP_C_InpActEvt_Y_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_DropBackpack_K2Node_InputActionEvent_9
	 */
	struct AplayerCharacterBP_C_InpActEvt_DropBackpack_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_DropBackpack_K2Node_InputActionEvent_8
	 */
	struct AplayerCharacterBP_C_InpActEvt_DropBackpack_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Action_K2Node_InputActionEvent_7
	 */
	struct AplayerCharacterBP_C_InpActEvt_Action_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Action_K2Node_InputActionEvent_6
	 */
	struct AplayerCharacterBP_C_InpActEvt_Action_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse01_K2Node_InputActionEvent_5
	 */
	struct AplayerCharacterBP_C_InpActEvt_QuickUse01_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse02_K2Node_InputActionEvent_4
	 */
	struct AplayerCharacterBP_C_InpActEvt_QuickUse02_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse03_K2Node_InputActionEvent_3
	 */
	struct AplayerCharacterBP_C_InpActEvt_QuickUse03_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse04_K2Node_InputActionEvent_2
	 */
	struct AplayerCharacterBP_C_InpActEvt_QuickUse04_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_L_K2Node_InputKeyEvent_3
	 */
	struct AplayerCharacterBP_C_InpActEvt_L_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_L_K2Node_InputKeyEvent_2
	 */
	struct AplayerCharacterBP_C_InpActEvt_L_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_MapToggle_K2Node_InputActionEvent_1
	 */
	struct AplayerCharacterBP_C_InpActEvt_MapToggle_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpActEvt_N_K2Node_InputKeyEvent_1
	 */
	struct AplayerCharacterBP_C_InpActEvt_N_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ReceiveBeginPlay
	 */
	struct AplayerCharacterBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ReceiveTick
	 */
	struct AplayerCharacterBP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
	 */
	struct AplayerCharacterBP_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2
	 */
	struct AplayerCharacterBP_C_InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
	 */
	struct AplayerCharacterBP_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4
	 */
	struct AplayerCharacterBP_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.breakCrouch
	 */
	struct AplayerCharacterBP_C_breakCrouch_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.footStep
	 */
	struct AplayerCharacterBP_C_footStep_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ReceivePossessed
	 */
	struct AplayerCharacterBP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.lineTraceCheck
	 */
	struct AplayerCharacterBP_C_lineTraceCheck_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.breakSprint
	 */
	struct AplayerCharacterBP_C_breakSprint_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.playerStateUpdates
	 */
	struct AplayerCharacterBP_C_playerStateUpdates_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.startSleepDialogue
	 */
	struct AplayerCharacterBP_C_startSleepDialogue_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5
	 */
	struct AplayerCharacterBP_C_InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.showPhone
	 */
	struct AplayerCharacterBP_C_showPhone_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.hidePhone
	 */
	struct AplayerCharacterBP_C_hidePhone_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.openInventory
	 */
	struct AplayerCharacterBP_C_openInventory_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.closeInventory
	 */
	struct AplayerCharacterBP_C_closeInventory_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.resumeGame
	 */
	struct AplayerCharacterBP_C_resumeGame_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.initializePlayer
	 */
	struct AplayerCharacterBP_C_initializePlayer_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.startSleepMode
	 */
	struct AplayerCharacterBP_C_startSleepMode_Params
	{
	public:
		bool                                                       Sleep;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endSleepMode
	 */
	struct AplayerCharacterBP_C_endSleepMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.goSleep
	 */
	struct AplayerCharacterBP_C_goSleep_Params
	{
	public:
		float                                                      Hours;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Minutes;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.hideCallWidget
	 */
	struct AplayerCharacterBP_C_hideCallWidget_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.selectActionOption
	 */
	struct AplayerCharacterBP_C_selectActionOption_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.startLockpickMode
	 */
	struct AplayerCharacterBP_C_startLockpickMode_Params
	{
	public:
		class AdoorBase_C*                                         LockpickedDoor;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.closeLockpickMode
	 */
	struct AplayerCharacterBP_C_closeLockpickMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ReceiveUnpossessed
	 */
	struct AplayerCharacterBP_C_ReceiveUnpossessed_Params
	{
	public:
		class AController*                                         OldController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.startDialogue
	 */
	struct AplayerCharacterBP_C_startDialogue_Params
	{
	public:
		class AdialogueInstance_C*                                 dialogueInstance;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endDialogue
	 */
	struct AplayerCharacterBP_C_endDialogue_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.openTrade
	 */
	struct AplayerCharacterBP_C_openTrade_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.closeTrade
	 */
	struct AplayerCharacterBP_C_closeTrade_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.lookAtCheck
	 */
	struct AplayerCharacterBP_C_lookAtCheck_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.StartChaseMusic
	 */
	struct AplayerCharacterBP_C_StartChaseMusic_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endChaseMusic
	 */
	struct AplayerCharacterBP_C_endChaseMusic_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tasedDown
	 */
	struct AplayerCharacterBP_C_tasedDown_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.enableTasingDown
	 */
	struct AplayerCharacterBP_C_enableTasingDown_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.caughtInSearch
	 */
	struct AplayerCharacterBP_C_caughtInSearch_Params
	{
	public:
		bool                                                       onlyPoliceHours;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.confiscateIllegalItems
	 */
	struct AplayerCharacterBP_C_confiscateIllegalItems_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.workStationMode
	 */
	struct AplayerCharacterBP_C_workStationMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endWorkStationMode
	 */
	struct AplayerCharacterBP_C_endWorkStationMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.resetClearHover
	 */
	struct AplayerCharacterBP_C_resetClearHover_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.clearOptionPanel
	 */
	struct AplayerCharacterBP_C_clearOptionPanel_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.actionRelease
	 */
	struct AplayerCharacterBP_C_actionRelease_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.removeMap
	 */
	struct AplayerCharacterBP_C_removeMap_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.OnLanded
	 */
	struct AplayerCharacterBP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.openMap
	 */
	struct AplayerCharacterBP_C_openMap_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.enterAppartmentMode
	 */
	struct AplayerCharacterBP_C_enterAppartmentMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.endAppartmentMode
	 */
	struct AplayerCharacterBP_C_endAppartmentMode_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryPutAppartmentObject
	 */
	struct AplayerCharacterBP_C_tryPutAppartmentObject_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryMoveObject
	 */
	struct AplayerCharacterBP_C_tryMoveObject_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryStoreObject
	 */
	struct AplayerCharacterBP_C_tryStoreObject_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.updateMusicParamState
	 */
	struct AplayerCharacterBP_C_updateMusicParamState_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.musicTick
	 */
	struct AplayerCharacterBP_C_musicTick_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.closeEqShop
	 */
	struct AplayerCharacterBP_C_closeEqShop_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.quitComputer
	 */
	struct AplayerCharacterBP_C_quitComputer_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.backpackDropTimer
	 */
	struct AplayerCharacterBP_C_backpackDropTimer_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.tryPlayWaterFootstep
	 */
	struct AplayerCharacterBP_C_tryPlayWaterFootstep_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.staminaRested
	 */
	struct AplayerCharacterBP_C_staminaRested_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ActionPressed
	 */
	struct AplayerCharacterBP_C_ActionPressed_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ActionReleased
	 */
	struct AplayerCharacterBP_C_ActionReleased_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.enableEndChase
	 */
	struct AplayerCharacterBP_C_enableEndChase_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.enableStartChase
	 */
	struct AplayerCharacterBP_C_enableStartChase_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.caughtPoliceHours
	 */
	struct AplayerCharacterBP_C_caughtPoliceHours_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.drugConfShake
	 */
	struct AplayerCharacterBP_C_drugConfShake_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.passOut
	 */
	struct AplayerCharacterBP_C_passOut_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.unlockPassOut
	 */
	struct AplayerCharacterBP_C_unlockPassOut_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.showDebugPanel
	 */
	struct AplayerCharacterBP_C_showDebugPanel_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.RefreshUndegroundStatus
	 */
	struct AplayerCharacterBP_C_RefreshUndegroundStatus_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.RefreshOverlapps
	 */
	struct AplayerCharacterBP_C_RefreshOverlapps_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ResetLand
	 */
	struct AplayerCharacterBP_C_ResetLand_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 */
	struct AplayerCharacterBP_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
	{
	public:
		class URamaSaveComponent*                                  RamaSaveComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              LevelPackageName;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature
	 */
	struct AplayerCharacterBP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ContinueSprint
	 */
	struct AplayerCharacterBP_C_ContinueSprint_Params
	{	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_2_BackpackChanged__DelegateSignature
	 */
	struct AplayerCharacterBP_C_BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_2_BackpackChanged__DelegateSignature_Params
	{
	public:
		bool                                                       FromVendor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.TestUseWater
	 */
	struct AplayerCharacterBP_C_TestUseWater_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.ExecuteUbergraph_playerCharacterBP
	 */
	struct AplayerCharacterBP_C_ExecuteUbergraph_playerCharacterBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function playerCharacterBP.playerCharacterBP_C.FullLoadInitiated__DelegateSignature
	 */
	struct AplayerCharacterBP_C_FullLoadInitiated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
