#pragma once
#include "FireStarterProcess.h"
#include "FireStarterUnit.h"

class FireMaker : public SerialThread {
public:
	FireStarterUnit m_unit;
	FireStarterProcess m_process;
	std::string m_pipeName;

	bool Init();
	void Quit(void);
	FireMaker(const std::string& pipeName, bool *terminate);
	~FireMaker(void);
}; // class FireMaker