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
	 * BlueprintGeneratedClass additiveContainerBase.additiveContainerBase_C
	 * Size -> 0x005C (FullSize[0x082C] - InheritedSize[0x07D0])
	 */
	class AadditiveContainerBase_C : public AworkStationEquipmentBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UArrowComponent*                                     frontArrow;                                              // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    labelWidget;                                             // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FText                                                label;                                                   // 0x07E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       canHoldLiquids;                                          // 0x0800(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FDQ2[0x7];                                   // 0x0801(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            dynamicMaterial;                                         // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    lastSelectedLabel;                                       // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       labelDisableCancel;                                      // 0x0814(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CASR[0x3];                                   // 0x0815(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        labelColor;                                              // 0x0818(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      maxCapOverride;                                          // 0x0828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void changeLabel(bool setEmpty, const class FText& NewLabel, const struct FLinearColor& NewColor, int32_t Index);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void addSubstance();
		void setLabel();
		void showLabel();
		void hideLabel();
		void customiseLabel();
		void tryAddSubstance();
		void UserClickedConfirm(const class FString& ActionID);
		void UserClickedCancel(const class FString& ActionID);
		void ExecuteUbergraph_additiveContainerBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
