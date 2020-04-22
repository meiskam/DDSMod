#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function playerCharacterBP.playerCharacterBP_C.geyKeyNam
struct AplayerCharacterBP_C_geyKeyNam_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InActionName;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function playerCharacterBP.playerCharacterBP_C.updateBackpackQuan
struct AplayerCharacterBP_C_updateBackpackQuan_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.adaptControls
struct AplayerCharacterBP_C_adaptControls_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.adaptDifficulty
struct AplayerCharacterBP_C_adaptDifficulty_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.confiscateMoney
struct AplayerCharacterBP_C_confiscateMoney_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.getPoliceStationTeleportLocation
struct AplayerCharacterBP_C_getPoliceStationTeleportLocation_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.usedDrugUpdateEffects
struct AplayerCharacterBP_C_usedDrugUpdateEffects_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.usedDrugCountdown
struct AplayerCharacterBP_C_usedDrugCountdown_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.useDrugDose
struct AplayerCharacterBP_C_useDrugDose_Params
{
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.quickUseItem
struct AplayerCharacterBP_C_quickUseItem_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.staminaDrainCooldown
struct AplayerCharacterBP_C_staminaDrainCooldown_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.updateBackpackMovementChange
struct AplayerCharacterBP_C_updateBackpackMovementChange_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.updateSkillAbilities
struct AplayerCharacterBP_C_updateSkillAbilities_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.refreshBackpackData
struct AplayerCharacterBP_C_refreshBackpackData_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.returnItemSizing
struct AplayerCharacterBP_C_returnItemSizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.updateSprayGizmo
struct AplayerCharacterBP_C_updateSprayGizmo_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.staminaBreatheFade
struct AplayerCharacterBP_C_staminaBreatheFade_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.playFootStepSound
struct AplayerCharacterBP_C_playFootStepSound_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.chooseRandomSongID
struct AplayerCharacterBP_C_chooseRandomSongID_Params
{
	int                                                ChosenID;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.resetCamLimits
struct AplayerCharacterBP_C_resetCamLimits_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.getArmsAnimBP
struct AplayerCharacterBP_C_getArmsAnimBP_Params
{
	class UfpsArmsAnimBP_C*                            AnimBP;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.calcChasersDistances
struct AplayerCharacterBP_C_calcChasersDistances_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.endFugitive
struct AplayerCharacterBP_C_endFugitive_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.markAsFugitive
struct AplayerCharacterBP_C_markAsFugitive_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.fugitiveCountdown
struct AplayerCharacterBP_C_fugitiveCountdown_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.updateNotifyIcons
struct AplayerCharacterBP_C_updateNotifyIcons_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.checkInventorySizing
struct AplayerCharacterBP_C_checkInventorySizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkAllPocketsSizing
struct AplayerCharacterBP_C_checkAllPocketsSizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllFits;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rest;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.compareInventoryData
struct AplayerCharacterBP_C_compareInventoryData_Params
{
	struct FinventoryItemStruct                        Compare01;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FinventoryItemStruct                        Compare02;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TheSame;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.addCryptocurrency
struct AplayerCharacterBP_C_addCryptocurrency_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.countAllMoney
struct AplayerCharacterBP_C_countAllMoney_Params
{
	int                                                allMoneyCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.chargeMoney
struct AplayerCharacterBP_C_chargeMoney_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoPopup;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.addMoney
struct AplayerCharacterBP_C_addMoney_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.cameraFocus
struct AplayerCharacterBP_C_cameraFocus_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkForIllegals
struct AplayerCharacterBP_C_checkForIllegals_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.calcVisibilityMultiplier
struct AplayerCharacterBP_C_calcVisibilityMultiplier_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.calcSuspicionMultiplier
struct AplayerCharacterBP_C_calcSuspicionMultiplier_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.calcMouseYawAction
struct AplayerCharacterBP_C_calcMouseYawAction_Params
{
	class APlayerController*                           PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interaction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.calcMousePitchAction
struct AplayerCharacterBP_C_calcMousePitchAction_Params
{
	class APlayerController*                           PC;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interaction;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.displayActionOptions
struct AplayerCharacterBP_C_displayActionOptions_Params
{
	TArray<struct FText>                               NameList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             ActionList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function playerCharacterBP.playerCharacterBP_C.displayPopup
struct AplayerCharacterBP_C_displayPopup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShowMouse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkItemContents
struct AplayerCharacterBP_C_checkItemContents_Params
{
	struct FString                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.clearBackpack
struct AplayerCharacterBP_C_clearBackpack_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.setCurrentBackpack
struct AplayerCharacterBP_C_setCurrentBackpack_Params
{
	class AbackpackBase_C*                             backpack;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AitemInventoryHolder_C*                      itemHolder;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FinventoryItemStruct                        backpackData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.phoneCallFunction
struct AplayerCharacterBP_C_phoneCallFunction_Params
{
	struct FString                                     functionToCall;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function playerCharacterBP.playerCharacterBP_C.phoneNewNote
struct AplayerCharacterBP_C_phoneNewNote_Params
{
	bool                                               done;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       noteText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.phoneNewCall
struct AplayerCharacterBP_C_phoneNewCall_Params
{
	int                                                callerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  callAudio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     functionOnAnswer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     functionOnDecline;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     functionOnEnd;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       CallText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.phoneNewMessage
struct AplayerCharacterBP_C_phoneNewMessage_Params
{
	int                                                From;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                vcardID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkContainerSizing
struct AplayerCharacterBP_C_checkContainerSizing_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.tryAddToPockets
struct AplayerCharacterBP_C_tryAddToPockets_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllAdded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Rest;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.addBackpackContent
struct AplayerCharacterBP_C_addBackpackContent_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemPrice;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkBackpackSizing
struct AplayerCharacterBP_C_checkBackpackSizing_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.checkPocketSizing
struct AplayerCharacterBP_C_checkPocketSizing_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canFit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.setPocketContent
struct AplayerCharacterBP_C_setPocketContent_Params
{
	struct FinventoryItemStruct                        itemData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                PocketIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fromVendor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                vendorPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.removeFromPocket
struct AplayerCharacterBP_C_removeFromPocket_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.removeDraggedItem
struct AplayerCharacterBP_C_removeDraggedItem_Params
{
	struct FString                                     parentTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.removeFromBackpack
struct AplayerCharacterBP_C_removeFromBackpack_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.tryAddToInventory
struct AplayerCharacterBP_C_tryAddToInventory_Params
{
	struct FinventoryItemStruct                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FailReason;                                               // (Parm, OutParm)
};

// Function playerCharacterBP.playerCharacterBP_C.capAxisValue
struct AplayerCharacterBP_C_capAxisValue_Params
{
	float                                              ForwardAxis;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideAxis;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ForwardCaped;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SideCaped;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.closeAllForPause
struct AplayerCharacterBP_C_closeAllForPause_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.standUpCheck
struct AplayerCharacterBP_C_standUpCheck_Params
{
	bool                                               canStandUp;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.cameraLeanUpdate
struct AplayerCharacterBP_C_cameraLeanUpdate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.staminaBreath
struct AplayerCharacterBP_C_staminaBreath_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.regainStamina
struct AplayerCharacterBP_C_regainStamina_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.drainStamina
struct AplayerCharacterBP_C_drainStamina_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Burst;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BurstValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.setDefaults
struct AplayerCharacterBP_C_setDefaults_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.UserConstructionScript
struct AplayerCharacterBP_C_UserConstructionScript_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.CrouchAnim__FinishedFunc
struct AplayerCharacterBP_C_CrouchAnim__FinishedFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.CrouchAnim__UpdateFunc
struct AplayerCharacterBP_C_CrouchAnim__UpdateFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.camFovDialogue__FinishedFunc
struct AplayerCharacterBP_C_camFovDialogue__FinishedFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.camFovDialogue__UpdateFunc
struct AplayerCharacterBP_C_camFovDialogue__UpdateFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.taserCamera__FinishedFunc
struct AplayerCharacterBP_C_taserCamera__FinishedFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.taserCamera__UpdateFunc
struct AplayerCharacterBP_C_taserCamera__UpdateFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.Timeline_0__FinishedFunc
struct AplayerCharacterBP_C_Timeline_0__FinishedFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.Timeline_0__UpdateFunc
struct AplayerCharacterBP_C_Timeline_0__UpdateFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.Timeline_1__FinishedFunc
struct AplayerCharacterBP_C_Timeline_1__FinishedFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.Timeline_1__UpdateFunc
struct AplayerCharacterBP_C_Timeline_1__UpdateFunc_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_SprintToggle_K2Node_InputActionEvent_32
struct AplayerCharacterBP_C_InpActEvt_SprintToggle_K2Node_InputActionEvent_32_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_SprintToggle_K2Node_InputActionEvent_31
struct AplayerCharacterBP_C_InpActEvt_SprintToggle_K2Node_InputActionEvent_31_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_CrouchToggle_K2Node_InputActionEvent_30
struct AplayerCharacterBP_C_InpActEvt_CrouchToggle_K2Node_InputActionEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_JumpObstacle_K2Node_InputActionEvent_29
struct AplayerCharacterBP_C_InpActEvt_JumpObstacle_K2Node_InputActionEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InventoryToggle_K2Node_InputActionEvent_28
struct AplayerCharacterBP_C_InpActEvt_InventoryToggle_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InventoryToggle_K2Node_InputActionEvent_27
struct AplayerCharacterBP_C_InpActEvt_InventoryToggle_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Escape_K2Node_InputKeyEvent_6
struct AplayerCharacterBP_C_InpActEvt_Escape_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_F10_K2Node_InputKeyEvent_5
struct AplayerCharacterBP_C_InpActEvt_F10_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Wait_K2Node_InputActionEvent_26
struct AplayerCharacterBP_C_InpActEvt_Wait_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneNext_K2Node_InputActionEvent_25
struct AplayerCharacterBP_C_InpActEvt_phoneNext_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phonePrevious_K2Node_InputActionEvent_24
struct AplayerCharacterBP_C_InpActEvt_phonePrevious_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneEnter_K2Node_InputActionEvent_23
struct AplayerCharacterBP_C_InpActEvt_phoneEnter_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_phoneBack_K2Node_InputActionEvent_22
struct AplayerCharacterBP_C_InpActEvt_phoneBack_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_H_K2Node_InputKeyEvent_4
struct AplayerCharacterBP_C_InpActEvt_H_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_ScrollUp_K2Node_InputActionEvent_21
struct AplayerCharacterBP_C_InpActEvt_ScrollUp_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_ScrollDown_K2Node_InputActionEvent_20
struct AplayerCharacterBP_C_InpActEvt_ScrollDown_K2Node_InputActionEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19
struct AplayerCharacterBP_C_InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18
struct AplayerCharacterBP_C_InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17
struct AplayerCharacterBP_C_InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16
struct AplayerCharacterBP_C_InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15
struct AplayerCharacterBP_C_InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14
struct AplayerCharacterBP_C_InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13
struct AplayerCharacterBP_C_InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_AppartmentMode_K2Node_InputActionEvent_12
struct AplayerCharacterBP_C_InpActEvt_AppartmentMode_K2Node_InputActionEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_AppartmentMode_K2Node_InputActionEvent_11
struct AplayerCharacterBP_C_InpActEvt_AppartmentMode_K2Node_InputActionEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_InfoToggle_K2Node_InputActionEvent_10
struct AplayerCharacterBP_C_InpActEvt_InfoToggle_K2Node_InputActionEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Y_K2Node_InputKeyEvent_3
struct AplayerCharacterBP_C_InpActEvt_Y_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_DropBackpack_K2Node_InputActionEvent_9
struct AplayerCharacterBP_C_InpActEvt_DropBackpack_K2Node_InputActionEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_DropBackpack_K2Node_InputActionEvent_8
struct AplayerCharacterBP_C_InpActEvt_DropBackpack_K2Node_InputActionEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Action_K2Node_InputActionEvent_7
struct AplayerCharacterBP_C_InpActEvt_Action_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_Action_K2Node_InputActionEvent_6
struct AplayerCharacterBP_C_InpActEvt_Action_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse01_K2Node_InputActionEvent_5
struct AplayerCharacterBP_C_InpActEvt_QuickUse01_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse02_K2Node_InputActionEvent_4
struct AplayerCharacterBP_C_InpActEvt_QuickUse02_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse03_K2Node_InputActionEvent_3
struct AplayerCharacterBP_C_InpActEvt_QuickUse03_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_QuickUse04_K2Node_InputActionEvent_2
struct AplayerCharacterBP_C_InpActEvt_QuickUse04_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_L_K2Node_InputKeyEvent_2
struct AplayerCharacterBP_C_InpActEvt_L_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_L_K2Node_InputKeyEvent_1
struct AplayerCharacterBP_C_InpActEvt_L_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.InpActEvt_MapToggle_K2Node_InputActionEvent_1
struct AplayerCharacterBP_C_InpActEvt_MapToggle_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerCharacterBP.playerCharacterBP_C.ReceiveBeginPlay
struct AplayerCharacterBP_C_ReceiveBeginPlay_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ReceiveTick
struct AplayerCharacterBP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1
struct AplayerCharacterBP_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2
struct AplayerCharacterBP_C_InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
struct AplayerCharacterBP_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4
struct AplayerCharacterBP_C_InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.breakCrouch
struct AplayerCharacterBP_C_breakCrouch_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.footStep
struct AplayerCharacterBP_C_footStep_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ReceivePossessed
struct AplayerCharacterBP_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.lineTraceCheck
struct AplayerCharacterBP_C_lineTraceCheck_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.breakSprint
struct AplayerCharacterBP_C_breakSprint_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.playerStateUpdates
struct AplayerCharacterBP_C_playerStateUpdates_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.startSleepDialogue
struct AplayerCharacterBP_C_startSleepDialogue_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5
struct AplayerCharacterBP_C_InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.showPhone
struct AplayerCharacterBP_C_showPhone_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.hidePhone
struct AplayerCharacterBP_C_hidePhone_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.openInventory
struct AplayerCharacterBP_C_openInventory_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.closeInventory
struct AplayerCharacterBP_C_closeInventory_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.resumeGame
struct AplayerCharacterBP_C_resumeGame_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.initializePlayer
struct AplayerCharacterBP_C_initializePlayer_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.startSleepMode
struct AplayerCharacterBP_C_startSleepMode_Params
{
	bool                                               Sleep;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.endSleepMode
struct AplayerCharacterBP_C_endSleepMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.goSleep
struct AplayerCharacterBP_C_goSleep_Params
{
	float                                              Hours;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Minutes;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.hideCallWidget
struct AplayerCharacterBP_C_hideCallWidget_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.selectActionOption
struct AplayerCharacterBP_C_selectActionOption_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.startLockpickMode
struct AplayerCharacterBP_C_startLockpickMode_Params
{
	class AdoorBase_C*                                 LockpickedDoor;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.closeLockpickMode
struct AplayerCharacterBP_C_closeLockpickMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ReceiveUnpossessed
struct AplayerCharacterBP_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.startDialogue
struct AplayerCharacterBP_C_startDialogue_Params
{
	class AdialogueInstance_C*                         dialogueInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.endDialogue
struct AplayerCharacterBP_C_endDialogue_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.openTrade
struct AplayerCharacterBP_C_openTrade_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.closeTrade
struct AplayerCharacterBP_C_closeTrade_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.lookAtCheck
struct AplayerCharacterBP_C_lookAtCheck_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.startChaseMusic
struct AplayerCharacterBP_C_startChaseMusic_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.endChaseMusic
struct AplayerCharacterBP_C_endChaseMusic_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.tasedDown
struct AplayerCharacterBP_C_tasedDown_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.enableTasingDown
struct AplayerCharacterBP_C_enableTasingDown_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.caughtInSearch
struct AplayerCharacterBP_C_caughtInSearch_Params
{
	bool                                               onlyPoliceHours;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.confiscateIllegalItems
struct AplayerCharacterBP_C_confiscateIllegalItems_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.workStationMode
struct AplayerCharacterBP_C_workStationMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.endWorkStationMode
struct AplayerCharacterBP_C_endWorkStationMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.resetClearHover
struct AplayerCharacterBP_C_resetClearHover_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.clearOptionPanel
struct AplayerCharacterBP_C_clearOptionPanel_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ActionRelease
struct AplayerCharacterBP_C_ActionRelease_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.removeMap
struct AplayerCharacterBP_C_removeMap_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.OnLanded
struct AplayerCharacterBP_C_OnLanded_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.openMap
struct AplayerCharacterBP_C_openMap_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.enterAppartmentMode
struct AplayerCharacterBP_C_enterAppartmentMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.endAppartmentMode
struct AplayerCharacterBP_C_endAppartmentMode_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.tryPutAppartmentObject
struct AplayerCharacterBP_C_tryPutAppartmentObject_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.tryMoveObject
struct AplayerCharacterBP_C_tryMoveObject_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.tryStoreObject
struct AplayerCharacterBP_C_tryStoreObject_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.updateMusicParamState
struct AplayerCharacterBP_C_updateMusicParamState_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerCharacterBP.playerCharacterBP_C.musicTick
struct AplayerCharacterBP_C_musicTick_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.closeEqShop
struct AplayerCharacterBP_C_closeEqShop_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.quitComputer
struct AplayerCharacterBP_C_quitComputer_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.backpackDropTimer
struct AplayerCharacterBP_C_backpackDropTimer_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.tryPlayWaterFootstep
struct AplayerCharacterBP_C_tryPlayWaterFootstep_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.staminaRested
struct AplayerCharacterBP_C_staminaRested_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ActionPressed
struct AplayerCharacterBP_C_ActionPressed_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ActionReleased
struct AplayerCharacterBP_C_ActionReleased_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.enableEndChase
struct AplayerCharacterBP_C_enableEndChase_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.enableStartChase
struct AplayerCharacterBP_C_enableStartChase_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.caughtPoliceHours
struct AplayerCharacterBP_C_caughtPoliceHours_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.drugConfShake
struct AplayerCharacterBP_C_drugConfShake_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.passOut
struct AplayerCharacterBP_C_passOut_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.unlockPassOut
struct AplayerCharacterBP_C_unlockPassOut_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.showDebugPanel
struct AplayerCharacterBP_C_showDebugPanel_Params
{
};

// Function playerCharacterBP.playerCharacterBP_C.ExecuteUbergraph_playerCharacterBP
struct AplayerCharacterBP_C_ExecuteUbergraph_playerCharacterBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
