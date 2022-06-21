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
	 * BlueprintGeneratedClass policePatrolArea.policePatrolArea_C
	 * Size -> 0x006C (FullSize[0x0394] - InheritedSize[0x0328])
	 */
	class ApolicePatrolArea_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Sphere;                                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class ApolicePatrolPoint_C*>                        patrolPoints;                                            // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
		bool                                                       isPatroled;                                              // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CBP4[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    patrolPriority;                                          // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              areaStringID;                                            // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		TArray<class ApolicePatrolPoint_C*>                        pointsToReach;                                           // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       firstArea;                                               // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       InInfluenceRadius;                                       // 0x0381(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0S9Q[0x6];                                   // 0x0382(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APM_PatrolLead_C*                                    CurPatrolLead;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      spawnTimer;                                              // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPatrolSpawnChances(float* Timeout, float* ChanceLow, float* ChanceHigh);
		void SpawnPatrol(class ApolicePatrolPoint_C* spawnPoint);
		void chooseSpawnPoint(class ApolicePatrolPoint_C** OutPoint, bool* Succeded, class FName* FailID);
		void getUnreachedPoint(class ApolicePatrolPoint_C** Patrol_Point);
		void UserConstructionScript();
		void ShortRadiusChanged(bool InRadius);
		void ReceiveBeginPlay();
		void resetPatrolArea();
		void restartArea();
		void LongRadiusChanged(bool InRadius);
		void ResetSpawnGate();
		void ExecuteUbergraph_policePatrolArea(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
