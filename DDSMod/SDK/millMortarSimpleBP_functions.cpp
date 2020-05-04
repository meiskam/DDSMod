
#include "../SDK.h"

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function millMortarSimpleBP.millMortarSimpleBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AmillMortarSimpleBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.UserConstructionScript");

	AmillMortarSimpleBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millMortarSimpleBP.millMortarSimpleBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AmillMortarSimpleBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.ReceiveBeginPlay");

	AmillMortarSimpleBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millMortarSimpleBP.millMortarSimpleBP_C.quantityChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AmillMortarSimpleBP_C::quantityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.quantityChanged");

	AmillMortarSimpleBP_C_quantityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function millMortarSimpleBP.millMortarSimpleBP_C.ExecuteUbergraph_millMortarSimpleBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AmillMortarSimpleBP_C::ExecuteUbergraph_millMortarSimpleBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function millMortarSimpleBP.millMortarSimpleBP_C.ExecuteUbergraph_millMortarSimpleBP");

	AmillMortarSimpleBP_C_ExecuteUbergraph_millMortarSimpleBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
