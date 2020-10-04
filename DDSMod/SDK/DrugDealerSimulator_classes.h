#pragma once

// Name: DDS, Version: 2020.10.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class DrugDealerSimulator.AirComponent
// 0x0018 (0x0108 - 0x00F0)
class UAirComponent : public UActorComponent
{
public:
	float                                              airTemp;                                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMinTemp;                                               // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMaxTemp;                                               // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stormChance;                                              // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AirComponent");
		return ptr;
	}

};


// Class DrugDealerSimulator.AirProfile
// 0x0018 (0x0340 - 0x0328)
class AAirProfile : public AActor
{
public:
	float                                              airTemp;                                                  // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMinTemp;                                               // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              airMaxTemp;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainDensity;                                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              stromChance;                                              // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AirProfile");
		return ptr;
	}

};


// Class DrugDealerSimulator.AstralProfile
// 0x0018 (0x0340 - 0x0328)
class AAstralProfile : public AActor
{
public:
	float                                              ligthPower;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isEmmitingEnergy;                                         // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	float                                              emmitPower;                                               // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              heatEmmitingPerc;                                         // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.AstralProfile");
		return ptr;
	}


	float powerOnSurface();
	float heatPower();
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


// Class DrugDealerSimulator.CepWeatherComponent
// 0x02E0 (0x03D0 - 0x00F0)
class UCepWeatherComponent : public UActorComponent
{
public:
	int                                                yearDaysLen;                                              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	class USeasonAstralComponent*                      baseAstralSettings;                                       // 0x00F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      moonSettings;                                             // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                moonDayHoursLength;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                moonOrbitDegRot;                                          // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              enablingSunTimeMarginOnToggle;                            // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunCeremonyDegMargin;                                     // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0148(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0158(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataNoons;                                             // 0x0168(0x0010) (ZeroConstructor)
	TArray<float>                                      sunOrbitData;                                             // 0x0178(0x0010) (ZeroConstructor)
	TArray<float>                                      sunOrbitDistanceData;                                     // 0x0188(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0198(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x01A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMinTemperature;                                     // 0x01B8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMaxTemperature;                                     // 0x01C8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainChance;                                         // 0x01D8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonCalcRainChance;                                     // 0x01E8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensity;                                        // 0x01F8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonCloudsDayLogs;                                      // 0x0208(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormChance;                                        // 0x0218(0x0010) (ZeroConstructor)
	TArray<bool>                                       seasonRainSet;                                            // 0x0228(0x0010) (ZeroConstructor)
	TArray<bool>                                       seasonFogSet;                                             // 0x0238(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainStartHour;                                      // 0x0248(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainEndHour;                                        // 0x0258(0x0010) (ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonClouds;                                             // 0x0268(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonRainDetails;                                        // 0x0278(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonHeatProfile;                                        // 0x0288(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonFogLevels;                                          // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      seasonFogDensity;                                         // 0x02A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensityA;                                       // 0x02B8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonRainDensityB;                                       // 0x02C8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormLength;                                        // 0x02D8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonStormOffset;                                        // 0x02E8(0x0010) (ZeroConstructor)
	class UObject*                                     tempObject;                                               // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              totalSeasonWage;                                          // 0x0300(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0304(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x0308(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x0318(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x0328(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x0338(0x0010) (ZeroConstructor)
	TArray<float>                                      instabilityFactors;                                       // 0x0348(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0358(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x035C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x24];                                      // 0x0390(0x0024) MISSED OFFSET
	float                                              tempDebProgress;                                          // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t1;                                                       // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t2;                                                       // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t3;                                                       // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t4;                                                       // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              t5;                                                       // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherComponent");
		return ptr;
	}


	float YearPassed();
	int YearDay();
	bool SetupRain(int datNum, float rainLength, float rainDensity);
	void SaveDataSnapshot();
	void RecoverDataSnapshot();
	int NextYearDay(int curDay, int Op);
	void Init();
};


// Class DrugDealerSimulator.CepWeatherProfile
// 0x0138 (0x0460 - 0x0328)
class ACepWeatherProfile : public AActor
{
public:
	int                                                yearDaysLen;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class USeasonAstralComponent*                      baseAstralSettings;                                       // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0368(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0378(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0388(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x0398(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMinTemperature;                                     // 0x03A8(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonMaxTemperature;                                     // 0x03B8(0x0010) (ZeroConstructor)
	float                                              totalSeasonWage;                                          // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x03D0(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x03E0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x0400(0x0010) (ZeroConstructor)
	TArray<float>                                      instabilityFactors;                                       // 0x0410(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x0440(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0458(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.CepWeatherProfile");
		return ptr;
	}


	float YearPassed();
	int YearDay();
	void Init();
};


// Class DrugDealerSimulator.DayConditionsLogger_UE
// 0x0058 (0x0080 - 0x0028)
class UDayConditionsLogger_UE : public UObject
{
public:
	int                                                hoursCount;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                markupsPerHour;                                           // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                commitJumps;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              markupMinuteStep;                                         // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              markupHourStep;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<float>                                      vals;                                                     // 0x0040(0x0010) (ZeroConstructor)
	TArray<float>                                      calcProgresses;                                           // 0x0050(0x0010) (ZeroConstructor)
	bool                                               commitingMode;                                            // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                lastWriteIndex;                                           // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                firstCommitIndex;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              startCommitVal;                                           // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              endCommitVal;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                curWriteIndex;                                            // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              tempDebProgress;                                          // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLogger_UE");
		return ptr;
	}


	void StartCommitSession(float newStartVal);
	void SetValueByIndex(int Index, float NewValue);
	void SetValueByHour(float setHour, float NewValue);
	int SeekIndex(float seekHour);
	bool IsInCommitMode();
	int GetValuesLength();
	float GetValueByIndex(int SeekIndex);
	float GetValueByHour(float seekHour, bool extrapolateValue);
	float GetSum(int maxIndex);
	int GetNextIndex(int curIndex, int Op);
	void EndCommitSession(float newEndVal, bool followToEnd);
	void ClassInit();
};


// Class DrugDealerSimulator.DayConditionsLoggerComponent
// 0x0018 (0x0108 - 0x00F0)
class UDayConditionsLoggerComponent : public UActorComponent
{
public:
	TArray<float>                                      Values;                                                   // 0x00F0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.DayConditionsLoggerComponent");
		return ptr;
	}


	void SetValueByIndex(int Index, float NewValue);
	void Init();
};


// Class DrugDealerSimulator.LockpickPuzzle
// 0x0170 (0x0498 - 0x0328)
class ALockpickPuzzle : public AActor
{
public:
	int                                                difficultyLevel;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BobbyPinStartAngle;                                       // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ScrewDriverStartAngle;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseScrewDriverSpeed;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseShakeDamageFactor;                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x033C(0x0008) MISSED OFFSET
	float                                              targetedBobbyPinAngle;                                    // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              targetedScrewDriverAngle;                                 // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x034C(0x001F) MISSED OFFSET
	bool                                               printLogToOutput;                                         // 0x036B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	TArray<float>                                      dfcRangeMin;                                              // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      dfcRangeMax;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x20];                                      // 0x0390(0x0020) MISSED OFFSET
	TArray<float>                                      difficultyAngleMargins;                                   // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyRotationMarginBefore;                           // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyRotationMarginAfter;                            // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyTimeMargins;                                    // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x20];                                      // 0x03F0(0x0020) MISSED OFFSET
	TArray<float>                                      difficultyUnlockingTimes;                                 // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      difficultyHealthDrops;                                    // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData05[0x68];                                      // 0x0430(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.LockpickPuzzle");
		return ptr;
	}


	void UnlockedDone();
	void StartTakingDamage();
	void ResetPuzzle(bool ResetUnlockPosition);
	void PushMouseInput(float X, float Y);
	bool IsUnlocked();
	bool IsScrewDriverInUnlockZone();
	bool IsBobbyPinInUnlockZone();
	bool HasBoobyPinBroke();
	float GetScrewDriverAngle();
	float GetDifficultyMeta(int optNum);
	float GetCurrentResistance();
	float GetBobbyPinHealth();
	float GetBobbyPinAngle();
	void EndTakingDamage();
	void BrokenEvent();
	void ActionButtonReleased();
	void ActionButtonPressed();
};


