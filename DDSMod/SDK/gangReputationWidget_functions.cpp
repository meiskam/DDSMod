
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

// Function gangReputationWidget.gangReputationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UgangReputationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangReputationWidget.gangReputationWidget_C.Construct");

	UgangReputationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangReputationWidget.gangReputationWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgangReputationWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangReputationWidget.gangReputationWidget_C.Tick");

	UgangReputationWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangReputationWidget.gangReputationWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          respAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          respectNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          respectAfter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          respectMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            gangLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           levelUp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgangReputationWidget_C::setup(float respAmount, float respectNow, float respectAfter, float respectMax, int gangLevel, bool levelUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangReputationWidget.gangReputationWidget_C.setup");

	UgangReputationWidget_C_setup_Params params;
	params.respAmount = respAmount;
	params.respectNow = respectNow;
	params.respectAfter = respectAfter;
	params.respectMax = respectMax;
	params.gangLevel = gangLevel;
	params.levelUp = levelUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangReputationWidget.gangReputationWidget_C.ExecuteUbergraph_gangReputationWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UgangReputationWidget_C::ExecuteUbergraph_gangReputationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangReputationWidget.gangReputationWidget_C.ExecuteUbergraph_gangReputationWidget");

	UgangReputationWidget_C_ExecuteUbergraph_gangReputationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
