#pragma once
#include "FireStarterManager.h"

#define FIRESTARTERCOMPILER_LOGGING 0

class FireStarterCompiler : public SerialThread {
private:
	SerialThread m_jobThread;
	FireStarterProcess* m_process = nullptr;
	FireStarterServer* m_server = nullptr;
	FireStarterManager* m_manager = nullptr;
	volatile bool m_terminate = false;
	bool m_isClient = false;

public:
	void CompilerLocal(void);
	void CompilerServer(void);
	void CompilerClient(void);
	FireStarterCompiler(FireStarterProcess* process);
	FireStarterCompiler(FireStarterManager* manager, FireStarterServer* server = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompile {
private:
	FireStarterJobQueue m_freeQueue;
	FireStarterJobQueue m_codeQueue;
	FireStarterJobQueue m_compileQueue;
	FireStarterJobQueue m_completeQueue;
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterServer* m_server;
	unsigned int m_numProcesses;

public:
	FireStarterCompile(FireStarterManager* manager, unsigned int numProcesses);
	~FireStarterCompile(void);
}; // FireStarterCompile
