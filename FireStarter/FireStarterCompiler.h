#pragma once
#include "FireStarterProcess.h"

class FireStarterCompiler : public SerialThread {
public:
	struct FireStarterCompilerJob {
		struct FireStarterCompilerJob* next;	// Linked list pointer
		std::string code;
		std::vector<std::string> options;
		std::string ptx;
		std::string log;
	}; // struct FireStarterCompilerJob

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
	void Client(void);
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	FireStarterCompiler(FireStarterProcess* process);	// Client
	FireStarterCompiler(unsigned int gpus);				// Server
	~FireStarterCompiler(void);
}; // class FireStarterCompiler