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
	 * Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
	{
	public:
		unsigned char                                              UnknownData_4W0E[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY79[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFaceDetectionResult                                FaceDetectionResult;                                     // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MO9S[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* STATIC_CreateProxyObjectForDetectFaces(class UTexture* SourceImage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
