#pragma once
#include "FireStarterSettings.h"
#include "CUDAThread.h"

class FireStarterBuildSettings : public CUDAThread
{
private:
	std::string m_fireSettingsCode;
	CUmodule m_fireSettingsModule = nullptr;
	CUfunction m_fireSettingsFunction = nullptr;

	bool LoadFireSettingsCode(void);

public:
	void FireSettings(FireStarterSettings& settings, unsigned int fireStarterMode = 0);
	FireStarterBuildSettings(void);
	~FireStarterBuildSettings(void);
};