
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

// Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UappartmentViewerWidget_C::refreshAccBalance()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.refreshAccBalance");

	UappartmentViewerWidget_C_refreshAccBalance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   areaRef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   AreaNam                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UappartmentViewerWidget_C::setStatistics(class ArentAppartmentArea_C* areaRef, const struct FText& AreaNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.setStatistics");

	UappartmentViewerWidget_C_setStatistics_Params params;
	params.areaRef = areaRef;
	params.AreaNam = AreaNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Owned                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Forever                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           terminated                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           savePoint                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Raided                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   AppartmentName                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   AppartmentDesc                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Address                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Meterage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Floors                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            daysTillPayment                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Boost                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ArentAppartmentArea_C*   ApartmentRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentViewerWidget_C::setup(bool Owned, bool Forever, bool terminated, bool savePoint, bool Raided, const struct FText& AppartmentName, const struct FText& AppartmentDesc, const struct FText& Address, float Meterage, float Price, int Floors, int daysTillPayment, float Boost, class ArentAppartmentArea_C* ApartmentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.setup");

	UappartmentViewerWidget_C_setup_Params params;
	params.Owned = Owned;
	params.Forever = Forever;
	params.terminated = terminated;
	params.savePoint = savePoint;
	params.Raided = Raided;
	params.AppartmentName = AppartmentName;
	params.AppartmentDesc = AppartmentDesc;
	params.Address = Address;
	params.Meterage = Meterage;
	params.Price = Price;
	params.Floors = Floors;
	params.daysTillPayment = daysTillPayment;
	params.Boost = Boost;
	params.ApartmentRef = ApartmentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   Appartment                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StartRenting                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentViewerWidget_C::openConfirmDialogue(class ArentAppartmentArea_C* Appartment, bool StartRenting)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.openConfirmDialogue");

	UappartmentViewerWidget_C_openConfirmDialogue_Params params;
	params.Appartment = Appartment;
	params.StartRenting = StartRenting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel
// (BlueprintCallable, BlueprintEvent)

void UappartmentViewerWidget_C::closeConfirmPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.closeConfirmPanel");

	UappartmentViewerWidget_C_closeConfirmPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            daysLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentViewerWidget_C::rentConfirmed(int daysLeft, float Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentConfirmed");

	UappartmentViewerWidget_C_rentConfirmed_Params params;
	params.daysLeft = daysLeft;
	params.Price = Price;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad
// (BlueprintCallable, BlueprintEvent)

void UappartmentViewerWidget_C::rentWentBad()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentWentBad");

	UappartmentViewerWidget_C_rentWentBad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            daysLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentViewerWidget_C::rentTerminated(int daysLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.rentTerminated");

	UappartmentViewerWidget_C_rentTerminated_Params params;
	params.daysLeft = daysLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentViewerWidget_C::ExecuteUbergraph_appartmentViewerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentViewerWidget.appartmentViewerWidget_C.ExecuteUbergraph_appartmentViewerWidget");

	UappartmentViewerWidget_C_ExecuteUbergraph_appartmentViewerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
