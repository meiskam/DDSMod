
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

// Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.AnimNotify_pullOutPhone
// (BlueprintCallable, BlueprintEvent)

void UeddieFirstDialAnimBP_C::AnimNotify_pullOutPhone()
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.AnimNotify_pullOutPhone");

	UeddieFirstDialAnimBP_C_AnimNotify_pullOutPhone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.ExecuteUbergraph_eddieFirstDialAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UeddieFirstDialAnimBP_C::ExecuteUbergraph_eddieFirstDialAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eddieFirstDialAnimBP.eddieFirstDialAnimBP_C.ExecuteUbergraph_eddieFirstDialAnimBP");

	UeddieFirstDialAnimBP_C_ExecuteUbergraph_eddieFirstDialAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
