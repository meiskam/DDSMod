
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BorderOpacity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             BorderColor                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManagementWidget_C::markerSetAreaVisuals(float BorderOpacity, const struct FSlateColor& BorderColor, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerSetAreaVisuals");

	UsaleAreaManagementWidget_C_markerSetAreaVisuals_Params params;
	params.BorderOpacity = BorderOpacity;
	params.BorderColor = BorderColor;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsaleAreaManagementWidget_C::markerHoverAction(int Index, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleAreaManagementWidget.saleAreaManagementWidget_C.markerHoverAction");

	UsaleAreaManagementWidget_C_markerHoverAction_Params params;
	params.Index = Index;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
