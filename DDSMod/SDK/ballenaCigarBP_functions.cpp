
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

// Function ballenaCigarBP.ballenaCigarBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AballenaCigarBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.UserConstructionScript");

	AballenaCigarBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaCigarBP.ballenaCigarBP_C.slowlyKillMe
// (BlueprintCallable, BlueprintEvent)

void AballenaCigarBP_C::slowlyKillMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.slowlyKillMe");

	AballenaCigarBP_C_slowlyKillMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ballenaCigarBP.ballenaCigarBP_C.ExecuteUbergraph_ballenaCigarBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AballenaCigarBP_C::ExecuteUbergraph_ballenaCigarBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ballenaCigarBP.ballenaCigarBP_C.ExecuteUbergraph_ballenaCigarBP");

	AballenaCigarBP_C_ExecuteUbergraph_ballenaCigarBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
