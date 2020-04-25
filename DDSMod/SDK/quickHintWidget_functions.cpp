
#include "../SDK.h"

// Name: DDS, Version: 2020.4.21

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function quickHintWidget.quickHintWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UquickHintWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function quickHintWidget.quickHintWidget_C.Construct");

	UquickHintWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quickHintWidget.quickHintWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquickHintWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function quickHintWidget.quickHintWidget_C.Tick");

	UquickHintWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quickHintWidget.quickHintWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EquickHintType>    Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquickHintWidget_C::setup(const struct FText& Text, TEnumAsByte<EquickHintType> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function quickHintWidget.quickHintWidget_C.setup");

	UquickHintWidget_C_setup_Params params;
	params.Text = Text;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quickHintWidget.quickHintWidget_C.ExecuteUbergraph_quickHintWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquickHintWidget_C::ExecuteUbergraph_quickHintWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function quickHintWidget.quickHintWidget_C.ExecuteUbergraph_quickHintWidget");

	UquickHintWidget_C_ExecuteUbergraph_quickHintWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
