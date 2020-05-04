
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

// Function saleClientMaleBP.saleClientMaleBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaleClientMaleBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientMaleBP.saleClientMaleBP_C.UserConstructionScript");

	AsaleClientMaleBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleClientMaleBP.saleClientMaleBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsaleClientMaleBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientMaleBP.saleClientMaleBP_C.ReceiveBeginPlay");

	AsaleClientMaleBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saleClientMaleBP.saleClientMaleBP_C.ExecuteUbergraph_saleClientMaleBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaleClientMaleBP_C::ExecuteUbergraph_saleClientMaleBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saleClientMaleBP.saleClientMaleBP_C.ExecuteUbergraph_saleClientMaleBP");

	AsaleClientMaleBP_C_ExecuteUbergraph_saleClientMaleBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
