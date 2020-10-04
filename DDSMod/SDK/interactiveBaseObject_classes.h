#pragma once

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass interactiveBaseObject.interactiveBaseObject_C
// 0x00C9 (0x03F1 - 0x0328)
class AinteractiveBaseObject_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Model;                                                    // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       objName;                                                  // 0x0340(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       objActionName;                                            // 0x0358(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               workStationAttached;                                      // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isGizmo;                                                  // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canPlaceFloor;                                            // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canPlaceWall;                                             // 0x0373(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canPlaceCeiling;                                          // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	float                                              addRotation;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rotSpeedMultiplier;                                       // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canPlace;                                                 // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               subclassPlaceRestriction;                                 // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	TArray<class AActor*>                              allOverlapingActors;                                      // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               alignToWall;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               immovable;                                                // 0x0399(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	struct FappartmentEquipment                        appEquipmentData;                                         // 0x03A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               needsHandsFreeToActivate;                                 // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interactiveBaseObject.interactiveBaseObject_C");
		return ptr;
	}


	void reconstructEquipmentData();
	void removeFromWorkStation();
	void objectCanStoreApartment(bool* CanStore, struct FText* Reason);
	void verifyCorrectNaming();
	void GetActionNames(const struct FText& OverrideKey, struct FText* keyOverride, struct FText* Object_Name, struct FText* Action_Name);
	void beenActivated();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void adaptPlaceMaterial();
	void SetAsGizmo();
	void ExecuteUbergraph_interactiveBaseObject(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
