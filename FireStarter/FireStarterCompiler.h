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

	inline FireStarterCompilerJob(void)
	{
	} // FireStarterCompilerJob
}; // class FireStarterCompilerJob

class FireStarterJobQueue : public SerialThread {
private:
	SerialThreadSemaphore m_semaphore;
	FireStarterCompilerJob* m_firstJob = nullptr;
	FireStarterCompilerJob* m_lastJob = nullptr;
public:
	void Add(FireStarterCompilerJob* job); 
	FireStarterCompilerJob* Get(void);
	void Cancel(void);
	FireStarterJobQueue(void);
	~FireStarterJobQueue(void);
}; // class FireStarterJobQueue

class FireStarterCompilerManager {
private:
	FireStarterJobQueue m_freeQueue;
	FireStarterJobQueue m_codeQueue;
	FireStarterJobQueue m_compileQueue;
	FireStarterJobQueue m_completeQueue;
	size_t m_maxJobs = 0;

public:
	void AddFree(FireStarterCompilerJob* job = nullptr);
	FireStarterCompilerJob* GetFree(void);
	void AddCode(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCode(void);
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	void AddComplete(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetComplete(void);

	void Cancel(void);
	FireStarterCompilerManager(size_t maxJobs);
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
