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

// BlueprintGeneratedClass shopAmyGasStaion.shopAmyGasStaion_C
// 0x000F (0x03E8 - 0x03D9)
class AshopAmyGasStaion_C : public AshopInstance_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shopAmyGasStaion.shopAmyGasStaion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void scriptResupplyEvent();
	void ExecuteUbergraph_shopAmyGasStaion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
