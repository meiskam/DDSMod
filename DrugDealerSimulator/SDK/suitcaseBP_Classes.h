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
	 * BlueprintGeneratedClass suitcaseBP.suitcaseBP_C
	 * Size -> 0x000B (FullSize[0x0600] - InheritedSize[0x05F5])
	 */
	class AsuitcaseBP_C : public AbackpackBase_C
	{
	public:
		unsigned char                                              UnknownData_ZOHQ[0x3];                                   // 0x05F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05F8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void putMoney(int32_t Amount);
		void ExecuteUbergraph_suitcaseBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
