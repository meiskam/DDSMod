
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

// Function shopJay.shopJay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AshopJay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopJay.shopJay_C.UserConstructionScript");

	AshopJay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopJay.shopJay_C.scriptResupplyEvent
// (BlueprintCallable, BlueprintEvent)

void AshopJay_C::scriptResupplyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function shopJay.shopJay_C.scriptResupplyEvent");

	AshopJay_C_scriptResupplyEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shopJay.shopJay_C.ExecuteUbergraph_shopJay
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AshopJay_C::ExecuteUbergraph_shopJay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shopJay.shopJay_C.ExecuteUbergraph_shopJay");

	AshopJay_C_ExecuteUbergraph_shopJay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
