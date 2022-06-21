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
	 * 		Name   -> Function shadyMessageWidget.shadyMessageWidget_C.Setup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      MsgString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  userAvatar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PlayerMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UshadyMessageWidget_C::Setup(const class FText& UserName, const class FString& MsgString, class UTexture2D* userAvatar, bool PlayerMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.Setup");
		
		UshadyMessageWidget_C_Setup_Params params {};
		params.UserName = UserName;
		params.MsgString = MsgString;
		params.userAvatar = userAvatar;
		params.PlayerMessage = PlayerMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UshadyMessageWidget_C::ExecuteUbergraph_shadyMessageWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget");
		
		UshadyMessageWidget_C_ExecuteUbergraph_shadyMessageWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UshadyMessageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UshadyMessageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass shadyMessageWidget.shadyMessageWidget_C");
		return ptr;
	}

}


