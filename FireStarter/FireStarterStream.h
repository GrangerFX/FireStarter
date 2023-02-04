#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterState& m_bestState;
	size_t m_index = 0;
	bool m_done = true;

	void OptimizeState(const FireStarterWindow& window, const FireStarterState& evolveState);
	void EvolveState(const FireStarterWindow& window, const FireStarterSettings& settings, size_t index, size_t test);

public:
	void OptimizeStream(const FireStarterWindow& window, const FireStarterState& evolveState, bool sync = false);
	void EvolveStream(const FireStarterWindow& window, const FireStarterSettings& settings, size_t index, bool sync = false);
	static void Optimize(const FireStarterWindow& window, const FireStarterState& evolveState);
	static void Evolve(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index = 0);
	inline bool Done(void) { return m_done; }
	FireStarterStream(FireStarterState& bestState, size_t index = 0);
	~FireStarterStream(void);
}; // class FireStarterStream