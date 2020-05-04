#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C
// 0x000D (0x074D - 0x0740)
class ABP_CharacterBaseWithHealth_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Health;                                                   // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AmI_Alive_;                                               // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterBaseWithHealth.BP_CharacterBaseWithHealth_C");
		return ptr;
	}


	void UserConstructionScript();
	void Damage(float Damage);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CharacterBaseWithHealth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
