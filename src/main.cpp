// main.cpp

#include "Essentials.h"
using Essentials::MemoryManager;

#define BHOP_TOGGLE VK_F5
#define BHOP_KEY VK_SPACE

bool bhop_toggle = false;
MemoryManager* Mem = new MemoryManager();

void BHOP_Toggle()
{
	while (true)
	{
		if (GetAsyncKeyState(BHOP_TOGGLE))
		{
			if (bhop_toggle)
			{
				bhop_toggle = false;
				std::cout<<"Bunny Hop toggled off"<<std::endl;
			}
			else
			{
				bhop_toggle = true;
				std::cout<<"Bunny Hop toggled on"<<std::endl;
			}
			Sleep(200);
		}
	}
}

void BHop()
{
	while (true)
	{
		DWORD LocalPlayer_Base = Mem->Read<DWORD>(Mem->ClientDLL_Base + C_m_dwLocalPlayer);
		BYTE LocalPlayer_Flags = Mem->Read<BYTE>(LocalPlayer_Base + 0x100);

		if (GetAsyncKeyState(BHOP_KEY) & 0x8000)
		{
			if (LocalPlayer_Flags & (1<<0))
			{
				Mem->Write<int>(Mem->ClientDLL_Base + C_m_dwForceJump, 5);
				Sleep(20);
				Mem->Write<int>(Mem->ClientDLL_Base + C_m_dwForceJump, 4);
			}
		}
	}
}

int main()
{

	std::cout<<"Simple Auto Bunny Hop script."<<std::endl;
	std::cout<<"Press F5 to toggle bunny hop."<<std::endl;

	std::thread TOGGLE_thread = std::thread(BHOP_Toggle);
	std::thread BHOP_thread = std::thread(BHop);

	TOGGLE_thread.join();
	BHOP_thread.join();

	return 0;
}

