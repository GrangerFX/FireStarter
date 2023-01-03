#pragma once
#include "FireStarterManager.h"

class FireStarterCompiler : public SerialThread {
private:
	class FireStarterCompile* m_compile = nullptr;
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
	FireStarterCompiler(class FireStarterCompile* compile, FireStarterProcess* process);
	FireStarterCompiler(class FireStarterCompile* compile, FireStarterManager* manager = nullptr, FireStarterServer* server = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompile {
private:
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterManager* m_manager = nullptr;
	FireStarterServer* m_server = nullptr;
	size_t m_numProcesses = 0;
	std::atomic<unsigned int> m_activeCompilers;

public:
	void CompilerFinished(FireStarterCompiler* compiler);
	bool CompileJob(FireStarterManager* manager, bool sync);
	FireStarterCompile(FireStarterManager* manager = nullptr, size_t numProcesses = 0);
	~FireStarterCompile(void);
}; // FireStarterCompile
