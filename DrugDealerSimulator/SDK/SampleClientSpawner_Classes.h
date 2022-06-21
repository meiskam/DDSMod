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
	 * BlueprintGeneratedClass SampleClientSpawner.SampleClientSpawner_C
	 * Size -> 0x0070 (FullSize[0x0398] - InheritedSize[0x0328])
	 */
	class ASampleClientSpawner_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      AreasPopulated;                                          // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class AsaleAreaManager_C*                                  SaleAreaMan;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AsalesManager_C*                                     SalesMan;                                                // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AsprayAreaGizmo_C*>                           AllAreaGizmos;                                           // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class FString>                                      AreasToClean;                                            // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              testString;                                              // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      CurPlayerAreas;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void TrySpawnAreaClient(class AsprayAreaGizmo_C* AreaGizmo, const class FString& AreaString, bool* Success);
		void HasAreaClient(const class FString& Area, bool* HasClient);
		void UnregisterClient(const class FString& Area, bool DirectClear);
		void RegisterClient(const class FString& OnArea);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void CheckSampleClients();
		void BreakAreaLoop();
		void CleanAreas();
		void ExecuteUbergraph_SampleClientSpawner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
