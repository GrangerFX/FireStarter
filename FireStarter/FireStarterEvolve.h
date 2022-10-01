#pragma once
#include "FireStarterState.h"
#include "FireStarterCompiler.h"

class FireStarterEvolve : public SerialThread {
private:
	FireStarterSettings m_settings;
	FireStarterServer m_server;
	FireStarterCompilerManager* m_manager;
	std::vector<FireStarterCompiler*> m_compilers;
	std::string m_optimizeCode;
	void EvolveGenerate(void);
public:
	FireStarterEvolve(FireStarterSettings& settings, FireStarterCompilerManager* manager);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve