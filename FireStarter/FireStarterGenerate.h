#pragma once
#include "FireStarterProgram.h"
#include "FireStarterState.h"

class FireStarterGenerate {
private:
	FireStarterInstructions* m_deviceInstructions = nullptr;
	FireStarterRegisters* m_deviceRegisters = nullptr;
	FireStarterData* m_deviceData = nullptr;
	unsigned char* m_deviceString = nullptr;
	size_t m_numInstructions = 0;
	size_t m_numRegisters = 0;
	size_t m_stringSize = 0;

public:
	void InitGenerate(const FireStarterState& state);
	void GenerateEvaluate(const FireStarterState& state, CUfunction function, CUstream stream, std::string& code);
	void GenerateSolution(const FireStarterState& state, CUfunction function, CUstream stream, std::string& code, const std::string& targetCode, double duration, unsigned int generation);
	FireStarterGenerate(void);
	~FireStarterGenerate(void);
}; // FireStarterGenerate
