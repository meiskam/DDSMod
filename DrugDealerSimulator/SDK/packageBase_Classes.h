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
	 * BlueprintGeneratedClass packageBase.packageBase_C
	 * Size -> 0x0070 (FullSize[0x0498] - InheritedSize[0x0428])
	 */
	class ApackageBase_C : public AinteractiveBaseObject_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0428(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class URamaSaveComponent*                                  RamaSave_1;                                              // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FinventoryItemStruct>                        contents;                                                // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		TArray<int32_t>                                            Quantities;                                              // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FSlateColor                                         colorText;                                               // 0x0460(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       AllAdded;                                                // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3ZW6[0x3];                                   // 0x0489(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      sumSize;                                                 // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AworldMapMarker_C*                                   MarkerRef;                                               // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void takeContents();
		void Setup(TArray<struct FinventoryItemStruct> contents, TArray<int32_t> Quantities, float TotalSize, float TotalWeight);
		void ExecuteUbergraph_packageBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
