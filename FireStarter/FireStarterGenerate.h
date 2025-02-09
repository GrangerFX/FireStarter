#pragma once
#include "FireStarterProgram.h"
#include "FireStarterState.h"
#include "CUDAContext.h"

class FireStarterGenerate {
private:
	std::string m_generateCode;
	CUDAContext* m_CUDAContext = nullptr;
	CUmodule m_module = nullptr;
	CUfunction m_evaluateFunction = nullptr;
	CUfunction m_solutionFunction = nullptr;
	FireStarterCode* m_deviceCode = nullptr;
	FireStarterRegisterUsage* m_deviceRegisters = nullptr;
	FireStarterData* m_deviceData = nullptr;
	unsigned char* m_deviceString = nullptr;
	unsigned int m_numInstructions = 0;
	unsigned int m_numRegisters = 0;
	size_t m_stringSize = 0;

public:
	bool InitGenerateGPU(const FireStarterSettings& settings);
	void GenerateEvaluate(const FireStarterState& state, std::string& text);
	void GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode);
	FireStarterGenerate(CUDAContext* context = nullptr);
	~FireStarterGenerate(void);
}; // FireStarterGenerate