// Class DrugDealerSimulator.NextSingleton
// 0x0078 (0x00A0 - 0x0028)
class UNextSingleton : public UObject
{
public:
	bool                                               nativeTimeRecover;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class AWorldTimeAndConditions*                     WTAC;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<bool>                                       HelpersList;                                              // 0x0040(0x0010) (ZeroConstructor)
	TArray<bool>                                       MasterHelpers;                                            // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        WTACCounts;                                               // 0x0060(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	int                                                debVal;                                                   // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0084(0x0014) MISSED OFFSET
	bool                                               requireWTAC;                                              // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0099(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingleton");
		return ptr;
	}


	void WTACStoreInSaveSpace();
	void WTACRecover();
	bool ValidateWorld();
	void ResearchWorld();
	void ReInitWTAC();
	void ReassignWorld();
	void PrepareInstancesForSaveEvent();
	void NoticeLoadRequest();
	void LoadDone(bool retryLoad);
	bool InnerLoadPerformed();
	bool CanSaveDependedInstancesInit();
};


// Class DrugDealerSimulator.NextSingletonLibrary
// 0x0000 (0x0028 - 0x0028)
class UNextSingletonLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonLibrary");
		return ptr;
	}


	class UNextSingleton* STATIC_GetNextSingletonData(bool* IsValid);
};


// Class DrugDealerSimulator.NextSingletonWorldHelper
// 0x0018 (0x0340 - 0x0328)
class ANextSingletonWorldHelper : public AActor
{
public:
	bool                                               MasterWorld;                                              // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               validSingleton;                                           // 0x0329(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	class UWorld*                                      tempWorld;                                                // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                debVal;                                                   // 0x0338(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.NextSingletonWorldHelper");
		return ptr;
	}


	void SetMasterState(bool newState);
};


// Class DrugDealerSimulator.SeasonAstralComponent
// 0x0018 (0x0108 - 0x00F0)
class USeasonAstralComponent : public UActorComponent
{
public:
	class AAstralProfile*                              manipulationAstralObject;                                 // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHours;                                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHourCenter;                                            // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralComponent");
		return ptr;
	}


	float GetSunsetTime();
	float GetSunriseTime();
	float GetOrbitTarget();
	float GetOrbitDistanceTarget();
	float GetMaxHeigthTime();
	float GetHeatPower();
};


// Class DrugDealerSimulator.SeasonAstralProfile
// 0x0018 (0x0340 - 0x0328)
class ASeasonAstralProfile : public AActor
{
public:
	class AAstralProfile*                              manipulationAstralObject;                                 // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              orbitToSurfaceAngle;                                      // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              baseDistance;                                             // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHours;                                                 // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunHourCenter;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonAstralProfile");
		return ptr;
	}


	float GetSunsetTime();
	float GetSunriseTime();
	float GetHeatPower();
};


// Class DrugDealerSimulator.SeasonProfile
// 0x0350 (0x0678 - 0x0328)
class ASeasonProfile : public AActor
{
public:
	float                                              lengthWage;                                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class UAirComponent*                               airComp;                                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      astralSettingsComp;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              seasonConditionsImpactance;                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              rainChance;                                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                worldIndex;                                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              seasonMargin;                                             // 0x034C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x328];                                     // 0x0350(0x0328) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.SeasonProfile");
		return ptr;
	}


	class UAirComponent* getAirProfile();
};


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


	int STATIC_WeightedArrayRand(TArray<float> WeightArr);
	void STATIC_testReferences(float* t1, float* t2, float* t3, float* t4);
	int STATIC_shiroFunc2(int A);
	int STATIC_shiroFunc(int A);
	class AWorldTimeAndConditions* STATIC_GetWTAC();
	class UNextSingleton* STATIC_GetSingleton();
	float STATIC_FastProportions(float minTargetRange, float maxTargetRange, float workValue, bool unboundBounds, float minBaseRange, float maxBaseRange);
	float STATIC_extrapolateTest(float Min, float Max, float perc);
	void STATIC_CheckPrice(float drugCurrentPrice, float drugResonablePrice, float reputationFactor, bool AddictedCustomer, float baseMaxSellingFactor, float reputationInfluence, float AddictedInfluence, bool* priceHighOutput, bool* priceTooHighOutput);
	bool STATIC_CanSaveDependedInstancesInit();
	void STATIC_calculateSky(int dayNum, int curHour, int curMinute, bool* sunVisible, float* sunHeight, float* sunPlainAngle, float* sunBrightness, bool* moonVisible, float* varDump);
};


