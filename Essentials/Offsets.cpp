// Offsets.cpp

#include "stdafx.h"

namespace Essentials
{

	#pragma region CTOR & DTOR

	Offsets::Offsets(LPCSTR IniPath)
	{
		INI_ReadOffsets(IniPath);
	}

	Offsets::~Offsets()
	{
	}

	#pragma endregion

	#pragma region OFFSETS
	DWORD Offsets::m_fAccuracyPenalty = NULL;
	DWORD Offsets::m_nForceBone = NULL;
	DWORD Offsets::m_iState = NULL;
	DWORD Offsets::m_iClip1 = NULL;
	DWORD Offsets::m_flNextPrimaryAttack = NULL;
	DWORD Offsets::m_bCanReload = NULL;
	DWORD Offsets::m_iPrimaryAmmoType = NULL;
	DWORD Offsets::m_iWeaponID = NULL;
	DWORD Offsets::m_zoomLevel = NULL;
	DWORD Offsets::m_bSpotted = NULL;
	DWORD Offsets::m_bSpottedByMask = NULL;
	DWORD Offsets::m_hOwnerEntity = NULL;
	DWORD Offsets::m_vecOrigin = NULL;
	DWORD Offsets::m_iTeamNum = NULL;
	DWORD Offsets::m_flFlashMaxAlpha = NULL;
	DWORD Offsets::m_flFlashDuration = NULL;
	DWORD Offsets::m_iGlowIndex = NULL;
	DWORD Offsets::m_angEyeAngles = NULL;
	DWORD Offsets::m_iAccount = NULL;
	DWORD Offsets::m_ArmorValue = NULL;
	DWORD Offsets::m_bGunGameImmunity = NULL;
	DWORD Offsets::m_iShotsFired = NULL;
	DWORD Offsets::CSPlayerResource = NULL;
	DWORD Offsets::m_iCompetitiveRanking = NULL;
	DWORD Offsets::m_iCompetitiveWins = NULL;
	DWORD Offsets::m_iKills = NULL;
	DWORD Offsets::m_iAssists = NULL;
	DWORD Offsets::m_iDeaths = NULL;
	DWORD Offsets::m_iPing = NULL;
	DWORD Offsets::m_iScore = NULL;
	DWORD Offsets::m_szClan = NULL;
	DWORD Offsets::m_lifeState = NULL;
	DWORD Offsets::m_fFlags = NULL;
	DWORD Offsets::m_iHealth = NULL;
	DWORD Offsets::m_hLastWeapon = NULL;
	DWORD Offsets::m_hMyWeapons = NULL;
	DWORD Offsets::m_hActiveWeapons = NULL;
	DWORD Offsets::m_Local = NULL;
	DWORD Offsets::m_vecViewOffset = NULL;
	DWORD Offsets::m_nTickBase = NULL;
	DWORD Offsets::m_vecVelocity = NULL;
	DWORD Offsets::m_szLastPlaceName = NULL;
	DWORD Offsets::m_vecPunch = NULL;
	DWORD Offsets::m_iCrossHairID = NULL;
	DWORD Offsets::m_dwModel = NULL;
	DWORD Offsets::m_dwIndex = NULL;
	DWORD Offsets::m_dwBoneMatrix = NULL;
	DWORD Offsets::m_bMoveType = NULL;
	DWORD Offsets::m_bDormant = NULL;
	DWORD Offsets::m_dwClientState = NULL;
	DWORD Offsets::m_dwLocalPlayerIndex = NULL;
	DWORD Offsets::m_dwInGame = NULL;
	DWORD Offsets::m_dwMaxPlayer = NULL;
	DWORD Offsets::m_dwMapDirectory = NULL;
	DWORD Offsets::m_dwMapName = NULL;
	DWORD Offsets::m_dwPlayerInfo = NULL;
	DWORD Offsets::m_dwViewAngles = NULL;
	DWORD Offsets::m_dwViewMatrix = NULL;
	DWORD Offsets::m_dwEnginePosition = NULL;
	DWORD Offsets::m_dwRadarBase = NULL;
	DWORD Offsets::m_dwRadarBasePointer = NULL;
	DWORD Offsets::m_dwLocalPlayer = NULL;
	DWORD Offsets::m_dwEntityList = NULL;
	DWORD Offsets::m_dwWeaponTable = NULL;
	DWORD Offsets::m_dwWeaponTableIndex = NULL;
	DWORD Offsets::m_dwInput = NULL;
	DWORD Offsets::m_dwGlobalVars = NULL;
	DWORD Offsets::m_dwGlowObject = NULL;
	DWORD Offsets::m_dwForceJump = NULL;
	DWORD Offsets::m_dwForceAttack = NULL;
	DWORD Offsets::m_dwSensitivity = NULL;
	DWORD Offsets::m_dwMouseEnable = NULL;
	DWORD Offsets::m_dwEntityLoopDistance = NULL;
	#pragma endregion

