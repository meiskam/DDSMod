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

// BlueprintGeneratedClass workStationEquipmentBase.workStationEquipmentBase_C
// 0x032F (0x0720 - 0x03F1)
class AworkStationEquipmentBase_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            progressWidget;                                           // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            selectionWidget;                                          // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               baseGizmo;                                                // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FappartmentEquipment                        eqData_1;                                                 // 0x0420(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isGizmo_1;                                                // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	struct FVector2D                                   baseSizing;                                               // 0x0474(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFit;                                                   // 0x047C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x047D(0x0003) MISSED OFFSET
	TArray<struct FVector>                             lineTracePoints;                                          // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FromHovered;                                              // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isWorking;                                                // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isOccupied;                                               // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSelected;                                               // 0x0493(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               productionFinished;                                       // 0x0494(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutomatic;                                              // 0x0495(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isProcessingTool;                                         // 0x0496(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0497(0x0001) MISSED OFFSET
	TArray<struct FText>                               holdOptionsNames;                                         // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             holdOptionsStringActions;                                 // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              curCapacity;                                              // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCapacity;                                              // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              countdownSeconds;                                         // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              coundownTimeCalculated;                                   // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseWorkingTimeSeconds;                                   // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	struct FText                                       childNameStorage;                                         // 0x04D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FdrugData                                   initialSubstanceData;                                     // 0x04E8(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FdrugData                                   finalProduct;                                             // 0x0598(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              finalProductAmount;                                       // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              potentialLossPercentMinimum;                              // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              potentialLossPercentMaximum;                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              precissionPercentage;                                     // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FdrugData                                   memProduct;                                               // 0x0658(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NewVar_0_1;                                               // 0x0708(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass workStationEquipmentBase.workStationEquipmentBase_C");
		return ptr;
	}


	void packagePopup();
	void packageProduct();
	void rightClickOptions();
	void tryAddSubstance();
	void verifySubstanceSource(bool* Proceed, struct FdrugData* SourceData);
	void compareContent(const struct FdrugData& NewData, bool* TheSame);
	void clearEquipment();
	void quantityChanged();
	void addSubstancePopup(class AinteractiveBaseObject_C* substanceRef);
	void workFinished();
	void workCountdown(float Delta);
	void startWorking();
	void defaultHoldAction();
	void storeEquipment(bool SkipRender);
	void rearangeEquipment();
	void equipmentActivateReleaseButton();
	void subclassActivate();
	void equipmentActivation();
	void calcLineTracePoints();
	void checkCanFit(bool* CanFit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void initialSetup(const struct FappartmentEquipment& Data, bool Gizmo, bool FromHovered);
	void verifyCorrectNaming();
	void selectMe();
	void dumpContent();
	void ExecuteUbergraph_workStationEquipmentBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
