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

// BlueprintGeneratedClass millCoffeeElectric.millCoffeeElectric_C
// 0x001C (0x0744 - 0x0728)
class AmillCoffeeElectric_C : public AdrugMillBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        contents;                                                 // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     baseContentScale;                                         // 0x0738(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass millCoffeeElectric.millCoffeeElectric_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void quantityChanged();
	void ExecuteUbergraph_millCoffeeElectric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
