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

// BlueprintGeneratedClass worldMapMarker.worldMapMarker_C
// 0x0094 (0x03BC - 0x0328)
class AworldMapMarker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       MarkerName;                                               // 0x0358(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EmapMarkerCategories>                  markerCategory;                                           // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	struct FText                                       MarkerTooltip;                                            // 0x0378(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Dealer;                                                   // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                relatedTaskID;                                            // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               taskRelated;                                              // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class AquestManager_C*                             questManager;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     relatedAreaString;                                        // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              waitTimeLeft;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass worldMapMarker.worldMapMarker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void setup(TEnumAsByte<EmapMarkerCategories> Category, const struct FText& Name, const struct FText& ToolTip, bool Dealer, int taskID);
	void checkTaskEnded();
	void ReInitialise();
	void recalcWaitTime();
	void ExecuteUbergraph_worldMapMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
