// dllmain.cpp : Defines the entry point for the DLL application.
#include <iostream>
#include <fstream>
#include "mem.h"
#include "SDK.h"
#include "tinyformat.h"

void Dump()
{
	{
		std::ofstream o("ObjectsDump.txt");
		tfm::format(o, "Address: 0x%P\n\n", reinterpret_cast<void*>(*reinterpret_cast<uintptr_t*>(&SDK::UObject::GetGlobalObjects())));

		for (int i = 0; i < SDK::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto obj = SDK::UObject::GetGlobalObjects().GetByIndex(i);

			if (obj != nullptr)
			{
				tfm::format(o, "[%06i] %P %s\n", i, obj, obj->GetFullName());
			}
		}
	}
	{
		std::ofstream o("NamesDump.txt");
		tfm::format(o, "Address: 0x%P\n\n", reinterpret_cast<void*>(*reinterpret_cast<uintptr_t*>(&SDK::FName::GetGlobalNames())));
		
		std::cout << "SDK::FName::GetGlobalNames().Num() = " << SDK::FName::GetGlobalNames().Num() << std::endl;
		for (size_t i = 0; i < SDK::FName::GetGlobalNames().Num(); ++i)
		{
			if (SDK::FName::GetGlobalNames()[i] != nullptr)
			{
				tfm::format(o, "[%06i] %s\n", i, SDK::FName::GetGlobalNames()[i]->GetAnsiName());
			}
		}
	}
}

DWORD WINAPI HackThread(HMODULE hModule)
{
	//Create Console
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);

	std::cout << "Loaded" << std::endl;

	//uintptr_t moduleBase = (uintptr_t)GetModuleHandle(L"DrugDealerSimulator-Win64-Shipping.exe");

	//calling it with NULL also gives you the address of the .exe module
	//moduleBase = (uintptr_t)GetModuleHandle(NULL);

	//bool bHealth = false, bAmmo = false, bRecoil = false;

	SDK::InitSdk("DrugDealerSimulator-Win64-Shipping.exe", 
		0x2E43590,  // objs: 48 8D 05 ? ? ? ? 48 89 01 33 C9 84 D2
		0x2E3F260); // name: 4C 8B 35 ? ? ? ? 4D 85 F6 75 51 B9 ? ? ? ? E8

	//SDK::AplayerCharacterBP_C *player = nullptr;
	SDK::UmainMenuWidget_C *menu = nullptr;
	while (true)
	{
		if (GetAsyncKeyState(VK_END) & 1)
		{
			break;
		}
		/*
		if (GetAsyncKeyState(VK_NUMPAD1) & 1)
		{
			std::cout << "looking for player..." << std::endl;
			player = SDK::UObject::FindObjects<SDK::AplayerCharacterBP_C>().back();
			std::cout << "found: " << std::hex << player << std::dec << std::endl;
			//std::cout << "AplayerCharacterBP_C: " << std::hex << player << std::dec << std::endl;
		}*/

		if (GetAsyncKeyState(VK_NUMPAD2) & 1)
		{
			std::cout << "dumping..." << std::endl;
			Dump();
			std::cout << "done" << std::endl;
		}
		/*
		if (GetAsyncKeyState(VK_NUMPAD3) & 1)
		{
			std::cout << "key3" << std::endl;
			if (player == nullptr) {
				player = SDK::UObject::FindObjects<SDK::AplayerCharacterBP_C>().back();
			}
			
			bool *ret = nullptr;
			player->addMoney(1, ret);
			if (*ret) {
				std::cout << "success" << std::endl;
			}
			else {
				std::cout << "failure" << std::endl;
			}
		}*/

		if (GetAsyncKeyState(VK_NUMPAD4) & 1)
		{
			std::cout << "key4" << std::endl;
			if (menu == nullptr) {
				menu = SDK::UObject::FindObjects<SDK::UmainMenuWidget_C>().back();
			}

			bool *ret = nullptr;
			menu->BndEvt__btnSettings_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
			std::cout << "done" << std::endl;
		}

		//if (GetAsyncKeyState(VK_NUMPAD2) & 1)
		//{
		//	bAmmo = !bAmmo;
		//}

		////no recoil NOP
		//if (GetAsyncKeyState(VK_NUMPAD3) & 1)
		//{
		//	bRecoil = !bRecoil;

		//	if (bRecoil)
		//	{
		//		mem::Nop((BYTE*)(moduleBase + 0x63786), 10);
		//	}

		//	else
		//	{
		//		//50 8D 4C 24 1C 51 8B CE FF D2 the original stack setup and call
		//		mem::Patch((BYTE*)(moduleBase + 0x63786), (BYTE*)"\x50\x8D\x4C\x24\x1C\x51\x8B\xCE\xFF\xD2", 10);
		//	}
		//}

		////need to use uintptr_t for pointer arithmetic later
		//uintptr_t* localPlayerPtr = (uintptr_t*)(moduleBase + 0x10F4F4);

		////continuous writes / freeze

		//if (*localPlayerPtr)
		//{
		//	if (bHealth)
		//	{

		//		//*localPlayerPtr = derference the pointer, to get the localPlayerAddr
		//		// add 0xF8 to get health address
		//		//cast to an int pointer, this pointer now points to the health address
		//		//derference it and assign the value 1337 to the health variable it points to
		//		*(int*)(*localPlayerPtr + 0xF8) = 1337;
		//	}

		//	if (bAmmo)
		//	{
		//		//We aren't external now, we can now efficiently calculate all pointers dynamically
		//		//before we only resolved pointers when needed for efficiency reasons
		//		//we are executing internally, we can calculate everything when needed
		//		uintptr_t ammoAddr = mem::FindDMAAddy(moduleBase + 0x10F4F4, { 0x374, 0x14, 0x0 });
		//		int* ammo = (int*)ammoAddr;
		//		*ammo = 1337;

		//		//or just
		//		*(int*)mem::FindDMAAddy(moduleBase + 0x10F4F4, { 0x374, 0x14, 0x0 }) = 1337;
		//	}

		//}
		Sleep(5);
	}

	fclose(f);
	FreeConsole();
	FreeLibraryAndExitThread(hModule, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hModule, 0, nullptr));
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

