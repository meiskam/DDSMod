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
	 * BlueprintGeneratedClass orderInstance.orderInstance_C
	 * Size -> 0x00D0 (FullSize[0x03F8] - InheritedSize[0x0328])
	 */
	class AorderInstance_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave;                                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FdrugData>                                   drugData;                                                // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        DrugIDs;                                                 // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            drugQuantities;                                          // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      recoverHour;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recoverMinute;                                           // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AsmuggleLocation_C*                                  orderSmuggleLocation;                                    // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderId;                                                 // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SYTB[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              smuggleLocationStringID;                                 // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    recoverDay;                                              // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ready;                                                   // 0x039C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MRKY[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AdayTimeControler_C*                                 dayTimeControlerRef;                                     // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            packageSizes;                                            // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FText>                                        packageNaming;                                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      oneGramSizeScale;                                        // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      oneGramWieghtScale;                                      // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UTexture2D*>                                  packageIcons;                                            // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    orderTaskID;                                             // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      recoverTimer;                                            // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class Asmug_DeadDrop_C*>                            smuggleLocations;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void CheckRama();
		void choosePackageIcon(EdrugForm Form, int32_t Quantity, class UTexture2D** IconOut);
		void constructOrderSMS(TArray<class FText>* MessageTemplates, class FText* MessageText);
		void calcPackagingPattern(const struct FdrugData& drugData, int32_t Index, int32_t leftToDivide, class FText* PackageName, int32_t* packageQuantity, float* packageSize, float* packageWeight, int32_t* restLeft, int32_t* gramsPerPack, class UTexture2D** packageIcon, class UClass** ObjectClass);
		void generatePackageContents(TArray<struct FinventoryItemStruct>* OutInventory, TArray<class FName>* OutIDs, TArray<int32_t>* OutQuantity, TArray<int32_t>* OutAmounts, TArray<struct FMixProportionsStruct>* OutMixProportions);
		void spawnOrderPackage(bool spawnAtHome);
		void calcPrepTime(float* TimeSeconds);
		void setSmuggleDateTime();
		void findRandomSmugLocation(class AsmuggleLocation_C** Output);
		void getSmuggleLocRef();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void SetupOrder(TArray<struct FdrugData>* drugData, TArray<class FName> DrugIDs, TArray<int32_t>* drugQuantities, int32_t ID, float spawnTime);
		void checkOrderSpawnTime();
		void spawnOrderNow();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void ExecuteUbergraph_orderInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
