
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

// Function doorsExtMetal01.doorsExtMetal01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdoorsExtMetal01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal01.doorsExtMetal01_C.UserConstructionScript");

	AdoorsExtMetal01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtMetal01.doorsExtMetal01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdoorsExtMetal01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal01.doorsExtMetal01_C.ReceiveBeginPlay");

	AdoorsExtMetal01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorsExtMetal01.doorsExtMetal01_C.ExecuteUbergraph_doorsExtMetal01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdoorsExtMetal01_C::ExecuteUbergraph_doorsExtMetal01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorsExtMetal01.doorsExtMetal01_C.ExecuteUbergraph_doorsExtMetal01");

	AdoorsExtMetal01_C_ExecuteUbergraph_doorsExtMetal01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
