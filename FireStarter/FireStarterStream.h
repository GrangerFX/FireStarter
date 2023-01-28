#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterState& m_bestState;

	void OptimizeState(const FireStarterWindow& window, const FireStarterState& evolveState);
	void EvolveState(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index);

public:
	void OptimizeStream(const FireStarterWindow& window, const FireStarterState& evolveState, bool sync = false);
	void EvolveStream(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index, bool sync = false);
	static void Optimize(const FireStarterWindow& window, const FireStarterState& evolveState);
	static void Evolve(const FireStarterWindow& window, const FireStarterSettings& evolveSettings, size_t index = 0);
	FireStarterStream(FireStarterState& bestState);
	~FireStarterStream(void);
}; // class FireStarterStream