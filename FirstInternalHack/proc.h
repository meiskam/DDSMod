#pragma once
#include <vector>
#include <windows.h>
#include <TlHelp32.h>
//https://guidedhacking.com/threads/how-to-hack-any-game-first-internal-hack-dll-tutorial.12142/

DWORD GetProcId(const wchar_t* procName);

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);

uintptr_t FindDMAAddy(HANDLE hProc, uintptr_t ptr, std::vector<unsigned int> offsets);