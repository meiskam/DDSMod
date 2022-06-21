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
	 * 		Name   -> Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.removeMe
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UnarratorSubtitlesWidget_C::removeMe()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.removeMe");
		
		UnarratorSubtitlesWidget_C_removeMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UnarratorSubtitlesWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick");
		
		UnarratorSubtitlesWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Monologue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UnarratorSubtitlesWidget_C::Setup(const class FText& Monologue, float Duration, const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup");
		
		UnarratorSubtitlesWidget_C_Setup_Params params {};
		params.Monologue = Monologue;
		params.Duration = Duration;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UnarratorSubtitlesWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct");
		
		UnarratorSubtitlesWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UnarratorSubtitlesWidget_C::ExecuteUbergraph_narratorSubtitlesWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget");
		
		UnarratorSubtitlesWidget_C_ExecuteUbergraph_narratorSubtitlesWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UnarratorSubtitlesWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UnarratorSubtitlesWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass narratorSubtitlesWidget.narratorSubtitlesWidget_C");
		return ptr;
	}

}


