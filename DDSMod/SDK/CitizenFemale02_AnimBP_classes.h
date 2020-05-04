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

// AnimBlueprintGeneratedClass CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C
// 0x0294 (0x05F4 - 0x0360)
class UCitizenFemale02_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F444C73B412B70E4ED09CEB6948B7886;      // 0x0368(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_4325E92B42524A40A983C8ACF4B390EF;// 0x03A8(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C33BB5C44BD5FE308888A2BAF25EAFD2;// 0x04D0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4BC75B6043F9AB889A71B0A16F1F4E4D;// 0x0510(0x00E0)
	float                                              Speed;                                                    // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CitizenFemale02_AnimBP.CitizenFemale02_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_CitizenFemale02_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
