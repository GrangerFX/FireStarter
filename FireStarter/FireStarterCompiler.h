#pragma once
#include "FireStarterProcess.h"
#include "FireStarterState.h"

#define FIRESTARTERCOMPILER_LOGGING 1

class FireStarterCompilerJob {
public:
	FireStarterState m_state;
	std::vector<std::string> m_options;
	std::string m_program;
	std::string m_programName;
	std::string m_programFunction;
	std::string m_ptx;
	std::string m_log;
	class FireStarterCompilerJob* m_next = nullptr;	// Linked list pointer

	inline void Packetize(FireStarterPacket& packet)
	{
		m_state.Packetize(packet);
		packet.Packetize(m_options);
		packet.Packetize(m_program);
		packet.Packetize(m_programName);
		packet.Packetize(m_programFunction);
		packet.Packetize(m_ptx);
		packet.Packetize(m_log);
	} // Packetize

	inline FireStarterCompilerJob(FireStarterPacket& packet)
	{
		Packetize(packet);
	} // FireStarterCompilerJob

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

class FireStarterCompiler : public SerialThread {
private:
	SerialThread m_jobThread;
	FireStarterServer* m_server = nullptr;
	class FireStarterCompilerManager* m_manager = nullptr;;
	FireStarterProcess* m_process = nullptr;
	volatile bool m_terminate = false;
	bool m_isClient = false;

public:
	void CompilerServer(void);
	void CompilerClient(void);
	FireStarterCompiler(FireStarterProcess* process);
	FireStarterCompiler(FireStarterServer* server, class FireStarterCompilerManager* manage);
	~FireStarterCompiler(void);
}; // class FireStarterCompiler

class FireStarterCompilerManager {
private:
	FireStarterJobQueue m_freeQueue;
	FireStarterJobQueue m_codeQueue;
	FireStarterJobQueue m_compileQueue;
	FireStarterJobQueue m_completeQueue;
	std::vector<FireStarterCompiler*> m_compilers;
	FireStarterServer* m_server;
	size_t m_maxJobs = 0;
	unsigned int m_numUnits;
	unsigned int m_numProcesses;

public:
	void AddFree(void);
	void AddFree(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetFree(void);
	void AddCode(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCode(void);
	void AddCompile(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetCompile(void);
	void AddComplete(FireStarterCompilerJob* job);
	FireStarterCompilerJob* GetComplete(void);

	void Cancel(void);
	FireStarterCompilerManager(unsigned int numUnits, unsigned int numProcesses);
	~FireStarterCompilerManager(void);
}; // FireStarterCompilerManager