/* https://www.unknowncheats.me/forum/2182036-post21.html
ObjName : 40 53 48 83 EC 20 48 8B D9 48 85 D2 75 30
GetBonePos : Base + 0x1304E60 // 40 53 55 57 41 56 48 81 EC ? ? ? ? 45 33 F6
W2S : E8 ? ? ? ? 48 8B 5C 24 ? 48 8B 6C 24 ? 41 88 06 48 83 C4 40 41 5E 5F 5E C3 (func call) Func : Base + 0x165D230 (use your own, engine w2s sucks balls)
GNames : 0x3631678 // 4C 8B 35 ? ? ? ? 4D 85 F6 75 51 B9 ? ? ? ? E8 ? ? ? ? 33 FF 4C 8B F0 48 85 C0 74 31 89 B8 ? ? ? ? 33 D2 41 B8 ? ? ? ? 89 B8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 4C 89 35 ? ? ? ?
GObjects : 0x363AF80 // 48 8D 0D ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 48 89 B5 ? ? ? ?
UWorld : 0x373C740 // 48 8B 1D ? ? ? ? 48 85 DB 74 3B
GetBoundingBox : 48 8B C4 48 89 58 10 48 89 70 18 55 57 41 54 41 55 41 57
*/

/*
Names:
.text:00007FF71B0291D0 4C 8B 35 89 60 90 02                          mov     r14, cs:qword_7FF71D92F260		<----
.text:00007FF71B0291D7 4D 85 F6                                      test    r14, r14
.text:00007FF71B0291DA 75 51                                         jnz     short loc_7FF71B02922D
.text:00007FF71B0291DC B9 08 04 00 00                                mov     ecx, 408h
.text:00007FF71B0291E1 E8 2A 42 F0 FF                                call    sub_7FF71AF2D410
.text:00007FF71B0291E6 33 FF                                         xor     edi, edi
.text:00007FF71B0291E8 4C 8B F0                                      mov     r14, rax
.text:00007FF71B0291EB 48 85 C0                                      test    rax, rax
.text:00007FF71B0291EE 74 31                                         jz      short loc_7FF71B029221
.text:00007FF71B0291F0 89 B8 00 04 00 00                             mov     [rax+400h], edi
.text:00007FF71B0291F6 33 D2                                         xor     edx, edx        ; Val
.text:00007FF71B0291F8 41 B8 00 04 00 00                             mov     r8d, 400h       ; Size
.text:00007FF71B0291FE 89 B8 04 04 00 00                             mov     [rax+404h], edi
.text:00007FF71B029204 48 8B C8                                      mov     rcx, rax        ; Dst
.text:00007FF71B029207 E8 34 58 8A 01                                call    memset
*/

