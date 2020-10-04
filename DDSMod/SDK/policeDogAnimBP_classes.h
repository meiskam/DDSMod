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

// AnimBlueprintGeneratedClass policeDogAnimBP.policeDogAnimBP_C
// 0x0170 (0x04D0 - 0x0360)
class UpoliceDogAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8BEB96644571C39A56F423BEE245C3B5;      // 0x0368(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E;// 0x03A8(0x0128)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass policeDogAnimBP.policeDogAnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_policeDogAnimBP_AnimGraphNode_BlendSpacePlayer_DF8AB9FA4E3A86C4FA596384F3D55D2E();
	void ExecuteUbergraph_policeDogAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
