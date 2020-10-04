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

// BlueprintGeneratedClass theCity.theCity_C
// 0x0010 (0x0340 - 0x0330)
class AtheCity_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACameraActor*                                introCamera_ExecuteUbergraph_theCity_RefProperty;         // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass theCity.theCity_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_theCity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
