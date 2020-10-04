#pragma once

// Name: DDS, Version: 2020.7.20

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
// 0x5048 (0x5370 - 0x0328)
class ATrainControllerCode : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0328(0x0058) MISSED OFFSET
	class AActor*                                      actorPath;                                                // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      leaderBPLeader;                                           // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                innerSegmentsSpawn;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UClass*                                      segmentBPClass;                                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              forcePropagation;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              frictionForcePropagation;                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              constPMRmultiplier;                                       // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stopLength;                                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeltaTime;                                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minInterval;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxInterval;                                              // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              loadSimulate;                                             // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segmentsInit;                                             // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRunning;                                                // 0x03C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4FA7];                                    // 0x03C9(0x4FA7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainControllerCode");
		return ptr;
	}


	float initOnWorld();
	void initInstance(int followingSegmentsCount);
	void calcTotalWeigthAndPower();
	float calcTotalFrictionForce();
	void calcSingleSegment(class ATrainRealSegment* calcSegment);
	float calcSegmentDistanceToLeader(int SegmentIndex);
};


// Class DrugDealerSimulator.TrainRealSegment
// 0x0030 (0x0358 - 0x0328)
class ATrainRealSegment : public AActor
{
public:
	float                                              weigth;                                                   // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              loadWeigth;                                               // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               isCargo;                                                  // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasEngine;                                                // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	float                                              enginePower;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               backwardDirectionEngine;                                  // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	float                                              axleLength;                                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              axleWide;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              modelLength;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              modelWidth;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lastAngle;                                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        TrainSegmentMesh;                                         // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainRealSegment");
		return ptr;
	}

};


// Class DrugDealerSimulator.TrainSegmentCode
// 0x0008 (0x0330 - 0x0328)
class ATrainSegmentCode : public AActor
{
public:
	bool                                               leadSegment;                                              // 0x0328(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentCode");
		return ptr;
	}

};


// Class DrugDealerSimulator.TrainSegmentSubClass
// 0x0000 (0x0330 - 0x0330)
class ATrainSegmentSubClass : public ATrainSegmentCode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TrainSegmentSubClass");
		return ptr;
	}

};


// Class DrugDealerSimulator.CepSaveTester
// 0x0008 (0x0330 - 0x0328)
class ACepSaveTester : public AActor
{
public:
	int                                                someInt;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepSaveTester");
		return ptr;
	}


	void noticeAction();
	int getCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
