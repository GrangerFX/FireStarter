#pragma once
#include "FireStarterState.h"
#include "FireStarterCompiler.h"

class FireStarterEvolve : public SerialThread {
private:
	FireStarterCompilerManager* m_manager;
	std::string m_optimizeCode;

public:
	bool EvolveGenerations(const FireStarterState* state, unsigned int generations);
	FireStarterEvolve(FireStarterCompilerManager* manager);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve