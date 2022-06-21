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
	 * BlueprintGeneratedClass BlueprintHelpers.BlueprintHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBlueprintHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_DrugFormToText(EdrugForm drugForm, class UObject* __WorldContext, class FText* OutText);
		void STATIC_GetHourTimestamp(class AdayTimeControler_C* dayTimeCon, class UObject* __WorldContext, int32_t* IntTimestamp);
		void STATIC_DisplayConfirmWidget(class UObject* Querier, const class FText& Title, const class FText& Descritpion, bool ShowMouseAfter, const class FString& ActionID, class UObject* __WorldContext);
		void STATIC_GetDealerLevel(float DealerExp, class UObject* __WorldContext, int32_t* OutLevel, float* NextLevelProgress);
		void STATIC_GetMixName(const struct FMixProportionsStruct& InMix, class UObject* __WorldContext, class FText* substanceName);
		void STATIC_MixToDrugData(const struct FMixProportionsStruct& MixProportions, class UObject* __WorldContext, struct FdrugData* OutData);
		void STATIC_SubstanceCloseEnough(const struct FMixProportionsStruct& Substance1, const struct FMixProportionsStruct& Substance2, float ToleranceLevel, bool AllowNameMissmatch, class UObject* __WorldContext, bool* CloseEnough, bool* NameMismatch);
		void STATIC_GramsToStackSizing(int32_t Grams, class UObject* __WorldContext, int32_t* OutMaxStack);
		void STATIC_GetDrugMeta(const class FName& DrugID, class UObject* __WorldContext, bool* Success, struct FNewDrugData* DrugMeta);
		void STATIC_SubstanceFormToIcon(EdrugForm drugForm, int32_t Gramature, class UObject* __WorldContext, class UTexture2D** IconOut);
		void STATIC_GetBalanceFlag(const class FName& FlagID, class UObject* __WorldContext, struct FFlagStruct* FlagData, bool* FlagExists);
		void STATIC_StringIDToSubstanceName(const class FString& stringID, class UObject* __WorldContext, bool* found, class FName* OutSubstanceName);
		void STATIC_DrugToMixProportions(const struct FdrugData& InDrugData, class UObject* __WorldContext, struct FMixProportionsStruct* OutProportions);
		void STATIC_GetSaleAreaMeta(const class FName& AreaID, class UObject* __WorldContext, bool* Success, struct FSaleAreaData* OutMeta);
		void STATIC_IsEmptyGuid(const struct FGuid& Guid, class UObject* __WorldContext, bool* IsEmpty);
		void STATIC_GetEquipmentMeta(const class FName& EquipmentID, class UObject* __WorldContext, bool* Success, struct FappartmentEquipment* EqMeta);
		void STATIC_GetItemMeta(const class FName& ItemID, class UObject* __WorldContext, bool* Success, struct FNewItemStructure* ItemMeta);
		void STATIC_ParseItemsToNames(TArray<struct FinventoryItemStruct>* Items, class UObject* __WorldContext, TArray<class FName>* OutNames);
		void STATIC_ParseEquipmentToNames(TArray<struct FappartmentEquipment>* eqList, class UObject* __WorldContext, TArray<class FName>* OutNames);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