	void Offsets::INI_ReadOffsets(LPCSTR FilePath)
	{
		m_fAccuracyPenalty = (DWORD)GetPrivateProfileIntA("Offsets", "m_fAccuracyPenalty", NULL, FilePath);
		m_nForceBone = (DWORD)GetPrivateProfileIntA("Offsets", "m_nForceBone", NULL, FilePath);
		m_iState = (DWORD)GetPrivateProfileIntA("Offsets", "m_iState", NULL, FilePath);
		m_iClip1 = (DWORD)GetPrivateProfileIntA("Offsets", "m_iClip1", NULL, FilePath);
		m_flNextPrimaryAttack = (DWORD)GetPrivateProfileIntA("Offsets", "m_flNextPrimaryAttack", NULL, FilePath);
		m_bCanReload = (DWORD)GetPrivateProfileIntA("Offsets", "m_bCanReload", NULL, FilePath);
		m_iPrimaryAmmoType = (DWORD)GetPrivateProfileIntA("Offsets", "m_iPrimaryAmmoType", NULL, FilePath);
		m_iWeaponID = (DWORD)GetPrivateProfileIntA("Offsets", "m_iWeaponID", NULL, FilePath);
		m_bSpotted = (DWORD)GetPrivateProfileIntA("Offsets", "m_bSpotted", NULL, FilePath);
		m_bSpottedByMask = (DWORD)GetPrivateProfileIntA("Offsets", "m_bSpottedByMask", NULL, FilePath);
		m_hOwnerEntity = (DWORD)GetPrivateProfileIntA("Offsets", "m_hOwnerEntity", NULL, FilePath);
		m_vecOrigin = (DWORD)GetPrivateProfileIntA("Offsets", "m_vecOrigin", NULL, FilePath);
		m_iTeamNum = (DWORD)GetPrivateProfileIntA("Offsets", "m_iTeamNum", NULL, FilePath);
		m_flFlashMaxAlpha = (DWORD)GetPrivateProfileIntA("Offsets", "m_flFlashMaxAlpha", NULL, FilePath);
		m_flFlashDuration = (DWORD)GetPrivateProfileIntA("Offsets", "m_flFlashDuration", NULL, FilePath);
		m_iGlowIndex = (DWORD)GetPrivateProfileIntA("Offsets", "m_iGlowIndex", NULL, FilePath);
		m_angEyeAngles = (DWORD)GetPrivateProfileIntA("Offsets", "m_angEyeAngles", NULL, FilePath);
		m_iAccount = (DWORD)GetPrivateProfileIntA("Offsets", "m_iAccount", NULL, FilePath);
		m_ArmorValue = (DWORD)GetPrivateProfileIntA("Offsets", "m_ArmorValue", NULL, FilePath);
		m_bGunGameImmunity = (DWORD)GetPrivateProfileIntA("Offsets", "m_bGunGameImmunity", NULL, FilePath);
		m_iShotsFired = (DWORD)GetPrivateProfileIntA("Offsets", "m_iShotsFired", NULL, FilePath);
		m_lifeState = (DWORD)GetPrivateProfileIntA("Offsets", "m_lifeState", NULL, FilePath);
		m_fFlags = (DWORD)GetPrivateProfileIntA("Offsets", "m_fFlags", NULL, FilePath);
		m_iHealth = (DWORD)GetPrivateProfileIntA("Offsets", "m_iHealth", NULL, FilePath);
		m_hLastWeapon = (DWORD)GetPrivateProfileIntA("Offsets", "m_hLastWeapon", NULL, FilePath);
		m_hMyWeapons = (DWORD)GetPrivateProfileIntA("Offsets", "m_hMyWeapons", NULL, FilePath);
		m_hActiveWeapons = (DWORD)GetPrivateProfileIntA("Offsets", "m_hActiveWeapon", NULL, FilePath);
		m_Local = (DWORD)GetPrivateProfileIntA("Offsets", "m_Local", NULL, FilePath);
		m_vecViewOffset = (DWORD)GetPrivateProfileIntA("Offsets", "m_vecViewOffset", NULL, FilePath);
		m_nTickBase = (DWORD)GetPrivateProfileIntA("Offsets", "m_nTickBase", NULL, FilePath);
		m_vecVelocity = (DWORD)GetPrivateProfileIntA("Offsets", "m_vecVelocity", NULL, FilePath);
		m_szLastPlaceName = (DWORD)GetPrivateProfileIntA("Offsets", "m_szLastPlaceName", NULL, FilePath);
		m_vecPunch = (DWORD)GetPrivateProfileIntA("Offsets", "m_vecPunch", NULL, FilePath);
		m_iCrossHairID = (DWORD)GetPrivateProfileIntA("Offsets", "m_iCrossHairID", NULL, FilePath);
		m_dwModel = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwModel", NULL, FilePath);
		m_dwIndex = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwIndex", NULL, FilePath);
		m_dwBoneMatrix = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwBoneMatrix", NULL, FilePath);
		m_bMoveType = (DWORD)GetPrivateProfileIntA("Offsets", "m_bMoveType", NULL, FilePath);
		m_bDormant = (DWORD)GetPrivateProfileIntA("Offsets", "m_bDormant", NULL, FilePath);
		m_dwClientState = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwClientState", NULL, FilePath);
		m_dwLocalPlayerIndex = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwLocalPlayerIndex", NULL, FilePath);
		m_dwInGame = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwInGame", NULL, FilePath);
		m_dwMaxPlayer = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwMaxPlayer", NULL, FilePath);
		m_dwMapDirectory = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwMapDirectory", NULL, FilePath);
		m_dwMapName = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwMapname", NULL, FilePath);
		m_dwPlayerInfo = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwPlayerInfo", NULL, FilePath);
		m_dwViewAngles = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwViewAngles", NULL, FilePath);
		m_dwViewMatrix = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwViewMatrix", NULL, FilePath);
		m_dwEnginePosition = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwEnginePosition", NULL, FilePath);
		m_dwRadarBase = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwRadarBase", NULL, FilePath);
		m_dwRadarBasePointer = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwRadarBasePointer", NULL, FilePath);
		m_dwLocalPlayer = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwLocalPlayer", NULL, FilePath);
		m_dwEntityList = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwEntityList", NULL, FilePath);
		m_dwWeaponTable = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwWeaponTable", NULL, FilePath);
		m_dwWeaponTableIndex = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwWeaponTableIndex", NULL, FilePath);
		m_dwInput = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwInput", NULL, FilePath);
		m_dwGlobalVars = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwGlobalVars", NULL, FilePath);
		m_dwGlowObject = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwGlowObject", NULL, FilePath);
		m_dwForceJump = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwForceJump", NULL, FilePath);
		m_dwForceAttack = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwForceAttack", NULL, FilePath);
		m_dwSensitivity = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwSensitivity", NULL, FilePath);
		m_dwMouseEnable = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwMouseEnable", NULL, FilePath);
		m_dwEntityLoopDistance = (DWORD)GetPrivateProfileIntA("Offsets", "m_dwEntityLoopDistance", NULL, FilePath);
	}

}