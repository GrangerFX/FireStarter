#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterWindow m_streamWindow;
	FireStarterState& m_streamBestState;
	FireStarterSettings m_streamSettings;
	std::string m_streamDate;
	size_t m_streamIndex = 0;

	void OptimizeState(const FireStarterState& evolveState);
	void RandomState(FireStarterState& evolveState);

public:
	static void Optimize(const FireStarterWindow& window, const FireStarterState& evolveState);
	static void Randomize(const FireStarterWindow& window, const FireStarterState& evolveState);
	void OptimizeStream(const FireStarterState& evolveState, bool sync = false);
	void RandomStream(FireStarterServer* server, std::atomic<unsigned long long>& testCount, bool sync = false);
	void EvolveStream(FireStarterServer* server, std::atomic<unsigned long long>& testCount, bool sync = false);
	FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index = 0);
	~FireStarterStream(void);
}; // class FireStarterStream

class FireStarterStreams : public SerialThread {
private:
	FireStarterWindow m_window;
	FireStarterSettings m_settings;
	FireStarterServer* m_server;
	std::atomic<unsigned long long> m_testCount;

public:
	bool SynchronizeStreams(std::vector<FireStarterStream*>& streams);
	void RandomStreams(void);
	void EvolveStreams(void);
	FireStarterStreams(const FireStarterWindow& window, FireStarterServer* server, const FireStarterSettings& settings);
	~FireStarterStreams(void);
}; // class FireStarterStreams