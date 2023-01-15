#pragma once
#include "FireStarterManager.h"
#include "FireStarterWindow.h"

class FireStarterStream : public SerialThread {
private:
	FireStarterWindow* m_window;
	FireStarterSettings m_evolveSettings;
	FireStarterSettings m_optimizeSettings;
	size_t m_index = 0;
public:
	void Optimize(const FireStarterState* evolveState = nullptr);
	void Evolve(void);
	FireStarterStream(const FireStarterSettings& evolveSettings, const FireStarterSettings& optimizeSettings, FireStarterWindow* window, size_t index = 0);
	~FireStarterStream(void);
}; // class FireStarterStream