// Class DrugDealerSimulator.TimeProfile
// 0x0030 (0x0358 - 0x0328)
class ATimeProfile : public AActor
{
public:
	float                                              instanceTime;                                             // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                iDay;                                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iHour;                                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                iMinute;                                                  // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              iSec;                                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              iTimeMultiplier;                                          // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.TimeProfile");
		return ptr;
	}


	void setTimeMultiplier(float Val, float propagationTime);
	void setDayHourMinuteTime(int day, int hour, int minute);
	int getIntTimeData(int optNum);
	float GetCurrentTimeMultiplier();
	float dayFloatResult();
	void addSeconds(float addSeconds);
	void addMinutes(int addMinutes);
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


// Class DrugDealerSimulator.WeatherHumanFactors
// 0x0000 (0x00F0 - 0x00F0)
class UWeatherHumanFactors : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanFactors");
		return ptr;
	}

};


// Class DrugDealerSimulator.WeatherHumanSense
// 0x0000 (0x00F0 - 0x00F0)
class UWeatherHumanSense : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherHumanSense");
		return ptr;
	}

};


// Class DrugDealerSimulator.WeatherProfile
// 0x0108 (0x0430 - 0x0328)
class AWeatherProfile : public AActor
{
public:
	int                                                yearDaysLen;                                              // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              defaultSunrise;                                           // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              defaultSunset;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TArray<class ASeasonProfile*>                      Seasons;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWorldTimeAndConditions*                     rootHandler;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               inited;                                                   // 0x0350(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	class ATimeProfile*                                currentTimeInstance;                                      // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                seasonsDefined;                                           // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<float>                                      sunDataSunrises;                                          // 0x0368(0x0010) (ZeroConstructor)
	TArray<float>                                      sunDataSunsets;                                           // 0x0378(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonScheme;                                             // 0x0388(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonBasicTemperature;                                   // 0x0398(0x0010) (ZeroConstructor)
	TArray<float>                                      seasonNightTemperature;                                   // 0x03A8(0x0010) (ZeroConstructor)
	float                                              totalSeasonWage;                                          // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	TArray<int>                                        seasonA;                                                  // 0x03C0(0x0010) (ZeroConstructor)
	TArray<int>                                        seasonB;                                                  // 0x03D0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactA;                                                  // 0x03E0(0x0010) (ZeroConstructor)
	TArray<float>                                      impactB;                                                  // 0x03F0(0x0010) (ZeroConstructor)
	int                                                daysCounter;                                              // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               tempTest;                                                 // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAirProfile*                                 tempAirProfileA;                                          // 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAirProfile*                                 tempAirProfileB;                                          // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WeatherProfile");
		return ptr;
	}


	float YearPassed();
	void Init();
};


// Class DrugDealerSimulator.WorldPhysicsComponent
// 0x0000 (0x00F0 - 0x00F0)
class UWorldPhysicsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsComponent");
		return ptr;
	}

};


// Class DrugDealerSimulator.WorldPhysicsConsts
// 0x0000 (0x0328 - 0x0328)
class AWorldPhysicsConsts : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldPhysicsConsts");
		return ptr;
	}

};


// Class DrugDealerSimulator.WorldTimeAndConditions
// 0x01F0 (0x0518 - 0x0328)
class AWorldTimeAndConditions : public AActor
{
public:
	class UClass*                                      myTimeProfile;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ATimeProfile*                                timeProfileInstance;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               disableWeatherSystem;                                     // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class UAirComponent*                               myBaseAirProfile;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              earlyWSCeremonyHoursLength;                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSCloudsLevel;                                       // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSRainLevel;                                         // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              earlyWSFogLevel;                                          // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCepWeatherComponent*                        weatherProfileInstance;                                   // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               disableSkyCalculations;                                   // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	float                                              standardGametimeMultiplier;                               // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              standardCloudSpeed;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x036C(0x0004) MISSED OFFSET
	class UClass*                                      sunAstralProfile;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAstralProfile*                              sunBaseInstance;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      sunRotator;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      moonAstralProfile;                                        // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AAstralProfile*                              moonInstance;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      moonRotator;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              calculationInterval;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                minNonCalcFrames;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                innerCalcFrameSkip;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UWTACFactorsComponent*                       currentFactors;                                           // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWorldPhysicsComponent*                      planetPhysicsData;                                        // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               weatherSpectrateMode;                                     // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x03C1(0x0013) MISSED OFFSET
	bool                                               loadStarted;                                              // 0x03D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	float                                              absmin_UltraSKyTime;                                      // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunrise_UltraSkyTime;                                     // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              noon_UltraSkyTime;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              sunset_UltraSkyTime;                                      // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              absmax_UltraSKyTime;                                      // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              moonPhaseLength;                                          // 0x03EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               moonReportedShadows;                                      // 0x03F0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               sunReportedShadows;                                       // 0x03F1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               earlyNiceWeatherEnabled;                                  // 0x03F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               earlyWSCeremonyEnd;                                       // 0x03F3(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                earlyWSEnabledDay;                                        // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              earlyWSEnabledHour;                                       // 0x03F8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              debSaveMinute;                                            // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                yearDaysLen;                                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	TArray<class UDayConditionsLogger_UE*>             seasonClouds;                                             // 0x0408(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonRainDetails;                                        // 0x0418(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonHeatProfile;                                        // 0x0428(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UDayConditionsLogger_UE*>             seasonFogLevels;                                          // 0x0438(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               debugMode;                                                // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                debHour;                                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                debDay;                                                   // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                debMinute;                                                // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              debTimeSpeed;                                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     actorLocation;                                            // 0x045C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    actorRotation;                                            // 0x0468(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x24];                                      // 0x0474(0x0024) MISSED OFFSET
	class ASeasonProfile*                              tempSeasonProfileA;                                       // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASeasonProfile*                              tempSeasonProfileB;                                       // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAirComponent*                               tempAirProfileA;                                          // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAirComponent*                               tempAirProfileB;                                          // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralA;                                        // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USeasonAstralComponent*                      tempSeasonAstralB;                                        // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData09[0x50];                                      // 0x04C8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditions");
		return ptr;
	}


	class ATimeProfile* TimeProfile();
	void StoreInSaveSpace(int Index, float Val);
	void StartRain();
	void StartFog();
	void ShadowsSettingsChanged();
	void SetUltraSkyInit();
	void SetTimeMulptiplier(float newFactor, float propagationTime);
	void SetTime(int dayValue, int hourValue, int minuteValue);
	void SaveDataSnapshot();
	void ReInitLoggers();
	void RecoverDataSnapshot(bool recoverTime);
	void PureInit();
	void PoliceArrestTimeShift();
	void NoticeCalcPhaseDone();
	void MarkNewLoad();
	bool IsUltraSkyInited();
	bool IsCurrentlyRaining();
	bool IsAfterNoon();
	void InWorldInitiated();
	void InnerDisableWeatherSystem();
	void Init();
	bool HasFog();
	float GetSunPowerAfterBounced(float cAngle);
	float GetSunPower();
	float GetSunLigthPower();
	float GetRainValue();
	class UDayConditionsLogger_UE* GetRainLogger(int dayNum);
	float GetMoonOrbitProgress();
	float GetMoonOrbitAngle();
	bool GetInitiationState();
	class UDayConditionsLogger_UE* GetHeatLogger(int dayNum);
	float GetFromSaveSpace(int Index);
	class UDayConditionsLogger_UE* GetFogLogger(int dayNum);
	float GetCurrentTimeForUltraSky();
	bool GetCurrentSunShadows();
	float GetCurrentSunPower();
	float GetCurrentSunOrbit();
	float GetCurrentSunDistance();
	float GetCurrentSunAngle();
	float GetCurrentStarsIntensity();
	void GetCurrentShadowSettings(bool* sunShadows, bool* moonShadows);
	float GetCurrentNigthBrightness();
	bool GetCurrentMoonShadows();
	float GetCurrentMoonPhase();
	float GetCurrentMoonBrigthness();
	int GetCurrentIntSeconds();
	int GetCurrentIntMinute();
	int GetCurrentIntHour();
	int GetCurrentIntDay();
	float GetCurrentFogLevel();
	float GetCurrentFloatMinute();
	float GetCurrentFloatHour();
	float GetCurrentFloatDay();
	float GetCurrentCloudsSpeed();
	float GetCurrentCloudsLevel();
	float GetCurrentBrightness();
	class UDayConditionsLogger_UE* GetCloudLogger(int dayNum);
	float GetCalcSunDistFactor(float baseVal);
	float GetCalcSunDistanceFactor();
	class UAirComponent* getBasicAirProfile();
	float GetAnyTimeSunPower(int dayNum, float hourMark);
	float GetAnyTimeCloudsSunFactor(int dayNum, float hourMark);
	float GetAnyTimeCloudsLevel(int dayNum, float hourMark);
	void EndRain();
	void EndFog();
	void EnableWeatherSystem();
	void CalcSunRaysAngle();
	void CalcSunPhysics();
	void CalcInteraction();
	void Calc();
	void AddTime(float hoursValue, float minuteValue);
};


// Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors
// 0x0028 (0x0350 - 0x0328)
class AWorldTimeAndConditionsCurFactors : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0328(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WorldTimeAndConditionsCurFactors");
		return ptr;
	}


	void noticeFactors(float DeltaTime, float currentRainChance, float sunPower);
};


// Class DrugDealerSimulator.WTACFactorsComponent
// 0x0080 (0x0170 - 0x00F0)
class UWTACFactorsComponent : public UActorComponent
{
public:
	TArray<float>                                      factorFloats;                                             // 0x00F0(0x0010) (ZeroConstructor)
	int                                                saveT1;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                serializedFloatsObjects;                                  // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET
	uint32_t                                           allocated;                                                // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x012C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DrugDealerSimulator.WTACFactorsComponent");
		return ptr;
	}


	void SetSunVisibility(bool newVisibility);
	void SetSunRaysAngle(float newSunRays);
	void SetSunPower(float newPower);
	void SetSunOrbitProgress(float deg);
	void SetSunOrbitDistance(float newDistance);
	void SetSunOrbitAngle(float newOrbitAngle);
	void SetSunLumens(float newLumensValue);
	void SetStarsIntensity(float NewValue);
	void SetRainValue(float newRainValue);
	void SetRainState(bool newState);
	void SetOrbitPhase(float shPassed);
	void SetMoonOrbit(float newProgress);
	void SetFogState(bool newState);
	void SetFogLevel(float newLevel);
	void SetFactorFloatData(int Index, float fVal);
	void SetCloudsLevel(float newLevel);
	void SetBrigthnesslevel(float newBrigthnessLevel);
	void SetAtmosphereSunReflections(float newAtmosphereReflections);
	void Reinitialize();
	void noticeFactors(float DeltaTime, float currentRainChance, float currentRainDensityTarget, float currentStormChance, float sunPower);
	bool NeedsReinitialization();
	float GetSunOrbitAbsoluteDeg();
	float GetFactorFloatData(int Index);
	bool CanRecover();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
