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
	 * BlueprintGeneratedClass drugWorkStation.drugWorkStation_C
	 * Size -> 0x009D (FullSize[0x04C5] - InheritedSize[0x0428])
	 */
	class AdrugWorkStation_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       eqOverlapp;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UworkStationUI_C*                                    drugStationUI;                                           // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       equipmentMode;                                           // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       drugPlaceMode;                                           // 0x0449(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ULDW[0x2];                                   // 0x044A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             lineTracePoint;                                          // 0x044C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AdrugPickupItem_C*                                   drugPackageGizmo;                                        // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             lineTraceVector;                                         // 0x0460(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       canPlaceHere;                                            // 0x046C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hitIsWorkStation;                                        // 0x046D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       hitIsFloor;                                              // 0x046E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXAA[0x1];                                   // 0x046F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AworkStationEquipmentBase_C*                         equipmentGizmo;                                          // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AworkStationEquipmentBase_C*                         parentAppartment;                                        // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           focusedStation;                                          // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      gizmoRotateSpeed;                                        // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            defGizmoRotation;                                        // 0x048C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AinteractiveBaseObject_C*                            curSelectedSubstance;                                    // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hasSelectedSubstance;                                    // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E35U[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                actionKeyName;                                           // 0x04A8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    objectsOnStation;                                        // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       respawned;                                               // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void respawnWorkStation();
		void checkHasEquipment(bool* hasEquipment);
		void displayInteractionError();
		void eqGizmoUpdate();
		void setEqPlacementGizmo(bool FromHoveredObject, class AworkStationEquipmentBase_C* HoveredEq);
		void setDrugPlacementGizmo();
		void packageGizmoUpdate();
		void switchNextMode();
		void UserConstructionScript();
		void TabHeldDown();
		void TabReleased();
		void ShiftHeldDown();
		void ShiftReleased();
		void placeCurObject();
		void LeaveWorkStation();
		void ActivateWorkStation();
		void scrollOneUp();
		void scrollOneDown();
		void ReceiveTick(float DeltaSeconds);
		void rotateGizmo(float Axis);
		void ReceiveBeginPlay();
		void updateWorkStationObjects(bool Placed);
		void ExecuteUbergraph_drugWorkStation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
