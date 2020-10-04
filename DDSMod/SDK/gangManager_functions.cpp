
#include "SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function gangManager.gangManager_C.gangLevelLimitRaise
// (Public, BlueprintCallable, BlueprintEvent)

void AgangManager_C::gangLevelLimitRaise()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.gangLevelLimitRaise");

	AgangManager_C_gangLevelLimitRaise_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.reconstructOrderFlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AgangManager_C::reconstructOrderFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.reconstructOrderFlow");

	AgangManager_C_reconstructOrderFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.reconstructDropRef
// (Public, BlueprintCallable, BlueprintEvent)

void AgangManager_C::reconstructDropRef()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.reconstructDropRef");

	AgangManager_C_reconstructDropRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.modifyGangSatisfaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgangManager_C::modifyGangSatisfaction(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.modifyGangSatisfaction");

	AgangManager_C_modifyGangSatisfaction_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.restartOrderTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AgangManager_C::restartOrderTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.restartOrderTimer");

	AgangManager_C_restartOrderTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.getGangOrderMessageFormat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   MessageFormat                  (Parm, OutParm)

void AgangManager_C::getGangOrderMessageFormat(struct FText* MessageFormat)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.getGangOrderMessageFormat");

	AgangManager_C_getGangOrderMessageFormat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MessageFormat != nullptr)
		*MessageFormat = params.MessageFormat;
}


// Function gangManager.gangManager_C.getFinaliseTaskDescription
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void AgangManager_C::getFinaliseTaskDescription(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.getFinaliseTaskDescription");

	AgangManager_C_getFinaliseTaskDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function gangManager.gangManager_C.testDropForQuantity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AgangManager_C::testDropForQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.testDropForQuantity");

	AgangManager_C_testDropForQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.checkOrderDrop
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OrderOK                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AgangManager_C::checkOrderDrop(bool* OrderOK)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkOrderDrop");

	AgangManager_C_checkOrderDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OrderOK != nullptr)
		*OrderOK = params.OrderOK;
}


// Function gangManager.gangManager_C.sendGangOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipMessage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ExpectedDrugID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpectedDrugMinQuality         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PackageSizes                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PackageQuantity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgangManager_C::sendGangOrder(bool SkipMessage, int ExpectedDrugID, float ExpectedDrugMinQuality, int PackageSizes, int PackageQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.sendGangOrder");

	AgangManager_C_sendGangOrder_Params params;
	params.SkipMessage = SkipMessage;
	params.ExpectedDrugID = ExpectedDrugID;
	params.ExpectedDrugMinQuality = ExpectedDrugMinQuality;
	params.PackageSizes = PackageSizes;
	params.PackageQuantity = PackageQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AgangManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.UserConstructionScript");

	AgangManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AgangManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ReceiveBeginPlay");

	AgangManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgangManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ReceiveTick");

	AgangManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.unlockKeijiGang
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::unlockKeijiGang()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockKeijiGang");

	AgangManager_C_unlockKeijiGang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.unlockBallenaGang
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::unlockBallenaGang()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockBallenaGang");

	AgangManager_C_unlockBallenaGang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.retryInitiate
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::retryInitiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.retryInitiate");

	AgangManager_C_retryInitiate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.checkGangPlaceStatus
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::checkGangPlaceStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkGangPlaceStatus");

	AgangManager_C_checkGangPlaceStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.gangMessageResponse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void AgangManager_C::gangMessageResponse(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.gangMessageResponse");

	AgangManager_C_gangMessageResponse_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.spawnGangMember
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::spawnGangMember()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.spawnGangMember");

	AgangManager_C_spawnGangMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.constructNewGangOrder
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::constructNewGangOrder()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.constructNewGangOrder");

	AgangManager_C_constructNewGangOrder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.checkDeliveryTime
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::checkDeliveryTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.checkDeliveryTime");

	AgangManager_C_checkDeliveryTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.unlockDeliveryMessage
// (BlueprintCallable, BlueprintEvent)

void AgangManager_C::unlockDeliveryMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.unlockDeliveryMessage");

	AgangManager_C_unlockDeliveryMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gangManager.gangManager_C.ExecuteUbergraph_gangManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AgangManager_C::ExecuteUbergraph_gangManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gangManager.gangManager_C.ExecuteUbergraph_gangManager");

	AgangManager_C_ExecuteUbergraph_gangManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
