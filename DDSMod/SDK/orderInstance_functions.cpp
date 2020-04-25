
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

// Function orderInstance.orderInstance_C.choosePackageIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EdrugForm>         Form                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              IconOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::choosePackageIcon(TEnumAsByte<EdrugForm> Form, int quantity, class UTexture2D** IconOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.choosePackageIcon");

	AorderInstance_C_choosePackageIcon_Params params;
	params.Form = Form;
	params.quantity = quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IconOut != nullptr)
		*IconOut = params.IconOut;
}


// Function orderInstance.orderInstance_C.constructOrderSMS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           MessageTemplates               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   MessageText                    (Parm, OutParm)

void AorderInstance_C::constructOrderSMS(TArray<struct FText>* MessageTemplates, struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.constructOrderSMS");

	AorderInstance_C_constructOrderSMS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageTemplates != nullptr)
		*MessageTemplates = params.MessageTemplates;
	if (MessageText != nullptr)
		*MessageText = params.MessageText;
}


// Function orderInstance.orderInstance_C.calcPackagingPattern
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               drugData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            leftToDivide                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   PackageName                    (Parm, OutParm)
// int                            packageQuantity                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          packageSize                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          packageWeight                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            restLeft                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            gramsPerPack                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              packageIcon                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ObjectClass                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::calcPackagingPattern(const struct FdrugData& drugData, int Index, int leftToDivide, struct FText* PackageName, int* packageQuantity, float* packageSize, float* packageWeight, int* restLeft, int* gramsPerPack, class UTexture2D** packageIcon, class UClass** ObjectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.calcPackagingPattern");

	AorderInstance_C_calcPackagingPattern_Params params;
	params.drugData = drugData;
	params.Index = Index;
	params.leftToDivide = leftToDivide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PackageName != nullptr)
		*PackageName = params.PackageName;
	if (packageQuantity != nullptr)
		*packageQuantity = params.packageQuantity;
	if (packageSize != nullptr)
		*packageSize = params.packageSize;
	if (packageWeight != nullptr)
		*packageWeight = params.packageWeight;
	if (restLeft != nullptr)
		*restLeft = params.restLeft;
	if (gramsPerPack != nullptr)
		*gramsPerPack = params.gramsPerPack;
	if (packageIcon != nullptr)
		*packageIcon = params.packageIcon;
	if (ObjectClass != nullptr)
		*ObjectClass = params.ObjectClass;
}


// Function orderInstance.orderInstance_C.generatePackageContents
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FinventoryItemStruct> OutInventory                   (Parm, OutParm, ZeroConstructor)
// TArray<int>                    OutQuantity                    (Parm, OutParm, ZeroConstructor)

void AorderInstance_C::generatePackageContents(TArray<struct FinventoryItemStruct>* OutInventory, TArray<int>* OutQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.generatePackageContents");

	AorderInstance_C_generatePackageContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInventory != nullptr)
		*OutInventory = params.OutInventory;
	if (OutQuantity != nullptr)
		*OutQuantity = params.OutQuantity;
}


// Function orderInstance.orderInstance_C.spawnOrderPackage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           spawnAtHome                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::spawnOrderPackage(bool spawnAtHome)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.spawnOrderPackage");

	AorderInstance_C_spawnOrderPackage_Params params;
	params.spawnAtHome = spawnAtHome;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.calcPrepTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSeconds                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::calcPrepTime(float* TimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.calcPrepTime");

	AorderInstance_C_calcPrepTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeSeconds != nullptr)
		*TimeSeconds = params.TimeSeconds;
}


// Function orderInstance.orderInstance_C.setSmuggleDateTime
// (Public, BlueprintCallable, BlueprintEvent)

void AorderInstance_C::setSmuggleDateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.setSmuggleDateTime");

	AorderInstance_C_setSmuggleDateTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.findRandomSmugLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AsmuggleLocation_C*      Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::findRandomSmugLocation(class AsmuggleLocation_C** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.findRandomSmugLocation");

	AorderInstance_C_findRandomSmugLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function orderInstance.orderInstance_C.getSmuggleLocRef
// (Public, BlueprintCallable, BlueprintEvent)

void AorderInstance_C::getSmuggleLocRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.getSmuggleLocRef");

	AorderInstance_C_getSmuggleLocRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AorderInstance_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.UserConstructionScript");

	AorderInstance_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AorderInstance_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ReceiveBeginPlay");

	AorderInstance_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ReceiveTick");

	AorderInstance_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.SetupOrder
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FdrugData>       drugData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<int>                    DrugQuantities                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          spawnTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::SetupOrder(int ID, float spawnTime, TArray<struct FdrugData>* drugData, TArray<int>* DrugQuantities)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.SetupOrder");

	AorderInstance_C_SetupOrder_Params params;
	params.ID = ID;
	params.spawnTime = spawnTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (drugData != nullptr)
		*drugData = params.drugData;
	if (DrugQuantities != nullptr)
		*DrugQuantities = params.DrugQuantities;
}


// Function orderInstance.orderInstance_C.checkOrderSpawnTime
// (BlueprintCallable, BlueprintEvent)

void AorderInstance_C::checkOrderSpawnTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.checkOrderSpawnTime");

	AorderInstance_C_checkOrderSpawnTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.spawnOrderNow
// (BlueprintCallable, BlueprintEvent)

void AorderInstance_C::spawnOrderNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.spawnOrderNow");

	AorderInstance_C_spawnOrderNow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AorderInstance_C::ExecuteUbergraph_orderInstance(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance");

	AorderInstance_C_ExecuteUbergraph_orderInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
