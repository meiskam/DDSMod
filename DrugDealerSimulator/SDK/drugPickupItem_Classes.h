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
	 * BlueprintGeneratedClass drugPickupItem.drugPickupItem_C
	 * Size -> 0x0098 (FullSize[0x0640] - InheritedSize[0x05A8])
	 */
	class AdrugPickupItem_C : public ApickupItemBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       overlapp;                                                // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       onWorkStation;                                           // 0x05C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Selected;                                                // 0x05C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       onceConfigured;                                          // 0x05C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RZG6[0x1];                                   // 0x05C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    baseGramsPerItem;                                        // 0x05C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          newIcon;                                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMixProportionsStruct                               SubstanceMixProp;                                        // 0x05D0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FName                                                SubstanceID;                                             // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                SubstanceCustomName;                                     // 0x0618(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGuid                                               GizmoGuid;                                               // 0x0630(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetItemName(class FText* OutName);
		void ReconstructRama();
		void makeAdditiveTypeModel(const struct FdrugData& drugData, bool BigPackage, class UStaticMesh** OutModel);
		void makePackageTypeModel(const struct FdrugData& drugData, const struct FMixProportionsStruct& MixProportions, bool BigPackage, class UStaticMesh** OutModel);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void configPackage();
		void objectPickup();
		void verifyCorrectNaming();
		void selectPackToggle();
		void retryConfig();
		void SubclassRamaLoaded();
		void ExecuteUbergraph_drugPickupItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
