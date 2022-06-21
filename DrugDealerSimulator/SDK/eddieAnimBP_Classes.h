#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass eddieAnimBP.eddieAnimBP_C
	 * Size -> 0x0945 (FullSize[0x0CA5] - InheritedSize[0x0360])
	 */
	class UeddieAnimBP_C : public UAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_9852C6224E5B3A3B11DED0A19EFCBB45;     // 0x0368(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4D6430234CAAFD4A9F357D9E419BAB8F; // 0x03A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7AB3992B4BE66E94C1A770BB0D9C27DB; // 0x03F0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8F490EE04EFBACA433FC72ACC96EBE94; // 0x0438(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5530D9024AD8943FA46CC3BCBFB56441; // 0x0480(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5EC2B4074798D84BF4FC7EAEA91876F8; // 0x04C8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_700109CF4DFD3F07C1FAC58948C65898; // 0x0510(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C8D8A7DF46B51864674988A635069937; // 0x0558(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_53ADEAA34BAAAD668A2D909DFA447282; // 0x05A0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_71E5F05145E9209C8AF184A0C0D3FB84; // 0x0640(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_82714C1847A0B8D7E6EF33A9A69E9BE8; // 0x0680(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6DB7F538473BD2896BD3C8A0A3BA0BB0; // 0x0720(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5F5E824245C87EF0C1DA1ABD2D5107EF; // 0x0760(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6243636D4D74661E46DD23A269809699; // 0x0800(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F1B045334663519C7BA9CEAA89567EBB; // 0x0840(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_BE869DE14D48D513B334D683F319EEB9; // 0x08E0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9609A2CA4D5C0DFDD71A84BA76DC1712; // 0x0920(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3073B85C47372A8D208F3C9278AFE056; // 0x09C0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_91AD55784D9B0E6FFC9FD9A39924588F; // 0x0A00(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_82A916FB4F71DBB6BFF984BC0C21676E; // 0x0AA0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_917F78F941B9D423AAAC96B1C60B7C54; // 0x0AE0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_C981B1FE4D0E9D0417E10DB532337199; // 0x0B80(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_E61653394F17E81B1E4626B4691A626F; // 0x0BC0(0x00E0)
		bool                                                       giveJoint;                                               // 0x0CA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       afterJoint;                                              // 0x0CA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       tellStory;                                               // 0x0CA2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       briefing;                                                // 0x0CA3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Finish;                                                  // 0x0CA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_eddieAnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
