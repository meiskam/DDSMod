
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

// Function onePackageWidget.onePackageWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DrugNam                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Grams                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UpackageProductWidget_C* Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UonePackageWidget_C::setup(const struct FText& DrugNam, int Grams, int quantity, class UTexture2D* Icon, int Index, class UpackageProductWidget_C* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function onePackageWidget.onePackageWidget_C.setup");

	UonePackageWidget_C_setup_Params params;
	params.DrugNam = DrugNam;
	params.Grams = Grams;
	params.quantity = quantity;
	params.Icon = Icon;
	params.Index = Index;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function onePackageWidget.onePackageWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UonePackageWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function onePackageWidget.onePackageWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UonePackageWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function onePackageWidget.onePackageWidget_C.ExecuteUbergraph_onePackageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UonePackageWidget_C::ExecuteUbergraph_onePackageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function onePackageWidget.onePackageWidget_C.ExecuteUbergraph_onePackageWidget");

	UonePackageWidget_C_ExecuteUbergraph_onePackageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
