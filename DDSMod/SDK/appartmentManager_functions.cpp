
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

// Function appartmentManager.appartmentManager_C.getWallPicker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            apartmentID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AappartmentViewerPawn_C* viewerPawn                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AappartmentWallPicker_C* wallPicker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AappartmentManager_C::getWallPicker(int apartmentID, bool* Success, class AappartmentViewerPawn_C** viewerPawn, class AappartmentWallPicker_C** wallPicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.getWallPicker");

	AappartmentManager_C_getWallPicker_Params params;
	params.apartmentID = apartmentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (viewerPawn != nullptr)
		*viewerPawn = params.viewerPawn;
	if (wallPicker != nullptr)
		*wallPicker = params.wallPicker;
}


// Function appartmentManager.appartmentManager_C.rentBoostRespect
// (Public, BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::rentBoostRespect()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.rentBoostRespect");

	AappartmentManager_C_rentBoostRespect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.countAvailableApartments
// (Public, BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::countAvailableApartments()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.countAvailableApartments");

	AappartmentManager_C_countAvailableApartments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.processRentTransaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AappartmentManager_C::processRentTransaction(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.processRentTransaction");

	AappartmentManager_C_processRentTransaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function appartmentManager.appartmentManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.UserConstructionScript");

	AappartmentManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.rentAction
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::rentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.rentAction");

	AappartmentManager_C_rentAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.ConfirmRentAction
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::ConfirmRentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ConfirmRentAction");

	AappartmentManager_C_ConfirmRentAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.cancelRenting
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::cancelRenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.cancelRenting");

	AappartmentManager_C_cancelRenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.refreshEndRenting
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::refreshEndRenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.refreshEndRenting");

	AappartmentManager_C_refreshEndRenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.checkAppartmentPayments
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::checkAppartmentPayments()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.checkAppartmentPayments");

	AappartmentManager_C_checkAppartmentPayments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.prevViewAppartment
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::prevViewAppartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.prevViewAppartment");

	AappartmentManager_C_prevViewAppartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.nextViewAppartment
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::nextViewAppartment()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.nextViewAppartment");

	AappartmentManager_C_nextViewAppartment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.refreshAppartments
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::refreshAppartments()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.refreshAppartments");

	AappartmentManager_C_refreshAppartments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.terminateRenting
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::terminateRenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.terminateRenting");

	AappartmentManager_C_terminateRenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.ChangeViewAppartment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AppartmentID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentManager_C::ChangeViewAppartment(int AppartmentID)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ChangeViewAppartment");

	AappartmentManager_C_ChangeViewAppartment_Params params;
	params.AppartmentID = AppartmentID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.startAppartmentViewer
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::startAppartmentViewer()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.startAppartmentViewer");

	AappartmentManager_C_startAppartmentViewer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentManager_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ReceiveTick");

	AappartmentManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AappartmentManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ReceiveBeginPlay");

	AappartmentManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.sendDebtInfo
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::sendDebtInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.sendDebtInfo");

	AappartmentManager_C_sendDebtInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.firstRentAction
// (BlueprintCallable, BlueprintEvent)

void AappartmentManager_C::firstRentAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.firstRentAction");

	AappartmentManager_C_firstRentAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AappartmentManager_C::ExecuteUbergraph_appartmentManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentManager.appartmentManager_C.ExecuteUbergraph_appartmentManager");

	AappartmentManager_C_ExecuteUbergraph_appartmentManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
