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
	 * Class VariantManagerContent.LevelVariantSets
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class ULevelVariantSets : public UObject
	{
	public:
		TArray<class UVariantSet*>                                 VariantSets;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class UVariantSet*, bool>                             DisplayNodeExpansionStates;                              // 0x0038(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		class UVariantSet* GetVariantSet(int32_t VariantSetIndex);
		int32_t GetNumVariantSets();
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.LevelVariantSetsActor
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ALevelVariantSetsActor : public AActor
	{
	public:
		struct FSoftObjectPath                                     LevelVariantSets;                                        // 0x0328(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName);
		bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);
		void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
		class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValue
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class UPropertyValue : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z3SE[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FullDisplayString;                                       // 0x0078(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHasRecordedData;                                        // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsObjectProperty;                                       // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8D08[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      ValueBytes;                                              // 0x0090(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EPropertyValueCategory                                     PropCategory;                                            // 0x00A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CDV9[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UProperty*>                                   Properties;                                              // 0x00A8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<int32_t>                                            PropertyIndices;                                         // 0x00B8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7LW[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueMaterial
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UPropertyValueMaterial : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueTransform
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UPropertyValueTransform : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.PropertyValueVisibility
	 * Size -> 0x0000 (FullSize[0x00F0] - InheritedSize[0x00F0])
	 */
	class UPropertyValueVisibility : public UPropertyValue
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.Variant
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UVariant : public UObject
	{
	public:
		class FText                                                DisplayText;                                             // 0x0028(0x0018) NativeAccessSpecifierPrivate
		TArray<class UVariantObjectBinding*>                       ObjectBindings;                                          // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SwitchOn();
		void SetDisplayText(const class FText& NewDisplayText);
		int32_t GetNumActors();
		class FText GetDisplayText();
		class AActor* GetActor(int32_t ActorIndex);
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantObjectBinding
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UVariantObjectBinding : public UObject
	{
	public:
		struct FSoftObjectPath                                     ObjectPtr;                                               // 0x0028(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TLazyObjectPtr<class UObject>                              LazyObjectPtr;                                           // 0x0040(0x001C) IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XKX1[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyValue*>                              CapturedProperties;                                      // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VariantManagerContent.VariantSet
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UVariantSet : public UObject
	{
	public:
		class FText                                                DisplayText;                                             // 0x0028(0x0018) NativeAccessSpecifierPrivate
		TArray<class UVariant*>                                    Variants;                                                // 0x0040(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetDisplayText(const class FText& NewDisplayText);
		class UVariant* GetVariant(int32_t VariantIndex);
		int32_t GetNumVariants();
		class FText GetDisplayText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
