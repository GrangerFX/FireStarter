#pragma once
#include "FireStarterState.h"
#include "CUDAContext.h"
#include "CUDAModule.h"

class FireStarterGenerate {
private:
	std::string m_generateCode;
	const CUDAContext* m_CUDAContext;
	CUDAModule* m_CUDAModule;
	CUfunction m_evaluateFunction = nullptr;
	CUfunction m_solutionFunction = nullptr;
    CUdeviceptr m_deviceCode = 0;
    CUdeviceptr m_deviceRegisters = 0;
    CUdeviceptr m_deviceData = 0;
	CUdeviceptr m_deviceString = 0;
    size_t m_stringSize = 0;
    unsigned int m_numInstructions = 0;
	unsigned int m_numRegisters = 0;
    bool m_generateGPU = false;

public:
    unsigned int RegisterInfo(const FireStarterCode* code, std::vector<FireStarterRegisterInfo>& registerInfo, const FireStarterSettings& settings);
    bool InitGenerateGPU(const FireStarterSettings& settings);
	void GenerateEvaluate(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& text);
	void GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode);
	FireStarterGenerate(const CUDAContext* context = nullptr, CUDAModule* theModule = nullptr);
	~FireStarterGenerate(void);
}; // FireStarterGenerate
