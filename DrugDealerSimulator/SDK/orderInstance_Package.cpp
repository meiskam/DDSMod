/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.CheckRama
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::CheckRama()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.CheckRama");
		
		AorderInstance_C_CheckRama_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.choosePackageIcon
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		EdrugForm                                          Form                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  IconOut                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::choosePackageIcon(EdrugForm Form, int32_t Quantity, class UTexture2D** IconOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.choosePackageIcon");
		
		AorderInstance_C_choosePackageIcon_Params params {};
		params.Form = Form;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconOut != nullptr)
			*IconOut = params.IconOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.constructOrderSMS
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                MessageTemplates                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class FText                                        MessageText                                                (Parm, OutParm)
	 */
	void AorderInstance_C::constructOrderSMS(TArray<class FText>* MessageTemplates, class FText* MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.constructOrderSMS");
		
		AorderInstance_C_constructOrderSMS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MessageTemplates != nullptr)
			*MessageTemplates = params.MessageTemplates;
		if (MessageText != nullptr)
			*MessageText = params.MessageText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.calcPackagingPattern
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FdrugData                                   drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            leftToDivide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        PackageName                                                (Parm, OutParm)
	 * 		int32_t                                            packageQuantity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              packageSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              packageWeight                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            restLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            gramsPerPack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  packageIcon                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ObjectClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::calcPackagingPattern(const struct FdrugData& drugData, int32_t Index, int32_t leftToDivide, class FText* PackageName, int32_t* packageQuantity, float* packageSize, float* packageWeight, int32_t* restLeft, int32_t* gramsPerPack, class UTexture2D** packageIcon, class UClass** ObjectClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.calcPackagingPattern");
		
		AorderInstance_C_calcPackagingPattern_Params params {};
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

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.generatePackageContents
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FinventoryItemStruct>                OutInventory                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	 * 		TArray<class FName>                                OutIDs                                                     (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    OutQuantity                                                (Parm, OutParm, ZeroConstructor)
	 * 		TArray<int32_t>                                    OutAmounts                                                 (Parm, OutParm, ZeroConstructor)
	 * 		TArray<struct FMixProportionsStruct>               OutMixProportions                                          (Parm, OutParm, ZeroConstructor)
	 */
	void AorderInstance_C::generatePackageContents(TArray<struct FinventoryItemStruct>* OutInventory, TArray<class FName>* OutIDs, TArray<int32_t>* OutQuantity, TArray<int32_t>* OutAmounts, TArray<struct FMixProportionsStruct>* OutMixProportions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.generatePackageContents");
		
		AorderInstance_C_generatePackageContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInventory != nullptr)
			*OutInventory = params.OutInventory;
		if (OutIDs != nullptr)
			*OutIDs = params.OutIDs;
		if (OutQuantity != nullptr)
			*OutQuantity = params.OutQuantity;
		if (OutAmounts != nullptr)
			*OutAmounts = params.OutAmounts;
		if (OutMixProportions != nullptr)
			*OutMixProportions = params.OutMixProportions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.spawnOrderPackage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               spawnAtHome                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AorderInstance_C::spawnOrderPackage(bool spawnAtHome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.spawnOrderPackage");
		
		AorderInstance_C_spawnOrderPackage_Params params {};
		params.spawnAtHome = spawnAtHome;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.calcPrepTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeSeconds                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::calcPrepTime(float* TimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.calcPrepTime");
		
		AorderInstance_C_calcPrepTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimeSeconds != nullptr)
			*TimeSeconds = params.TimeSeconds;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.setSmuggleDateTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::setSmuggleDateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.setSmuggleDateTime");
		
		AorderInstance_C_setSmuggleDateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.findRandomSmugLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AsmuggleLocation_C*                          Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::findRandomSmugLocation(class AsmuggleLocation_C** Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.findRandomSmugLocation");
		
		AorderInstance_C_findRandomSmugLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.getSmuggleLocRef
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::getSmuggleLocRef()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.getSmuggleLocRef");
		
		AorderInstance_C_getSmuggleLocRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.UserConstructionScript");
		
		AorderInstance_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AorderInstance_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ReceiveBeginPlay");
		
		AorderInstance_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ReceiveTick");
		
		AorderInstance_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.SetupOrder
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FdrugData>                           drugData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class FName>                                DrugIDs                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<int32_t>                                    drugQuantities                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              spawnTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::SetupOrder(TArray<struct FdrugData>* drugData, TArray<class FName> DrugIDs, TArray<int32_t>* drugQuantities, int32_t ID, float spawnTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.SetupOrder");
		
		AorderInstance_C_SetupOrder_Params params {};
		params.DrugIDs = DrugIDs;
		params.ID = ID;
		params.spawnTime = spawnTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (drugData != nullptr)
			*drugData = params.drugData;
		if (drugQuantities != nullptr)
			*drugQuantities = params.drugQuantities;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.checkOrderSpawnTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::checkOrderSpawnTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.checkOrderSpawnTime");
		
		AorderInstance_C_checkOrderSpawnTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.spawnOrderNow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AorderInstance_C::spawnOrderNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.spawnOrderNow");
		
		AorderInstance_C_spawnOrderNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class URamaSaveComponent*                          RamaSaveComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      LevelPackageName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const class FString& LevelPackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");
		
		AorderInstance_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params {};
		params.RamaSaveComponent = RamaSaveComponent;
		params.LevelPackageName = LevelPackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0073CB20
	 * 		Name   -> Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AorderInstance_C::ExecuteUbergraph_orderInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function orderInstance.orderInstance_C.ExecuteUbergraph_orderInstance");
		
		AorderInstance_C_ExecuteUbergraph_orderInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AorderInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AorderInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass orderInstance.orderInstance_C");
		return ptr;
	}

}


