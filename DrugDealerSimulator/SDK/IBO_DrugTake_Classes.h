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
	 * BlueprintGeneratedClass IBO_DrugTake.IBO_DrugTake_C
	 * Size -> 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
	 */
	class AIBO_DrugTake_C : public AinteractiveBaseObject_C
	{
	public:
		class AActiveSubstance*                                    TakeSubstance;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
