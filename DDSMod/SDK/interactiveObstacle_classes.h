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

// BlueprintGeneratedClass interactiveObstacle.interactiveObstacle_C
// 0x0104 (0x042C - 0x0328)
class AinteractiveObstacle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        jumpTarget;                                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            jumpCam;                                                  // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        cameraRotator;                                            // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               interactionBox;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               obstacleBox;                                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              slideUnderCam_camRot_029F842F494E859DDC82A896F7B64D22;    // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              slideUnderCam_camXPos_029F842F494E859DDC82A896F7B64D22;   // 0x036C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              slideUnderCam_camZPos_029F842F494E859DDC82A896F7B64D22;   // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    slideUnderCam__Direction_029F842F494E859DDC82A896F7B64D22;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          slideUnderCam;                                            // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              jumpOnCam_camRot_537B225A4C73FFA66527139FF37D7C53;        // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOnCam_camXPos_537B225A4C73FFA66527139FF37D7C53;       // 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOnCam_camZPos_537B225A4C73FFA66527139FF37D7C53;       // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    jumpOnCam__Direction_537B225A4C73FFA66527139FF37D7C53;    // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          jumpOnCam;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              jumpOverBigCam_camRot2_09DFF91240DF6D30E15C7BBA9BD869E5;  // 0x0398(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverBigCam_camRot_09DFF91240DF6D30E15C7BBA9BD869E5;   // 0x039C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverBigCam_camXPos_09DFF91240DF6D30E15C7BBA9BD869E5;  // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverBigCam_camZPos_09DFF91240DF6D30E15C7BBA9BD869E5;  // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    jumpOverBigCam__Direction_09DFF91240DF6D30E15C7BBA9BD869E5;// 0x03A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          jumpOverBigCam;                                           // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              jumpOverCam_camRot2_2FC0FBA540347A051C36319E0AF3FAC5;     // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverCam_camRot_2FC0FBA540347A051C36319E0AF3FAC5;      // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverCam_camXPos_2FC0FBA540347A051C36319E0AF3FAC5;     // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              jumpOverCam_camZPos_2FC0FBA540347A051C36319E0AF3FAC5;     // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    jumpOverCam__Direction_2FC0FBA540347A051C36319E0AF3FAC5;  // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          jumpOverCam;                                              // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       ActionName;                                               // 0x03D8(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EobstacleTypes>                        ObstacleType;                                             // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               oneWay;                                                   // 0x03F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03F2(0x0002) MISSED OFFSET
	struct FVector                                     ObstacleOffset;                                           // 0x03F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              climbOverHeight;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     obstacleSize;                                             // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionSize;                                          // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              endPlayerPos;                                             // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              endControlRotation;                                       // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               caughtWhileJumping;                                       // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EobstacleTypeCategory>                 obstacleSoundType;                                        // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0426(0x0002) MISSED OFFSET
	float                                              inBlendTime;                                              // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass interactiveObstacle.interactiveObstacle_C");
		return ptr;
	}


	void playObstacleJumpSound();
	void jumpDirectionSetup();
	void checkDirections(bool* CanJump);
	void UserConstructionScript();
	void jumpOverCam__FinishedFunc();
	void jumpOverCam__UpdateFunc();
	void jumpOverBigCam__FinishedFunc();
	void jumpOverBigCam__UpdateFunc();
	void jumpOnCam__FinishedFunc();
	void jumpOnCam__UpdateFunc();
	void slideUnderCam__FinishedFunc();
	void slideUnderCam__UpdateFunc();
	void ReceiveBeginPlay();
	void obstacleActivation();
	void caughtOnJump();
	void resetJumpActivation();
	void ExecuteUbergraph_interactiveObstacle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
