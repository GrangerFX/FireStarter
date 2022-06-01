#pragma once
#include "FireStarterProcess.h"
#include "FireStarterUnit.h"

class FireMaker {
private:
	FireStarterProcess m_process;
	FireStarterUnit m_unit;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	FireMaker(const std::string& pipeName);
	~FireMaker(void);
}; // class FireMaker