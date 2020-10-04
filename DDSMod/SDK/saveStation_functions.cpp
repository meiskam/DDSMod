
#include "SDK.h"

// Name: DDS, Version: 2020.9.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function saveStation.saveStation_C.clearWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AsaveStation_C::clearWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.clearWidgets");

	AsaveStation_C_clearWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.adaptDifficulty
// (Public, BlueprintCallable, BlueprintEvent)

void AsaveStation_C::adaptDifficulty()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.adaptDifficulty");

	AsaveStation_C_adaptDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AsaveStation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.UserConstructionScript");

	AsaveStation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AsaveStation_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ReceiveBeginPlay");

	AsaveStation_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveStation_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ReceiveTick");

	AsaveStation_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ActivateSaveStation
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::ActivateSaveStation()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ActivateSaveStation");

	AsaveStation_C_ActivateSaveStation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.setTimeout
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::setTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.setTimeout");

	AsaveStation_C_setTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AsaveStation_C::BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AsaveStation_C_BndEvt__pawnDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveStation_C::BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	AsaveStation_C_BndEvt__pawnDetector_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.drawCheck
// (BlueprintCallable, BlueprintEvent)

void AsaveStation_C::drawCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.drawCheck");

	AsaveStation_C_drawCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function saveStation.saveStation_C.ExecuteUbergraph_saveStation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AsaveStation_C::ExecuteUbergraph_saveStation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function saveStation.saveStation_C.ExecuteUbergraph_saveStation");

	AsaveStation_C_ExecuteUbergraph_saveStation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
