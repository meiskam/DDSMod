#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass drugWorkStation.drugWorkStation_C
// 0x00A3 (0x0494 - 0x03F1)
class AdrugWorkStation_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               eqOverlapp;                                               // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UworkStationUI_C*                            drugStationUI;                                            // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               equipmentMode;                                            // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               drugPlaceMode;                                            // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	struct FVector                                     lineTracePoint;                                           // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AdrugPickupItem_C*                           drugPackageGizmo;                                         // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     lineTraceVector;                                          // 0x0430(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canPlaceHere;                                             // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hitIsWorkStation;                                         // 0x043D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hitIsFloor;                                               // 0x043E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x043F(0x0001) MISSED OFFSET
	class AworkStationEquipmentBase_C*                 equipmentGizmo;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AworkStationEquipmentBase_C*                 parentAppartment;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   focusedStation;                                           // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              gizmoRotateSpeed;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    defGizmoRotation;                                         // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AinteractiveBaseObject_C*                    curSelectedSubstance;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasSelectedSubstance;                                     // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FText                                       actionKeyName;                                            // 0x0478(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                objectsOnStation;                                         // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugWorkStation.drugWorkStation_C");
		return ptr;
	}


	void checkHasEquipment(bool* hasEquipment);
	void displayInteractionError();
	void eqGizmoUpdate();
	void setEqPlacementGizmo(bool FromHoveredObject, class AworkStationEquipmentBase_C* HoveredEq);
	void setDrugPlacementGizmo();
	void packageGizmoUpdate();
	void switchNextMode();
	void UserConstructionScript();
	void ActivateWorkStation();
	void LeaveWorkStation();
	void TabHeldDown();
	void TabReleased();
	void ShiftHeldDown();
	void ShiftReleased();
	void placeCurObject();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void scrollOneUp();
	void scrollOneDown();
	void rotateGizmo(float Axis);
	void updateWorkStationObjects(bool Placed);
	void ExecuteUbergraph_drugWorkStation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
