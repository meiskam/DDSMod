
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::reconstructSourceIndexes()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes");

	UappartmentModeWidget_C_reconstructSourceIndexes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::renderObjectList()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList");

	UappartmentModeWidget_C_renderObjectList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UappartmentModeWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.Construct");

	UappartmentModeWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   AppartmentRef                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::SetupWidget(class ArentAppartmentArea_C* AppartmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget");

	UappartmentModeWidget_C_SetupWidget_Params params;
	params.AppartmentRef = AppartmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::setNewObjectGizmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo");

	UappartmentModeWidget_C_setNewObjectGizmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::selectIndexUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp");

	UappartmentModeWidget_C_selectIndexUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::selectIndexDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown");

	UappartmentModeWidget_C_selectIndexDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex
// (BlueprintCallable, BlueprintEvent)

void UappartmentModeWidget_C::removeSelectedIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex");

	UappartmentModeWidget_C_removeSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentModeWidget_C::ExecuteUbergraph_appartmentModeWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget");

	UappartmentModeWidget_C_ExecuteUbergraph_appartmentModeWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
