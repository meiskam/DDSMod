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
	 * BlueprintGeneratedClass doorsExtMetal02.doorsExtMetal02_C
	 * Size -> 0x000F (FullSize[0x0539] - InheritedSize[0x052A])
	 */
	class AdoorsExtMetal02_C : public AdoorBase_C
	{
	public:
		unsigned char                                              UnknownData_FWT2[0x6];                                   // 0x052A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0530(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       LaundryDoor;                                             // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TestOpen();
		void ExecuteUbergraph_doorsExtMetal02(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
