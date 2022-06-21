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
	 * BlueprintGeneratedClass PM_PatrolLead.PM_PatrolLead_C
	 * Size -> 0x0048 (FullSize[0x08B1] - InheritedSize[0x0869])
	 */
	class APM_PatrolLead_C : public APolicemanBaseClass_C
	{
	public:
		unsigned char                                              UnknownData_0UW8[0x7];                                   // 0x0869(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0870(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USphereComponent*                                    Influence;                                               // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       controlingPlayer;                                        // 0x0880(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L7ZI[0x7];                                   // 0x0881(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UpoliceSearchWidget_C*                               controlWidget;                                           // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      controlTime;                                             // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      controlTimer;                                            // 0x0894(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      controlBreakDistance;                                    // 0x0898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WXS0[0x4];                                   // 0x089C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APM_PatrolPartner_C*                                 followerRef;                                             // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ApolicePatrolArea_C*                                 MyPatrolArea;                                            // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InfluenceRadius;                                         // 0x08B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ShortRadiusChanged(bool InRadius);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void EngageSuspect();
		void BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void ControlEnded();
		void breakControl();
		void overrideStartSearch();
		void checkForPartner();
		void unlockRespawnPartner();
		void LongRadiusChanged(bool InRadius);
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void WipePatrol();
		void RetryWipe();
		void ExecuteUbergraph_PM_PatrolLead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
