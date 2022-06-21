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
	 * BlueprintGeneratedClass PM_PatrolPartner.PM_PatrolPartner_C
	 * Size -> 0x001B (FullSize[0x0884] - InheritedSize[0x0869])
	 */
	class APM_PatrolPartner_C : public APolicemanBaseClass_C
	{
	public:
		unsigned char                                              UnknownData_XE1V[0x7];                                   // 0x0869(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0870(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APM_PatrolLead_C*                                    PatrolLead;                                              // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LeadID;                                                  // 0x0880(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SetupPartner(class APM_PatrolLead_C* LeadRef);
		void EngageSuspect();
		void SyncWithPartner();
		void BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName);
		void ExecuteUbergraph_PM_PatrolPartner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
