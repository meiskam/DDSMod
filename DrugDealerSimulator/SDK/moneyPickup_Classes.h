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
	 * BlueprintGeneratedClass moneyPickup.moneyPickup_C
	 * Size -> 0x0008 (FullSize[0x05B0] - InheritedSize[0x05A8])
	 */
	class AmoneyPickup_C : public ApickupItemBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05A8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void retryInit();
		void ExecuteUbergraph_moneyPickup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
