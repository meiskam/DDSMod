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
	 * BlueprintGeneratedClass labDryerBase.labDryerBase_C
	 * Size -> 0x000C (FullSize[0x07DC] - InheritedSize[0x07D0])
	 */
	class AlabDryerBase_C : public AworkStationEquipmentBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      maxCapOverride;                                          // 0x07D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void calcProperties(float inParam, float* OutParam);
		void makeFinalDrugForm(EdrugForm In, EdrugForm* OutDried);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void addSubstance();
		void tryAddSubstance();
		void workFinished();
		void startDrying();
		void ExecuteUbergraph_labDryerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
