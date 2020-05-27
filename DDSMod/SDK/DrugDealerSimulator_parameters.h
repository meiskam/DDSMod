#pragma once

#include "../SDK.h"

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function DrugDealerSimulator.ShiroActor.retName
struct AShiroActor_retName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function DrugDealerSimulator.ShiroBlueprint.testReferences
struct UShiroBlueprint_testReferences_Params
{
	float                                              t1;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t3;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              t4;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc2
struct UShiroBlueprint_shiroFunc2_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.shiroFunc
struct UShiroBlueprint_shiroFunc_Params
{
	int                                                A;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.extrapolateTest
struct UShiroBlueprint_extrapolateTest_Params
{
	float                                              Min;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              perc;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function DrugDealerSimulator.ShiroBlueprint.calculateSky
struct UShiroBlueprint_calculateSky_Params
{
	int                                                dayNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curHour;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                curMinute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               sunVisible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunPlainAngle;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              sunBrightness;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               moonVisible;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              varDump;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
