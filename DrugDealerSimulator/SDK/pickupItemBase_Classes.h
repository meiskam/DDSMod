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
	 * BlueprintGeneratedClass pickupItemBase.pickupItemBase_C
	 * Size -> 0x0180 (FullSize[0x05A8] - InheritedSize[0x0428])
	 */
	class ApickupItemBase_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave_1;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          pickupSound;                                             // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FinventoryItemStruct                                Data;                                                    // 0x0440(0x0108) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		int32_t                                                    Quantity;                                                // 0x0548(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       dropedByPlayer;                                          // 0x054C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DespawnOutRadius;                                        // 0x054D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ToggleDistancePhysics;                                   // 0x054E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1XSG[0x1];                                   // 0x054F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AplayerCharacterBP_C*                                PlayerRef;                                               // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountOverride;                                          // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MemAmount;                                               // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    memQuantity;                                             // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5I06[0x4];                                   // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMixProportionsStruct                               MemMixProportions;                                       // 0x0568(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void RamaExtend();
		void UserConstructionScript();
		void setupItem(const struct FinventoryItemStruct& Data, int32_t Quantity, const class FText& Object_Name, const class FText& Action_Name, bool Droped, bool SimulatePhysics, bool isGizmo);
		void resetDroped();
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void pickupEventScript();
		void objectPickup();
		void ReceiveBeginPlay();
		void ShortRadiusChanged(bool InRadius);
		void LongRadiusChanged(bool InRadius);
		void SubclassRamaLoaded();
		void BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void ExecuteUbergraph_pickupItemBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
