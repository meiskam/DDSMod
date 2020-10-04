#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.7.20

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function mainComputer.mainComputer_C.changePrices
struct AmainComputer_C_changePrices_Params
{
};

// Function mainComputer.mainComputer_C.generateInitialBankHistory
struct AmainComputer_C_generateInitialBankHistory_Params
{
};

// Function mainComputer.mainComputer_C.newBankOperation
struct AmainComputer_C_newBankOperation_Params
{
	bool                                               Income;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SourceName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Notify;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Legal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.checkNewDrugAvailability
struct AmainComputer_C_checkNewDrugAvailability_Params
{
};

// Function mainComputer.mainComputer_C.addUserMessage
struct AmainComputer_C_addUserMessage_Params
{
	int                                                userId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PlayerMessage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.getOrderRefByID
struct AmainComputer_C_getOrderRefByID_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AorderInstance_C*                            orderInstance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.constructMessageSentence
struct AmainComputer_C_constructMessageSentence_Params
{
	bool                                               LastIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BeforeLastIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FdrugData                                   drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isSingle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.sendNewOrder
struct AmainComputer_C_sendNewOrder_Params
{
	TArray<struct FdrugData>                           drugData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        drugQuantities;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function mainComputer.mainComputer_C.UserConstructionScript
struct AmainComputer_C_UserConstructionScript_Params
{
};

// Function mainComputer.mainComputer_C.ReceiveBeginPlay
struct AmainComputer_C_ReceiveBeginPlay_Params
{
};

// Function mainComputer.mainComputer_C.ReceiveTick
struct AmainComputer_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mainComputer.mainComputer_C.openComputer
struct AmainComputer_C_openComputer_Params
{
};

// Function mainComputer.mainComputer_C.prepareOrderResponse
struct AmainComputer_C_prepareOrderResponse_Params
{
};

// Function mainComputer.mainComputer_C.ActivateComputer
struct AmainComputer_C_ActivateComputer_Params
{
};

// Function mainComputer.mainComputer_C.checkBenefitPayment
struct AmainComputer_C_checkBenefitPayment_Params
{
};

// Function mainComputer.mainComputer_C.checkIllegalIncome
struct AmainComputer_C_checkIllegalIncome_Params
{
};

// Function mainComputer.mainComputer_C.openIllegalGate
struct AmainComputer_C_openIllegalGate_Params
{
};

// Function mainComputer.mainComputer_C.ExecuteUbergraph_mainComputer
struct AmainComputer_C_ExecuteUbergraph_mainComputer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
