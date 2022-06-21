#pragma once

/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MovieSceneCapture.MovieSceneCaptureProtocolBase
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureProtocolBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_1YZ4[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMovieSceneCaptureProtocolState                            State;                                                   // 0x0050(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bFrameRequested;                                         // 0x0051(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DWCC[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	public:
		bool IsCapturing();
		EMovieSceneCaptureProtocolState GetState();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.NullAudioCaptureProtocol
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
	{
	public:
		class FString                                              Filename;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WWG8[0x28];                                  // 0x0068(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.CompositionGraphCaptureProtocol
	 * Size -> 0x0068 (FullSize[0x00C0] - InheritedSize[0x0058])
	 */
	class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		struct FCompositionGraphCapturePasses                      IncludeRenderPasses;                                     // 0x0058(0x0010) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bCaptureFramesInHDR;                                     // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KULS[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HDRCompressionQuality;                                   // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDRCaptureGamut                                           CaptureGamut;                                            // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ1Y[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     PostProcessingMaterial;                                  // 0x0078(0x0018) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableScreenPercentage;                                // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YRE[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  PostProcessingMaterialPtr;                               // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EWST[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.FrameGrabberProtocol
	 * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
	 */
	class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		unsigned char                                              UnknownData_QNW1[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol
	 * Size -> 0x0070 (FullSize[0x00D8] - InheritedSize[0x0068])
	 */
	class UImageSequenceProtocol : public UFrameGrabberProtocol
	{
	public:
		unsigned char                                              UnknownData_NVFQ[0x70];                                  // 0x0068(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.CompressedImageSequenceProtocol
	 * Size -> 0x0008 (FullSize[0x00E0] - InheritedSize[0x00D8])
	 */
	class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
	{
	public:
		int32_t                                                    CompressionQuality;                                      // 0x00D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ILQO[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_BMP
	 * Size -> 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
	 */
	class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_PNG
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_JPG
	 * Size -> 0x0000 (FullSize[0x00E0] - InheritedSize[0x00E0])
	 */
	class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.ImageSequenceProtocol_EXR
	 * Size -> 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
	 */
	class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
	{
	public:
		bool                                                       bCompressed;                                             // 0x00D8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHDRCaptureGamut                                           CaptureGamut;                                            // 0x00D9(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYZD[0xE];                                   // 0x00DA(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCapture
	 * Size -> 0x01C8 (FullSize[0x01F0] - InheritedSize[0x0028])
	 */
	class UMovieSceneCapture : public UObject
	{
	public:
		unsigned char                                              UnknownData_DY06[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      ImageCaptureProtocolType;                                // 0x0038(0x0018) Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      AudioCaptureProtocolType;                                // 0x0050(0x0018) Edit, ZeroConstructor, Config, NoClear, NativeAccessSpecifierPublic
		class UMovieSceneImageCaptureProtocolBase*                 ImageCaptureProtocol;                                    // 0x0068(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovieSceneAudioCaptureProtocolBase*                 AudioCaptureProtocol;                                    // 0x0070(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneCaptureSettings                          Settings;                                                // 0x0078(0x0050) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		bool                                                       bUseSeparateProcess;                                     // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCloseEditorWhenCaptureStarts;                           // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0VC[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArguments;                          // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InheritedCommandLineArguments;                           // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I25X[0x100];                                 // 0x00F0(0x0100) MISSED OFFSET (PADDING)

	public:
		void SetImageCaptureProtocolType(class UClass* ProtocolType);
		void SetAudioCaptureProtocolType(class UClass* ProtocolType);
		class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();
		class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.LevelCapture
	 * Size -> 0x0020 (FullSize[0x0210] - InheritedSize[0x01F0])
	 */
	class ULevelCapture : public UMovieSceneCapture
	{
	public:
		bool                                                       bAutoStartCapture;                                       // 0x01F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM25[0xB];                                   // 0x01F1(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PrerequisiteActorId;                                     // 0x01FC(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BBGQ[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.MovieSceneCaptureEnvironment
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMovieSceneCaptureEnvironment : public UObject
	{
	public:
		bool STATIC_IsCaptureInProgress();
		int32_t STATIC_GetCaptureFrameNumber();
		float STATIC_GetCaptureElapsedTime();
		class UMovieSceneImageCaptureProtocolBase* STATIC_FindImageCaptureProtocol();
		class UMovieSceneAudioCaptureProtocolBase* STATIC_FindAudioCaptureProtocol();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.UserDefinedCaptureProtocol
	 * Size -> 0x0088 (FullSize[0x00E0] - InheritedSize[0x0058])
	 */
	class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
	{
	public:
		class UWorld*                                              World;                                                   // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S7BN[0x80];                                  // 0x0060(0x0080) MISSED OFFSET (PADDING)

	public:
		void StopCapturingFinalPixels();
		void StartCapturingFinalPixels(const class FName& StreamName);
		void ResolveBuffer(class UTexture* Buffer, const class FName& BufferName, const class FScriptDelegate& handler);
		void PushBufferToStream(class UTexture* Buffer, const class FName& StreamName);
		void OnWarmUp();
		void OnTick();
		void OnStartCapture();
		bool OnSetup();
		void OnPreTick();
		void OnPauseCapture();
		void OnFinalize();
		void OnCaptureFrame();
		bool OnCanFinalize();
		void OnBeginFinalize();
		struct FFrameMetrics GetCurrentFrameMetrics();
		class FString GenerateFilename(const struct FFrameMetrics& InFrameMetrics);
		void BindToStream(const class FName& StreamName, const class FScriptDelegate& handler);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.UserDefinedImageCaptureProtocol
	 * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
	 */
	class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
	{
	public:
		EDesiredImageFormat                                        Format;                                                  // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCompression;                                      // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SNSY[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CompressionQuality;                                      // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void WriteImageToDisk(const struct FCapturedPixels& PixelData, const class FName& StreamName, const struct FFrameMetrics& FrameMetrics, bool bCopyImageData);
		class FString GenerateFilenameForCurrentFrame();
		class FString GenerateFilenameForBuffer(class UTexture* Buffer, const class FName& StreamName);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieSceneCapture.VideoCaptureProtocol
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UVideoCaptureProtocol : public UFrameGrabberProtocol
	{
	public:
		bool                                                       bUseCompression;                                         // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W92A[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CompressionQuality;                                      // 0x006C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VideoCodec;                                              // 0x0070(0x0010) Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPNB[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
