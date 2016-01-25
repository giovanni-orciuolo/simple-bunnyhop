// Offsets.h
// 2 ways of getting offsets:
// Through constant definitions: More handy and fast, but less reliable
// Through INI files: A bit more complicated, but a lot more modifiable

#pragma once
#include "stdafx.h"
#define OFF "Offsets :: "

#pragma region CONSTANT-WAY OFFSETS

//ALL DEFINED OFFSETS HAVE GOT A "C_"
//LAST UPDATE: 01/21/2016

#define C_m_fAccuracyPenalty		0x000032B0
#define C_m_nForceBone				0x0000267C
#define C_m_iState					0x000031E8
#define C_m_iClip1					0x000031F4
#define C_m_flNextPrimaryAttack		0x000031C8
#define C_m_bCanReload				0x00003235
#define C_m_iPrimaryAmmoType		0x000031EC
#define C_m_iWeaponID				0x000032DC
#define C_m_bSpotted				0x00000935
#define C_m_bSpottedByMask			0x00000978
#define C_m_hOwnerEntity			0x00000148
#define C_m_vecOrigin				0x00000134
#define C_m_iTeamNum				0x000000F0
#define C_m_flFlashMaxAlpha			0x0000A2E4
#define C_m_flFlashDuration			0x0000A2E8
#define C_m_iGlowIndex				0x0000A300
#define C_m_angEyeAngles			0x0000A8E8
#define C_m_iAccount				0x0000A8D8
#define C_m_ArmorValue				0x0000A8E4
#define C_m_bGunGameImmunity		0x00003890
#define C_m_iShotsFired				0x0000A2A0
#define C_m_lifeState				0x0000025B
#define C_m_fFlags					0x00000100
#define C_m_iHealth					0x000000FC
#define C_m_hLastWeapon				0x000032E8
#define C_m_hMyWeapons				0x00002DE8
#define C_m_hActiveWeapon			0x00002EE8
#define C_m_Local					0x00002FA8
#define C_m_vecViewOffset			0x00000104
#define C_m_nTickBase				0x0000340C
#define C_m_vecVelocity				0x00000110
#define C_m_szLastPlaceName			0x00003590
#define C_m_vecPunch				0x00003018
#define C_m_iCrossHairID			0x0000A940
#define C_m_dwModel					0x0000006C
#define C_m_dwIndex					0x00000064
#define C_m_dwBoneMatrix			0x00002698
#define C_m_bMoveType				0x00000258
#define C_m_bDormant				0x000000E9
#define C_m_dwClientState			0x006072C4
#define C_m_dwLocalPlayerIndex		0x00000178
#define C_m_dwInGame				0x00000100
#define C_m_dwMaxPlayer				0x00000308
#define C_m_dwMapDirectory			0x00000180
#define C_m_dwMapname				0x00000284
#define C_m_dwPlayerInfo			0x0000523C
#define C_m_dwViewAngles			0x00004D0C
#define C_m_dwViewMatrix			0x04A4E584
#define C_m_dwEnginePosition		0x006B532C
#define C_m_dwRadarBase				0x04A9166C
#define C_m_dwRadarBasePointer		0x00000050
#define C_m_dwLocalPlayer			0x00A6E444
#define C_m_dwEntityList			0x04A5C9C4
#define C_m_dwWeaponTable			0x04AA3A7C
#define C_m_dwWeaponTableIndex		0x00003260
#define C_m_dwInput					0x04AA7330
#define C_m_dwGlobalVars			0x00520944
#define C_m_dwGlowObject			0x04B71C6C
#define C_m_dwForceJump				0x04AF150C
#define C_m_dwForceAttack			0x02EC89E8
#define C_m_dwSensitivity			0x00A73C4C
#define C_m_dwMouseEnable			0x00A73CA8

#pragma endregion

#pragma region DYNAMIC-WAY OFFSETS

namespace Essentials
{

	//Static container for CSGO offsets
	class Offsets
	{
	public:
		#pragma region CTOR & DTOR
		Offsets(LPCSTR IniPath);
		~Offsets();
		#pragma endregion
		#pragma region OFFSET LIST
		static DWORD m_fAccuracyPenalty;
		static DWORD m_nForceBone;
		static DWORD m_iState;
		static DWORD m_iClip1;
		static DWORD m_flNextPrimaryAttack;
		static DWORD m_bCanReload;
		static DWORD m_iPrimaryAmmoType;
		static DWORD m_iWeaponID;
		static DWORD m_zoomLevel;
		static DWORD m_bSpotted;
		static DWORD m_bSpottedByMask;
		static DWORD m_hOwnerEntity;
		static DWORD m_vecOrigin;
		static DWORD m_iTeamNum;
		static DWORD m_flFlashMaxAlpha;
		static DWORD m_flFlashDuration;
		static DWORD m_iGlowIndex;
		static DWORD m_angEyeAngles;
		static DWORD m_iAccount;
		static DWORD m_ArmorValue;
		static DWORD m_bGunGameImmunity;
		static DWORD m_iShotsFired;
		static DWORD CSPlayerResource;
		static DWORD m_iCompetitiveRanking;
		static DWORD m_iCompetitiveWins;
		static DWORD m_iKills;
		static DWORD m_iAssists;
		static DWORD m_iDeaths;
		static DWORD m_iPing;
		static DWORD m_iScore;
		static DWORD m_szClan;
		static DWORD m_lifeState;
		static DWORD m_fFlags;
		static DWORD m_iHealth;
		static DWORD m_hLastWeapon;
		static DWORD m_hMyWeapons;
		static DWORD m_hActiveWeapons;
		static DWORD m_Local;
		static DWORD m_vecViewOffset;
		static DWORD m_nTickBase;
		static DWORD m_vecVelocity;
		static DWORD m_szLastPlaceName;
		static DWORD m_vecPunch;
		static DWORD m_iCrossHairID;
		static DWORD m_dwModel;
		static DWORD m_dwIndex;
		static DWORD m_dwBoneMatrix;
		static DWORD m_bMoveType;
		static DWORD m_bDormant;
		static DWORD m_dwClientState;
		static DWORD m_dwLocalPlayerIndex;
		static DWORD m_dwInGame;
		static DWORD m_dwMaxPlayer;
		static DWORD m_dwMapDirectory;
		static DWORD m_dwMapName;
		static DWORD m_dwPlayerInfo;
		static DWORD m_dwViewAngles;
		static DWORD m_dwViewMatrix;
		static DWORD m_dwEnginePosition;
		static DWORD m_dwRadarBase;
		static DWORD m_dwRadarBasePointer;
		static DWORD m_dwLocalPlayer;
		static DWORD m_dwEntityList;
		static DWORD m_dwWeaponTable;
		static DWORD m_dwWeaponTableIndex;
		static DWORD m_dwInput;
		static DWORD m_dwGlobalVars;
		static DWORD m_dwGlowObject;
		static DWORD m_dwForceJump;
		static DWORD m_dwForceAttack;
		static DWORD m_dwSensitivity;
		static DWORD m_dwMouseEnable;
		static DWORD m_dwEntityLoopDistance;
		#pragma endregion
		#pragma region INI READ OFFSETS

		static void INI_ReadOffsets(LPCSTR FilePath);

		#pragma endregion
	};

}

#pragma endregion