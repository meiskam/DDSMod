
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

// Function levelUpWidget.levelUpWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UlevelUpWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function levelUpWidget.levelUpWidget_C.Construct");

	UlevelUpWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function levelUpWidget.levelUpWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlevelUpWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function levelUpWidget.levelUpWidget_C.Tick");

	UlevelUpWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function levelUpWidget.levelUpWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlevelUpWidget_C::setup(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function levelUpWidget.levelUpWidget_C.setup");

	UlevelUpWidget_C_setup_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function levelUpWidget.levelUpWidget_C.ExecuteUbergraph_levelUpWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlevelUpWidget_C::ExecuteUbergraph_levelUpWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function levelUpWidget.levelUpWidget_C.ExecuteUbergraph_levelUpWidget");

	UlevelUpWidget_C_ExecuteUbergraph_levelUpWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