/*
Objects:
.text:00007FF71ABD6874 48 8D 0D 15 CD D5 02                          lea     rcx, dword_7FF71D933590		<----
.text:00007FF71ABD687B E8 C0 93 5C 00                                call    sub_7FF71B19FC40
.text:00007FF71ABD6880 48 8D 0D E9 6E D2 01                          lea     rcx, sub_7FF71C8FD770 ; void (__cdecl *)()
.text:00007FF71ABD6887 48 83 C4 28                                   add     rsp, 28h
.text:00007FF71ABD688B E9 4C 41 CF 01                                jmp     atexit

.text:00007FF71AE283AC 48 8D 05 DD B1 B0 02                          lea     rax, dword_7FF71D933590
.text:00007FF71AE283B3 48 89 71 10                                   mov     [rcx+10h], rsi
.text:00007FF71AE283B7 45 84 C0                                      test    r8b, r8b
.text:00007FF71AE283BA 48 89 01                                      mov     [rcx], rax
.text:00007FF71AE283BD 4C 8B DA                                      mov     r11, rdx
.text:00007FF71AE283C0 44 0F 45 15 CC B1 B0 02                       cmovnz  r10d, cs:dword_7FF71D933594
.text:00007FF71AE283C8 48 8B D9                                      mov     rbx, rcx

.text:00007FF71B147E0A 48 8D 05 7F B7 7E 02                          lea     rax, dword_7FF71D933590
.text:00007FF71B147E11 48 89 01                                      mov     [rcx], rax
.text:00007FF71B147E14 33 C9                                         xor     ecx, ecx
.text:00007FF71B147E16 84 D2                                         test    dl, dl
.text:00007FF71B147E18 41 8B 41 08                                   mov     eax, [r9+8]
.text:00007FF71B147E1C 49 89 49 10                                   mov     [r9+10h], rcx
.text:00007FF71B147E20 0F 45 05 6D B7 7E 02                          cmovnz  eax, cs:dword_7FF71D933594
.text:00007FF71B147E27 FF C0                                         inc     eax
.text:00007FF71B147E29 49 89 49 10                                   mov     [r9+10h], rcx

.text:00007FF71B14A08C 03 3D FE 94 7E 02                             add     edi, cs:dword_7FF71D933590
.text:00007FF71B14A092 FF C8                                         dec     eax
.text:00007FF71B14A094 3B D0                                         cmp     edx, eax
.text:00007FF71B14A096 7C 08                                         jl      short loc_7FF71B14A0A0
.text:00007FF71B14A098 0F AF C1                                      imul    eax, ecx
.text:00007FF71B14A09B 8B 4E 28                                      mov     ecx, [rsi+28h]
.text:00007FF71B14A09E 2B C8                                         sub     ecx, eax

.text:00007FF71B14A1FF 03 1D 8B 93 7E 02                             add     ebx, cs:dword_7FF71D933590
.text:00007FF71B14A205 FF C8                                         dec     eax
.text:00007FF71B14A207 3B D0                                         cmp     edx, eax
.text:00007FF71B14A209 7C 0B                                         jl      short loc_7FF71B14A216
.text:00007FF71B14A20B 41 0F AF C0                                   imul    eax, r8d
.text:00007FF71B14A20F 44 8B 41 10                                   mov     r8d, [rcx+10h]
.text:00007FF71B14A213 44 2B C0                                      sub     r8d, eax

.text:00007FF71B154DCF 2B 1D BB E7 7D 02                             sub     ebx, cs:dword_7FF71D933590
.text:00007FF71B154DD5 44 89 25 A4 CC 7D 02                          mov     cs:dword_7FF71D931A80, r12d
.text:00007FF71B154DDC E8 CF 07 DE FF                                call    sub_7FF71AF355B0
.text:00007FF71B154DE1 48 8B C8                                      mov     rcx, rax
.text:00007FF71B154DE4 48 8B 10                                      mov     rdx, [rax]
.text:00007FF71B154DE7 FF 52 18                                      call    qword ptr [rdx+18h]
.text:00007FF71B154DEA 44 0F B6 C7                                   movzx   r8d, dil
.text:00007FF71B154DEE 4C 89 64 24 20                                mov     [rsp+88h+var_68], r12
.text:00007FF71B154DF3 8B C8                                         mov     ecx, eax

.text:00007FF71B15B930 48 8D 0D 59 7C 7D 02                          lea     rcx, dword_7FF71D933590
.text:00007FF71B15B937 C6 05 3E 61 7D 02 01                          mov     cs:byte_7FF71D931A7C, 1
.text:00007FF71B15B93E E8 8D E1 04 00                                call    sub_7FF71B1A9AD0
.text:00007FF71B15B943 C6 05 C7 0D 47 02 01                          mov     cs:byte_7FF71D5CC711, 1
.text:00007FF71B15B94A C6 05 2C 61 7D 02 00                          mov     cs:byte_7FF71D931A7D, 0

.text:00007FF71B15CEFB 2B 3D 8F 66 7D 02                             sub     edi, cs:dword_7FF71D933590
.text:00007FF71B15CF01 8B C8                                         mov     ecx, eax
.text:00007FF71B15CF03 48 8B 85 28 03 00 00                          mov     rax, [rbp+460h+var_138]
.text:00007FF71B15CF0A 48 25 00 00 00 FC                             and     rax, 0FFFFFFFFFC000000h
.text:00007FF71B15CF10 48 0B C1                                      or      rax, rcx
.text:00007FF71B15CF13 48 89 85 28 03 00 00                          mov     [rbp+460h+var_138], rax
.text:00007FF71B15CF1A 48 8B 85 B0 03 00 00                          mov     rax, [rbp+460h+var_B0]
.text:00007FF71B15CF21 48 25 00 00 00 FC                             and     rax, 0FFFFFFFFFC000000h

.text:00007FF71B1A0ABC 48 8D 0D CD 2A 79 02                          lea     rcx, dword_7FF71D933590
.text:00007FF71B1A0AC3 48 83 C4 30                                   add     rsp, 30h
.text:00007FF71B1A0AC7 5B                                            pop     rbx
.text:00007FF71B1A0AC8 E9 53 AA 00 00                                jmp     sub_7FF71B1AB520

.text:00007FF71B1BB2A2 48 8D 0D E7 82 77 02                          lea     rcx, dword_7FF71D933590
.text:00007FF71B1BB2A9 44 8B 84 24 80 00 00 00                       mov     r8d, [rsp+68h+arg_10]
.text:00007FF71B1BB2B1 8B 94 24 88 00 00 00                          mov     edx, [rsp+68h+arg_18]
.text:00007FF71B1BB2B8 48 89 05 39 80 77 02                          mov     cs:qword_7FF71D9332F8, rax
.text:00007FF71B1BB2BF 48 89 05 3A 80 77 02                          mov     cs:qword_7FF71D933300, rax
.text:00007FF71B1BB2C6 48 89 05 3B 80 77 02                          mov     cs:qword_7FF71D933308, rax
.text:00007FF71B1BB2CD E8 3E 7E FE FF                                call    sub_7FF71B1A3110
.text:00007FF71B1BB2D2 E8 F9 B4 EB FF                                call    sub_7FF71B0767D0
.text:00007FF71B1BB2D7 C6 05 56 7F 77 02 01                          mov     cs:byte_7FF71D933234, 1

.text:00007FF71B1C3033 48 8D 0D 56 05 77 02                          lea     rcx, dword_7FF71D933590
.text:00007FF71B1C303A E8 81 01 FE FF                                call    sub_7FF71B1A31C0
.text:00007FF71B1C303F 89 43 04                                      mov     [rbx+4], eax
.text:00007FF71B1C3042 48 83 C4 20                                   add     rsp, 20h
.text:00007FF71B1C3046 5B                                            pop     rbx
.text:00007FF71B1C3047 C3                                            retn

*/