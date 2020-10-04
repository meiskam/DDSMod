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

// BlueprintGeneratedClass drugStoreUnlocker.drugStoreUnlocker_C
// 0x0018 (0x0340 - 0x0328)
class AdrugStoreUnlocker_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass drugStoreUnlocker.drugStoreUnlocker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void UnlockStore();
	void checkUnlock();
	void ExecuteUbergraph_drugStoreUnlocker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
