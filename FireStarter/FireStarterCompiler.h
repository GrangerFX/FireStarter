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

class FireStarterCompiler : public SerialThread {
private:
	FireStarterProcess* m_process;
	SerialThread m_jobThread;
	FireStarterCompilerJob* m_firstJob = nullptr;
	FireStarterCompilerJob* m_lastJob = nullptr;
	FireStarterCompilerJob* m_firstCompile = nullptr;
	FireStarterCompilerJob* m_lastCompile = nullptr;
	volatile bool m_terminate = false;
	unsigned int m_gpus = 0;
	bool m_server = false;

	FireStarterCompilerJob* GetCompileJob(void);
	void CompleteCompileJob(FireStarterCompilerJob* job);
public:
	void Server(void);
	void Client(void);
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	FireStarterCompiler(FireStarterProcess* process);	// Client
	FireStarterCompiler(unsigned int gpus);				// Server
	~FireStarterCompiler(void);
}; // class FireStarterCompiler