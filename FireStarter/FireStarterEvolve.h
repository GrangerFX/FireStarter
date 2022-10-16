#pragma once
#include "FireStarterState.h"
#include "FireStarterCompiler.h"

class FireStarterEvolve : public SerialThread {
private:
	FireStarterState m_state;
	FireStarterSettings m_settings;
	std::string m_optimizeCode;
	FireStarterCompilerManager* m_manager;

	void EvolveGenerate(void);

public:
	FireStarterEvolve(FireStarterCompilerManager* manager, FireStarterState& state);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve