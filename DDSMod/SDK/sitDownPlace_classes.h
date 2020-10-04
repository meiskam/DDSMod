#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sitDownPlace.sitDownPlace_C
// 0x003F (0x0430 - 0x03F1)
class AsitDownPlace_C : public AinteractiveBaseObject_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AplayerCharacterBP_C*                        Player;                                                   // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              camBlendTime;                                             // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class AsitingDownPawn_C*                           sitDownPawn;                                              // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      PawnClass;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sitDownPlace.sitDownPlace_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Action_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void SitDown(class AplayerCharacterBP_C* playerRef);
	void Activate();
	void ExecuteUbergraph_sitDownPlace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
