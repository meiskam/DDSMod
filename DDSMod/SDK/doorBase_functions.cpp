
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

// Function doorBase.doorBase_C.playDoorSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundCue*               Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdoorBase_C::playDoorSound(class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.playDoorSound");

	AdoorBase_C_playDoorSound_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.getDoorOptions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ActionNames                    (Parm, OutParm, ZeroConstructor)
// TArray<struct FString>         Actions                        (Parm, OutParm, ZeroConstructor)

void AdoorBase_C::getDoorOptions(TArray<struct FText>* ActionNames, TArray<struct FString>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.getDoorOptions");

	AdoorBase_C_getDoorOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionNames != nullptr)
		*ActionNames = params.ActionNames;
	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function doorBase.doorBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AdoorBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.UserConstructionScript");

	AdoorBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.doorOpening__FinishedFunc
// (BlueprintEvent)

void AdoorBase_C::doorOpening__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.doorOpening__FinishedFunc");

	AdoorBase_C_doorOpening__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.doorOpening__UpdateFunc
// (BlueprintEvent)

void AdoorBase_C::doorOpening__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.doorOpening__UpdateFunc");

	AdoorBase_C_doorOpening__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AdoorBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.Timeline_0__FinishedFunc");

	AdoorBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AdoorBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.Timeline_0__UpdateFunc");

	AdoorBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdoorBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.ReceiveBeginPlay");

	AdoorBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.openDoor
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::openDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.openDoor");

	AdoorBase_C_openDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.closeDoor
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::closeDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.closeDoor");

	AdoorBase_C_closeDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.toggleDoor
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::toggleDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.toggleDoor");

	AdoorBase_C_toggleDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.closeDoorAuto
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::closeDoorAuto()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.closeDoorAuto");

	AdoorBase_C_closeDoorAuto_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AdoorBase_C::BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AdoorBase_C_BndEvt__doorOverlap_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.executeDoorOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 doorActionName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AdoorBase_C::executeDoorOption(const struct FString& doorActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.executeDoorOption");

	AdoorBase_C_executeDoorOption_Params params;
	params.doorActionName = doorActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.doorBreachEnd
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::doorBreachEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.doorBreachEnd");

	AdoorBase_C_doorBreachEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.breachDoor
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::breachDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.breachDoor");

	AdoorBase_C_breachDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.eventDoorActivated
// (BlueprintCallable, BlueprintEvent)

void AdoorBase_C::eventDoorActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.eventDoorActivated");

	AdoorBase_C_eventDoorActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function doorBase.doorBase_C.ExecuteUbergraph_doorBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdoorBase_C::ExecuteUbergraph_doorBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function doorBase.doorBase_C.ExecuteUbergraph_doorBase");

	AdoorBase_C_ExecuteUbergraph_doorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
