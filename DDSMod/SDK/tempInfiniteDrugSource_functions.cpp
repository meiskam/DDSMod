
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

// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AtempInfiniteDrugSource_C::getPackageIcon(int Quan, TEnumAsByte<EdrugForm> Form, class UTexture2D** IconOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.getPackageIcon");

	AtempInfiniteDrugSource_C_getPackageIcon_Params params;
	params.Quan = Quan;
	params.Form = Form;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconOut != nullptr)
		*IconOut = params.IconOut;
}


// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AtempInfiniteDrugSource_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.UserConstructionScript");

	AtempInfiniteDrugSource_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AtempInfiniteDrugSource_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ReceiveBeginPlay");

	AtempInfiniteDrugSource_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource
// (BlueprintCallable, BlueprintEvent)

void AtempInfiniteDrugSource_C::resupplySource()
{
	static auto fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.resupplySource");

	AtempInfiniteDrugSource_C_resupplySource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AtempInfiniteDrugSource_C::ExecuteUbergraph_tempInfiniteDrugSource(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function tempInfiniteDrugSource.tempInfiniteDrugSource_C.ExecuteUbergraph_tempInfiniteDrugSource");

	AtempInfiniteDrugSource_C_ExecuteUbergraph_tempInfiniteDrugSource_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
