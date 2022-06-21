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
	 * BlueprintGeneratedClass playerCharacterBP.playerCharacterBP_C
	 * Size -> 0x0EA8 (FullSize[0x15E8] - InheritedSize[0x0740])
	 */
	class AplayerCharacterBP_C : public ACharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInventoryComponent_C*                               InventoryComponent;                                      // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    PlayerOnlyOV;                                            // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     jumpCue;                                                 // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               halucinogenicPostProcess;                                // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               speedPostProcess;                                        // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    Camera;                                                  // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       headBobbing;                                             // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     BackpackThrow;                                           // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     footstepCue;                                             // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   Capsule;                                                 // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               confusionPostProcess;                                    // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              fpsArms;                                                 // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UArrowComponent*                                     throwpoint;                                              // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     tiredBreath;                                             // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     tempChaseMusic;                                          // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      headBobbTimeline_headRot_0B3856664923141D33A5748806EFB4A2; // 0x07D0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      headBobbTimeline_headHorizontal_0B3856664923141D33A5748806EFB4A2; // 0x07D4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      headBobbTimeline_headVertical_0B3856664923141D33A5748806EFB4A2; // 0x07D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         headBobbTimeline__Direction_0B3856664923141D33A5748806EFB4A2; // 0x07DC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KVZX[0x3];                                   // 0x07DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  headBobbTimeline;                                        // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_camPosition_8AF157FC468A6C10DB76DB9E5A5C3C8E; // 0x07E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_1_tasedCamAngle_8AF157FC468A6C10DB76DB9E5A5C3C8E; // 0x07EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_8AF157FC468A6C10DB76DB9E5A5C3C8E;  // 0x07F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DMZB[0x7];                                   // 0x07F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_NewTrack_0_7E1CEE2A42645FECC9C5EB9DFDAB29AE;  // 0x0800(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_7E1CEE2A42645FECC9C5EB9DFDAB29AE;  // 0x0804(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WQ4U[0x3];                                   // 0x0805(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      taserCamera_camPosition_1E3703BE4EA579145BB8AFAC90459750; // 0x0810(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      taserCamera_tasedCamAngle_1E3703BE4EA579145BB8AFAC90459750; // 0x0814(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         taserCamera__Direction_1E3703BE4EA579145BB8AFAC90459750; // 0x0818(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RCSU[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  taserCamera;                                             // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      camFovDialogue_NewTrack_0_0700855641B2F73B563760B1CCB2AEDF; // 0x0828(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         camFovDialogue__Direction_0700855641B2F73B563760B1CCB2AEDF; // 0x082C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3B5D[0x3];                                   // 0x082D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  camFovDialogue;                                          // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CrouchAnim_capsuleHeight_AAFA20F046516DB596355B8B50B2A4C4; // 0x0838(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         CrouchAnim__Direction_AAFA20F046516DB596355B8B50B2A4C4;  // 0x083C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YORE[0x3];                                   // 0x083D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  CrouchAnim;                                              // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      backpackMoveMultiplier;                                  // 0x0848(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      movementSpeedMultiplier;                                 // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      moveSpeedSpecialMultiplier;                              // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mouseSpeed;                                              // 0x0854(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCrouching;                                             // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sneakMode;                                               // 0x0859(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_INZ6[0x6];                                   // 0x085A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UplayerHUD_C*                                        HUD;                                                     // 0x0860(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AinteractiveBaseObject_C*                            hoveredObject;                                           // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AinteractiveBaseObject_C*                            hoveredObjectMem;                                        // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AinteractiveObstacle_C*                              hoveredObstacle;                                         // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaMax;                                              // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaLevel;                                            // 0x0884(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaLow;                                              // 0x0888(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      obstacleStaminaDrain;                                    // 0x088C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaDrainPS;                                          // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaRegainPS;                                         // 0x0894(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      leanRoll;                                                // 0x0898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      leanRollMax;                                             // 0x089C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      leanVertical;                                            // 0x08A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      camLeanMax;                                              // 0x08A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LeanSideways;                                            // 0x08A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaRegainMultiplier;                                 // 0x08AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inventoryFirstTap;                                       // 0x08B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       phoneUp;                                                 // 0x08B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       inventoryOpen;                                           // 0x08B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0LAM[0x5];                                   // 0x08B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UinventoryScreen_C*                                  InventoryWidget;                                         // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       disableWorldInteraction;                                 // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LVBH[0x7];                                   // 0x08C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UpauseMenu_C*                                        pauseMenu;                                               // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AdayTimeControler_C*                                 dayTimeControler;                                        // 0x08D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UsleepWaitWidget_C*                                  sleepWaitWidget;                                         // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AsleepingBedBase_C*                                  curBed;                                                  // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       waiting;                                                 // 0x08E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LFVC[0x7];                                   // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FinventoryItemStruct>                        pocketItems;                                             // 0x08F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<bool>                                               pocketItemVendor;                                        // 0x0900(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            pocketItemQuantity;                                      // 0x0910(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            pocketItemVendorPrice;                                   // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      pocketMaxSize;                                           // 0x0930(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      pocketMaxWeight;                                         // 0x0934(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    pocketCount;                                             // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasBackpack;                                             // 0x093C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CE2S[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FinventoryItemStruct                                backpack;                                                // 0x0940(0x0108) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		TArray<struct FinventoryItemStruct>                        backpackItems;                                           // 0x0A48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            backpackItemQuantity;                                    // 0x0A58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<bool>                                               backpackItemVendor;                                      // 0x0A68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            backpackItemVendorPrice;                                 // 0x0A78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TMap<class AitemInventoryHolder_C*, int32_t>               backpackItemContents;                                    // 0x0A88(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      curBackpackSize;                                         // 0x0AD8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      curBackpackWeight;                                       // 0x0ADC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      backpackMaxSize;                                         // 0x0AE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      backpackMaxWeight;                                       // 0x0AE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AcontainerBase_C*                                    curContainer;                                            // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AcontactsManager_C*                                  contactsManager;                                         // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AtelephoneBP_C*                                      phoneRef;                                                // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AquestManager_C*                                     questManagerRef;                                         // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       callIncoming;                                            // 0x0B08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_66H9[0x7];                                   // 0x0B09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            inventoryKeys;                                           // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    curHighlightedOption;                                    // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       actionOptionsOpen;                                       // 0x0B24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F6KG[0x3];                                   // 0x0B25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      ActionList;                                              // 0x0B28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       isLockpicking;                                           // 0x0B38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B265[0x7];                                   // 0x0B39(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UlockpickWidget_C*                                   lockpickWidget;                                          // 0x0B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      doorBreachDamage;                                        // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       saveScreenOpen;                                          // 0x0B4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1VYQ[0x3];                                   // 0x0B4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UsaveLoadWidget_C*                                   saveLoadWidget;                                          // 0x0B50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       computerOpen;                                            // 0x0B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AHPZ[0x3];                                   // 0x0B59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      lineCheckDistance;                                       // 0x0B5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      suspicionMultiplier;                                     // 0x0B60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      baseMaxWalkSpeed;                                        // 0x0B64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      visibilityMultiplier;                                    // 0x0B68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      lightVisMultiplier;                                      // 0x0B6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasIllegalItems;                                         // 0x0B70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WAVS[0x7];                                   // 0x0B71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      lightsAffecting;                                         // 0x0B78(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<float>                                              lightAffectMultipliers;                                  // 0x0B88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      hideAreaMultiplier;                                      // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inWaitArea;                                              // 0x0B9C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7OAH[0x3];                                   // 0x0B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AdialogueInstance_C*                                 curDialogueInstance;                                     // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inDialogue;                                              // 0x0BA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55HL[0x7];                                   // 0x0BA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UdialogueWidget_C*                                   dialogueWidget;                                          // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AbaseNPC_C*                                          curFocusNPC;                                             // 0x0BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            focusLookRotation;                                       // 0x0BC0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       focusCamera;                                             // 0x0BCC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SURD[0x3];                                   // 0x0BCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AbaseNPC_C*                                          curSeller;                                               // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isTrading;                                               // 0x0BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       camLeanClampRight;                                       // 0x0BD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       camLeanClampLeft;                                        // 0x0BDA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OZG9[0x5];                                   // 0x0BDB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FinventoryItemStruct                                moneyBaseData;                                           // 0x0BE0(0x0108) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       handlingATM;                                             // 0x0CE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       waitingForWithdraw;                                      // 0x0CE9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5NKI[0x6];                                   // 0x0CEA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AatmMachine_C*                                       curATM;                                                  // 0x0CF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    newMessages;                                             // 0x0CF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    newCalls;                                                // 0x0CFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    newNotifications;                                        // 0x0D00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasDrugs;                                                // 0x0D04(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XXRN[0x3];                                   // 0x0D05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      runVelocityValue;                                        // 0x0D08(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    chasingPolicemen;                                        // 0x0D0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFugitive;                                              // 0x0D10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NMJS[0x3];                                   // 0x0D11(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      fugitiveTimeout;                                         // 0x0D14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      fugitiveCounter;                                         // 0x0D18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isControled;                                             // 0x0D1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       beenCaught;                                              // 0x0D1D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LTYV[0x2];                                   // 0x0D1E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UloadingScreen_C*                                    caughtLoadingScreen;                                     // 0x0D20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isSearched;                                              // 0x0D28(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       jumpingObstacle;                                         // 0x0D29(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       logedInBank;                                             // 0x0D2A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       blockingCar;                                             // 0x0D2B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2ECC[0x4];                                   // 0x0D2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FinventoryItemStruct>                        illegalFoundPockets;                                     // 0x0D30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FinventoryItemStruct>                        illegalFoundBackpack;                                    // 0x0D40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class USoundCue*                                           chaseMusicCue;                                           // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      closestPatrolDistance;                                   // 0x0D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      patrolDistanceTemp;                                      // 0x0D5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      patrolDistanceStartStress;                               // 0x0D60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isChased;                                                // 0x0D64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MMVW[0x3];                                   // 0x0D65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AstreetTeleport_C*                                   streetTeleport;                                          // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class APolicemanBaseClass_C*>                       chasingPolicemenRef;                                     // 0x0D70(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       atWorkStation;                                           // 0x0D80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DV03[0x7];                                   // 0x0D81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AdrugWorkStation_C*                                  curWorkStation;                                          // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ArentAppartmentArea_C*                               curAppartment;                                           // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                keyOverride;                                             // 0x0D98(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AinteractiveBaseObject_C*                            dragObject;                                              // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       popupUp;                                                 // 0x0DB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MapOpen;                                                 // 0x0DB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J43E[0x6];                                   // 0x0DBA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UworldMapWidget_C*                                   mapWidget;                                               // 0x0DC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       nightTimeAlertOn;                                        // 0x0DC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N3HQ[0x3];                                   // 0x0DC9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    allEarnedMoney;                                          // 0x0DCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inAppartmentMode;                                        // 0x0DD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3HFF[0x3];                                   // 0x0DD1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             memHitLocation;                                          // 0x0DD4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhysicalMaterial*                                   hitPhysMat;                                              // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      leanAxisVal;                                             // 0x0DE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      baseLineCheckDistance;                                   // 0x0DEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      appartmentModeLineCheckDistance;                         // 0x0DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4CZC[0x4];                                   // 0x0DF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AinteractiveBaseObject_C*                            curAppartmentObjectGizmo;                                // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UappartmentModeWidget_C*                             appModeWidget;                                           // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             memHitNormal;                                            // 0x0E08(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MBO1[0x4];                                   // 0x0E14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AinteractiveBaseObject_C*                            appModeHovered;                                          // 0x0E18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UpoliceHoursCounterWidget_C*                         policeHoursCounter;                                      // 0x0E20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      musicStressLowClamp;                                     // 0x0E28(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      musicStressLowClampMinimum;                              // 0x0E2C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      musicStressLowClampInitial;                              // 0x0E30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      fadeParameter;                                           // 0x0E34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       musicChased;                                             // 0x0E38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DD97[0x3];                                   // 0x0E39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      stressFade;                                              // 0x0E3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       workStationAvailable;                                    // 0x0E40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       appartmentModeAvailable;                                 // 0x0E41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sleepingWaitingAvailable;                                // 0x0E42(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X6JL[0x5];                                   // 0x0E43(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundCue*>                                   chaseMusicVersions;                                      // 0x0E48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class USoundWave*>                                  chaseMusicIntro;                                         // 0x0E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              chaseMusicTempo;                                         // 0x0E68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    chosenSongID;                                            // 0x0E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H26B[0x4];                                   // 0x0E7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            chaseMusicIntroLength;                                   // 0x0E80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      musicMinChaseLength;                                     // 0x0E90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      musicMinChaseTimer;                                      // 0x0E94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inventoryFirstOpening;                                   // 0x0E98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MX7N[0x7];                                   // 0x0E99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAdaptiveMusic_BP_C*                                 chaseMusicManager;                                       // 0x0EA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       equipmentShopOpen;                                       // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bankIntroduced;                                          // 0x0EA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       sleepDialogue;                                           // 0x0EAA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_16HD[0x5];                                   // 0x0EAB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                defPostProcess;                                          // 0x0EB0(0x04E0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      mouseAxisPitch;                                          // 0x1390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mouseAxisYaw;                                            // 0x1394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       inWater;                                                 // 0x1398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       staminaTired;                                            // 0x1399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       handsOccupied;                                           // 0x139A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9431[0x5];                                   // 0x139B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AbackpackBase_C*                                     handsBackpackRef;                                        // 0x13A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                handsOccupiedMessage;                                    // 0x13A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class AsprayPlacementGizmo_C*                              sprayGizmo;                                              // 0x13C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       backpackFromVendor;                                      // 0x13C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GQYT[0x3];                                   // 0x13C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    backpackSlotVendorPrice;                                 // 0x13CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasSprayPaint;                                           // 0x13D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       disableWalking;                                          // 0x13D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YRL8[0x2];                                   // 0x13D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    basePocketCount;                                         // 0x13D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillStaminaMultiplier;                                  // 0x13D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillRunSpeedMultiplier;                                 // 0x13DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    skillLockpickLevel;                                      // 0x13E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillStealthMultiplier;                                  // 0x13E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillIllusionistChance;                                  // 0x13E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillSalesPriceMultiplier;                               // 0x13EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      skillSalesOrderSpeedMultiplier;                          // 0x13F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      staminaMaxBase;                                          // 0x13F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OEVM[0x8];                                   // 0x13F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoreUObject_FTransform                             teleportLocation;                                        // 0x1400(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       drainingStamina;                                         // 0x1430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       draggedObject;                                           // 0x1431(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SUHY[0x2];                                   // 0x1432(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      lastPoliceCheckCountdown;                                // 0x1434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       sprayingAvailable;                                       // 0x1438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XHT7[0x7];                                   // 0x1439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      quickUseSlots;                                           // 0x1440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            quickUseIndex;                                           // 0x1450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FGuid>                                       quickUseGuids;                                           // 0x1460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FinventoryItemStruct>                        quickUseData;                                            // 0x1470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class UpoliceControlingWidget_C*                           controlAlarmWidget;                                      // 0x1480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       initialised;                                             // 0x1488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       disableDemoFunctions;                                    // 0x1489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZDJA[0x6];                                   // 0x148A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FdrugData>                                   drugsUsedData;                                           // 0x1490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              drugsUsedTimeout;                                        // 0x14A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugsUsedQuantity;                                       // 0x14B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      drugsUsedAvSpeedMultiplier;                              // 0x14C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugsUsedAvStaminaMultiplier;                            // 0x14C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugsUsedAvTimeMultiplier;                               // 0x14C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugsUsedAvFovMultiplier;                                // 0x14CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugsUsedAvConfMultiplier;                               // 0x14D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       blockPause;                                              // 0x14D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HXVA[0x3];                                   // 0x14D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      duaSpeedTarget;                                          // 0x14D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      duaStaminaTarget;                                        // 0x14DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      duaTimeTarget;                                           // 0x14E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      duaFovTarget;                                            // 0x14E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      duaConfTarget;                                           // 0x14E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BaseFOV;                                                 // 0x14EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UpassOutScreen_C*                                    passOutScreen;                                           // 0x14F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugUseTimeout;                                          // 0x14F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ballenaProtection;                                       // 0x14FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_71U0[0x3];                                   // 0x14FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AinteractiveBaseObject_C*                            curComputerRef;                                          // 0x1500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      mouseSensitivity;                                        // 0x1508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InvertMouse;                                             // 0x150C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XCZQ[0x3];                                   // 0x150D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultFOV;                                              // 0x1510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_68FR[0x4];                                   // 0x1514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mgValid;                                                 // 0x1518(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       hasOutdoorSeeds;                                         // 0x1528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hasIndoorSeeds;                                          // 0x1529(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MDY7[0x6];                                   // 0x152A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AweedPlantBP_C*                                      weedGizmo;                                               // 0x1530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UweedSeedSelectWidget_C*                             weedSeedWidget;                                          // 0x1538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canJumpObstacles;                                        // 0x1540(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1GBC[0x3];                                   // 0x1541(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      camBobbMultiplier;                                       // 0x1544(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      bobbZ;                                                   // 0x1548(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      bobbY;                                                   // 0x154C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      bobbRoll;                                                // 0x1550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       flashlightBlocker;                                       // 0x1554(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       tabHeld;                                                 // 0x1555(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8456[0x2];                                   // 0x1556(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, int32_t>                               drugStringMap;                                           // 0x1558(0x0050) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       blockRefreshQuickUse;                                    // 0x15A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       blockQuickUse;                                           // 0x15A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G4G6[0x2];                                   // 0x15AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      drugsUsedBoostMultiplier;                                // 0x15AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      drugsUsedHalucinationMultiplier;                         // 0x15B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UpgradePriceTemp;                                        // 0x15B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      camFocusFovMultiplier;                                   // 0x15B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       underground;                                             // 0x15BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LastWallPassageType;                                     // 0x15BD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6R4P[0x2];                                   // 0x15BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurVilla[0x8];                                           // 0x15BE(0x0008) UNKNOWN PROPERTY: ObjectProperty playerCharacterBP.playerCharacterBP_C.CurVilla
		bool                                                       SprintHeldDown;                                          // 0x15C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OQQW[0x3];                                   // 0x15C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FallDamageHealth;                                        // 0x15CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FallDmgRegenSpeed;                                       // 0x15D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDQ9[0x4];                                   // 0x15D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             FullLoadInitiated;                                       // 0x15D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void CheckFallDamage();
		void FallDamageRegen(float Delta);
		void ExpandRama();
		void ReconstructOldInventory();
		void CheckInfluenceSphere();
		void convertUsedDrugData(const struct FinventoryItemStruct& InvData, struct FinventoryItemStruct* OutData, bool* Empty);
		void drugStringToIndex(const class FString& inString, int32_t* Index, bool* Valid);
		void CastFailed();
		void CheckHoverobjectClass(int32_t InnerClass, int32_t DeepClass, bool* Match);
		void restoreGuardLocation();
		void checkBobbyPins(bool RemoveOne, bool* HasBobbyPins, int32_t* bobbyPinCount);
		void convertBackpackData(const struct FinventoryItemStruct& BackpackIn, struct FinventoryItemStruct* BackpackOut);
		void checkSeedsInventory();
		void updateWeedPlacement();
		class FText geyKeyNam(float Scale, const class FName& InActionName);
		void updateBackpackQuan();
		void adaptControls();
		void adaptDifficulty();
		void confiscateMoney();
		struct FCoreUObject_FTransform getPoliceStationTeleportLocation();
		void usedDrugUpdateEffects();
		void usedDrugCountdown(float Delta);
		void useDrugDose(const struct FdrugData& drugData, const class FText& NameOverride);
		void quickUseItem(int32_t SlotIndex);
		void staminaDrainCooldown();
		void updateBackpackMovementChange();
		void updateSkillAbilities();
		void refreshBackpackData();
		void returnItemSizing(const struct FinventoryItemStruct& Data, float* Size, float* Weight);
		void updateSprayGizmo();
		void staminaBreatheFade(float Delta);
		void playFootStepSound();
		void chooseRandomSongID(int32_t* ChosenID);
		void resetCamLimits();
		void getArmsAnimBP(class UfpsArmsAnimBP_C** AnimBP);
		void calcChasersDistances();
		void endFugitive();
		void markAsFugitive();
		void fugitiveCountdown(float Delta);
		void updateNotifyIcons();
		void checkInventorySizing(const struct FinventoryItemStruct& Data, int32_t Quantity, bool* canFit);
		void checkAllPocketsSizing(const struct FinventoryItemStruct& Data, int32_t Quantity, bool* AllFits, int32_t* Rest);
		void compareInventoryData(const struct FinventoryItemStruct& Compare01, const struct FinventoryItemStruct& Compare02, bool* TheSame);
		void addCryptocurrency(int32_t Amount);
		void countAllMoney(int32_t* allMoneyCount);
		void chargeMoney(int32_t Amount, bool NoPopup);
		void addMoney(int32_t Amount, bool SkipCounting, bool* Success);
		void cameraFocus(float Delta);
		void checkForIllegals();
		void calcVisibilityMultiplier();
		void calcSuspicionMultiplier();
		void calcMouseYawAction(class APlayerController* PC, float AxisValue, bool Interaction);
		void calcMousePitchAction(class APlayerController* PC, float AxisValue, bool Interaction);
		void displayActionOptions(TArray<class FText>* NameList, TArray<class FString>* ActionList);
		void displayPopup(const class FText& Title, const class FText& Description, const class FText& ButtonText, bool ShowMouse);
		void checkItemContents(const class FString& Source, int32_t Index);
		void clearBackpack();
		void setCurrentBackpack(class AbackpackBase_C* backpack, class AitemInventoryHolder_C* itemHolder, const struct FinventoryItemStruct& backpackData, const class FName& BackpackItemID, bool FromVendor);
		void phoneCallFunction(const class FString& functionToCall);
		void phoneNewNote(bool Done, const class FText& noteText);
		void phoneNewCall(int32_t callerID, class USoundWave* callAudio, const class FString& functionOnAnswer, const class FString& functionOnDecline, const class FString& functionOnEnd, const class FText& CallText);
		void phoneNewMessage(int32_t From, const class FText& Message, int32_t vcardID);
		void checkContainerSizing(const struct FinventoryItemStruct& Data, int32_t Quantity, bool* canFit, int32_t* maxQuantity);
		void tryAddToPockets(const struct FinventoryItemStruct& Data, int32_t Quantity, bool* AllAdded, int32_t* Rest);
		void addBackpackContent(const struct FinventoryItemStruct& Data, int32_t Quantity, bool FromVendor, int32_t ItemPrice);
		void checkBackpackSizing(const struct FinventoryItemStruct& itemData, int32_t Quantity, bool* canFit, int32_t* maxQuantity);
		void checkPocketSizing(const struct FinventoryItemStruct& itemData, int32_t Quantity, int32_t Index, bool* canFit, int32_t* maxQuantity);
		void setPocketContent(const struct FinventoryItemStruct& itemData, int32_t PocketIndex, int32_t Quantity, bool FromVendor, int32_t vendorPrice);
		void removeFromPocket(int32_t Index, int32_t Quantity);
		void removeDraggedItem(const class FString& parentTag, int32_t Index, int32_t Quantity, const struct FinventoryItemStruct& Data);
		void removeFromBackpack(int32_t Index, int32_t Quantity);
		void tryAddToInventory(const struct FinventoryItemStruct& Item, int32_t Quantity, bool* Success, class FText* FailReason);
		void capAxisValue(float ForwardAxis, float SideAxis, float* ForwardCaped, float* SideCaped);
		void closeAllForPause();
		void standUpCheck(bool* canStandUp);
		void cameraLeanUpdate(float DeltaTime);
		void staminaBreath();
		void regainStamina(float DeltaTime);
		void drainStamina(float DeltaTime, bool Burst, float BurstValue);
		void setDefaults();
		void UserConstructionScript();
		void CrouchAnim__FinishedFunc();
		void CrouchAnim__UpdateFunc();
		void camFovDialogue__FinishedFunc();
		void camFovDialogue__UpdateFunc();
		void taserCamera__FinishedFunc();
		void taserCamera__UpdateFunc();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void headBobbTimeline__FinishedFunc();
		void headBobbTimeline__UpdateFunc();
		void headBobbTimeline__footStep__EventFunc();
		void InpActEvt_SprintToggle_K2Node_InputActionEvent_32(const struct FKey& Key);
		void InpActEvt_SprintToggle_K2Node_InputActionEvent_31(const struct FKey& Key);
		void InpActEvt_CrouchToggle_K2Node_InputActionEvent_30(const struct FKey& Key);
		void InpActEvt_JumpObstacle_K2Node_InputActionEvent_29(const struct FKey& Key);
		void InpActEvt_InventoryToggle_K2Node_InputActionEvent_28(const struct FKey& Key);
		void InpActEvt_InventoryToggle_K2Node_InputActionEvent_27(const struct FKey& Key);
		void InpActEvt_Escape_K2Node_InputKeyEvent_7(const struct FKey& Key);
		void InpActEvt_F10_K2Node_InputKeyEvent_6(const struct FKey& Key);
		void InpActEvt_Wait_K2Node_InputActionEvent_26(const struct FKey& Key);
		void InpActEvt_phoneNext_K2Node_InputActionEvent_25(const struct FKey& Key);
		void InpActEvt_phonePrevious_K2Node_InputActionEvent_24(const struct FKey& Key);
		void InpActEvt_phoneEnter_K2Node_InputActionEvent_23(const struct FKey& Key);
		void InpActEvt_phoneBack_K2Node_InputActionEvent_22(const struct FKey& Key);
		void InpActEvt_H_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_ScrollUp_K2Node_InputActionEvent_21(const struct FKey& Key);
		void InpActEvt_ScrollDown_K2Node_InputActionEvent_20(const struct FKey& Key);
		void InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_19(const struct FKey& Key);
		void InpActEvt_WorkStation_EqMode_K2Node_InputActionEvent_18(const struct FKey& Key);
		void InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_17(const struct FKey& Key);
		void InpActEvt_WorkStation_DPMode_K2Node_InputActionEvent_16(const struct FKey& Key);
		void InpActEvt_LeftClickPlace_K2Node_InputActionEvent_15(const struct FKey& Key);
		void InpActEvt_LeftClickPlace_K2Node_InputActionEvent_14(const struct FKey& Key);
		void InpActEvt_EquipmentOptions_K2Node_InputActionEvent_13(const struct FKey& Key);
		void InpActEvt_AppartmentMode_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_AppartmentMode_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_InfoToggle_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_Y_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_DropBackpack_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_DropBackpack_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Action_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Action_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_QuickUse01_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_QuickUse02_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_QuickUse03_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_QuickUse04_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_L_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_L_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_MapToggle_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_N_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue);
		void InpAxisEvt_MoveSideways_K2Node_InputAxisEvent_2(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue);
		void InpAxisEvt_LookSideways_K2Node_InputAxisEvent_4(float AxisValue);
		void breakCrouch();
		void footStep();
		void ReceivePossessed(class AController* NewController);
		void lineTraceCheck();
		void breakSprint();
		void playerStateUpdates();
		void startSleepDialogue();
		void InpAxisEvt_LeanSideways_K2Node_InputAxisEvent_5(float AxisValue);
		void showPhone();
		void hidePhone();
		void openInventory();
		void closeInventory();
		void resumeGame();
		void initializePlayer();
		void startSleepMode(bool Sleep);
		void endSleepMode();
		void goSleep(float Hours, float Minutes);
		void hideCallWidget();
		void selectActionOption();
		void startLockpickMode(class AdoorBase_C* LockpickedDoor);
		void closeLockpickMode();
		void ReceiveUnpossessed(class AController* OldController);
		void startDialogue(class AdialogueInstance_C* dialogueInstance);
		void endDialogue();
		void openTrade();
		void closeTrade();
		void lookAtCheck();
		void StartChaseMusic();
		void endChaseMusic();
		void tasedDown();
		void enableTasingDown();
		void caughtInSearch(bool onlyPoliceHours);
		void confiscateIllegalItems();
		void workStationMode();
		void endWorkStationMode();
		void resetClearHover();
		void clearOptionPanel();
		void actionRelease();
		void removeMap();
		void OnLanded(const struct FHitResult& Hit);
		void openMap();
		void enterAppartmentMode();
		void endAppartmentMode();
		void tryPutAppartmentObject();
		void tryMoveObject();
		void tryStoreObject();
		void updateMusicParamState(float Delta);
		void musicTick();
		void closeEqShop();
		void quitComputer();
		void backpackDropTimer();
		void tryPlayWaterFootstep();
		void staminaRested();
		void ActionPressed();
		void ActionReleased();
		void enableEndChase();
		void enableStartChase();
		void caughtPoliceHours();
		void drugConfShake();
		void passOut();
		void unlockPassOut();
		void showDebugPanel();
		void RefreshUndegroundStatus();
		void RefreshOverlapps();
		void ResetLand();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_1_InventoryStateChanged__DelegateSignature();
		void ContinueSprint();
		void BndEvt__InventoryComponent_K2Node_ComponentBoundEvent_2_BackpackChanged__DelegateSignature(bool FromVendor);
		void TestUseWater(int32_t Amount);
		void ExecuteUbergraph_playerCharacterBP(int32_t EntryPoint);
		void FullLoadInitiated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
