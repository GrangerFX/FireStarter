#pragma once
#include "FireStarterState.h"
#include "FireStarterCompiler.h"

class FireStarterEvolve : public SerialThread {
private:
	FireStarterState m_state;
	FireStarterSettings m_settings;
	FireStarterServer* m_server;
	std::vector<FireStarterCompiler*> m_compilers;
	std::string m_optimizeCode;
	void EvolveGenerate(void);
public:
	FireStarterCompilerManager* m_manager;

	void Cancel(void);
	FireStarterEvolve(FireStarterState& state);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve