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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText
	 */
	struct UBlueprintHelpers_C_DrugFormToText_Params
	{
	public:
		EdrugForm                                                  drugForm;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp
	 */
	struct UBlueprintHelpers_C_GetHourTimestamp_Params
	{
	public:
		class AdayTimeControler_C*                                 dayTimeCon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IntTimestamp;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget
	 */
	struct UBlueprintHelpers_C_DisplayConfirmWidget_Params
	{
	public:
		class UObject*                                             Querier;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Descritpion;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       ShowMouseAfter;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ActionID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel
	 */
	struct UBlueprintHelpers_C_GetDealerLevel_Params
	{
	public:
		float                                                      DealerExp;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutLevel;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NextLevelProgress;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetMixName
	 */
	struct UBlueprintHelpers_C_GetMixName_Params
	{
	public:
		struct FMixProportionsStruct                               InMix;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                substanceName;                                           // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData
	 */
	struct UBlueprintHelpers_C_MixToDrugData_Params
	{
	public:
		struct FMixProportionsStruct                               MixProportions;                                          // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FdrugData                                           OutData;                                                 // 0x0000(0x00B0)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough
	 */
	struct UBlueprintHelpers_C_SubstanceCloseEnough_Params
	{
	public:
		struct FMixProportionsStruct                               Substance1;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FMixProportionsStruct                               Substance2;                                              // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		float                                                      ToleranceLevel;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllowNameMissmatch;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CloseEnough;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NameMismatch;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing
	 */
	struct UBlueprintHelpers_C_GramsToStackSizing_Params
	{
	public:
		int32_t                                                    Grams;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutMaxStack;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta
	 */
	struct UBlueprintHelpers_C_GetDrugMeta_Params
	{
	public:
		class FName                                                DrugID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FNewDrugData                                        DrugMeta;                                                // 0x0000(0x0108)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon
	 */
	struct UBlueprintHelpers_C_SubstanceFormToIcon_Params
	{
	public:
		EdrugForm                                                  drugForm;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Gramature;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          IconOut;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag
	 */
	struct UBlueprintHelpers_C_GetBalanceFlag_Params
	{
	public:
		class FName                                                FlagID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFlagStruct                                         FlagData;                                                // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       FlagExists;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName
	 */
	struct UBlueprintHelpers_C_StringIDToSubstanceName_Params
	{
	public:
		class FString                                              stringID;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       found;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                OutSubstanceName;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions
	 */
	struct UBlueprintHelpers_C_DrugToMixProportions_Params
	{
	public:
		struct FdrugData                                           InDrugData;                                              // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FMixProportionsStruct                               OutProportions;                                          // 0x0000(0x0040)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta
	 */
	struct UBlueprintHelpers_C_GetSaleAreaMeta_Params
	{
	public:
		class FName                                                AreaID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FSaleAreaData                                       OutMeta;                                                 // 0x0000(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid
	 */
	struct UBlueprintHelpers_C_IsEmptyGuid_Params
	{
	public:
		struct FGuid                                               Guid;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEmpty;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta
	 */
	struct UBlueprintHelpers_C_GetEquipmentMeta_Params
	{
	public:
		class FName                                                EquipmentID;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FappartmentEquipment                                EqMeta;                                                  // 0x0000(0x0050)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta
	 */
	struct UBlueprintHelpers_C_GetItemMeta_Params
	{
	public:
		class FName                                                ItemID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FNewItemStructure                                   ItemMeta;                                                // 0x0000(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames
	 */
	struct UBlueprintHelpers_C_ParseItemsToNames_Params
	{
	public:
		TArray<struct FinventoryItemStruct>                        Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        OutNames;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames
	 */
	struct UBlueprintHelpers_C_ParseEquipmentToNames_Params
	{
	public:
		TArray<struct FappartmentEquipment>                        eqList;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                                        OutNames;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
