#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterWindow m_streamWindow;
	FireStarterState& m_streamBestState;
	FireStarterSettings m_streamSettings;
	FireStarterSettings m_optimizeSettings;
	std::string m_streamDate;
	size_t m_streamIndex = 0;

public:
	void RandomStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
	void EvolveCPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
	void EvolveGPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
    void EvolveNewGPUStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
    void OptimizeStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
    void SpeedTestStream(FireStarterServer* server, std::atomic<unsigned int>& testCount, bool sync = false);
    FireStarterStream(size_t index, const FireStarterWindow& window, FireStarterState& bestState, const FireStarterSettings& streamSettings);
	~FireStarterStream(void);
}; // class FireStarterStream

class FireStarterStreams : public SerialThread {
private:
	FireStarterWindow m_window;
	FireStarterSettings m_streamSettings;
	FireStarterSettings m_optimizeSettings;
	FireStarterServer* m_server;
	std::atomic<unsigned int> m_testCount;

public:
	bool SynchronizeStreams(std::vector<FireStarterStream*>& streams);
	void RandomStreams(void);
	void ExecuteStreams(void);
	FireStarterStreams(const FireStarterWindow& window, FireStarterServer* server, const FireStarterSettings& streamSettings);
	~FireStarterStreams(void);
}; // class FireStarterStreams