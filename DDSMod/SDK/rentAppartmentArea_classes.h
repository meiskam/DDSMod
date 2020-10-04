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

// BlueprintGeneratedClass rentAppartmentArea.rentAppartmentArea_C
// 0x0140 (0x0468 - 0x0328)
class ArentAppartmentArea_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            marker;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Overlap;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     areaSize;                                                 // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<struct FappartmentEquipment>                appartmentInventory;                                      // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        appartmentInventoryQuantities;                            // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       areaName;                                                 // 0x0388(0x0018) (Edit, BlueprintVisible)
	struct FText                                       areaAddress;                                              // 0x03A0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       areaDescription;                                          // 0x03B8(0x0018) (Edit, BlueprintVisible)
	bool                                               areaRented;                                               // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaOnDebt;                                               // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	int                                                areaRentedTill;                                           // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaForever;                                              // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               areaTerminated;                                           // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03DA(0x0002) MISSED OFFSET
	float                                              areaMeterage;                                             // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  areaImage;                                                // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                areaMinLevel;                                             // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              areaPrice;                                                // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                areaFloors;                                               // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               areaSaveStation;                                          // 0x03F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	int                                                areaVisits;                                               // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                flashBangCount;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                flashBangCounter;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaDEAobserved;                                          // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               playerIn;                                                 // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	float                                              playerDistanceSpawnSUV;                                   // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tryStartObservation;                                      // 0x040C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x040D(0x0003) MISSED OFFSET
	float                                              areaObservationLength;                                    // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              areaObservationCounter;                                   // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               raidCleanup;                                              // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               areaRaided;                                               // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x041A(0x0002) MISSED OFFSET
	float                                              respectBoost;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AappartmentWallPicker_C*                     wallPickerRef;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              resetCountdown;                                           // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tryingToReset;                                            // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showingMarker;                                            // 0x042D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	int                                                clientBoost;                                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              respectPercBoost;                                         // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              respectDropBoost;                                         // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              expBoost;                                                 // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              saleSpeedBoost;                                           // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              filterRatio;                                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              filterCalcRatio;                                          // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedFailBaseExpo;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedFailBaseRisk;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              weedGrowthRatio;                                          // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              curPurgeItems;                                            // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass rentAppartmentArea.rentAppartmentArea_C");
		return ptr;
	}


	void checkWeedStatus();
	void mapMarkerCheck();
	void markerOpc(bool showing);
	void updateHideoutSetup();
	void updateAreaNam();
	void observationCountdown(float Delta);
	void vanCanSpawn(class AdeaRaidManager_C* raidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn);
	void suvCanSpawn(class AdeaRaidManager_C* raidManager, class AdeaRaidCarSpawnPoint_C** suvSpawnPoint, bool* CanSpawn);
	void spawnFlashBang();
	void addInventoryItem(const struct FappartmentEquipment& EqData, int quantity);
	void removeInventoryItem(int Index, int quantity);
	void checkPlayerOverlaping();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void purgeAppartment();
	void unlockAppartment();
	void areaRaidStarted();
	void areaRaidEnded();
	void deaMoveIn();
	void nextFlashBang();
	void startAreaDEA_Obeservation();
	void endAreaDEA_Observation();
	void deaObservationUpdate();
	void resetDeaRaid();
	void showEscapeRouts();
	void tryCleanupRaid();
	void PlayerBustedByDEA();
	void tryRestoreWallPicker();
	void resetApartment();
	void tryResetMe();
	void updateMarker();
	void weedPotentialFail();
	void resetFailStatusRefresh();
	void resetFilterWarning();
	void ExecuteUbergraph_rentAppartmentArea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
