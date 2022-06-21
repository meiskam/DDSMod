﻿#pragma once

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
	 * Class MediaAssets.MediaSource
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMediaSource : public UObject
	{
	public:
		unsigned char                                              UnknownData_219Z[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		bool Validate();
		class FString GetUrl();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.BaseMediaSource
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UBaseMediaSource : public UMediaSource
	{
	public:
		class FName                                                PlayerName;                                              // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.FileMediaSource
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UFileMediaSource : public UBaseMediaSource
	{
	public:
		class FString                                              FilePath;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PrecacheFile;                                            // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L557[0x17];                                  // 0x0049(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetFilePath(const class FString& Path);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_EnumerateWebcamCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		void STATIC_EnumerateVideoCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		void STATIC_EnumerateAudioCaptureDevices(TArray<struct FMediaCaptureDevice>* OutDevices, int32_t Filter);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaPlayer
	 * Size -> 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
	 */
	class UMediaPlayer : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnEndReached;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaClosed;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaOpened;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaOpenFailed;                                       // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackResumed;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackSuspended;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSeekCompleted;                                         // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTracksChanged;                                         // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FTimespan                                           CacheAhead;                                              // 0x00A8(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           CacheBehind;                                             // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimespan                                           CacheBehindGame;                                         // 0x00B8(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NativeAudioOut;                                          // 0x00C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayOnOpen;                                              // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQ4R[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Shuffle : 1;                                             // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Loop : 1;                                                // 0x00C4(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ME04[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlaylist*                                      Playlist;                                                // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    PlaylistIndex;                                           // 0x00D0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N689[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimespan                                           TimeDelay;                                               // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HorizontalFieldOfView;                                   // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VerticalFieldOfView;                                     // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            ViewRotation;                                            // 0x00E8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K7OD[0x2C];                                  // 0x00F4(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               PlayerGuid;                                              // 0x0120(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WSUI[0x8];                                   // 0x0130(0x0008) MISSED OFFSET (PADDING)

	public:
		bool SupportsSeeking();
		bool SupportsScrubbing();
		bool SupportsRate(float Rate, bool Unthinned);
		bool SetViewRotation(const struct FRotator& Rotation, bool Absolute);
		bool SetViewField(float Horizontal, float Vertical, bool Absolute);
		bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);
		bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);
		void SetTimeDelay(const struct FTimespan& TimeDelay);
		bool SetRate(float Rate);
		bool SetNativeVolume(float Volume);
		bool SetLooping(bool Looping);
		void SetDesiredPlayerName(const class FName& PlayerName);
		void SetBlockOnTime(const struct FTimespan& Time);
		bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		bool Seek(const struct FTimespan& Time);
		bool Rewind();
		bool Reopen();
		bool Previous();
		bool Play();
		bool Pause();
		bool OpenUrl(const class FString& URL);
		bool OpenSourceWithOptions(class UMediaSource* MediaSource, const struct FMediaPlayerOptions& Options);
		bool OpenSource(class UMediaSource* MediaSource);
		bool OpenPlaylistIndex(class UMediaPlaylist* InPlaylist, int32_t Index);
		bool OpenPlaylist(class UMediaPlaylist* InPlaylist);
		bool OpenFile(const class FString& FilePath);
		bool Next();
		bool IsReady();
		bool IsPreparing();
		bool IsPlaying();
		bool IsPaused();
		bool IsLooping();
		bool IsConnecting();
		bool IsBuffering();
		bool HasError();
		struct FRotator GetViewRotation();
		class FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);
		struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);
		float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);
		struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);
		float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);
		float GetVerticalFieldOfView();
		class FString GetUrl();
		class FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		class FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		struct FTimespan GetTimeDelay();
		struct FTimespan GetTime();
		void GetSupportedRates(TArray<struct FFloatRange>* OutRates, bool Unthinned);
		int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);
		float GetRate();
		int32_t GetPlaylistIndex();
		class UMediaPlaylist* GetPlaylist();
		class FName GetPlayerName();
		int32_t GetNumTracks(EMediaPlayerTrack TrackType);
		int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);
		class FText GetMediaName();
		float GetHorizontalFieldOfView();
		struct FTimespan GetDuration();
		class FName GetDesiredPlayerName();
		class FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);
		int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);
		int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);
		void Close();
		bool CanPlayUrl(const class FString& URL);
		bool CanPlaySource(class UMediaSource* MediaSource);
		bool CanPause();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaPlaylist
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMediaPlaylist : public UObject
	{
	public:
		TArray<class UMediaSource*>                                Items;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		bool Replace(int32_t Index, class UMediaSource* Replacement);
		bool RemoveAt(int32_t Index);
		bool Remove(class UMediaSource* MediaSource);
		int32_t Num();
		void Insert(class UMediaSource* MediaSource, int32_t Index);
		class UMediaSource* GetRandom(int32_t* OutIndex);
		class UMediaSource* GetPrevious(int32_t* InOutIndex);
		class UMediaSource* GetNext(int32_t* InOutIndex);
		class UMediaSource* Get(int32_t Index);
		bool AddUrl(const class FString& URL);
		bool AddFile(const class FString& FilePath);
		bool Add(class UMediaSource* MediaSource);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaSoundComponent
	 * Size -> 0x00A0 (FullSize[0x0660] - InheritedSize[0x05C0])
	 */
	class UMediaSoundComponent : public USynthComponent
	{
	public:
		EMediaSoundChannels                                        Channels;                                                // 0x05C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GU81[0x3];                                   // 0x05C0(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       DynamicRateAdjustment;                                   // 0x05C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3IZO[0x3];                                   // 0x05C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RateAdjustmentFactor;                                    // 0x05C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         RateAdjustmentRange;                                     // 0x05CC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45ZT[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x05E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1G4O[0x78];                                  // 0x05E8(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
		class UMediaPlayer* GetMediaPlayer();
		bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.MediaTexture
	 * Size -> 0x0090 (FullSize[0x0140] - InheritedSize[0x00B0])
	 */
	class UMediaTexture : public UTexture
	{
	public:
		ETextureAddress                                            AddressX;                                                // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextureAddress                                            AddressY;                                                // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoClear;                                               // 0x00B2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Z97[0x1];                                   // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ClearColor;                                              // 0x00B4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IN7[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WC6R[0x70];                                  // 0x00D0(0x0070) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
		int32_t GetWidth();
		class UMediaPlayer* GetMediaPlayer();
		int32_t GetHeight();
		float GetAspectRatio();
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.PlatformMediaSource
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UPlatformMediaSource : public UMediaSource
	{
	public:
		class UMediaSource*                                        MediaSource;                                             // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.StreamMediaSource
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UStreamMediaSource : public UBaseMediaSource
	{
	public:
		class FString                                              StreamUrl;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaAssets.TimeSynchronizableMediaSource
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UTimeSynchronizableMediaSource : public UBaseMediaSource
	{
	public:
		bool                                                       bUseTimeSynchronization;                                 // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMA1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
