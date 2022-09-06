#pragma once
#include "FireStarterState.h"
#include "FireStarterCompiler.h"

class FireStarterRandom : public SerialThread {
private:
	FireStarterSettings m_settings;
	FireStarterServer m_server;
	FireStarterCompilerManager* m_manager;
	std::vector<FireStarterCompiler*> m_compilers;
	std::string m_optimizeCode;
	void RandomGenerate(void);
public:
	FireStarterRandom(FireStarterSettings& settings, FireStarterCompilerManager* manager);
	~FireStarterRandom(void);
}; // class FireStarterRandom