
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

// Function saleClientFemaleBP.saleClientFemaleBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaleClientFemaleBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientFemaleBP.saleClientFemaleBP_C.UserConstructionScript");

	AsaleClientFemaleBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleClientFemaleBP.saleClientFemaleBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsaleClientFemaleBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientFemaleBP.saleClientFemaleBP_C.ReceiveBeginPlay");

	AsaleClientFemaleBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleClientFemaleBP.saleClientFemaleBP_C.ExecuteUbergraph_saleClientFemaleBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleClientFemaleBP_C::ExecuteUbergraph_saleClientFemaleBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientFemaleBP.saleClientFemaleBP_C.ExecuteUbergraph_saleClientFemaleBP");

	AsaleClientFemaleBP_C_ExecuteUbergraph_saleClientFemaleBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
