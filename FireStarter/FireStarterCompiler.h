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
	FireStarterCompilerJob* m_firstJob = nullptr;
	FireStarterCompilerJob* m_lastJob = nullptr;
	FireStarterCompilerJob* m_firstCompile = nullptr;
	FireStarterCompilerJob* m_lastCompile = nullptr;

public:
	FireStarterCompilerJob* GetCompileJob(void);
	void CompleteCompileJob(FireStarterCompilerJob* job);
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	FireStarterCompilerManager(void);
	~FireStarterCompilerManager(void);
}; // FireStarterCompilerManager

class FireStarterCompiler : public SerialThread {
private:
	FireStarterProcess* m_process;
	FireStarterCompilerManager* m_compilerManager;
	SerialThread m_jobThread;
	volatile bool m_terminate = false;
	bool m_server = false;

public:
	void Server(void);
	void Client(void);
	FireStarterCompiler(FireStarterProcess* process, FireStarterCompilerManager* manager = nullptr);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler
