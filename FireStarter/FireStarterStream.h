#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterWindow m_window;
	FireStarterState& m_bestState;
	FireStarterSettings m_settings;
	std::string m_resultsFilePath;
	size_t m_index = 0;

	void OptimizeState(const FireStarterState& evolveState);
	void RandomState(FireStarterState& evolveState);
	void EvolveState(FireStarterState& evolveState);

public:
	static void Optimize(const FireStarterWindow& window, const FireStarterState& evolveState);
	static void Evolve(const FireStarterWindow& window, const FireStarterState& evolveState);
	void OptimizeStream(const FireStarterState& evolveState, bool sync = false);
	void RandomStream(const FireStarterSettings& settings, std::atomic<unsigned long long>& testCount, bool sync = false);
	void RandomStream(const FireStarterSettings& settings, std::vector<float>& seedResults, std::atomic<unsigned long long>& seedCount, bool sync = false);
	void EvolveStream(const FireStarterSettings& settings, std::atomic<unsigned long long>& testCount, bool sync = false);
	void EvolveStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& stateCount, bool sync = false);
	void EvolveStream(std::atomic<unsigned long long>& testCount, bool sync = false);
	FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index = 0);
	~FireStarterStream(void);
}; // class FireStarterStream

class FireStarterStreams : public SerialThread {
private:
	FireStarterWindow m_window;
	FireStarterSettings m_settings;
	std::atomic<unsigned long long> m_testCount;

public:
	bool SynchronizeStreams(std::vector<FireStarterStream*>& streams);
	void TestStreams(void);
	void EvolveStreams(void);
	FireStarterStreams(const FireStarterWindow& window, const FireStarterSettings& settings);
	~FireStarterStreams(void);
}; // class FireStarterStreams