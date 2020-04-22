#pragma once

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gangDeadDropBase.gangDeadDropBase_C
// 0x0020 (0x0480 - 0x0460)
class AgangDeadDropBase_C : public AcontainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               expectingDrop;                                            // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	struct FVector                                     Extent;                                                   // 0x0474(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gangDeadDropBase.gangDeadDropBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void clearDeadDrop();
	void checkEnabled();
	void ExecuteUbergraph_gangDeadDropBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif