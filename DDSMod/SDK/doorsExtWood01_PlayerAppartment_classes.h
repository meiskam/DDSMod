#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C
// 0x0008 (0x04C8 - 0x04C0)
class AdoorsExtWood01_PlayerAppartment_C : public AdoorBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doorsExtWood01_PlayerAppartment.doorsExtWood01_PlayerAppartment_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void eventDoorActivated();
	void EnableHouseDoor();
	void DisableHouseDoor();
	void ExecuteUbergraph_doorsExtWood01_PlayerAppartment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
