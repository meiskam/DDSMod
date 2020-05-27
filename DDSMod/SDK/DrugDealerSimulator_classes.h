#pragma once

// Name: DDS, Version: 2020.5.27

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DrugDealerSimulator.ShiroActor
// 0x0018 (0x0340 - 0x0328)
class AShiroActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0328(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroActor");
		return ptr;
	}


	struct FString retName();
};


// Class DrugDealerSimulator.ShiroBlueprint
// 0x0000 (0x0028 - 0x0028)
class UShiroBlueprint : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.ShiroBlueprint");
		return ptr;
	}


	void STATIC_testReferences(float* t1, float* t2, float* t3, float* t4);
	int STATIC_shiroFunc2(int A);
	int STATIC_shiroFunc(int A);
	float STATIC_extrapolateTest(float Min, float Max, float perc);
	void STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump);
};


// Class DrugDealerSimulator.TrainControllerCode
// 0x0000 (0x0328 - 0x0328)
class ATrainControllerCode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainControllerCode");
		return ptr;
	}

};


// Class DrugDealerSimulator.TrainSegmentCode
// 0x0008 (0x0330 - 0x0328)
class ATrainSegmentCode : public AActor
{
public:
	bool                                               leadSegment;                                              // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentCode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
