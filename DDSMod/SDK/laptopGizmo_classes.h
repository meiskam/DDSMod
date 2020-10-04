#pragma once

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass laptopGizmo.laptopGizmo_C
// 0x0008 (0x0728 - 0x0720)
class AlaptopGizmo_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass laptopGizmo.laptopGizmo_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Transform();
	void ExecuteUbergraph_laptopGizmo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
