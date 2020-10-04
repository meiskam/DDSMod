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

// BlueprintGeneratedClass orderInstance.orderInstance_C
// 0x00C0 (0x03E8 - 0x0328)
class AorderInstance_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FdrugData>                           drugData;                                                 // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        drugQuantities;                                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              recoverHour;                                              // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recoverMinute;                                            // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AsmuggleLocation_C*                          orderSmuggleLocation;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                OrderID;                                                  // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	struct FString                                     smuggleLocationStringID;                                  // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                recoverDay;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ready;                                                    // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class AdayTimeControler_C*                         dayTimeControlerRef;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        PackageSizes;                                             // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               packageNaming;                                            // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              oneGramSizeScale;                                         // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              oneGramWieghtScale;                                       // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UTexture2D*>                          packageIcons;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                orderTaskID;                                              // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              recoverTimer;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class Asmug_DeadDrop_C*>                    smuggleLocations;                                         // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass orderInstance.orderInstance_C");
		return ptr;
	}


	void choosePackageIcon(TEnumAsByte<EdrugForm> Form, int quantity, class UTexture2D** IconOut);
	void constructOrderSMS(TArray<struct FText>* MessageTemplates, struct FText* MessageText);
	void calcPackagingPattern(const struct FdrugData& drugData, int Index, int leftToDivide, struct FText* PackageName, int* PackageQuantity, float* packageSize, float* packageWeight, int* restLeft, int* gramsPerPack, class UTexture2D** packageIcon, class UClass** ObjectClass);
	void generatePackageContents(TArray<struct FinventoryItemStruct>* OutInventory, TArray<int>* outQuantity);
	void spawnOrderPackage(bool spawnAtHome);
	void calcPrepTime(float* TimeSeconds);
	void setSmuggleDateTime();
	void findRandomSmugLocation(class AsmuggleLocation_C** Output);
	void getSmuggleLocRef();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetupOrder(int ID, float spawnTime, TArray<struct FdrugData>* drugData, TArray<int>* drugQuantities);
	void checkOrderSpawnTime();
	void spawnOrderNow();
	void ExecuteUbergraph_orderInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
