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

// BlueprintGeneratedClass equipmentShopDrugstore.equipmentShopDrugstore_C
// 0x000F (0x03C8 - 0x03B9)
class AequipmentShopDrugstore_C : public AequipmentShop_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass equipmentShopDrugstore.equipmentShopDrugstore_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_equipmentShopDrugstore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
