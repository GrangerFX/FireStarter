#pragma once
#include "FireStarterProcess.h"
#include "FireStarterUnit.h"

class FireMaker : public SerialThread {
private:
	FireStarterProcess* m_process = nullptr;
	FireStarterUnit* m_unit = nullptr;
	FireStarterState m_bestState;
	std::string m_bestCode;
	std::string m_pipeName;
	float m_bestResult = START_RESULT;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	FireMaker(const std::string& pipeName);
	~FireMaker(void);
}; // class FireMaker