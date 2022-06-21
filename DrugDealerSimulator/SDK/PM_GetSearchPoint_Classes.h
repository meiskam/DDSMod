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
	 * BlueprintGeneratedClass PM_GetSearchPoint.PM_GetSearchPoint_C
	 * Size -> 0x0009 (FullSize[0x00A9] - InheritedSize[0x00A0])
	 */
	class UPM_GetSearchPoint_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       FromPredictedPath;                                       // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_PM_GetSearchPoint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
