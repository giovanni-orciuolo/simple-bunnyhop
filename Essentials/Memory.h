// Memory.h

#pragma once
#include "stdafx.h"

#define MEM "MemoryManager ::"

namespace Essentials
{

	class MemoryManager
	{
	private:
		#pragma region PRIVATE STUFF

		DWORD dwPID;
		HANDLE hProcess;

		#pragma endregion
	public:

		MODULEENTRY32 ClientDLL, EngineDLL;
		DWORD ClientDLL_Base, EngineDLL_Base;
		DWORD ClientDLL_Size, EngineDLL_Size;

		#pragma region CTOR & DTOR

		MemoryManager();

		~MemoryManager();

		#pragma endregion
		#pragma region MEMORY READ/WRITE

		template<class c>
		c Read(DWORD dwAddress)
		{
			c val;
			ReadProcessMemory(hProcess, (LPVOID)dwAddress, &val, sizeof(c), NULL);
			return val;
		}

		template<class c>
		bool Write(DWORD dwAddress, c ValueToWrite)
		{
			if (WriteProcessMemory(hProcess, (LPVOID)dwAddress, &ValueToWrite, sizeof(c), NULL))
				return true;
			else
				return false;
		}

		#pragma endregion
		#pragma region PROCESS AND MODULE RELATED

		bool AttachProcess(char* ProcessName);

		MODULEENTRY32 GetModule(char* ModuleName);

		#pragma endregion
		#pragma region GETTERS

		DWORD GetProcId() { return dwPID; }
		HANDLE GetProcHandle() { return hProcess; }

		#pragma endregion
	};

}