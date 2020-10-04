
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

// Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdonaldShopOwnerAnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.BlueprintUpdateAnimation");

	UdonaldShopOwnerAnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.ExecuteUbergraph_donaldShopOwnerAnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdonaldShopOwnerAnimBP_C::ExecuteUbergraph_donaldShopOwnerAnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function donaldShopOwnerAnimBP.donaldShopOwnerAnimBP_C.ExecuteUbergraph_donaldShopOwnerAnimBP");

	UdonaldShopOwnerAnimBP_C_ExecuteUbergraph_donaldShopOwnerAnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
