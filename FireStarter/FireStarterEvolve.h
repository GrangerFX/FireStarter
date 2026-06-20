#pragma once
#include "FireStarterState.h"
#include "FireStarterGenerate.h"
#include "FireStarterManager.h"
#include "FireStarterExecute.h"
#include "CUDAThread.h"

class FireStarterEvolve : public CUDAThread {
private:
	FireStarterGenerate* m_evolveGenerate = nullptr;
	std::string m_evolveCode;
	size_t m_evolveIndex = 0;
	unsigned long long m_evolveCount = 0;

public:
	FireStarterEvolve(size_t index = 0);
	~FireStarterEvolve(void);
}; // class FireStarterEvolve
