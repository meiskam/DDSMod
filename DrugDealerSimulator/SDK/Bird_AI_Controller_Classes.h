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
	 * BlueprintGeneratedClass Bird_AI_Controller.Bird_AI_Controller_C
	 * Size -> 0x0108 (FullSize[0x0540] - InheritedSize[0x0438])
	 */
	class ABird_AI_Controller_C : public AAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAIPerceptionComponent*                              AIPerception;                                            // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              Enemy;                                                   // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BlackboardKey_CanSeeEnemy_;                              // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BlackboardKey_Enemy;                                     // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BlackboardKey_DoIFearTheEnemy_;                          // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BbKey_EnemySpotted_;                                     // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BbKey_ChaseTheEnemy_;                                    // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FBird_EnemySelection_Structure>              EnemyArray;                                              // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor
		int32_t                                                    LastSeenIndex;                                           // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyEvaluationFreq;                                     // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveFloat*                                         EnemyDistanceCurve;                                      // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentHighestEnemyTarget;                               // 0x0498(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2A8R[0x4];                                   // 0x049C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              EnemyTarget;                                             // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHealth;                                               // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnemyExpirationTime;                                     // 0x04AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ABird_Sky_TargetPoint_C*>                     Bird_Sky_Targets;                                        // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABird_Ground_TargetPoint_C*>                  Bird_Ground_Target;                                      // 0x04C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class ABird_Perch_TargetPoint_C*>                   Bird_Perch_Target;                                       // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class FName                                                BbKey_GroundSpeed;                                       // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BbKey_FlyingSpeed;                                       // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_DoADownTrace_;                                     // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_DownTraceDistance;                                 // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_VerticleThrustAmount;                              // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_StayInSky_;                                        // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_AreWeWalking_;                                     // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_AreWePerched_;                                     // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_AreWeFlying_;                                      // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_FlyToPerch_;                                       // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_CanThisBirdPerch_;                                 // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                BBKey_CanThisBirdFly_;                                   // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveDeadEnemy();
		void RemoveExpiredEnemy();
		void ApplyDamageFromActor(class AActor* DamagingActor, float Damage);
		void CalculateDamageUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility);
		void CalculateDistanceUtility(const struct FBird_EnemySelection_Structure& EnemySelection_Input, float* Utility);
		void CalculateDistanceToActor(class AActor* InputActor, float* DistanceToActor);
		void AddActorToEnemyArray(class AActor* InputActor);
		void UserConstructionScript();
		void OnPossess(class APawn* PossessedPawn);
		void BndEvt__AIPerception_K2Node_ComponentBoundEvent_3_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*> UpdatedActors);
		void EnemySelection();
		void OnEnemyDestroyed(class AActor* DestroyedActor);
		void ExpireEnemies();
		void ExecuteUbergraph_Bird_AI_Controller(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
