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

// BlueprintGeneratedClass PM_PatrolPartner.PM_PatrolPartner_C
// 0x0014 (0x087C - 0x0868)
class APM_PatrolPartner_C : public APolicemanBaseClass_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APM_PatrolLead_C*                            PatrolLead;                                               // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                LeadID;                                                   // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_PatrolPartner.PM_PatrolPartner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupPartner(class APM_PatrolLead_C* LeadRef);
	void EngageSuspect();
	void SyncWithPartner();
	void ExecuteUbergraph_PM_PatrolPartner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
