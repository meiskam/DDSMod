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

// AnimBlueprintGeneratedClass CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C
// 0x0294 (0x05F4 - 0x0360)
class UCitizenFemale01_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8E9237A84CC5EC8BCFBC359AD1CB9FD3;      // 0x0368(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_F663B0E046A5F94F8E6D74A860E0F994;// 0x03A8(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0953F94642D458406F19F5B2A4168E74;// 0x04D0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B19AAE83411C1C889C977988EAE5C1F0;// 0x0510(0x00E0)
	float                                              Speed;                                                    // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenFemale01_AnimBP.CitizenFemale01_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_CitizenFemale01_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
