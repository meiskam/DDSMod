
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

// Function loadingScreen.loadingScreen_C.setNewTip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UloadingScreen_C::setNewTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingScreen.loadingScreen_C.setNewTip");

	UloadingScreen_C_setNewTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingScreen.loadingScreen_C.killLoadingScreen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DelayTime                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UloadingScreen_C::killLoadingScreen(float* DelayTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingScreen.loadingScreen_C.killLoadingScreen");

	UloadingScreen_C_killLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DelayTime != nullptr)
		*DelayTime = params.DelayTime;
}


// Function loadingScreen.loadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UloadingScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingScreen.loadingScreen_C.Construct");

	UloadingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadingScreen.loadingScreen_C.ExecuteUbergraph_loadingScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UloadingScreen_C::ExecuteUbergraph_loadingScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadingScreen.loadingScreen_C.ExecuteUbergraph_loadingScreen");

	UloadingScreen_C_ExecuteUbergraph_loadingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
