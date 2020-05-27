#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass drugPickupItem.drugPickupItem_C
// 0x002B (0x0548 - 0x051D)
class AdrugPickupItem_C : public ApickupItemBase_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               overlapp;                                                 // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               onWorkStation;                                            // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               selected;                                                 // 0x0539(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               onceConfigured;                                           // 0x053A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x053B(0x0001) MISSED OFFSET
	int                                                baseGramsPerItem;                                         // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  newIcon;                                                  // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugPickupItem.drugPickupItem_C");
		return ptr;
	}


	void makeAdditiveTypeModel(const struct FdrugData& drugData, bool BigPackage, class UStaticMesh** OutModel);
	void makePackageTypeModel(const struct FdrugData& drugData, bool BigPackage, class UStaticMesh** OutModel);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void configPackage();
	void objectPickup();
	void verifyCorrectNaming();
	void selectPackToggle();
	void ExecuteUbergraph_drugPickupItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
