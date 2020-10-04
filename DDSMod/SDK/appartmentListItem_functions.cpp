
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function appartmentListItem.appartmentListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UappartmentListItem_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.OnMouseButtonDown");

	UappartmentListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentListItem.appartmentListItem_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Address                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Meterage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEquipmentShopInterfaceWidget_C* parentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentListItem_C::setup(const struct FText& Name, const struct FText& Address, float Meterage, class UTexture2D* Image, int Index, class UEquipmentShopInterfaceWidget_C* parentRef, bool selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.setup");

	UappartmentListItem_C_setup_Params params;
	params.Name = Name;
	params.Address = Address;
	params.Meterage = Meterage;
	params.Image = Image;
	params.Index = Index;
	params.parentRef = parentRef;
	params.selected = selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentListItem.appartmentListItem_C.ExecuteUbergraph_appartmentListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentListItem_C::ExecuteUbergraph_appartmentListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.ExecuteUbergraph_appartmentListItem");

	UappartmentListItem_C_ExecuteUbergraph_appartmentListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
