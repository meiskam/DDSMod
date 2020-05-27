#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function settingsWidget.settingsWidget_C.getKeyNam
struct UsettingsWidget_C_getKeyNam_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function settingsWidget.settingsWidget_C.OnKeyDown
struct UsettingsWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function settingsWidget.settingsWidget_C.setDiffButtons
struct UsettingsWidget_C_setDiffButtons_Params
{
};

// Function settingsWidget.settingsWidget_C.SaveSettings
struct UsettingsWidget_C_SaveSettings_Params
{
};

// Function settingsWidget.settingsWidget_C.Construct
struct UsettingsWidget_C_Construct_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnGraphics_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnGraphics_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnAudio_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnAudio_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnGame_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnSaveSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnSaveSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderMusicVol_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderMusicVol_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderEffectVol_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderEffectVol_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderEffectVol_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderEffectVol_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderDialVol_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderDialVol_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboResolution_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboResolution_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboShadows_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboShadows_K2Node_ComponentBoundEvent_10_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboDetails_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboDetails_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboTextures_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboTextures_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboEffects_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboEffects_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboAAMethod_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboAAMethod_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboAAQuality_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboAAQuality_K2Node_ComponentBoundEvent_15_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboPostProcess_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboPostProcess_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboMotionBlur_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboMotionBlur_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboVsync_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboVsync_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderDialVol_K2Node_ComponentBoundEvent_19_OnMouseCaptureEndEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderDialVol_K2Node_ComponentBoundEvent_19_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.reopenDialChange
struct UsettingsWidget_C_reopenDialChange_Params
{
};

// Function settingsWidget.settingsWidget_C.closeDialGate
struct UsettingsWidget_C_closeDialGate_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__chckSubtitles_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature
struct UsettingsWidget_C_BndEvt__chckSubtitles_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__gameComboLanguage_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__gameComboLanguage_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnDiffCasual_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnDiffCasual_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnDiffNormal_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnDiffNormal_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnDiffHard_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnDiffHard_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnControls_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnControls_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__graphComboDisplayMode_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__graphComboDisplayMode_K2Node_ComponentBoundEvent_26_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderSensitivity_K2Node_ComponentBoundEvent_28_OnMouseCaptureEndEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderSensitivity_K2Node_ComponentBoundEvent_28_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__checkInvertMouse_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature
struct UsettingsWidget_C_BndEvt__checkInvertMouse_K2Node_ComponentBoundEvent_29_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__sliderFov_K2Node_ComponentBoundEvent_30_OnFloatValueChangedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__sliderFov_K2Node_ComponentBoundEvent_30_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.updateFovText
struct UsettingsWidget_C_updateFovText_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__chckNightMusic_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
struct UsettingsWidget_C_BndEvt__chckNightMusic_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputAction_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputAction_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputForward_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputForward_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.setNewKey
struct UsettingsWidget_C_setNewKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputMoveBack_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputMoveBack_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputMoveLeft_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputMoveLeft_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputMoverRight_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputMoverRight_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputCrouch_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputCrouch_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputJump_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputJump_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputSprint_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputSprint_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputLeanLeft_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputLeanLeft_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputLeanRight_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputLeanRight_K2Node_ComponentBoundEvent_43_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.setKeyList
struct UsettingsWidget_C_setKeyList_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputMap_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputMap_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.BndEvt__btnInputWait_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
struct UsettingsWidget_C_BndEvt__btnInputWait_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function settingsWidget.settingsWidget_C.ExecuteUbergraph_settingsWidget
struct UsettingsWidget_C_ExecuteUbergraph_settingsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
