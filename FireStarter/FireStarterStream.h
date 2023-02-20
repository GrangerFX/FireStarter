#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	const FireStarterWindow& m_window;
	FireStarterState& m_bestState;
	size_t m_index = 0;

	void OptimizeState(const FireStarterState& evolveState);
	void RandomState(FireStarterState& evolveState);
	void EvolveState(FireStarterState& evolveState);

public:
	static void Optimize(const FireStarterWindow& window, const FireStarterState& evolveState);
	static void Evolve(const FireStarterWindow& window, const FireStarterState& evolveState);
	void OptimizeStream(const FireStarterState& evolveState, bool sync = false);
	void RandomStream(std::vector<FireStarterState>& states, std::atomic<unsigned long long>& testCount, bool sync = false);
	void EvolveStream(std::vector<FireStarterState*>& states, std::atomic<unsigned long long>& testCount, bool sync = false);
	FireStarterStream(const FireStarterWindow& window, FireStarterState& bestState, size_t index = 0);
	~FireStarterStream(void);
}; // class FireStarterStream

class FireStarterStreams {
public:
	bool SynchronizeStreams(std::vector<FireStarterStream*>& streams);
	FireStarterStreams(const FireStarterWindow& window, const FireStarterSettings& settings);
	~FireStarterStreams(void);
}; // class FireStarterStreams