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

// BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C
// 0x000F (0x0470 - 0x0461)
class AtempInfiniteDrugSource_C : public AcontainerBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C");
		return ptr;
	}


	void getPackageIcon(int Quan, TEnumAsByte<EdrugForm> Form, class UTexture2D** IconOut);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void resupplySource();
	void ExecuteUbergraph_tempInfiniteDrugSource(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
