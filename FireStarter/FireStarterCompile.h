#pragma once
#include "FireStarterManager.h"

class FireStarterCompiler : public SerialThread {
private:
	FireStarterProcess* m_process = nullptr;
	FireStarterServer* m_server = nullptr;
	FireStarterManager* m_manager = nullptr;
	bool m_isClient = false;

	bool Compile(FireStarterManager* manager);
public:
	void CompilerLocal(void);
	void CompileJob(FireStarterManager* manager, bool sync = false);
	void CompilerServer(void);
	void CompilerClient(void);
	FireStarterCompiler(FireStarterProcess* process);
	FireStarterCompiler(FireStarterManager* manager = nullptr, FireStarterServer* server = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompile {
private:
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterServer* m_server;
	size_t m_numProcesses;

public:
	void CompileJob(FireStarterManager* manager, bool sync);
	FireStarterCompile(FireStarterManager* manager = nullptr, size_t numProcesses = 0);
	~FireStarterCompile(void);
}; // FireStarterCompile
