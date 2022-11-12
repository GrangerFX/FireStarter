#pragma once
#include "FireStarterProcess.h"
#include "FireStarterState.h"

#define FIRESTARTERCOMPILER_LOGGING 0

class FireStarterJob {
public:
	FireStarterState m_state;
	std::vector<std::string> m_options;
	std::string m_program;
	std::string m_programName;
	std::string m_programFunction;
	std::string m_ptx;
	std::string m_log;
	class FireStarterJob* m_next = nullptr;	// Linked list pointer

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

	inline FireStarterJob(FireStarterPacket& packet)
	{
		Packetize(packet);
	} // FireStarterCompilerJob

	inline FireStarterJob(void)
	{
	} // FireStarterJob
}; // class FireStarterJob

class FireStarterJobQueue : public SerialThread {
private:
	SerialThreadSemaphore m_semaphore;
	SimpleTimer m_timer;
	FireStarterJob* m_firstJob = nullptr;
	FireStarterJob* m_lastJob = nullptr;
	double m_waitTime = 0.0;
	size_t m_sizeJobs = 0;
	size_t m_totalJobs = 0;
public:
	void Add(FireStarterJob* job);
	FireStarterJob* Get(void);
	double WaitTime(void);
	size_t Size(void);
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
	static bool CompileJob(FireStarterCompilerManager* manager);
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
	void AddFree(FireStarterJob* job);
	FireStarterJob* GetFree(void);
	double TimeFree(void);
	size_t SizeFree(void);

	void AddCode(FireStarterJob* job);
	FireStarterJob* GetCode(void);
	double TimeCode(void);
	size_t SizeCode(void);

	void AddCompile(FireStarterJob* job);
	FireStarterJob* GetCompile(void);
	double TimeCompile(void);
	size_t SizeCompile(void);

	void AddComplete(FireStarterJob* job);
	FireStarterJob* GetComplete(void);
	double TimeComplete(void);
	size_t SizeComplete(void);

	void Complete(void);	// Called when there is no more work to do.
	void Cancel(void);
	FireStarterCompilerManager(unsigned int numUnits, unsigned int numProcesses);
	~FireStarterCompilerManager(void);
}; // FireStarterCompilerManager
