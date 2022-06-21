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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass mainMenuWidget.mainMenuWidget_C
	 * Size -> 0x0188 (FullSize[0x0390] - InheritedSize[0x0208])
	 */
	class UmainMenuWidget_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0208(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    difficultyEnter;                                         // 0x0210(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnCreditsHover;                                         // 0x0218(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnLoadHover;                                            // 0x0220(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    creditsGlitch2;                                          // 0x0228(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    creditsGlitch;                                           // 0x0230(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    inCredits;                                               // 0x0238(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnExitHover;                                            // 0x0240(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnSettingsHover;                                        // 0x0248(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnContinueHover;                                        // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    entryAnim;                                               // 0x0258(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetAnimation*                                    btnGrajHover;                                            // 0x0260(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Black;                                                   // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnCasual;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnCloseDiff;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnContinue;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnCredits;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnExitGame;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnGame;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnHard;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnHardcore;                                             // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnLoadGame;                                             // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnNormal;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnOpenCredits;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             btnOptions;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              buttonUnderline;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              creditsBg;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          creditsScroll;                                           // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        difficultyPanel;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              inactiveButtonCover;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              logo;                                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              logoIntro01;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              logoIntro02;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              pasekBottom;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              pasekTop;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txt_description;                                         // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txtBtnCredits;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txtDemo;                                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txtDiffDesc;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          txtEngineInfo;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AmainMenuPawn_C*                                     parentPawn;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UsettingsWidget_C*                                   settingsWidget;                                          // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AmainMenuPawn_C*                                     menuPawn;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       playOverride;                                            // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UFXY[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UloadingScreen_C*                                    loadingScreen;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    continueSlotID;                                          // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       officialVersion;                                         // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XXSG[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      creditScrollOffset;                                      // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      creditScrollTempo;                                       // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       rollCredits;                                             // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E5MI[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UsaveGameSlot_C*                                     saveObject;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BndEvt__btnGame_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnTester_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnTester_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnSettings_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnGame_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void BndEvt__btnExit_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnSettings_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
		void overridePlay();
		void BndEvt__btnVersion_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnVersion_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_1_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnContinue_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnExitGame_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnOptions_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnOptions_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnContinue_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnContinue_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnExitGame_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnExitGame_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void startNewGame(EdifficultyLevels ChosenDifficulty);
		void BndEvt__btnCasual_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_3_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_4_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_5_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnCasual_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnNormal_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnHard_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnHardcore_K2Node_ComponentBoundEvent_29_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnCasual_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnNormal_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnHard_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnHardcore_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_6_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnCredits_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
		void resetCredits();
		void glitchSubs();
		void retryPlayerInitiate();
		void BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnLoadGame_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnOpenCredits_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__btnOpenCredits_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__btnOpenCredits_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature();
		void ExecuteUbergraph_mainMenuWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
