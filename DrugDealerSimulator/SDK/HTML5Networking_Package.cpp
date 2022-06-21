/**
 * Name: DrugDealerSimulator
 * Version: 1.1.0.25_2022-06-21
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSocketConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HTML5Networking.WebSocketConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UWebSocketNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWebSocketNetDriver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HTML5Networking.WebSocketNetDriver");
		return ptr;
	}

}


