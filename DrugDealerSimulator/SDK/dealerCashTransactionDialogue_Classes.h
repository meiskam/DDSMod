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
	 * BlueprintGeneratedClass dealerCashTransactionDialogue.dealerCashTransactionDialogue_C
	 * Size -> 0x001E (FullSize[0x03B0] - InheritedSize[0x0392])
	 */
	class AdealerCashTransactionDialogue_C : public AdialogueInstance_C
	{
	public:
		unsigned char                                              UnknownData_8FYH[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FText>                                        randomLine01Text;                                        // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void giveMoney();
		void ExecuteUbergraph_dealerCashTransactionDialogue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
