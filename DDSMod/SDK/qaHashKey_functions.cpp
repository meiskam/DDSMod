
#include "SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function qaHashKey.qaHashKey_C.asd
// (BlueprintCallable, BlueprintEvent)

void UqaHashKey_C::asd()
{
	static auto fn = UObject::FindObject<UFunction>("Function qaHashKey.qaHashKey_C.asd");

	UqaHashKey_C_asd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function qaHashKey.qaHashKey_C.ExecuteUbergraph_qaHashKey
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UqaHashKey_C::ExecuteUbergraph_qaHashKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function qaHashKey.qaHashKey_C.ExecuteUbergraph_qaHashKey");

	UqaHashKey_C_ExecuteUbergraph_qaHashKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
