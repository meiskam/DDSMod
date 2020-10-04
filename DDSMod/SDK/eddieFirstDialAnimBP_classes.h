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

// AnimBlueprintGeneratedClass eddieFirstDialAnimBP.eddieFirstDialAnimBP_C
// 0x09D5 (0x0D35 - 0x0360)
class UeddieFirstDialAnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_13A04E634A67E838A1F7D28195C19AF8;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_160311654DB3696B90E24B87EDEB9D03;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4013602424847F8EF6EDD83CC4E3F04;// 0x03F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3402076B493D33EB3041BB91FAE2F9A7;// 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8E1E7684FE66D1AD4ECC8977ED6E1CE;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E735E70A4780A67C94163DA097A6D2DD;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_89BB018D4002354525AB60A49A224519;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0842A0324B8F232E5958D29EC7734D39;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_224DF7B24D921F9E4EF81E96C1F057D8;// 0x05A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E74FE54F417F6C14BA1B9BACE83B51D1;// 0x05E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB17AA5E4D1FC08017605CBE1C2CA960;// 0x0630(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6776DBFF4315E16CBBC010BDCC099263;// 0x06D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ECBFA42F4FABCB0973FDF89ECD492FCF;// 0x0710(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_55A008574E2A3984A3C68D8A6440C216;// 0x07B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_56551BA94598D8A71F6778ABF0CC1C2A;// 0x07F0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F43F84DE4B3A86B380D89885A0E70ABA;// 0x0890(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F33C5FD1428059A704484F8549D2D8FE;// 0x08D0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_328ABEBF43CBA1DBD5F57BB32A71A19E;// 0x0970(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_662095534E8C6427549B5BBA67E3D01E;// 0x09B0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DABF53274462A9D09DEDDA914F04AB95;// 0x0A50(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_045DDFED4C0175481E6B62A9E7C111C4;// 0x0A90(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_228A9C2D462199D330BCD7BBF3610BBB;// 0x0B30(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_10D4B07E48D9F387F396DF8949155CF8;// 0x0B70(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_797FCE20408536AE9B1B70A29D0935D3;// 0x0C10(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CCFB541B489D6B92A3853B8928837265;// 0x0C50(0x00E0)
	bool                                               giveJoint;                                                // 0x0D30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               afterJoint;                                               // 0x0D31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               tellStory;                                                // 0x0D32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               briefing;                                                 // 0x0D33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Finish;                                                   // 0x0D34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass eddieFirstDialAnimBP.eddieFirstDialAnimBP_C");
		return ptr;
	}


	void AnimNotify_pullOutPhone();
	void ExecuteUbergraph_eddieFirstDialAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
