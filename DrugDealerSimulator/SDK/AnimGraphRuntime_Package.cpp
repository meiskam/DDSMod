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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimCustomInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCustomInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimCustomInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_PlayMontageNotify.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotify::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimNotify_PlayMontageNotifyWindow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UAnimSequencerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimSequencerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65E40
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     RootPos                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPos                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     JointTarget                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Effector                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutJointPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutEndPos                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowStretching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartStretchRatio                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxStretchScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");
		
		UKismetAnimationLibrary_K2_TwoBoneIK_Params params {};
		params.RootPos = RootPos;
		params.JointPos = JointPos;
		params.EndPos = EndPos;
		params.JointTarget = JointTarget;
		params.Effector = Effector;
		params.bAllowStretching = bAllowStretching;
		params.StartStretchRatio = StartStretchRatio;
		params.MaxStretchScale = MaxStretchScale;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutJointPos != nullptr)
			*OutJointPos = params.OutJointPos;
		if (OutEndPos != nullptr)
			*OutEndPos = params.OutEndPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65B90
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxY                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMinZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMaxZ                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		params.RangeOutMinX = RangeOutMinX;
		params.RangeOutMaxX = RangeOutMaxX;
		params.RangeOutMinY = RangeOutMinY;
		params.RangeOutMaxY = RangeOutMaxY;
		params.RangeOutMinZ = RangeOutMinZ;
		params.RangeOutMaxZ = RangeOutMaxZ;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65A80
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              RangeOutMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");
		
		UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params {};
		params.Value = Value;
		params.RangeOutMin = RangeOutMin;
		params.RangeOutMax = RangeOutMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65800
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FCoreUObject_FTransform                     CurrentTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     TargetPosition                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     LookAtVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseUpVector                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     UpVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ClampConeInDegree                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCoreUObject_FTransform UKismetAnimationLibrary::STATIC_K2_LookAt(const struct FCoreUObject_FTransform& CurrentTransform, const struct FVector& TargetPosition, const struct FVector& LookAtVector, bool bUseUpVector, const struct FVector& UpVector, float ClampConeInDegree)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");
		
		UKismetAnimationLibrary_K2_LookAt_Params params {};
		params.CurrentTransform = CurrentTransform;
		params.TargetPosition = TargetPosition;
		params.LookAtVector = LookAtVector;
		params.bUseUpVector = bUseUpVector;
		params.UpVector = UpVector;
		params.ClampConeInDegree = ClampConeInDegree;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65540
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameA                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceA                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameB                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERelativeTransformSpace                            SocketSpaceB                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bRemapRange                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InRangeMax                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMin                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OutRangeMax                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameA, ERelativeTransformSpace SocketSpaceA, const class FName& SocketOrBoneNameB, ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");
		
		UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameA = SocketOrBoneNameA;
		params.SocketSpaceA = SocketSpaceA;
		params.SocketOrBoneNameB = SocketOrBoneNameB;
		params.SocketSpaceB = SocketSpaceB;
		params.bRemapRange = bRemapRange;
		params.InRangeMin = InRangeMin;
		params.InRangeMax = InRangeMax;
		params.OutRangeMin = OutRangeMin;
		params.OutRangeMax = OutRangeMax;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F65440
	 * 		Name   -> Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Component                                                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameFrom                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        SocketOrBoneNameTo                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, const class FName& SocketOrBoneNameFrom, const class FName& SocketOrBoneNameTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");
		
		UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params {};
		params.Component = Component;
		params.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
		params.SocketOrBoneNameTo = SocketOrBoneNameTo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UKismetAnimationLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKismetAnimationLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F663F0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyEndReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");
		
		UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F66310
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	 * 		Flags  -> (Final, Native, Protected, HasOutParms)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const class FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");
		
		UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params {};
		params.NotifyName = NotifyName;
		params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F66240
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");
		
		UPlayMontageCallbackProxy_OnMontageEnded_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F66170
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");
		
		UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params {};
		params.Montage = Montage;
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00F652C0
	 * 		Name   -> Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      InSkeletalMeshComponent                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartingPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        StartingSection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const class FName& StartingSection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");
		
		UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params {};
		params.InSkeletalMeshComponent = InSkeletalMeshComponent;
		params.MontageToPlay = MontageToPlay;
		params.PlayRate = PlayRate;
		params.StartingPosition = StartingPosition;
		params.StartingSection = StartingSection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPlayMontageCallbackProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayMontageCallbackProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}

}


