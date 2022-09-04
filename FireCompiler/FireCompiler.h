#pragma once
#include "FireStarterCompiler.h"

class FireCompiler : public SerialThread {
private:
	FireStarterProcess m_process;
	FireStarterCompiler m_compiler;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	FireCompiler(const std::string& pipeName);
	~FireCompiler(void);
}; // class FireCompiler