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
	 * BlueprintGeneratedClass interactiveBaseObject.interactiveBaseObject_C
	 * Size -> 0x0100 (FullSize[0x0428] - InheritedSize[0x0328])
	 */
	class AinteractiveBaseObject_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Model;                                                   // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                objName;                                                 // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                objActionName;                                           // 0x0358(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       workStationAttached;                                     // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       isGizmo;                                                 // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canPlaceFloor;                                           // 0x0372(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canPlaceWall;                                            // 0x0373(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       canPlaceCeiling;                                         // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CanPlaceTabletop;                                        // 0x0375(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G1N9[0x2];                                   // 0x0376(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TabletopBaseSizing;                                      // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      addRotation;                                             // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      rotSpeedMultiplier;                                      // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canPlace;                                                // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       subclassPlaceRestriction;                                // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DNV0[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      allOverlapingActors;                                     // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       alignToWall;                                             // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       immovable;                                               // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3OB3[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FappartmentEquipment                                appEquipmentData;                                        // 0x03A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       needsHandsFreeToActivate;                                // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_44Q8[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InnerSubclassIndex;                                      // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DeepSubclassIndex;                                       // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AUZG[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FappartmentEquipment>                        trashfurniture;                                          // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FName                                                ItemID;                                                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                EquipmentID;                                             // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void VerifyBaseSizing(bool* ok);
		void GetEquipmentMeta(bool* Success, struct FappartmentEquipment* EquipmentMeta);
		void GetItemMeta(bool* Success, struct FNewItemStructure* ItemMeta);
		void CheckForInnerClasses(int32_t innerIndex, int32_t DeepIndex, bool* Match);
		void reconstructEquipmentData();
		void removeFromWorkStation();
		void objectCanStoreApartment(bool* CanStore, class FText* Reason);
		void verifyCorrectNaming();
		void GetActionNames(const class FText& OverrideKey, class FText* keyOverride, class FText* Object_Name, class FText* Action_Name);
		void beenActivated();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void adaptPlaceMaterial();
		void SetAsGizmo();
		void ExecuteUbergraph_interactiveBaseObject(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
