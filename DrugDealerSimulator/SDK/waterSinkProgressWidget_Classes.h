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
	 * WidgetBlueprintGeneratedClass waterSinkProgressWidget.waterSinkProgressWidget_C
	 * Size -> 0x0010 (FullSize[0x0218] - InheritedSize[0x0208])
	 */
	class UwaterSinkProgressWidget_C : public UUserWidget
	{
	public:
		class UProgressBar*                                        progSinkWater;                                           // 0x0208(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AinteractiveWaterSinkBP_C*                           sinkRef;                                                 // 0x0210(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
