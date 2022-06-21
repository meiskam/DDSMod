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
	 * Class DrugDealerSimulator.AbsorbedSubstance
	 * Size -> 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
	 */
	class UAbsorbedSubstance : public UObject
	{
	public:
		float                                                      takenTime;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takenMass;                                               // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      currentConcetration;                                     // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeAddictedLevel;                                       // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeAddictedFactor;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeToleranceLevel;                                      // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeToleranceFactor;                                     // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateAbsorption;                                      // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateDecomposition;                                   // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateExcretion;                                       // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcPower;                                               // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       stillEffective;                                          // 0x0054(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       injectionCalculated;                                     // 0x0055(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBUO[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_BaseFactors*                                     takenBase;                                               // 0x0058(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      takenHealth;                                             // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          takenSpirit;                                             // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      takenPerception;                                         // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  takenBrainFuncs;                                         // 0x0078(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        takenPhysical;                                           // 0x0080(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    drugPointer;                                             // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    substanceIndex;                                          // 0x0090(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEOO[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		void MergeTakenEffects(class UAbsorbedSubstance* otherObject, float curConcentration, float substanceTolerance);
		void MergeSpiritImpact(class UEB_Spirit* Source, float takeFactor);
		void MergePhysicalImpact(class UEB_Physical* Source, float takeFactor);
		void MergePerceptionImpact(class UEB_Perception* Source, float takeFactor);
		void MergeHealthImpact(class UEB_BodyHealth* Source, float takeFactor);
		void MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, float takeFactor);
		void InitFactorHandler();
		float GetQualityFactor();
		float GetPurityFactor();
		float GetFirstPowerMomentTime();
		float GetExcretedAmount(float checkDayTime);
		float GetDecompositedAmunt(float checkDayTime);
		float GetCurrentConcentration(float checkDayTime);
		float GetAbsorbedAmunt(float checkDayTime);
		void DeepCopySpirit(class UEB_Spirit* Source);
		void DeepCopyPhysical(class UEB_Physical* Source);
		void DeepCopyPerception(class UEB_Perception* Source);
		void DeepCopyHealth(class UEB_BodyHealth* Source);
		void DeepCopyBrainFuncs(class UEB_BrainFunctions* Source);
		void DeepCopyBaseF(class UEB_BaseFactors* Source);
		void CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AbsorbedSubstanceComp
	 * Size -> 0x0080 (FullSize[0x0170] - InheritedSize[0x00F0])
	 */
	class UAbsorbedSubstanceComp : public UActorComponent
	{
	public:
		float                                                      takenTime;                                               // 0x00F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      tempCheckTime;                                           // 0x00F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takenMass;                                               // 0x00F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeAddictedLevel;                                       // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeAddictedFactor;                                      // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeToleranceLevel;                                      // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      takeToleranceFactor;                                     // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateAbsorption;                                      // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateDecomposition;                                   // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcRateExcretion;                                       // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calcPower;                                               // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassToPowerFactor;                                       // 0x011C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SAEMajorVersion;                                         // 0x0120(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SAESubVersion;                                           // 0x0124(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       stillEffective;                                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       injectionCalculated;                                     // 0x0129(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9GE[0x6];                                   // 0x012A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_BaseFactors*                                     takenBase;                                               // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      takenHealth;                                             // 0x0138(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          takenSpirit;                                             // 0x0140(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      takenPerception;                                         // 0x0148(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  takenBrainFuncs;                                         // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        takenPhysical;                                           // 0x0158(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    drugPointer;                                             // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    substanceIndex;                                          // 0x0168(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0OQ[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (PADDING)

	public:
		bool SubstanceHaveExcreted(float checkDayTime);
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void MergeTakenEffects(class UAbsorbedSubstanceComp* otherObject, class ASubstancesAndEffects* handler, float curConcentration, float substanceTolerance);
		void MergeSpiritImpact(class UEB_Spirit* Source, class ASubstancesAndEffects* handler, float takeFactor);
		void MergePhysicalImpact(class UEB_Physical* Source, class ASubstancesAndEffects* handler, float takeFactor);
		void MergePerceptionImpact(class UEB_Perception* Source, class ASubstancesAndEffects* handler, float takeFactor);
		void MergeHealthImpact(class UEB_BodyHealth* Source, class ASubstancesAndEffects* handler, float takeFactor);
		void MergeBrainFuncsImpact(class UEB_BrainFunctions* Source, class ASubstancesAndEffects* handler, float takeFactor);
		void InitFactorHandler();
		float GetQualityFactor();
		float GetPurityFactor();
		float GetFirstPowerMomentTime();
		float GetExcretedAmount(float checkDayTime);
		float GetDecompositedAmount(float checkDayTime);
		float GetCurrentConcentration(float checkDayTime);
		float GetAbsorbedAmunt(float checkDayTime);
		void DeepCopySpirit(class UEB_Spirit* Source);
		void DeepCopyPhysical(class UEB_Physical* Source);
		void DeepCopyPerception(class UEB_Perception* Source);
		void DeepCopyHealth(class UEB_BodyHealth* Source);
		void DeepCopyBrainFuncs(class UEB_BrainFunctions* Source);
		void DeepCopyBaseF(class UEB_BaseFactors* Source);
		void CalcInjection(class AHumanoidActor* injectedObject, float checkDayTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AbsorbedSubstancesComponent
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UAbsorbedSubstancesComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.ActionableActor
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class AActionableActor : public AActor
	{
	public:
		int32_t                                                    innerIndex;                                              // 0x0328(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    innerSubIndex;                                           // 0x032C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.ActiveSubstance
	 * Size -> 0x00C0 (FullSize[0x03E8] - InheritedSize[0x0328])
	 */
	class AActiveSubstance : public AActor
	{
	public:
		class UEB_BaseFactors*                                     BaseFactors;                                             // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                substanceName;                                           // 0x0330(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    innerIndex;                                              // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZU2[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_BodyHealth*                                      BodyFastImpact;                                          // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      BodyAddictionImpact;                                     // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      BodyExcretionImpact;                                     // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          SpiritFastImpact;                                        // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          SpiritAddictionImpact;                                   // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          SpiritExcretionImpact;                                   // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      PerceptionFastImpact;                                    // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      PerceptionAddictionImpact;                               // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      PerceptionExcretionImpact;                               // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  BrainFuncsFastImpact;                                    // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  BrainFuncsAddictionImpact;                               // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  BrainFuncsExcretionImpact;                               // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        PhysicalFastImpact;                                      // 0x03A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        PhysicalAddictionImpact;                                 // 0x03A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        PhysicalExcretionImpact;                                 // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      neutralPurityPoint;                                      // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      goodPurityPoint;                                         // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      neutralQualityPoint;                                     // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      goodQualityPoint;                                        // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      fullToleranceAchiveIn;                                   // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      maxToleranceFactor;                                      // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      fullAddictionAchiveIn;                                   // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      toleranceRecoveryDays;                                   // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      addictionRecoveryDays;                                   // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      pruityDebug;                                             // 0x03DC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      qualityDebug;                                            // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJXC[0x4];                                   // 0x03E4(0x0004) MISSED OFFSET (PADDING)

	public:
		float GetQualityFactorIn(float inputQuality);
		float GetQualityFactor();
		float GetPurityFactorIn(float inputPurity);
		float GetPurityFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AddictionComp
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UAddictionComp : public UActorComponent
	{
	public:
		bool                                                       autoCleanup;                                             // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57NV[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAddictionMark>                              AddictionData;                                           // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFUF[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		void StoreSaveData(TArray<float>* targetArray);
		void ResetData();
		void LoadSaveData(TArray<float> sourceArray);
		float GetDataLevel(int32_t substanceIndex, float checkTime);
		void AddData(int32_t newSubstanceIndex, float takeTime, float calcPower, float recoveryTime, float recoveryOffset);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AirComponent
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UAirComponent : public UActorComponent
	{
	public:
		float                                                      airTemp;                                                 // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      airMinTemp;                                              // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      airMaxTemp;                                              // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rainChance;                                              // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rainDensity;                                             // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      stormChance;                                             // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AirProfile
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class AAirProfile : public AActor
	{
	public:
		float                                                      airTemp;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      airMinTemp;                                              // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      airMaxTemp;                                              // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rainChance;                                              // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rainDensity;                                             // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      stromChance;                                             // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Alkaloid
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Alkaloid : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Amfetamina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Amfetamina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Diamorfina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Diamorfina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Ergolina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Ergolina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_MDMA
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_MDMA : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Metaamfetamina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Metaamfetamina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Piperydyna
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Piperydyna : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Psylocybina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Psylocybina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_THC
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_THC : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_THCSativa
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_THCSativa : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AS_Tryptamina
	 * Size -> 0x0000 (FullSize[0x03E8] - InheritedSize[0x03E8])
	 */
	class AAS_Tryptamina : public AActiveSubstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.AstralProfile
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class AAstralProfile : public AActor
	{
	public:
		float                                                      ligthPower;                                              // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isEmmitingEnergy;                                        // 0x032C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GOY[0x3];                                   // 0x032D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      emmitPower;                                              // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      heatEmmitingPerc;                                        // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      orbitToSurfaceAngle;                                     // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      baseDistance;                                            // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		float powerOnSurface();
		float heatPower();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.BU_ManagerActor
	 * Size -> 0x00E8 (FullSize[0x0410] - InheritedSize[0x0328])
	 */
	class ABU_ManagerActor : public AActor
	{
	public:
		class AActor*                                              MainBuildingTargetPtr;                                   // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ABU_UpgradeLineActor*>                        UpgradeLines;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FString, int32_t>                               SeenUpgrades;                                            // 0x0340(0x0050) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace;                                               // 0x0390(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       HasMainLine;                                             // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRKU[0x7];                                   // 0x03A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MainLineName;                                            // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReadyToUse;                                              // 0x03B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NHIH[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class ABU_UpgradeLineActor*>           LineNameIndex;                                           // 0x03C0(0x0050) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		void UserSawUpgrades();
		bool UpgradeBought(int32_t NewLevel, const class FString& UpgradeLineName);
		void RefreshBuildingObjects();
		void PrepareDataForUse();
		void LogUnseenDetails(struct FBU_UnseenDetailsSets* LogUnseenDetails);
		void LogUnseenData(const struct FBU_UnseenUL& LogUnseenUL);
		void LogMeOut();
		int32_t GetUnseenData(TArray<struct FBU_UnseenUL>* OutUnseenData);
		int32_t GetMainLineUpgradeLevel();
		void GetAllUpgradeLines(TArray<class ABU_UpgradeLineActor*>* OutReferenceList);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.BU_UpgradeDetails
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class ABU_UpgradeDetails : public AActor
	{
	public:
		TArray<struct FBU_UpgradeDetailsStruct>                    ChangesSet;                                              // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		int32_t GetMaxUpgradeLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.BU_UpgradeLineActor
	 * Size -> 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
	 */
	class ABU_UpgradeLineActor : public AActor
	{
	public:
		int32_t                                                    CurrentLevel;                                            // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    seenMaxLevel;                                            // 0x032C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace;                                               // 0x0330(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxLevel;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MaxLevelAutoAdaptAfterLoad;                              // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsMainUpgradeLine;                                       // 0x0345(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TXD[0x2];                                   // 0x0346(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABU_ManagerActor*                                    BuildingUpgradeManagerPtr;                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MainLineLevelRequirement;                                // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB3H[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBU_ObjectsToDetailsBridge>                  UpgradesSettings;                                        // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		bool UpgradeToLevel(int32_t NewLevel);
		void RefreshDetailsAfterLoad();
		void RefreshDetails();
		void ProcessForLevel(int32_t procLevel);
		float NextUpgradePrice();
		int32_t NextUpgradeLevel();
		bool IsAvailableForUpgrade();
		bool IsAvailable();
		bool HasAllUpgrades();
		float GetUpgradeCost(int32_t procLevel);
		int32_t GetMaxUpgradeLevel();
		float GetLevelPrice(int32_t procLevel);
		void AdaptMaxLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.CepSaveTester
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ACepSaveTester : public AActor
	{
	public:
		int32_t                                                    someInt;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI67[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (PADDING)

	public:
		void noticeAction();
		int32_t getCount();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.CepWeatherComponent
	 * Size -> 0x02E0 (FullSize[0x03D0] - InheritedSize[0x00F0])
	 */
	class UCepWeatherComponent : public UActorComponent
	{
	public:
		int32_t                                                    yearDaysLen;                                             // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9MG[0x4];                                   // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USeasonAstralComponent*                              baseAstralSettings;                                      // 0x00F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USeasonAstralComponent*                              moonSettings;                                            // 0x0100(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    moonDayHoursLength;                                      // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    moonOrbitDegRot;                                         // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASeasonProfile*>                              Seasons;                                                 // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AWorldTimeAndConditions*                             rootHandler;                                             // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      enablingSunTimeMarginOnToggle;                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunCeremonyDegMargin;                                    // 0x012C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       inited;                                                  // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QD1N[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATimeProfile*                                        currentTimeInstance;                                     // 0x0138(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    seasonsDefined;                                          // 0x0140(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_851G[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              sunDataSunrises;                                         // 0x0148(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunDataSunsets;                                          // 0x0158(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunDataNoons;                                            // 0x0168(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunOrbitData;                                            // 0x0178(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunOrbitDistanceData;                                    // 0x0188(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonScheme;                                            // 0x0198(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonBasicTemperature;                                  // 0x01A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonMinTemperature;                                    // 0x01B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonMaxTemperature;                                    // 0x01C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainChance;                                        // 0x01D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonCalcRainChance;                                    // 0x01E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainDensity;                                       // 0x01F8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonCloudsDayLogs;                                     // 0x0208(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonStormChance;                                       // 0x0218(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<bool>                                               seasonRainSet;                                           // 0x0228(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<bool>                                               seasonFogSet;                                            // 0x0238(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainStartHour;                                     // 0x0248(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainEndHour;                                       // 0x0258(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UDayConditionsLogger_UE*>                     seasonClouds;                                            // 0x0268(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UDayConditionsLogger_UE*>                     seasonRainDetails;                                       // 0x0278(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UDayConditionsLogger_UE*>                     seasonHeatProfile;                                       // 0x0288(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class UDayConditionsLogger_UE*>                     seasonFogLevels;                                         // 0x0298(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonFogDensity;                                        // 0x02A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainDensityA;                                      // 0x02B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonRainDensityB;                                      // 0x02C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonStormLength;                                       // 0x02D8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonStormOffset;                                       // 0x02E8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UObject*                                             tempObject;                                              // 0x02F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      totalSeasonWage;                                         // 0x0300(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J3RP[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            seasonA;                                                 // 0x0308(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            seasonB;                                                 // 0x0318(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactA;                                                 // 0x0328(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactB;                                                 // 0x0338(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              instabilityFactors;                                      // 0x0348(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    daysCounter;                                             // 0x0358(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       tempTest;                                                // 0x035C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GYW8[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASeasonProfile*                                      tempSeasonProfileA;                                      // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASeasonProfile*                                      tempSeasonProfileB;                                      // 0x0368(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileA;                                         // 0x0370(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileB;                                         // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralA;                                       // 0x0380(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralB;                                       // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UTBC[0x24];                                  // 0x0390(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      tempDebProgress;                                         // 0x03B4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      t1;                                                      // 0x03B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      t2;                                                      // 0x03BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      t3;                                                      // 0x03C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      t4;                                                      // 0x03C4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      t5;                                                      // 0x03C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BVPC[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (PADDING)

	public:
		float YearPassed();
		int32_t YearDay();
		bool SetupRain(int32_t datNum, float rainLength, float rainDensity);
		void SaveDataSnapshot();
		void RecoverDataSnapshot();
		int32_t NextYearDay(int32_t curDay, int32_t Op);
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.CepWeatherProfile
	 * Size -> 0x0138 (FullSize[0x0460] - InheritedSize[0x0328])
	 */
	class ACepWeatherProfile : public AActor
	{
	public:
		int32_t                                                    yearDaysLen;                                             // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LB73[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USeasonAstralComponent*                              baseAstralSettings;                                      // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASeasonProfile*>                              Seasons;                                                 // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AWorldTimeAndConditions*                             rootHandler;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       inited;                                                  // 0x0350(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJBT[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATimeProfile*                                        currentTimeInstance;                                     // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    seasonsDefined;                                          // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_065R[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              sunDataSunrises;                                         // 0x0368(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunDataSunsets;                                          // 0x0378(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonScheme;                                            // 0x0388(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonBasicTemperature;                                  // 0x0398(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonMinTemperature;                                    // 0x03A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonMaxTemperature;                                    // 0x03B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      totalSeasonWage;                                         // 0x03C8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8LKO[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            seasonA;                                                 // 0x03D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            seasonB;                                                 // 0x03E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactA;                                                 // 0x03F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactB;                                                 // 0x0400(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              instabilityFactors;                                      // 0x0410(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    daysCounter;                                             // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       tempTest;                                                // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZPCP[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASeasonProfile*                                      tempSeasonProfileA;                                      // 0x0428(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASeasonProfile*                                      tempSeasonProfileB;                                      // 0x0430(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileA;                                         // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileB;                                         // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralA;                                       // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralB;                                       // 0x0450(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3L1V[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (PADDING)

	public:
		float YearPassed();
		int32_t YearDay();
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.DayConditionsLogger_UE
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UDayConditionsLogger_UE : public UObject
	{
	public:
		int32_t                                                    hoursCount;                                              // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    markupsPerHour;                                          // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    commitJumps;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      markupMinuteStep;                                        // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      markupHourStep;                                          // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PUQJ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              vals;                                                    // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              calcProgresses;                                          // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       commitingMode;                                           // 0x0060(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O9V9[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    lastWriteIndex;                                          // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    firstCommitIndex;                                        // 0x0068(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      startCommitVal;                                          // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      endCommitVal;                                            // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    curWriteIndex;                                           // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      tempDebProgress;                                         // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ttIndex;                                                 // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ttIndex1;                                                // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ttIndex2;                                                // 0x0084(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void StartCommitSession(float newStartVal);
		void SetValueByIndex(int32_t Index, float NewValue);
		void SetValueByHour(float setHour, float NewValue);
		int32_t SeekIndex(float seekHour);
		bool IsInCommitMode();
		int32_t GetValuesLength();
		float GetValueByIndex(int32_t SeekIndex);
		float GetValueByHour(float seekHour, bool extrapolateValue);
		float GetSum(int32_t maxIndex);
		int32_t GetNextIndex(int32_t curIndex, int32_t Op);
		void EndCommitSession(float newEndVal, bool followToEnd);
		void ClassInit();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.DayConditionsLoggerComponent
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class UDayConditionsLoggerComponent : public UActorComponent
	{
	public:
		TArray<float>                                              Values;                                                  // 0x00F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BX7G[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetValueByIndex(int32_t Index, float NewValue);
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.DrugsEffectsBase
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	class UDrugsEffectsBase : public UActorComponent
	{
	public:
		int32_t                                                    innerType;                                               // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    saveInnerPropertiesCount;                                // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       blockCancelEffect;                                       // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NM3G[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_BaseFactors
	 * Size -> 0x0028 (FullSize[0x0128] - InheritedSize[0x0100])
	 */
	class UEB_BaseFactors : public UDrugsEffectsBase
	{
	public:
		float                                                      Strength;                                                // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      purity;                                                  // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Quality;                                                 // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      addictiveness;                                           // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      toleranceFactor;                                         // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      effectsEffectivnessFactor;                               // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rateAbsorption;                                          // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rateDecomposition;                                       // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rateExcretion;                                           // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      junkieHunger;                                            // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		float GetAddictivnessFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_BodyHealth
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UEB_BodyHealth : public UDrugsEffectsBase
	{
	public:
		float                                                      nervousSystem;                                           // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      digestiveSystem;                                         // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      urinaryTract;                                            // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      liver;                                                   // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      kidneys;                                                 // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      circulatory;                                             // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      respiratory;                                             // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      heart;                                                   // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void InitAsValuesStorage();
		void InitAsMinClamp();
		void InitAsMaxClamp();
		void InitAsFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_BrainFunctions
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UEB_BrainFunctions : public UDrugsEffectsBase
	{
	public:
		float                                                      Mathematics;                                             // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Navigation;                                              // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Observation;                                             // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Communication;                                           // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void InitAsValuesStorage();
		void InitAsMinClamp();
		void InitAsMaxClamp();
		void InitAsFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_Perception
	 * Size -> 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
	 */
	class UEB_Perception : public UDrugsEffectsBase
	{
	public:
		float                                                      soundHal;                                                // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoiceHal;                                                // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scotomas;                                                // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorTrans;                                              // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeTrans;                                               // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Contours;                                                // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImgCreation;                                             // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfHearthHear;                                          // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeMultiplier;                                          // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FOVMultiplier;                                           // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      THC;                                                     // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      THCSativa;                                               // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Amfetamina;                                              // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Metaamfetamina;                                          // 0x0134(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MDMA;                                                    // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Ergolina;                                                // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Tryptamina;                                              // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Psylocybina;                                             // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alkaloid;                                                // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Diamorfina;                                              // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Piperydyna;                                              // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QJYX[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (PADDING)

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void InitAsValuesStorage();
		void InitAsMinClamp();
		void InitAsMaxClamp();
		void InitAsFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_Physical
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UEB_Physical : public UDrugsEffectsBase
	{
	public:
		float                                                      MovementSpeed;                                           // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      staminaMultiplier;                                       // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementCoordination;                                    // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IrisDisfunction;                                         // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Seizures;                                                // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZK5[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (PADDING)

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void InitAsValuesStorage();
		void InitAsMinClamp();
		void InitAsMaxClamp();
		void InitAsFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.EB_Spirit
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UEB_Spirit : public UDrugsEffectsBase
	{
	public:
		float                                                      Afraid;                                                  // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Agrresive;                                               // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sad;                                                     // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Happy;                                                   // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Calm;                                                    // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Enraged;                                                 // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void StoreSelfData(TArray<float>* targetArray, int32_t baseOffset);
		void SetClassBasics();
		void RestoreFromData(TArray<float> sourceArray, int32_t baseOffset);
		void InitAsValuesStorage();
		void InitAsMinClamp();
		void InitAsMaxClamp();
		void InitAsFactor();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.HealthTestActor
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class AHealthTestActor : public AActor
	{
	public:
		class UHumanoidComponent*                                  humanization;                                            // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.HumanoidActor
	 * Size -> 0x0178 (FullSize[0x04A0] - InheritedSize[0x0328])
	 */
	class AHumanoidActor : public AActor
	{
	public:
		int32_t                                                    testInt;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKM9[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_BodyHealth*                                      bodyHealth;                                              // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      bodyHealthRecovery;                                      // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          spiritAttitude;                                          // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      Perception;                                              // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  brainFuncs;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        physcials;                                               // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              inBodySubstances[0x50];                                  // 0x0360(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.HumanoidActor.inBodySubstances
		class UAddictionComp*                                      AddictionData;                                           // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAddictionComp*                                      ToleranceData;                                           // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace0;                                              // 0x03C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace1;                                              // 0x03D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace2;                                              // 0x03E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace3;                                              // 0x03F0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace4;                                              // 0x0400(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    InBodySubsCount;                                         // 0x0410(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    checkValue;                                              // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, float>                                       curConcetrations;                                        // 0x0418(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		class UAbsorbedSubstanceComp*                              tempCalcFactors;                                         // 0x0468(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASubstancesAndEffects*                               SAEptr;                                                  // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4BN[0x14];                                  // 0x0478(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NonCalcMinFrames;                                        // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonCalcMinTime;                                          // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SomeDebugInteger;                                        // 0x0494(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NXW6[0x8];                                   // 0x0498(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTestInt(int32_t newInt);
		void SaveDataSnapshot();
		void RestoreDataSnapshot();
		void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
		bool IsSubstanceEffective(int32_t substanceIndex);
		bool IsSubstanceBeingAbsorbed(int32_t substanceIndex, float checkDayTime);
		float GetToleranceDataLevel(int32_t substanceIndex, float curDayTime);
		float GetToleranceDataInFactor(int32_t substanceIndex, float InValue, float curDayTime);
		float GetToleranceDataFactor(int32_t substanceIndex, float curDayTime);
		int32_t GetTestInt();
		float GetCurrentConcentration(int32_t substanceIndex);
		float GetAddictionDataLevel(int32_t substanceIndex, float curDayTime);
		float GetAddictionDataInFactor(int32_t substanceIndex, float InValue, float curDayTime);
		float GetAddictionDataFactor(int32_t substanceIndex, float curDayTime);
		void ApplySubstance(float* currentValue, float Tolerance, float curConcentration);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.HumanoidComponent
	 * Size -> 0x0148 (FullSize[0x0238] - InheritedSize[0x00F0])
	 */
	class UHumanoidComponent : public UActorComponent
	{
	public:
		class UEB_BodyHealth*                                      bodyHealth;                                              // 0x00F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BodyHealth*                                      bodyHealthRecovery;                                      // 0x00F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          spiritAttitude;                                          // 0x0100(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      Perception;                                              // 0x0108(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  brainFuncs;                                              // 0x0110(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        physcials;                                               // 0x0118(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URBJ[0x60];                                  // 0x0120(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AActiveSubstance*, float>                       addictionList;                                           // 0x0180(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class AActiveSubstance*, float>                       toleranceList;                                           // 0x01D0(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LE2L[0x18];                                  // 0x0220(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetToleranceLevel(class AActiveSubstance* substanceActor, float Value);
		void SetAddictionLevel(class AActiveSubstance* substanceActor, float Value);
		void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
		float GetToleranceLevel(class AActiveSubstance* substanceActor);
		float GetToleranceFactorIn(class AActiveSubstance* substanceActor, float InValue);
		float GetToleranceFactor(class AActiveSubstance* substanceActor);
		float GetAddictionLevel(class AActiveSubstance* substanceActor);
		float GetAddictionFactor(class AActiveSubstance* substanceActor);
		void ApplySubstance(float* currentValue, float Tolerance, float curConcentration);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.LockpickPuzzle
	 * Size -> 0x0170 (FullSize[0x0498] - InheritedSize[0x0328])
	 */
	class ALockpickPuzzle : public AActor
	{
	public:
		int32_t                                                    difficultyLevel;                                         // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BobbyPinStartAngle;                                      // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScrewDriverStartAngle;                                   // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      baseScrewDriverSpeed;                                    // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      baseShakeDamageFactor;                                   // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PYCC[0x8];                                   // 0x033C(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      targetedBobbyPinAngle;                                   // 0x0344(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      targetedScrewDriverAngle;                                // 0x0348(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_81JQ[0x1F];                                  // 0x034C(0x001F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       printLogToOutput;                                        // 0x036B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XXC5[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              dfcRangeMin;                                             // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              dfcRangeMax;                                             // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L2VQ[0x20];                                  // 0x0390(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              difficultyAngleMargins;                                  // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              difficultyRotationMarginBefore;                          // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              difficultyRotationMarginAfter;                           // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              difficultyTimeMargins;                                   // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G21S[0x20];                                  // 0x03F0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              difficultyUnlockingTimes;                                // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              difficultyHealthDrops;                                   // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QM17[0x68];                                  // 0x0430(0x0068) MISSED OFFSET (PADDING)

	public:
		void UnlockedDone();
		void StartTakingDamage();
		void ResetPuzzle(bool ResetUnlockPosition);
		void PushMouseInput(float X, float Y);
		bool IsUnlocked();
		bool IsScrewDriverInUnlockZone();
		bool IsBobbyPinInUnlockZone();
		bool HasBoobyPinBroke();
		float GetScrewDriverAngle();
		float GetDifficultyMeta(int32_t optNum);
		float GetCurrentResistance();
		float GetBobbyPinHealth();
		float GetBobbyPinAngle();
		void EndTakingDamage();
		void BrokenEvent();
		void ActionButtonReleased();
		void ActionButtonPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.NextSingleton
	 * Size -> 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
	 */
	class UNextSingleton : public UObject
	{
	public:
		bool                                                       nativeTimeRecover;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YD17[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASubstancesAndEffects*                               SAE;                                                     // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SAEOperational;                                          // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4PC4[0x8F];                                  // 0x0039(0x008F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWorldTimeAndConditions*                             WTAC;                                                    // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATS_Manager*                                         TSManager;                                               // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    callCount;                                               // 0x00D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4T4P[0xC];                                   // 0x00DC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               HelpersList;                                             // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               MasterHelpers;                                           // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            WTACCounts;                                              // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2YH[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    debVal;                                                  // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4TNP[0x14];                                  // 0x012C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       requireWTAC;                                             // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IP3G[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (PADDING)

	public:
		void WTACStoreInSaveSpace();
		void WTACRecover();
		bool ValidateWorld();
		void TestCallFunction();
		void ResearchWorld();
		void ReInitWTAC();
		void ReassignWorld();
		void ReasearchForStaticMeshes();
		void PrepareInstancesForSaveEvent();
		bool OptSystemOperational();
		bool NPCSystemOperational();
		void NoticeLoadRequest();
		void LoadDone(bool retryLoad);
		bool IsGridOperational();
		bool InnerLoadPerformed();
		void InitSystemsActors();
		class ATS_Manager* GetTSManager();
		struct FVector GetPlayerLocation();
		bool CanSaveDependedInstancesInit();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.NextSingletonLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNextSingletonLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UNextSingleton* STATIC_GetNextSingletonData(bool* IsValid);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.NextSingletonWorldHelper
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ANextSingletonWorldHelper : public AActor
	{
	public:
		bool                                                       MasterWorld;                                             // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       validSingleton;                                          // 0x0329(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LN0D[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              tempWorld;                                               // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    debVal;                                                  // 0x0338(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC6M[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetMasterState(bool newState);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SDB_BodyHealth
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USDB_BodyHealth : public UObject
	{
	public:
		class UEB_BodyHealth*                                      MainBodyHealth;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          Spirit;                                                  // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      Perception;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  brainFuncs;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        Physical;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void InitBucketAsMinClamp();
		void InitBucketAsMaxClamp();
		void InitBucketAsFactors();
		void InitBucketAsDataStorage();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SDB_BodyHealthComp
	 * Size -> 0x0028 (FullSize[0x0118] - InheritedSize[0x00F0])
	 */
	class USDB_BodyHealthComp : public UActorComponent
	{
	public:
		class UEB_BodyHealth*                                      MainBodyHealth;                                          // 0x00F0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Spirit*                                          Spirit;                                                  // 0x00F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Perception*                                      Perception;                                              // 0x0100(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  brainFuncs;                                              // 0x0108(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_Physical*                                        Physical;                                                // 0x0110(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void InitBucketAsMinClamp();
		void InitBucketAsMaxClamp();
		void InitBucketAsFactors();
		void InitBucketAsDataStorage();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SeasonAstralComponent
	 * Size -> 0x0018 (FullSize[0x0108] - InheritedSize[0x00F0])
	 */
	class USeasonAstralComponent : public UActorComponent
	{
	public:
		class AAstralProfile*                                      manipulationAstralObject;                                // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      orbitToSurfaceAngle;                                     // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      baseDistance;                                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunHours;                                                // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunHourCenter;                                           // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		float GetSunsetTime();
		float GetSunriseTime();
		float GetOrbitTarget();
		float GetOrbitDistanceTarget();
		float GetMaxHeigthTime();
		float GetHeatPower();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SeasonAstralProfile
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ASeasonAstralProfile : public AActor
	{
	public:
		class AAstralProfile*                                      manipulationAstralObject;                                // 0x0328(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      orbitToSurfaceAngle;                                     // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      baseDistance;                                            // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunHours;                                                // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunHourCenter;                                           // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		float GetSunsetTime();
		float GetSunriseTime();
		float GetHeatPower();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SeasonProfile
	 * Size -> 0x0350 (FullSize[0x0678] - InheritedSize[0x0328])
	 */
	class ASeasonProfile : public AActor
	{
	public:
		float                                                      lengthWage;                                              // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOXM[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAirComponent*                                       airComp;                                                 // 0x0330(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USeasonAstralComponent*                              astralSettingsComp;                                      // 0x0338(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      seasonConditionsImpactance;                              // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rainChance;                                              // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    worldIndex;                                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      seasonMargin;                                            // 0x034C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSP1[0x328];                                 // 0x0350(0x0328) MISSED OFFSET (PADDING)

	public:
		class UAirComponent* getAirProfile();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.ShiroActor
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class AShiroActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_Z8YA[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (PADDING)

	public:
		class FString retName();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.ShiroBlueprint
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShiroBlueprint : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_WeightedArrayRand(TArray<float> WeightArr);
		void STATIC_testReferences(float* t1, float* t2, float* t3, float* t4);
		void STATIC_SimpleGrid(float intervalX, float intervalY, int32_t columnCount, int32_t objectIndex, float* positionX, float* positionY);
		int32_t STATIC_shiroFunc2(int32_t A);
		int32_t STATIC_shiroFunc(int32_t A);
		class AWorldTimeAndConditions* STATIC_GetWTAC();
		class UNextSingleton* STATIC_GetSingleton();
		class ASubstancesAndEffects* STATIC_GetSAE();
		float STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange);
		float STATIC_extrapolateTest(float Min, float Max, float perc);
		void STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, bool* priceHighOutput, bool* priceTooHighOutput, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence);
		bool STATIC_CanSaveDependedInstancesInit();
		void STATIC_calculateSky(int32_t dayNum, int32_t curHour, int32_t curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.SubstancesAndEffects
	 * Size -> 0x0510 (FullSize[0x0838] - InheritedSize[0x0328])
	 */
	class ASubstancesAndEffects : public AActor
	{
	public:
		class UClass*                                              BPT_HealthObject;                                        // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AHumanoidActor*                                      HealthObject;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StdEffectsList[0x50];                                    // 0x0338(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.StdEffectsList
		bool                                                       AutoSubstancesSearch;                                    // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JH8B[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActiveEffects[0x50];                                     // 0x0389(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.ActiveEffects
		bool                                                       AutoTriggeredEffectsSearch;                              // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FT1I[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BPT_THC;                                                 // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_THC;                                                  // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_THC[0x50];                                          // 0x03F8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_THC
		class UClass*                                              BPT_THCSativa;                                           // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_THCSativa;                                            // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_THCSativa[0x50];                                    // 0x0458(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_THCSativa
		class UClass*                                              BPT_Amfetamina;                                          // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Amfetamina;                                           // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Amfetamina[0x50];                                   // 0x04B8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Amfetamina
		class UClass*                                              BPT_Metaamfetamina;                                      // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Metaamfetamina;                                       // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Metaamfetamina[0x50];                               // 0x0518(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Metaamfetamina
		class UClass*                                              BPT_MDMA;                                                // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_MDMA;                                                 // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_MDMA[0x50];                                         // 0x0578(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_MDMA
		class UClass*                                              BPT_Ergolina;                                            // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Ergolina;                                             // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Ergolina[0x50];                                     // 0x05D8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Ergolina
		class UClass*                                              BPT_Tryptamina;                                          // 0x0628(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Tryptamina;                                           // 0x0630(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Tryptamina[0x50];                                   // 0x0638(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Tryptamina
		class UClass*                                              BPT_Psylocybina;                                         // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Psylocybina;                                          // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Psylocybina[0x50];                                  // 0x0698(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Psylocybina
		class UClass*                                              BPT_Alkaloid;                                            // 0x06E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Alkaloid;                                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Alkaloid[0x50];                                     // 0x06F8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Alkaloid
		class UClass*                                              BPT_Diamorfina;                                          // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Diamorfina;                                           // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Diamorfina[0x50];                                   // 0x0758(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Diamorfina
		class UClass*                                              BPT_Piperydyna;                                          // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActiveSubstance*                                    BD_Piperydyna;                                           // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TDES_Piperydyna[0x50];                                   // 0x07B8(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.SubstancesAndEffects.TDES_Piperydyna
		class USDB_BodyHealthComp*                                 FactorDefaults;                                          // 0x0808(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDB_BodyHealthComp*                                 MinValues;                                               // 0x0810(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USDB_BodyHealthComp*                                 MaxValues;                                               // 0x0818(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MajorVersion;                                            // 0x0820(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubVersion;                                              // 0x0824(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSubstances;                                           // 0x0828(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      selfTimer;                                               // 0x082C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       tempSubsBeingAbs;                                        // 0x0830(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEQ2[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (PADDING)

	public:
		void ProcessTriggers(int32_t substanceIndexTriggering);
		void NoticeDrugTook(class AActiveSubstance* substanceActor, class AActiveSubstance* valuesProvider, float takenMass);
		void MergeWithWorld(class UWorld** W);
		void ManageLaunchList(float currentDayTime);
		float GetSubstanceGenericData(int32_t substanceIndex, int32_t subprop, float retEmpty);
		void GetSubstanceEffectsByIndex(int32_t activeSubIndex);
		void GetSubstanceEffects(class AActiveSubstance* activeSub);
		class AActiveSubstance* GetSubstanceByIndex(int32_t substanceIndex);
		class AHumanoidActor* GetHealthObject();
		void DoBasicEffectTick(class ATriggeredDrugEffect** Eff, float DeltaTime);
		void ClassInit();
		bool CheckForSubstanceEffects(int32_t substanceIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TriggeredDrugEffect
	 * Size -> 0x0188 (FullSize[0x04B0] - InheritedSize[0x0328])
	 */
	class ATriggeredDrugEffect : public AActor
	{
	public:
		bool                                                       hasTriggered;                                            // 0x0328(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ListAssociated;                                          // 0x0329(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AF7Y[0x2];                                   // 0x032A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    substanceIndex;                                          // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      wutDeb;                                                  // 0x0330(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TakeTriggered;                                           // 0x0334(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AddictionTriggered;                                      // 0x0335(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ToleranceTriggered;                                      // 0x0336(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J6U[0x1];                                   // 0x0337(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    substanceIndexTriggering;                                // 0x0338(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       liveEffect;                                              // 0x033C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5I19[0x3];                                   // 0x033D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeToLive;                                              // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       continousEffect;                                         // 0x0344(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYP2[0x3];                                   // 0x0345(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      cooldownTime;                                            // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isNPCEffect;                                             // 0x034C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RH10[0x3];                                   // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    bp_InnerIndex;                                           // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XO7O[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StartBlockList[0x50];                                    // 0x0354(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.TriggeredDrugEffect.StartBlockList
		int32_t                                                    StartCount;                                              // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastTriggeredTime;                                       // 0x03AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastTriggeredEndTime;                                    // 0x03B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isWorking;                                               // 0x03B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2P4Z[0x3];                                   // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASubstancesAndEffects*                               rootHandler;                                             // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CG63[0x28];                                  // 0x03C0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       ETA_IsTriggering;                                        // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ETA_CanTriggerAlone;                                     // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ETA_CheckAsEqualAndLess;                                 // 0x03EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I0MO[0x1];                                   // 0x03EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ETA_ActivateValue;                                       // 0x03EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ETT_IsTriggering;                                        // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ETT_CanTriggerAlone;                                     // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ETT_CheckAsEqualAndLess;                                 // 0x03F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H7ST[0x1];                                   // 0x03F3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ETT_ActivateValue;                                       // 0x03F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HB_IsTriggering;                                         // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HB_CanTriggerAlone;                                      // 0x03F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HB_ActivateWhenAll;                                      // 0x03FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HB_CheckAsEqualAndLess;                                  // 0x03FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_nervousSystem;                                       // 0x03FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_digestiveSystem;                                     // 0x03FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_urinaryTract;                                        // 0x03FE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_liver;                                               // 0x03FF(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_kidneys;                                             // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_circulatory;                                         // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_respiratory;                                         // 0x0402(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HBC_heart;                                               // 0x0403(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M29K[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_BodyHealth*                                      BodyHealthTriggerValues;                                 // 0x0408(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Spirit_IsTriggering;                                     // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Spirit_CanTriggerAlone;                                  // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Spirit_ActivateWhenAll;                                  // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Spirit_CheckAsEqualAndLess;                              // 0x0413(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Afraid;                                               // 0x0414(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Agrresive;                                            // 0x0415(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Sad;                                                  // 0x0416(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Happy;                                                // 0x0417(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Calm;                                                 // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SC_Enraged;                                              // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DEPT[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_Spirit*                                          SpiritTriggerValues;                                     // 0x0420(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Per_IsTriggering;                                        // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Per_CanTriggerAlone;                                     // 0x0429(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Per_ActivateWhenAll;                                     // 0x042A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Per_CheckAsEqualAndLess;                                 // 0x042B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_SoundHal;                                            // 0x042C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_VoiceHal;                                            // 0x042D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Scotomas;                                            // 0x042E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_ColorTrans;                                          // 0x042F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_SizeTrans;                                           // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Contours;                                            // 0x0431(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_ImgCreation;                                         // 0x0432(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_SelfHearthHear;                                      // 0x0433(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_TimeMultiplier;                                      // 0x0434(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_FOVMultiplier;                                       // 0x0435(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_THC;                                                 // 0x0436(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_THCSativa;                                           // 0x0437(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Amfetamina;                                          // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Metaamfetamina;                                      // 0x0439(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_MDMA;                                                // 0x043A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Ergolina;                                            // 0x043B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Tryptamina;                                          // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Psylocybina;                                         // 0x043D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Alkaloid;                                            // 0x043E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Diamorfina;                                          // 0x043F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PRC_Piperydyna;                                          // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B85Q[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_Perception*                                      PerceptionTriggerValues;                                 // 0x0448(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFuncs_IsTriggering;                                     // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFuncs_CanTriggerAlone;                                  // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFuncs_ActivateWhenAll;                                  // 0x0452(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFuncs_CheckAsEqualAndLess;                              // 0x0453(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFC_Mathematics;                                         // 0x0454(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFC_Navigation;                                          // 0x0455(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFC_Observation;                                         // 0x0456(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BFC_Communication;                                       // 0x0457(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEB_BrainFunctions*                                  BrainFuncsTriggerValues;                                 // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Phys_IsTriggering;                                       // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Phys_CanTriggerAlone;                                    // 0x0461(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Phys_ActivateWhenAll;                                    // 0x0462(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Phys_CheckAsEqualAndLess;                                // 0x0463(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PHC_MovementSpeed;                                       // 0x0464(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PHC_StaminaMultiplier;                                   // 0x0465(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PHC_MovementCoordination;                                // 0x0466(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PHC_IrisDisfunction;                                     // 0x0467(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PHC_Seizures;                                            // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R53S[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEB_Physical*                                        PhysicalTriggerValues;                                   // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      tickTime;                                                // 0x0478(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    framesPassed;                                            // 0x047C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    nonCalcFramesCount;                                      // 0x0480(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    framesOffset;                                            // 0x0484(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    minCalcFramesSkip;                                       // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      minTimeSkip;                                             // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectStartInnerTime;                                    // 0x0490(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectEndInnerTime;                                      // 0x0494(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerEffectTimer;                                        // 0x0498(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectStartRootTime;                                     // 0x049C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectEndRootTime;                                       // 0x04A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DrugSessionRun;                                          // 0x04A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TU3A[0x3];                                   // 0x04A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHumanoidActor*                                      HealthObject;                                            // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ValidatePTRS();
		void StartEffect();
		void PureEffectInit();
		void PureEffectEnd();
		void NoticeEffectEnd(float currentDayTime);
		void InitInnerClass();
		float GetCurrentDayTime();
		void EndEffect();
		void EffectTick(float DeltaTime);
		bool CheckTrigger(class AHumanoidActor* checkObject, float currentDayTime);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Alkaloid
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Alkaloid : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Amfetamina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Amfetamina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Diamorfina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Diamorfina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Ergolina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Ergolina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_MDMA
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_MDMA : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Metaamfetamina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Metaamfetamina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Piperydyna
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Piperydyna : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Psylocybina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Psylocybina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_THC
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_THC : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_THCSativa
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_THCSativa : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TDE_Tryptamina
	 * Size -> 0x0000 (FullSize[0x04B0] - InheritedSize[0x04B0])
	 */
	class ATDE_Tryptamina : public ATriggeredDrugEffect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TimeProfile
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class ATimeProfile : public AActor
	{
	public:
		float                                                      instanceTime;                                            // 0x0328(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    iDay;                                                    // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    iHour;                                                   // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    iMinute;                                                 // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      iSec;                                                    // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      iTimeMultiplier;                                         // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P933[0x18];                                  // 0x0340(0x0018) MISSED OFFSET (PADDING)

	public:
		void setTimeMultiplier(float Val, float propagationTime);
		void setDayHourMinuteTime(int32_t day, int32_t hour, int32_t minute);
		int32_t getIntTimeData(int32_t optNum);
		float GetCurrentTimeMultiplier();
		float dayFloatResult();
		void addSeconds(float addSeconds);
		void addMinutes(int32_t addMinutes);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TrainControllerCode
	 * Size -> 0x5048 (FullSize[0x5370] - InheritedSize[0x0328])
	 */
	class ATrainControllerCode : public AActor
	{
	public:
		unsigned char                                              UnknownData_8ZUU[0x58];                                  // 0x0328(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              actorPath;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              leaderBPLeader;                                          // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    innerSegmentsSpawn;                                      // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I4JD[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              segmentBPClass;                                          // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      forcePropagation;                                        // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      frictionForcePropagation;                                // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      constPMRmultiplier;                                      // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      stopLength;                                              // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDeltaTime;                                            // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      minInterval;                                             // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      maxInterval;                                             // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      loadSimulate;                                            // 0x03C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    segmentsInit;                                            // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsRunning;                                               // 0x03C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5AN2[0x4FA7];                                // 0x03C9(0x4FA7) MISSED OFFSET (PADDING)

	public:
		float initOnWorld();
		void initInstance(int32_t followingSegmentsCount);
		void calcTotalWeigthAndPower();
		float calcTotalFrictionForce();
		void calcSingleSegment(class ATrainRealSegment* calcSegment);
		float calcSegmentDistanceToLeader(int32_t SegmentIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TrainRealSegment
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class ATrainRealSegment : public AActor
	{
	public:
		float                                                      weigth;                                                  // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      loadWeigth;                                              // 0x032C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isCargo;                                                 // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasEngine;                                               // 0x0331(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOT7[0x2];                                   // 0x0332(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      enginePower;                                             // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       backwardDirectionEngine;                                 // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JA83[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      axleLength;                                              // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      axleWide;                                                // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      modelLength;                                             // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      modelWidth;                                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      lastAngle;                                               // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TrainSegmentMesh;                                        // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TrainSegmentCode
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ATrainSegmentCode : public AActor
	{
	public:
		bool                                                       leadSegment;                                             // 0x0328(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNEW[0x7];                                   // 0x0329(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TrainSegmentSubClass
	 * Size -> 0x0000 (FullSize[0x0330] - InheritedSize[0x0330])
	 */
	class ATrainSegmentSubClass : public ATrainSegmentCode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TS_Manager
	 * Size -> 0x0330 (FullSize[0x0658] - InheritedSize[0x0328])
	 */
	class ATS_Manager : public AActor
	{
	public:
		TMap<class FString, int32_t>                               EntrancesIndex;                                          // 0x0328(0x0050) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TMap<class FString, int32_t>                               EntDataIndex;                                            // 0x0378(0x0050) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       TempDebA;                                                // 0x03C8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TempDebB;                                                // 0x03C9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TempDebC;                                                // 0x03CA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOWR[0x5];                                   // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class FString>                               EntrencesReverseIndex;                                   // 0x03D0(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTS_EntrenceData>                            EntrencesData;                                           // 0x0420(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    NextIndexGen;                                            // 0x0430(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    raidDifficultyLevel;                                     // 0x0434(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RaidedEntrances;                                         // 0x0438(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       InstanceReady;                                           // 0x0448(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKOV[0x7];                                   // 0x0449(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              SaveSpace0;                                              // 0x0450(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace1;                                              // 0x0460(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace2;                                              // 0x0470(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              SaveSpace3;                                              // 0x0480(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              MapUserEntrences[0x50];                                  // 0x0490(0x0050) UNKNOWN PROPERTY: SetProperty DrugDealerSimulator.TS_Manager.MapUserEntrences
		TArray<struct FTS_ConnectionData>                          EntConnections;                                          // 0x04E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FTS_ConnectionWorkUpgrade>                   AvailableConnectionUpgrades;                             // 0x04F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     UpgradesIndex;                                           // 0x0500(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    BaseStartWorkers;                                        // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseWorkersEffieciency;                                  // 0x0554(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PricePerHour;                                            // 0x0558(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeterDigBasePrice;                                       // 0x055C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeterDigSpeedPerWorkerPerGameHour;                       // 0x0560(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DigTimeHours;                                            // 0x0564(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDigTimeHoursAbsClamp;                                 // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorkersWalkBaseSpeedMetersPerGameHour;                   // 0x056C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWorkersWalkSpeedAbsClamp;                             // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DugReportStepProgress;                                   // 0x0574(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewEntrencePrice;                                        // 0x0578(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntranceRaidRecoveryPrice;                               // 0x057C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RespectWorkingHours;                                     // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLS6[0x3];                                   // 0x0581(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartWorkingHour;                                        // 0x0584(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndWorkingHour;                                          // 0x0588(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FZ7[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EntranceClass;                                           // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DEARaidSeekSpeedMetersPerGameHour;                       // 0x0598(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDEASeekSpeedAbsClamp;                                 // 0x059C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AfterRaidCoolDownHours;                                  // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DEARaidSeekBaseDeep;                                     // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            DEARaidSeekDeep;                                         // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DEARaidSeekSpeed;                                        // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DEARaidReportStepProgress;                               // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS4Q[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTS_RaidLog>                                 RaidLog;                                                 // 0x05D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZPHX[0x18];                                  // 0x05E0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      fRDT;                                                    // 0x05F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TempDigDistancePerc;                                     // 0x05FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastMoneyTake;                                           // 0x0600(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastDugDistance;                                         // 0x0604(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastMoneyAmount;                                         // 0x0608(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastEndRaidTime;                                         // 0x060C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFOE[0x20];                                  // 0x0610(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastRaidConnectionLoss;                                  // 0x0630(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastRaidEntrancesLoss;                                   // 0x0634(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LastRaidUpgradeLoss;                                     // 0x0638(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugDigSpeedFactor;                                     // 0x063C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StateRecalcMinTime;                                      // 0x0640(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StateRecalcMinFrames;                                    // 0x0644(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NonCalcFrames;                                           // 0x0648(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NonCalcTime;                                             // 0x064C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TunnelsBeeingRaided;                                     // 0x0650(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCooldownLock;                                         // 0x0651(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RaidReported;                                            // 0x0652(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q87P[0x1];                                   // 0x0653(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ParallelMethodExecutionTest;                             // 0x0654(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool ValidateIndex();
		bool ValidateActorIndex(int32_t ValidationIndex);
		int32_t TranslateActorToDataIndex(int32_t SeekActorIndex);
		void StartDEARaid(int32_t EntranceIndex, int32_t DeepSeek, float CurrentTime);
		void SpawnEntranceAndRegister();
		void SetRaidedState(bool newState);
		void SetDebDigFactor(float NewValue);
		int32_t ReserveAndGetNextActorIndex();
		void ReportConnRaidProgress(int32_t ConnectionIndex, float Progress);
		void ReportConnectionDigProgress(int32_t ConnectionIndex, float Progress);
		bool ReopenEntrance(int32_t EntranceActorIndex);
		void RemoveConnection(int32_t ConnectionIndex);
		void RegisterOnLoadTunnel(class ATS_TunnelEntrence** ThisEntrence);
		bool RegisterNewEntrance(class ATS_TunnelEntrence* NewBuildedEntrance);
		void RecoverData();
		void RecalcTunnelsRates();
		void RecalcProgressReportsForConn(int32_t ConnectionIndex);
		void RecalcProgressReports();
		void PrintUpgDataForConn(int32_t ConnIndex);
		void PrintUpgData();
		void PrintRaidMessage(int32_t ActionType, int32_t SubactionType, const class FString& ObjectA, const class FString& ObjectB);
		void PrintEntData();
		void PrintDestinationData(const struct FTS_AvailableDestinations& InputData);
		void PrintConnData();
		void PrepareDataForSave();
		void LogRaidAction(float Time, int32_t Type, int32_t objA, int32_t objB, float adtValue);
		bool IsUpgradeVisibleInConn(int32_t ConnectionIndex, int32_t UpgradeIndex);
		bool IsUpgradeBoughtInConn(int32_t ConnectionIndex, int32_t UpgradeIndex);
		bool IsUpgradeAvailableForConn(int32_t ConnectionIndex, int32_t UpgradeIndex);
		bool IsTunnelSystemBeeingRaided();
		bool HasUpgradeByIndex(int32_t checkIndex);
		bool HasEntrenceRegisteredByActor(class ATS_TunnelEntrence** EntrenceActor);
		bool HasEntrenceRegistered(const class FString& SeekName);
		void GlobalRaidStart(int32_t EntranceIndex, int32_t GameDifficulty, float CurrentTime);
		struct FTS_ConnectionWorkUpgrade GetUpgradeDataReferenced(int32_t UpgradeIndex);
		struct FTS_ConnectionWorkUpgrade GetUpgradeData(int32_t UpgradeIndex);
		float GetRaidSpeedSeek(int32_t GameDifficultyLevel);
		int32_t GetRaidDeepSeek(int32_t GameDifficultyLevel);
		float GetNotPayedDistance(int32_t ConnectionIndex);
		TMap<class FString, int32_t> GetEntrencesData();
		int32_t GetEntrenceInnerIndexByActor(class ATS_TunnelEntrence** EntrenceActor);
		int32_t GetEntrenceInnerIndex(const class FString& SeekName);
		class FString GetEntranceName(int32_t seekEntranceIndex);
		float GetCurrentGameTime();
		struct FTS_ConnState GetConnectionStatesConst(int32_t ConnectionIndex);
		struct FTS_ConnState GetConnectionStates(int32_t ConnectionIndex);
		float GetConnectionMeterRate(int32_t ConnectionIndex);
		bool GetAvailableTeleportDestinations(int32_t InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination);
		bool GetAvailableDigDestinations(int32_t InputEntranceActorIndex, TArray<struct FTS_AvailableDestinations>* OutDestination);
		int32_t FindConnectionIndex(int32_t FirstEntrenceIndex, int32_t SecondEntrenceIndex);
		void DEARaidEnd(int32_t ConnectionsLost, int32_t EntrancesLost, int32_t ArrestedDepositedCount);
		void CreateUpgradesIndex();
		int32_t CreateNewConnection(int32_t FirstEntrenceIndex, int32_t SecondEntrenceIndex);
		void ConnectionStartRaidEvent(int32_t EntranceIndex);
		void ConnectionRequiresMoney(int32_t ConnectionIndex);
		void ConnectionRaidedEvent(int32_t ConnectionIndex);
		void ConnectionRaided(int32_t ConnectionIndex, float StartRaidTime, float EndRaidTime, int32_t parentChain);
		void ConnectionDone(int32_t ConnectionIndex);
		void CalcNextIndexBasedOnIndex();
		bool BuyUpgradeForConn(int32_t ConnectionIndex, int32_t UpgradeIndex);
		void AfterRaidRelease();
		int32_t AddNewEntrence(class ATS_TunnelEntrence** EntrenceActor);
		int32_t AddMoneyToConnection(int32_t ConnectionIndex, float moneyAmount);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.TS_TunnelEntrence
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ATS_TunnelEntrence : public AActor
	{
	public:
		int32_t                                                    ManagerIndex;                                            // 0x0328(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ManagerDataIndex;                                        // 0x032C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATS_Manager*                                         ManagerPtr;                                              // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UserTunnel;                                              // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartGameManaged;                                        // 0x0339(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MQTH[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetManagerIndex(int32_t NewIndex);
		bool NeedStartManage();
		int32_t GetDataIndex();
		TArray<class ATS_TunnelEntrence*> GetAvailableDestinations();
		int32_t GetActorIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WeatherHumanFactors
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UWeatherHumanFactors : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WeatherHumanSense
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UWeatherHumanSense : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WeatherProfile
	 * Size -> 0x0108 (FullSize[0x0430] - InheritedSize[0x0328])
	 */
	class AWeatherProfile : public AActor
	{
	public:
		int32_t                                                    yearDaysLen;                                             // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      defaultSunrise;                                          // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      defaultSunset;                                           // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FE70[0x4];                                   // 0x0334(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASeasonProfile*>                              Seasons;                                                 // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AWorldTimeAndConditions*                             rootHandler;                                             // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       inited;                                                  // 0x0350(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUDL[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATimeProfile*                                        currentTimeInstance;                                     // 0x0358(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    seasonsDefined;                                          // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PGC2[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              sunDataSunrises;                                         // 0x0368(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              sunDataSunsets;                                          // 0x0378(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonScheme;                                            // 0x0388(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonBasicTemperature;                                  // 0x0398(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              seasonNightTemperature;                                  // 0x03A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      totalSeasonWage;                                         // 0x03B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4ALJ[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            seasonA;                                                 // 0x03C0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            seasonB;                                                 // 0x03D0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactA;                                                 // 0x03E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              impactB;                                                 // 0x03F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    daysCounter;                                             // 0x0400(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       tempTest;                                                // 0x0404(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JP5F[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASeasonProfile*                                      tempSeasonProfileA;                                      // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASeasonProfile*                                      tempSeasonProfileB;                                      // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAirProfile*                                         tempAirProfileA;                                         // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAirProfile*                                         tempAirProfileB;                                         // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5RNZ[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (PADDING)

	public:
		float YearPassed();
		void Init();
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WorldPhysicsComponent
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UWorldPhysicsComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WorldPhysicsConsts
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class AWorldPhysicsConsts : public AActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WorldTimeAndConditions
	 * Size -> 0x01F0 (FullSize[0x0518] - InheritedSize[0x0328])
	 */
	class AWorldTimeAndConditions : public AActor
	{
	public:
		class UClass*                                              myTimeProfile;                                           // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATimeProfile*                                        timeProfileInstance;                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       disableWeatherSystem;                                    // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y89X[0x7];                                   // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAirComponent*                                       myBaseAirProfile;                                        // 0x0340(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      earlyWSCeremonyHoursLength;                              // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      earlyWSCloudsLevel;                                      // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      earlyWSRainLevel;                                        // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      earlyWSFogLevel;                                         // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCepWeatherComponent*                                weatherProfileInstance;                                  // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       disableSkyCalculations;                                  // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYMD[0x3];                                   // 0x0361(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      standardGametimeMultiplier;                              // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      standardCloudSpeed;                                      // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU9V[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              sunAstralProfile;                                        // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAstralProfile*                                      sunBaseInstance;                                         // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              sunRotator;                                              // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              moonAstralProfile;                                       // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAstralProfile*                                      moonInstance;                                            // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              moonRotator;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      calculationInterval;                                     // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    minNonCalcFrames;                                        // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    innerCalcFrameSkip;                                      // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1PE[0x4];                                   // 0x03AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWTACFactorsComponent*                               currentFactors;                                          // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorldPhysicsComponent*                              planetPhysicsData;                                       // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       weatherSpectrateMode;                                    // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MIU[0x13];                                  // 0x03C1(0x0013) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       loadStarted;                                             // 0x03D4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFSL[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      absmin_UltraSKyTime;                                     // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunrise_UltraSkyTime;                                    // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      noon_UltraSkyTime;                                       // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      sunset_UltraSkyTime;                                     // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      absmax_UltraSKyTime;                                     // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      moonPhaseLength;                                         // 0x03EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       moonReportedShadows;                                     // 0x03F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       sunReportedShadows;                                      // 0x03F1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       earlyNiceWeatherEnabled;                                 // 0x03F2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       earlyWSCeremonyEnd;                                      // 0x03F3(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    earlyWSEnabledDay;                                       // 0x03F4(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      earlyWSEnabledHour;                                      // 0x03F8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      debSaveMinute;                                           // 0x03FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    yearDaysLen;                                             // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USOS[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UDayConditionsLogger_UE*>                     seasonClouds;                                            // 0x0408(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UDayConditionsLogger_UE*>                     seasonRainDetails;                                       // 0x0418(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UDayConditionsLogger_UE*>                     seasonHeatProfile;                                       // 0x0428(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UDayConditionsLogger_UE*>                     seasonFogLevels;                                         // 0x0438(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       debugMode;                                               // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKOH[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    debHour;                                                 // 0x044C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    debDay;                                                  // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    debMinute;                                               // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      debTimeSpeed;                                            // 0x0458(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             actorLocation;                                           // 0x045C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            actorRotation;                                           // 0x0468(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q290[0x24];                                  // 0x0474(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASeasonProfile*                                      tempSeasonProfileA;                                      // 0x0498(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ASeasonProfile*                                      tempSeasonProfileB;                                      // 0x04A0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileA;                                         // 0x04A8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAirComponent*                                       tempAirProfileB;                                         // 0x04B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralA;                                       // 0x04B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USeasonAstralComponent*                              tempSeasonAstralB;                                       // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QG4Z[0x50];                                  // 0x04C8(0x0050) MISSED OFFSET (PADDING)

	public:
		class ATimeProfile* TimeProfile();
		void StoreInSaveSpace(int32_t Index, float Val);
		void StartRain();
		void StartFog();
		void ShadowsSettingsChanged();
		void SetUltraSkyInit();
		void SetTimeMulptiplier(float newFactor, float propagationTime);
		void SetTime(int32_t dayValue, int32_t hourValue, int32_t minuteValue);
		void SaveDataSnapshot();
		void ReInitLoggers();
		void RecoverDataSnapshot(bool recoverTime);
		void PureInit();
		void PoliceArrestTimeShift();
		void NoticeCalcPhaseDone();
		void MarkNewLoad();
		bool IsUltraSkyInited();
		bool IsCurrentlyRaining();
		bool IsAfterNoon();
		void InWorldInitiated();
		void InnerDisableWeatherSystem();
		void Init();
		bool HasFog();
		float GetSunPowerAfterBounced(float cAngle);
		float GetSunPower();
		float GetSunLigthPower();
		float GetRainValue();
		class UDayConditionsLogger_UE* GetRainLogger(int32_t dayNum);
		float GetMoonOrbitProgress();
		float GetMoonOrbitAngle();
		bool GetInitiationState();
		class UDayConditionsLogger_UE* GetHeatLogger(int32_t dayNum);
		float GetFromSaveSpace(int32_t Index);
		class UDayConditionsLogger_UE* GetFogLogger(int32_t dayNum);
		float GetCurrentTimeForUltraSky();
		bool GetCurrentSunShadows();
		float GetCurrentSunPower();
		float GetCurrentSunOrbit();
		float GetCurrentSunDistance();
		float GetCurrentSunAngle();
		float GetCurrentStarsIntensity();
		void GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows);
		float GetCurrentNigthBrightness();
		bool GetCurrentMoonShadows();
		float GetCurrentMoonPhase();
		float GetCurrentMoonBrigthness();
		int32_t GetCurrentIntSeconds();
		int32_t GetCurrentIntMinute();
		int32_t GetCurrentIntHour();
		int32_t GetCurrentIntDay();
		float GetCurrentFogLevel();
		float GetCurrentFloatMinute();
		float GetCurrentFloatHour();
		float GetCurrentFloatDay();
		float GetCurrentCloudsSpeed();
		float GetCurrentCloudsLevel();
		float GetCurrentBrightness();
		class UDayConditionsLogger_UE* GetCloudLogger(int32_t dayNum);
		float GetCalcSunDistFactor(float baseVal);
		float GetCalcSunDistanceFactor();
		class UAirComponent* getBasicAirProfile();
		float GetAnyTimeSunPower(int32_t dayNum, float hourMark);
		float GetAnyTimeCloudsSunFactor(int32_t dayNum, float hourMark);
		float GetAnyTimeCloudsLevel(int32_t dayNum, float hourMark);
		void EndRain();
		void EndFog();
		void EnableWeatherSystem();
		void CalcSunRaysAngle();
		void CalcSunPhysics();
		void CalcInteraction();
		void Calc();
		void AddTime(float hoursValue, float minuteValue);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class AWorldTimeAndConditionsCurFactors : public AActor
	{
	public:
		unsigned char                                              UnknownData_XEZD[0x28];                                  // 0x0328(0x0028) MISSED OFFSET (PADDING)

	public:
		void noticeFactors(float DeltaTime, float currentRainChance, float sunPower);
		static UClass* StaticClass();
	};

	/**
	 * Class DrugDealerSimulator.WTACFactorsComponent
	 * Size -> 0x0080 (FullSize[0x0170] - InheritedSize[0x00F0])
	 */
	class UWTACFactorsComponent : public UActorComponent
	{
	public:
		TArray<float>                                              factorFloats;                                            // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    saveT1;                                                  // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    serializedFloatsObjects;                                 // 0x0104(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6ZC[0x20];                                  // 0x0108(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   allocated;                                               // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD65[0x44];                                  // 0x012C(0x0044) MISSED OFFSET (PADDING)

	public:
		void SetSunVisibility(bool newVisibility);
		void SetSunRaysAngle(float newSunRays);
		void SetSunPower(float newPower);
		void SetSunOrbitProgress(float deg);
		void SetSunOrbitDistance(float newDistance);
		void SetSunOrbitAngle(float newOrbitAngle);
		void SetSunLumens(float newLumensValue);
		void SetStarsIntensity(float NewValue);
		void SetRainValue(float newRainValue);
		void SetRainState(bool newState);
		void SetOrbitPhase(float shPassed);
		void SetMoonOrbit(float newProgress);
		void SetFogState(bool newState);
		void SetFogLevel(float NewLevel);
		void SetFactorFloatData(int32_t Index, float fVal);
		void SetCloudsLevel(float NewLevel);
		void SetBrigthnesslevel(float newBrigthnessLevel);
		void SetAtmosphereSunReflections(float newAtmosphereReflections);
		void Reinitialize();
		void noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower);
		bool NeedsReinitialization();
		float GetSunOrbitAbsoluteDeg();
		float GetFactorFloatData(int32_t Index);
		bool CanRecover();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
