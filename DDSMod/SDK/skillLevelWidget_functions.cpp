
#include "SDK.h"

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function skillLevelWidget.skillLevelWidget_C.GetToolTipWidget_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UskillLevelWidget_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.GetToolTipWidget_1");

	UskillLevelWidget_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function skillLevelWidget.skillLevelWidget_C.updateActivity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UskillLevelWidget_C::updateActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.updateActivity");

	UskillLevelWidget_C_updateActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function skillLevelWidget.skillLevelWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UskillLevelWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.Construct");

	UskillLevelWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function skillLevelWidget.skillLevelWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UskillLevelWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.Tick");

	UskillLevelWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function skillLevelWidget.skillLevelWidget_C.SetValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          skillLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SkillMax                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UskillLevelWidget_C::SetValues(float skillLevel, float SkillMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.SetValues");

	UskillLevelWidget_C_SetValues_Params params;
	params.skillLevel = skillLevel;
	params.SkillMax = SkillMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function skillLevelWidget.skillLevelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UskillLevelWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UskillLevelWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function skillLevelWidget.skillLevelWidget_C.ExecuteUbergraph_skillLevelWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UskillLevelWidget_C::ExecuteUbergraph_skillLevelWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function skillLevelWidget.skillLevelWidget_C.ExecuteUbergraph_skillLevelWidget");

	UskillLevelWidget_C_ExecuteUbergraph_skillLevelWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
