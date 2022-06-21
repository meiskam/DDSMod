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
	 * Class CoreUObject.Object
	 * Size -> 0x0028
	 */
	class UObject
	{
	public:
		static class TUObjectArray*                                GObjects;                                                // 0x0000(0x0008) PREDEFINED PROPERTY
		void*                                                      VfTable;                                                 // 0x0000(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    Flags;                                                   // 0x0008(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    InternalIndex;                                           // 0x000C(0x0004) PRE-DEFINED PROPERTY
		class UClass*                                              Class;                                                   // 0x0010(0x0008) PRE-DEFINED PROPERTY
		FName                                                      Name;                                                    // 0x0018(0x0008) PRE-DEFINED PROPERTY
		class UObject*                                             Outer;                                                   // 0x0020(0x0008) PRE-DEFINED PROPERTY

	public:
		static TUObjectArray& GetGlobalObjects();
		std::string GetName() const;
		std::string GetFullName() const;
		template<typename T>
		static T* FindObject(const std::string& name)
		{
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static T* FindObject()
		{
			auto v = T::StaticClass();
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					return static_cast<T*>(object);
			}
			return nullptr;
		}

		template<typename T>
		static std::vector<T*> FindObjects(const std::string& name)
		{
			std::vector<T*> ret;
			for (int32_t i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->GetFullName() == name)
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		template<typename T>
		static std::vector<T*> FindObjects()
		{
			std::vector<T*> ret;
			auto v = T::StaticClass();
			for (int i = 0; i < UObject::GetGlobalObjects().Count(); ++i)
			{
				auto object = UObject::GetGlobalObjects().GetByIndex(i);
			
				if (!object)
					continue;
			
				if (object->IsA(v))
					ret.push_back(static_cast<T*>(object));
			}
			return ret;
		}

		static UClass* FindClass(const std::string& name);
		template<typename T>
		static T* GetObjectCasted(size_t index)
		{
			return static_cast<T*>(UObject::GetGlobalObjects().GetByIndex(index));
		}

		bool IsA(UClass* cmp) const;
		void ExecuteUbergraph(int32_t EntryPoint);
		void ProcessEvent(class UFunction* function, void* parms);
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Interface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInterface : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.GCObjectReferencer
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UGCObjectReferencer : public UObject
	{
	public:
		unsigned char                                              UnknownData_NJH4[0x38];                                  // 0x0028(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextBuffer
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UTextBuffer : public UObject
	{
	public:
		unsigned char                                              UnknownData_ANQC[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Field
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UField : public UObject
	{
	public:
		class UField*                                              Next;                                                    // 0x0028(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Struct
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UStruct : public UField
	{
	public:
		class UStruct*                                             SuperField;                                              // 0x0030(0x0008) PRE-DEFINED PROPERTY
		class UField*                                              Children;                                                // 0x0038(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    PropertySize;                                            // 0x0040(0x0004) PRE-DEFINED PROPERTY
		int32_t                                                    MinAlignment;                                            // 0x0044(0x0004) PRE-DEFINED PROPERTY
		TArray<uint8_t>                                            Script;                                                  // 0x0048(0x0010) PRE-DEFINED PROPERTY
		class UProperty*                                           PropertyLink;                                            // 0x0058(0x0008) PRE-DEFINED PROPERTY
		class UProperty*                                           RefLink;                                                 // 0x0060(0x0008) PRE-DEFINED PROPERTY
		class UProperty*                                           DestructorLink;                                          // 0x0068(0x0008) PRE-DEFINED PROPERTY
		class UProperty*                                           PostConstructLink;                                       // 0x0070(0x0008) PRE-DEFINED PROPERTY
		TArray<UObject*>                                           ScriptObjectReferences;                                  // 0x0078(0x0010) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ScriptStruct
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UScriptStruct : public UStruct
	{
	public:
		unsigned char                                              UnknownData_G0T1[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Package
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UPackage : public UObject
	{
	public:
		unsigned char                                              UnknownData_O2DN[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Class
	 * Size -> 0x0180 (FullSize[0x0208] - InheritedSize[0x0088])
	 */
	class UClass : public UStruct
	{
	public:
		unsigned char                                              UnknownData_TXTK[0x180];                                 // 0x0088(0x0180) MISSED OFFSET (PADDING)

	public:
		template<typename T>
		T* CreateDefaultObjectOfType()
		{
			return static_cast<T*>(CreateDefaultObject());
		}

		UObject* CreateDefaultObject();
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Function
	 * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
	 */
	class UFunction : public UStruct
	{
	public:
		int32_t                                                    FunctionFlags;                                           // 0x0088(0x0004) PRE-DEFINED PROPERTY
		int16_t                                                    RepOffset;                                               // 0x008C(0x0002) PRE-DEFINED PROPERTY
		int8_t                                                     NumParms;                                                // 0x008E(0x0001) PRE-DEFINED PROPERTY
		unsigned char                                              pad_CXSZVJEDJB[0x01];                                    // 0x008F(0x0001) PRE-DEFINED PROPERTY
		int16_t                                                    ParmsSize;                                               // 0x0090(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   ReturnValueOffset;                                       // 0x0092(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCId;                                                   // 0x0094(0x0002) PRE-DEFINED PROPERTY
		uint16_t                                                   RPCResponseId;                                           // 0x0096(0x0002) PRE-DEFINED PROPERTY
		class UProperty*                                           FirstPropertyToInit;                                     // 0x0098(0x0008) PRE-DEFINED PROPERTY
		class UFunction*                                           EventGraphFunction;                                      // 0x00A0(0x0008) PRE-DEFINED PROPERTY
		int32_t                                                    EventGraphCallOffset;                                    // 0x00A8(0x0004) PRE-DEFINED PROPERTY
		unsigned char                                              pad_UM5N9AS9FY[0x04];                                    // 0x00AC(0x0004) PRE-DEFINED PROPERTY
		void*                                                      Func;                                                    // 0x00B0(0x0008) PRE-DEFINED PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateFunction
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UDelegateFunction : public UFunction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DynamicClass
	 * Size -> 0x0068 (FullSize[0x0270] - InheritedSize[0x0208])
	 */
	class UDynamicClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_8CKH[0x68];                                  // 0x0208(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.PackageMap
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UPackageMap : public UObject
	{
	public:
		unsigned char                                              UnknownData_Z0T9[0xB8];                                  // 0x0028(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Enum
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UEnum : public UField
	{
	public:
		unsigned char                                              UnknownData_REW3[0x30];                                  // 0x0030(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Property
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UProperty : public UField
	{
	public:
		unsigned char                                              UnknownData_229A[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.EnumProperty
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UEnumProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_M67R[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderClass
	 * Size -> 0x01B8 (FullSize[0x03C0] - InheritedSize[0x0208])
	 */
	class ULinkerPlaceholderClass : public UClass
	{
	public:
		unsigned char                                              UnknownData_EV9Z[0x1B8];                                 // 0x0208(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderExportObject
	 * Size -> 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
	 */
	class ULinkerPlaceholderExportObject : public UObject
	{
	public:
		unsigned char                                              UnknownData_SQ8Q[0xC8];                                  // 0x0028(0x00C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LinkerPlaceholderFunction
	 * Size -> 0x01B8 (FullSize[0x0270] - InheritedSize[0x00B8])
	 */
	class ULinkerPlaceholderFunction : public UFunction
	{
	public:
		unsigned char                                              UnknownData_XNYZ[0x1B8];                                 // 0x00B8(0x01B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MetaData
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class UMetaData : public UObject
	{
	public:
		unsigned char                                              UnknownData_AYNV[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectRedirector
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UObjectRedirector : public UObject
	{
	public:
		unsigned char                                              UnknownData_QF9G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ArrayProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UArrayProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_NYHH[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectPropertyBase
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UObjectPropertyBase : public UProperty
	{
	public:
		unsigned char                                              UnknownData_3DP2[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.BoolProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBoolProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_RNSY[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NumericProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNumericProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ByteProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UByteProperty : public UNumericProperty
	{
	public:
		unsigned char                                              UnknownData_YRIV[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.ClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UClassProperty : public UObjectProperty
	{
	public:
		unsigned char                                              UnknownData_04CT[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DelegateProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDelegateProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.DoubleProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UDoubleProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.FloatProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFloatProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.IntProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UIntProperty : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.Int8Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt8Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.InterfaceProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UInterfaceProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_3M6M[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.LazyObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class ULazyObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MapProperty
	 * Size -> 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
	 */
	class UMapProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_HI0M[0x38];                                  // 0x0070(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.MulticastDelegateProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UMulticastDelegateProperty : public UDelegateProperty
	{
	public:
		unsigned char                                              UnknownData_070Y[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.NameProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UNameProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SetProperty
	 * Size -> 0x0028 (FullSize[0x0098] - InheritedSize[0x0070])
	 */
	class USetProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_IAWA[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class USoftObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.SoftClassProperty
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class USoftClassProperty : public USoftObjectProperty
	{
	public:
		unsigned char                                              UnknownData_OWJ2[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StrProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UStrProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.StructProperty
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UStructProperty : public UProperty
	{
	public:
		unsigned char                                              UnknownData_B3ZN[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt16Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt16Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt32Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt32Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.UInt64Property
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UUInt64Property : public UNumericProperty
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.WeakObjectProperty
	 * Size -> 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
	 */
	class UWeakObjectProperty : public UObjectPropertyBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CoreUObject.TextProperty
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UTextProperty : public UProperty
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
