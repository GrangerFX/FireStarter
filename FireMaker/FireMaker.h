#pragma once
#include "FireStarterProcess.h"
#include "FireStarterUnit.h"

class FireMaker : public SerialThread {
private:
	FireStarterProcess m_process;
	FireStarterUnit m_unit;
	std::string m_pipeName;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	void WaitForCommand(void);
	FireMaker(const std::string& pipeName);
	~FireMaker(void);
}; // class FireMaker