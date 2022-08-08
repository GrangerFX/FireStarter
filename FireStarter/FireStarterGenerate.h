#pragma once
#include "FireStarterProgram.h"
#include "FireStarterState.h"

class FireStarterGenerate {
private:
	std::string m_generateCode;
	CUstream m_stream = nullptr;
	CUmodule m_module = nullptr;
	CUfunction m_evaluateFunction = nullptr;
	CUfunction m_solutionFunction = nullptr;
	FireStarterInstructions* m_deviceInstructions = nullptr;
	FireStarterRegisters* m_deviceRegisters = nullptr;
	FireStarterData* m_deviceData = nullptr;
	unsigned char* m_deviceString = nullptr;
	size_t m_numInstructions = 0;
	size_t m_numRegisters = 0;
	size_t m_stringSize = 0;

public:
	void InitGenerate(const FireStarterSettings& settings);
	void GenerateEvaluate(const FireStarterState& state, std::string& code);
	void GenerateSolution(const FireStarterState& state, std::string& code, const std::string& targetCode, double duration, unsigned int generation);
	FireStarterGenerate(CUstream stream);
	~FireStarterGenerate(void);
}; // FireStarterGenerate
