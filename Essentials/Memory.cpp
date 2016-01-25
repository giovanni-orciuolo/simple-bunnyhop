// Memory.cpp

#include "stdafx.h"

namespace Essentials
{
	#pragma region CTOR & DTOR

	MemoryManager::MemoryManager()
	{
		hProcess = NULL;
		dwPID = NULL;
		try
		{
		if (!AttachProcess("csgo.exe")) throw 1;
		ClientDLL = GetModule("client.dll");
		EngineDLL = GetModule("engine.dll");
		ClientDLL_Base = (DWORD)ClientDLL.modBaseAddr;
		EngineDLL_Base = (DWORD)EngineDLL.modBaseAddr;
		if (ClientDLL_Base == 0x0) throw 2;
		if (EngineDLL_Base == 0x0) throw 3;
		ClientDLL_Size = ClientDLL.dwSize;
		EngineDLL_Size = EngineDLL.dwSize;
		//std::cout<<MEM<<" MemoryManager succesfully started."<<std::endl;
		}
		catch (int iEx) {
			switch (iEx)
			{
			case 1: std::cout<<MEM<<" Failed to attach csgo.exe process. Process not found."<<std::endl; Sleep(3000); break;
			case 2: std::cout<<MEM<<" Failed to get module entry of client.dll"<<std::endl; Sleep(3000); break;
			case 3: std::cout<<MEM<<" Failed to get module entry of engine.dll"<<std::endl; Sleep(3000); break;
			default: throw;
			}
		}
		catch (...) { std::cout<<MEM<<" Unhandled exception thrown."<<std::endl; }
	}

	MemoryManager::~MemoryManager()
	{
		CloseHandle(hProcess);
		std::cout<<"MemoryManager has been deleted"<<std::endl;
	}

	#pragma endregion
	#pragma region PROCESS AND MODULE RELATED

	bool MemoryManager::AttachProcess(char* ProcessName)
	{
		HANDLE hPID = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		const WCHAR* procNameChar;
		int nChars = MultiByteToWideChar(CP_ACP, 0, ProcessName, -1, NULL, 0);
		procNameChar = new WCHAR[nChars];
		MultiByteToWideChar(CP_ACP, 0, ProcessName, -1, (LPWSTR)procNameChar, nChars);

		do
			if (!wcscmp(procEntry.szExeFile, procNameChar))
			{
				dwPID = procEntry.th32ProcessID;
				CloseHandle(hPID);
				hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwPID);
				return true;
			}
		while (Process32Next(hPID, &procEntry));

		return false;
	}

	MODULEENTRY32 MemoryManager::GetModule(char* ModuleName)
	{
		HANDLE hModule = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, dwPID);
		MODULEENTRY32 mEntry;
		mEntry.dwSize = sizeof(mEntry);

		const WCHAR *modNameChar;
		int nChars = MultiByteToWideChar(CP_ACP, 0, ModuleName, -1, NULL, 0);
		modNameChar = new WCHAR[nChars];
		MultiByteToWideChar(CP_ACP, 0, ModuleName, -1, (LPWSTR)modNameChar, nChars);

		do
			if (!wcscmp(mEntry.szModule, modNameChar))
			{
				CloseHandle(hModule);
				return mEntry;
			}
		while (Module32Next(hModule, &mEntry));

		mEntry.modBaseAddr = 0x0;
		return mEntry;
	}

	#pragma endregion
}