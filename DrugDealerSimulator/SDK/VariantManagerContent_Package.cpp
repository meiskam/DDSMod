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
	 * 		RVA    -> 0x0039BFE0
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetVariantSet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetVariantSet");
		
		ULevelVariantSets_GetVariantSet_Params params {};
		params.VariantSetIndex = VariantSetIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BF20
	 * 		Name   -> Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t ULevelVariantSets::GetNumVariantSets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSets.GetNumVariantSets");
		
		ULevelVariantSets_GetNumVariantSets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULevelVariantSets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULevelVariantSets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C2A0
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      VariantSetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VariantName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");
		
		ALevelVariantSetsActor_SwitchOnVariantByName_Params params {};
		params.VariantSetName = VariantSetName;
		params.VariantName = VariantName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C1E0
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            VariantSetIndex                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");
		
		ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params {};
		params.VariantSetIndex = VariantSetIndex;
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C140
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ULevelVariantSets*                           InVariantSets                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ALevelVariantSetsActor::SetLevelVariantSets(class ULevelVariantSets* InVariantSets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");
		
		ALevelVariantSetsActor_SetLevelVariantSets_Params params {};
		params.InVariantSets = InVariantSets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BE50
	 * 		Name   -> Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bLoad                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");
		
		ALevelVariantSetsActor_GetLevelVariantSets_Params params {};
		params.bLoad = bLoad;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelVariantSetsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelVariantSetsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueMaterial.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueMaterial::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPropertyValueVisibility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyValueVisibility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C1C0
	 * 		Name   -> Function VariantManagerContent.Variant.SwitchOn
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVariant::SwitchOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SwitchOn");
		
		UVariant_SwitchOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C070
	 * 		Name   -> Function VariantManagerContent.Variant.SetDisplayText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariant::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.SetDisplayText");
		
		UVariant_SetDisplayText_Params params {};
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BEF0
	 * 		Name   -> Function VariantManagerContent.Variant.GetNumActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UVariant::GetNumActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetNumActors");
		
		UVariant_GetNumActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BDD0
	 * 		Name   -> Function VariantManagerContent.Variant.GetDisplayText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UVariant::GetDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetDisplayText");
		
		UVariant_GetDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BD40
	 * 		Name   -> Function VariantManagerContent.Variant.GetActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            ActorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UVariant::GetActor(int32_t ActorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.Variant.GetActor");
		
		UVariant_GetActor_Params params {};
		params.ActorIndex = ActorIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantObjectBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantObjectBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039C070
	 * 		Name   -> Function VariantManagerContent.VariantSet.SetDisplayText
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FText                                        NewDisplayText                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVariantSet::SetDisplayText(const class FText& NewDisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.SetDisplayText");
		
		UVariantSet_SetDisplayText_Params params {};
		params.NewDisplayText = NewDisplayText;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BF50
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetVariant
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            VariantIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVariant* UVariantSet::GetVariant(int32_t VariantIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetVariant");
		
		UVariantSet_GetVariant_Params params {};
		params.VariantIndex = VariantIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BEF0
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetNumVariants
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UVariantSet::GetNumVariants()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetNumVariants");
		
		UVariantSet_GetNumVariants_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0039BDD0
	 * 		Name   -> Function VariantManagerContent.VariantSet.GetDisplayText
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UVariantSet::GetDisplayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VariantManagerContent.VariantSet.GetDisplayText");
		
		UVariantSet_GetDisplayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVariantSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVariantSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}

}


