#pragma once
#include "FireStarterManager.h"

#define FIRESTARTERCOMPILER_LOGGING 1

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
	FireStarterCompiler(class FireStarterCompile* compile, FireStarterManager* manager = nullptr, FireStarterServer* server = nullptr, size_t index = 0);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompile {
private:
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterManager* m_manager = nullptr;
	FireStarterServer* m_server;
	std::atomic<unsigned int> m_activeCompilers;

public:
	void CompilerFinished(FireStarterCompiler* compiler);
	bool CompileJob(bool sync = true);
	FireStarterCompiler* AddCompiler(void);
	FireStarterCompile(FireStarterManager* manager = nullptr, FireStarterServer* server = nullptr);
	~FireStarterCompile(void);
}; // FireStarterCompile
