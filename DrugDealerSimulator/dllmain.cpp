#include "pch.h"

// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	// TODO: Fill your code here

	return TRUE;
}
