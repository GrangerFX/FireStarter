#pragma once
#include "FireStarterManager.h"

class FireStarterCompiler : public SerialThread {
private:
	FireStarterProcess* m_process = nullptr;
	FireStarterServer* m_server = nullptr;
	FireStarterManager* m_manager = nullptr;
	bool m_isClient = false;

public:
	void CompilerLocal(void);
	void CompilerServer(void);
	void CompilerClient(void);
	FireStarterCompiler(FireStarterProcess* process);
	FireStarterCompiler(FireStarterManager* manager, FireStarterServer* server = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompile : public SerialThread {
private:
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterServer* m_server;
	size_t m_numProcesses;

public:
	FireStarterCompile(FireStarterManager* manager, size_t numProcesses = 0);
	~FireStarterCompile(void);
}; // FireStarterCompile
