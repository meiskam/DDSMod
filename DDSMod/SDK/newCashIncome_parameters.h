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

// Function newCashIncome.newCashIncome_C.Construct
struct UnewCashIncome_C_Construct_Params
{
};

// Function newCashIncome.newCashIncome_C.setup
struct UnewCashIncome_C_setup_Params
{
	int                                                CashAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function newCashIncome.newCashIncome_C.ExecuteUbergraph_newCashIncome
struct UnewCashIncome_C_ExecuteUbergraph_newCashIncome_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
