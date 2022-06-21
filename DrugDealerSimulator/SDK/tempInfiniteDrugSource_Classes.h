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
	 * BlueprintGeneratedClass tempInfiniteDrugSource.tempInfiniteDrugSource_C
	 * Size -> 0x0017 (FullSize[0x0508] - InheritedSize[0x04F1])
	 */
	class AtempInfiniteDrugSource_C : public AcontainerBase_C
	{
	public:
		unsigned char                                              UnknownData_3MOG[0x7];                                   // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDataTable*                                          DataTable;                                               // 0x0500(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void getPackageIcon(int32_t Quan, EdrugForm Form, class UTexture2D** IconOut);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void resupplySource();
		void ExecuteUbergraph_tempInfiniteDrugSource(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
