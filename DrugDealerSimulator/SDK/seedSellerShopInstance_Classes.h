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
	 * BlueprintGeneratedClass seedSellerShopInstance.seedSellerShopInstance_C
	 * Size -> 0x000F (FullSize[0x03F8] - InheritedSize[0x03E9])
	 */
	class AseedSellerShopInstance_C : public AshopInstance_C
	{
	public:
		unsigned char                                              UnknownData_6WSG[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ShopOpen();
		void ExecuteUbergraph_seedSellerShopInstance(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
