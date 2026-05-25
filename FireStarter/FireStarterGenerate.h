#pragma once
#include "FireStarterState.h"
#include "CUDAContext.h"

class FireStarterGenerate {
private:
	std::string m_generateCode;
	const CUDAContext m_CUDAContext;
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
    unsigned int RegisterInfo(const FireStarterCode* code, std::vector<FireStarterRegisterInfo>& registerInfo, const FireStarterSettings& settings);
    bool InitGenerateGPU(const FireStarterSettings& settings);
	void GenerateEvaluate(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& text);
	void GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode);
	FireStarterGenerate(const CUDAContext& context);
	~FireStarterGenerate(void);
}; // FireStarterGenerate
