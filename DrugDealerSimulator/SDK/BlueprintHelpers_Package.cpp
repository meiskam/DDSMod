/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EdrugForm                                          drugForm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OutText                                                    (Parm, OutParm)
	 */
	void UBlueprintHelpers_C::STATIC_DrugFormToText(EdrugForm drugForm, class UObject* __WorldContext, class FText* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DrugFormToText");
		
		UBlueprintHelpers_C_DrugFormToText_Params params {};
		params.drugForm = drugForm;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AdayTimeControler_C*                         dayTimeCon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IntTimestamp                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetHourTimestamp(class AdayTimeControler_C* dayTimeCon, class UObject* __WorldContext, int32_t* IntTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetHourTimestamp");
		
		UBlueprintHelpers_C_GetHourTimestamp_Params params {};
		params.dayTimeCon = dayTimeCon;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IntTimestamp != nullptr)
			*IntTimestamp = params.IntTimestamp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Querier                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Descritpion                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShowMouseAfter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ActionID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_DisplayConfirmWidget(class UObject* Querier, const class FText& Title, const class FText& Descritpion, bool ShowMouseAfter, const class FString& ActionID, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DisplayConfirmWidget");
		
		UBlueprintHelpers_C_DisplayConfirmWidget_Params params {};
		params.Querier = Querier;
		params.Title = Title;
		params.Descritpion = Descritpion;
		params.ShowMouseAfter = ShowMouseAfter;
		params.ActionID = ActionID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DealerExp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              NextLevelProgress                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetDealerLevel(float DealerExp, class UObject* __WorldContext, int32_t* OutLevel, float* NextLevelProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetDealerLevel");
		
		UBlueprintHelpers_C_GetDealerLevel_Params params {};
		params.DealerExp = DealerExp;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevel != nullptr)
			*OutLevel = params.OutLevel;
		if (NextLevelProgress != nullptr)
			*NextLevelProgress = params.NextLevelProgress;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetMixName
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FMixProportionsStruct                       InMix                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        substanceName                                              (Parm, OutParm)
	 */
	void UBlueprintHelpers_C::STATIC_GetMixName(const struct FMixProportionsStruct& InMix, class UObject* __WorldContext, class FText* substanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetMixName");
		
		UBlueprintHelpers_C_GetMixName_Params params {};
		params.InMix = InMix;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (substanceName != nullptr)
			*substanceName = params.substanceName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMixProportionsStruct                       MixProportions                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FdrugData                                   OutData                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_MixToDrugData(const struct FMixProportionsStruct& MixProportions, class UObject* __WorldContext, struct FdrugData* OutData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.MixToDrugData");
		
		UBlueprintHelpers_C_MixToDrugData_Params params {};
		params.MixProportions = MixProportions;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutData != nullptr)
			*OutData = params.OutData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMixProportionsStruct                       Substance1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       Substance2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              ToleranceLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowNameMissmatch                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CloseEnough                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NameMismatch                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlueprintHelpers_C::STATIC_SubstanceCloseEnough(const struct FMixProportionsStruct& Substance1, const struct FMixProportionsStruct& Substance2, float ToleranceLevel, bool AllowNameMissmatch, class UObject* __WorldContext, bool* CloseEnough, bool* NameMismatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.SubstanceCloseEnough");
		
		UBlueprintHelpers_C_SubstanceCloseEnough_Params params {};
		params.Substance1 = Substance1;
		params.Substance2 = Substance2;
		params.ToleranceLevel = ToleranceLevel;
		params.AllowNameMissmatch = AllowNameMissmatch;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CloseEnough != nullptr)
			*CloseEnough = params.CloseEnough;
		if (NameMismatch != nullptr)
			*NameMismatch = params.NameMismatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Grams                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OutMaxStack                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GramsToStackSizing(int32_t Grams, class UObject* __WorldContext, int32_t* OutMaxStack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GramsToStackSizing");
		
		UBlueprintHelpers_C_GramsToStackSizing_Params params {};
		params.Grams = Grams;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMaxStack != nullptr)
			*OutMaxStack = params.OutMaxStack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        DrugID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FNewDrugData                                DrugMeta                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetDrugMeta(const class FName& DrugID, class UObject* __WorldContext, bool* Success, struct FNewDrugData* DrugMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetDrugMeta");
		
		UBlueprintHelpers_C_GetDrugMeta_Params params {};
		params.DrugID = DrugID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (DrugMeta != nullptr)
			*DrugMeta = params.DrugMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EdrugForm                                          drugForm                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Gramature                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_SubstanceFormToIcon(EdrugForm drugForm, int32_t Gramature, class UObject* __WorldContext, class UTexture2D** IconOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.SubstanceFormToIcon");
		
		UBlueprintHelpers_C_SubstanceFormToIcon_Params params {};
		params.drugForm = drugForm;
		params.Gramature = Gramature;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconOut != nullptr)
			*IconOut = params.IconOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        FlagID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFlagStruct                                 FlagData                                                   (Parm, OutParm, HasGetValueTypeHash)
	 * 		bool                                               FlagExists                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlueprintHelpers_C::STATIC_GetBalanceFlag(const class FName& FlagID, class UObject* __WorldContext, struct FFlagStruct* FlagData, bool* FlagExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetBalanceFlag");
		
		UBlueprintHelpers_C_GetBalanceFlag_Params params {};
		params.FlagID = FlagID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FlagData != nullptr)
			*FlagData = params.FlagData;
		if (FlagExists != nullptr)
			*FlagExists = params.FlagExists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      stringID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        OutSubstanceName                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_StringIDToSubstanceName(const class FString& stringID, class UObject* __WorldContext, bool* found, class FName* OutSubstanceName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.StringIDToSubstanceName");
		
		UBlueprintHelpers_C_StringIDToSubstanceName_Params params {};
		params.stringID = stringID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (found != nullptr)
			*found = params.found;
		if (OutSubstanceName != nullptr)
			*OutSubstanceName = params.OutSubstanceName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   InDrugData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FMixProportionsStruct                       OutProportions                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_DrugToMixProportions(const struct FdrugData& InDrugData, class UObject* __WorldContext, struct FMixProportionsStruct* OutProportions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.DrugToMixProportions");
		
		UBlueprintHelpers_C_DrugToMixProportions_Params params {};
		params.InDrugData = InDrugData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutProportions != nullptr)
			*OutProportions = params.OutProportions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AreaID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSaleAreaData                               OutMeta                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetSaleAreaMeta(const class FName& AreaID, class UObject* __WorldContext, bool* Success, struct FSaleAreaData* OutMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetSaleAreaMeta");
		
		UBlueprintHelpers_C_GetSaleAreaMeta_Params params {};
		params.AreaID = AreaID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (OutMeta != nullptr)
			*OutMeta = params.OutMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGuid                                       Guid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEmpty                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlueprintHelpers_C::STATIC_IsEmptyGuid(const struct FGuid& Guid, class UObject* __WorldContext, bool* IsEmpty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.IsEmptyGuid");
		
		UBlueprintHelpers_C_IsEmptyGuid_Params params {};
		params.Guid = Guid;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEmpty != nullptr)
			*IsEmpty = params.IsEmpty;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EquipmentID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FappartmentEquipment                        EqMeta                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetEquipmentMeta(const class FName& EquipmentID, class UObject* __WorldContext, bool* Success, struct FappartmentEquipment* EqMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetEquipmentMeta");
		
		UBlueprintHelpers_C_GetEquipmentMeta_Params params {};
		params.EquipmentID = EquipmentID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (EqMeta != nullptr)
			*EqMeta = params.EqMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FNewItemStructure                           ItemMeta                                                   (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UBlueprintHelpers_C::STATIC_GetItemMeta(const class FName& ItemID, class UObject* __WorldContext, bool* Success, struct FNewItemStructure* ItemMeta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.GetItemMeta");
		
		UBlueprintHelpers_C_GetItemMeta_Params params {};
		params.ItemID = ItemID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (ItemMeta != nullptr)
			*ItemMeta = params.ItemMeta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FinventoryItemStruct>                Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                OutNames                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UBlueprintHelpers_C::STATIC_ParseItemsToNames(TArray<struct FinventoryItemStruct>* Items, class UObject* __WorldContext, TArray<class FName>* OutNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.ParseItemsToNames");
		
		UBlueprintHelpers_C_ParseItemsToNames_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (OutNames != nullptr)
			*OutNames = params.OutNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FappartmentEquipment>                eqList                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                OutNames                                                   (Parm, OutParm, ZeroConstructor)
	 */
	void UBlueprintHelpers_C::STATIC_ParseEquipmentToNames(TArray<struct FappartmentEquipment>* eqList, class UObject* __WorldContext, TArray<class FName>* OutNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BlueprintHelpers.BlueprintHelpers_C.ParseEquipmentToNames");
		
		UBlueprintHelpers_C_ParseEquipmentToNames_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (eqList != nullptr)
			*eqList = params.eqList;
		if (OutNames != nullptr)
			*OutNames = params.OutNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UBlueprintHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlueprintHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BlueprintHelpers.BlueprintHelpers_C");
		return ptr;
	}

}


