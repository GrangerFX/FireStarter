#pragma once
#include "FireStarterCompile.h"

class FireCompiler {
private:
	FireStarterProcess* m_process = nullptr;
	FireStarterCompiler* m_compiler = nullptr;
	volatile bool m_terminate = false;

public:
	void Terminate(void);
	bool ShouldTerminate(void);
	FireCompiler(const std::string& pipeName);
	~FireCompiler(void);
}; // class FireCompiler