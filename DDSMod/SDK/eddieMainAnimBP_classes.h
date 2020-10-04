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

// AnimBlueprintGeneratedClass eddieMainAnimBP.eddieMainAnimBP_C
// 0x00E8 (0x0448 - 0x0360)
class UeddieMainAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_71E2D97142C6063582A4289CBF6CFEDB;      // 0x0368(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CFE8EA36482E3727A05109AC9E317033;// 0x03A8(0x00A0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass eddieMainAnimBP.eddieMainAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_eddieMainAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
