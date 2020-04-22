
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

// Function packageProductWidget.packageProductWidget_C.addToPlayerInventory
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllAdded                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::addToPlayerInventory(bool* AllAdded)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.addToPlayerInventory");

	UpackageProductWidget_C_addToPlayerInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllAdded != nullptr)
		*AllAdded = params.AllAdded;
}


// Function packageProductWidget.packageProductWidget_C.checkFitInventory
// (Public, BlueprintCallable, BlueprintEvent)

void UpackageProductWidget_C::checkFitInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.checkFitInventory");

	UpackageProductWidget_C_checkFitInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.renderPackageList
// (Public, BlueprintCallable, BlueprintEvent)

void UpackageProductWidget_C::renderPackageList()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.renderPackageList");

	UpackageProductWidget_C_renderPackageList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.addPackage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Size                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::addPackage(int Size, int quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.addPackage");

	UpackageProductWidget_C_addPackage_Params params;
	params.Size = Size;
	params.quantity = quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.generateDurgIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::generateDurgIcon(int quantity, TEnumAsByte<EdrugForm> Form, class UTexture2D** IconOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.generateDurgIcon");

	UpackageProductWidget_C_generateDurgIcon_Params params;
	params.quantity = quantity;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconOut != nullptr)
		*IconOut = params.IconOut;
}


// Function packageProductWidget.packageProductWidget_C.checkButtonActivity
// (Public, BlueprintCallable, BlueprintEvent)

void UpackageProductWidget_C::checkButtonActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.checkButtonActivity");

	UpackageProductWidget_C_checkButtonActivity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.checkCanFitInventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canFit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::checkCanFitInventory(bool* canFit)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.checkCanFitInventory");

	UpackageProductWidget_C_checkCanFitInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canFit != nullptr)
		*canFit = params.canFit;
}


// Function packageProductWidget.packageProductWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.Tick");

	UpackageProductWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AworkStationEquipmentBase_C* EqRef                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::setup(class AworkStationEquipmentBase_C* EqRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.setup");

	UpackageProductWidget_C_setup_Params params;
	params.EqRef = EqRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpackageProductWidget_C::BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UpackageProductWidget_C_BndEvt__btnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.killMe
// (BlueprintCallable, BlueprintEvent)

void UpackageProductWidget_C::killMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.killMe");

	UpackageProductWidget_C_killMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpackageProductWidget_C::BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UpackageProductWidget_C_BndEvt__btnAddPackage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UpackageProductWidget_C::BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UpackageProductWidget_C_BndEvt__btnAddInventory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function packageProductWidget.packageProductWidget_C.ExecuteUbergraph_packageProductWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpackageProductWidget_C::ExecuteUbergraph_packageProductWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function packageProductWidget.packageProductWidget_C.ExecuteUbergraph_packageProductWidget");

	UpackageProductWidget_C_ExecuteUbergraph_packageProductWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
