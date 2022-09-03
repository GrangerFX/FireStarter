#pragma once
#include "FireStarterProcess.h"
#include "CUDACompile.h"

class FireCompiler : public SerialThread {
private:
	FireStarterProcess m_process;
	CUDACompile m_compile;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	void Client(void);
	FireCompiler(const std::string& pipeName);
	~FireCompiler(void);
}; // class FireMaker