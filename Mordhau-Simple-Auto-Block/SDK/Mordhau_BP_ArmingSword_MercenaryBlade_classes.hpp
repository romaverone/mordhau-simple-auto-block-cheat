#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ArmingSword_MercenaryBlade.BP_ArmingSword_MercenaryBlade_C
// 0x0000 (0x0078 - 0x0078)
class UBP_ArmingSword_MercenaryBlade_C : public UBP_MordhauEquipmentPart_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmingSword_MercenaryBlade.BP_ArmingSword_MercenaryBlade_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif