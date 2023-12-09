#pragma once
#include "FireStarterProcess.h"
#include "FireStarterState.h"

#define FIRESTARTERCOMPILER_LOGGING 0

#if FIRESTARTERCOMPILER_LOGGING
#define LOG printf
#else
#define LOG( ... ) {}
#endif

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

	inline void Copy(FireStarterJob* job)
	{
		class FireStarterJob* next = m_next;
		*this = *job;
		m_next = next;
	} // Copy

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
	std::string m_name;
	SerialThreadSemaphore m_semaphore;
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
	void Restart(void);
	void Cancel(void);
	FireStarterJobQueue(const std::string &name);
	~FireStarterJobQueue(void);
}; // class FireStarterJobQueue

class FireStarterManager {
private:
	FireStarterJobQueue m_freeQueue;
	FireStarterJobQueue m_codeQueue;
	FireStarterJobQueue m_compileQueue;
	FireStarterJobQueue m_completeQueue;
	size_t m_maxJobs = 0;
	bool m_active = false;

public:
	void AddFree(FireStarterJob* job = nullptr);
	FireStarterJob* GetFree(void);
	double TimeFree(void);
	size_t SizeFree(void);

	void AddCode(FireStarterJob* job = nullptr);
	FireStarterJob* GetCode(void);
	double TimeCode(void);
	size_t SizeCode(void);

	void AddCompile(FireStarterJob* job = nullptr);
	FireStarterJob* GetCompile(void);
	double TimeCompile(void);
	size_t SizeCompile(void);

	void AddComplete(FireStarterJob* job = nullptr);
	FireStarterJob* GetComplete(void);
	double TimeComplete(void);
	size_t SizeComplete(void);

	inline size_t GetMaxJobs(void) { return m_maxJobs; }
	void Restart(void);
	void Cancel(void);
	FireStarterManager(size_t maxJobs = 1);
	~FireStarterManager(void);
}; // FireStarterManager
