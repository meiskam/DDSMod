
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

// Function garageDoorBase.garageDoorBase_C.getGarageOptions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ReturnNames                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         Actions                        (Parm, OutParm, ZeroConstructor)

void AgarageDoorBase_C::getGarageOptions(TArray<struct FText>* ReturnNames, TArray<struct FString>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.getGarageOptions");

	AgarageDoorBase_C_getGarageOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnNames != nullptr)
		*ReturnNames = params.ReturnNames;
	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function garageDoorBase.garageDoorBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AgarageDoorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.UserConstructionScript");

	AgarageDoorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc
// (BlueprintEvent)

void AgarageDoorBase_C::openClose__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.openClose__FinishedFunc");

	AgarageDoorBase_C_openClose__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc
// (BlueprintEvent)

void AgarageDoorBase_C::openClose__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.openClose__UpdateFunc");

	AgarageDoorBase_C_openClose__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgarageDoorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.ReceiveBeginPlay");

	AgarageDoorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.toggleGarageDoor
// (BlueprintCallable, BlueprintEvent)

void AgarageDoorBase_C::toggleGarageDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.toggleGarageDoor");

	AgarageDoorBase_C_toggleGarageDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.executeGarageOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 optionString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AgarageDoorBase_C::executeGarageOption(const struct FString& optionString)
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.executeGarageOption");

	AgarageDoorBase_C_executeGarageOption_Params params;
	params.optionString = optionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgarageDoorBase_C::ExecuteUbergraph_garageDoorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function garageDoorBase.garageDoorBase_C.ExecuteUbergraph_garageDoorBase");

	AgarageDoorBase_C_ExecuteUbergraph_garageDoorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
