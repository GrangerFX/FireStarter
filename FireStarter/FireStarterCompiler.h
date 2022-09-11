#pragma once
#include "FireStarterProcess.h"
#include "FireStarterState.h"

class FireStarterCompilerJob {
public:
	FireStarterState m_state;
	std::vector<std::string> m_options;
	std::string m_program;
	std::string m_programName;
	std::string m_ptx;
	std::string m_log;
	class FireStarterCompilerJob* m_next = nullptr;	// Linked list pointer

	inline FireStarterCompilerJob(const FireStarterSettings& settings) : m_state(settings)
	{
	} // FireStarterCompilerJob
}; // class FireStarterCompilerJob

class FireStarterCompilerManager : public SerialThread {
private:
	FireStarterCompilerJob* m_firstCode = nullptr;
	FireStarterCompilerJob* m_lastCode = nullptr;
	FireStarterCompilerJob* m_firstCompile = nullptr;
	FireStarterCompilerJob* m_lastCompile = nullptr;

public:
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	void AddCode(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCode(void);
	FireStarterCompilerManager(void);
	~FireStarterCompilerManager(void);
}; // FireStarterCompilerManager

class FireStarterCompiler : public SerialThread {
private:
	SerialThread m_jobThread;
	FireStarterProcess* m_process = nullptr;
	FireStarterCompilerManager* m_compilerManager = nullptr;;
	volatile bool m_terminate = false;
	bool m_server = false;

public:
	void CompilerServer(void);
	void CompilerClient(void);
	FireStarterCompiler(FireStarterProcess* process, FireStarterCompilerManager* manager = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler
