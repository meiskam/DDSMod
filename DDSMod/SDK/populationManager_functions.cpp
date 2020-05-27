
#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function populationManager.populationManager_C.chooseNpcClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Class                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ApopulationManager_C::chooseNpcClass(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.chooseNpcClass");

	ApopulationManager_C_chooseNpcClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Class != nullptr)
		*Class = params.Class;
}


// Function populationManager.populationManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApopulationManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.UserConstructionScript");

	ApopulationManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ApopulationManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.ReceiveBeginPlay");

	ApopulationManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.refreshCitizenStatus
// (BlueprintCallable, BlueprintEvent)

void ApopulationManager_C::refreshCitizenStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.refreshCitizenStatus");

	ApopulationManager_C_refreshCitizenStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.personGotHome
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AbaseNPC_C*              Person                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApopulationManager_C::personGotHome(class AbaseNPC_C* Person)
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.personGotHome");

	ApopulationManager_C_personGotHome_Params params;
	params.Person = Person;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.burstMothafuckers
// (BlueprintCallable, BlueprintEvent)

void ApopulationManager_C::burstMothafuckers()
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.burstMothafuckers");

	ApopulationManager_C_burstMothafuckers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.populationTimeLapse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          endHour                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApopulationManager_C::populationTimeLapse(float endHour)
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.populationTimeLapse");

	ApopulationManager_C_populationTimeLapse_Params params;
	params.endHour = endHour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function populationManager.populationManager_C.ExecuteUbergraph_populationManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ApopulationManager_C::ExecuteUbergraph_populationManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function populationManager.populationManager_C.ExecuteUbergraph_populationManager");

	ApopulationManager_C_ExecuteUbergraph_populationManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
