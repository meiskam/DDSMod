#pragma once

// Name: DDS, Version: 2020.4.30

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HealthInterface.HealthInterface_C
// 0x0000 (0x0028 - 0x0028)
class UHealthInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HealthInterface.HealthInterface_C");
		return ptr;
	}


	void Damage(float Damage);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
