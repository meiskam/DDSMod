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

// BlueprintGeneratedClass asianStreetThug02.asianStreetThug02_C
// 0x0015 (0x0AD1 - 0x0ABC)
class AasianStreetThug02_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0ABC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AsuitcaseBP_C*                               moneySpawn;                                               // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitingForPlayer;                                         // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass asianStreetThug02.asianStreetThug02_C");
		return ptr;
	}


	void reconstructMoneyCaseRef();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void tryGoingHome();
	void ExecuteUbergraph_asianStreetThug02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
