#pragma once
#include "FireStarterState.h"
#include "CUDAContext.h"
#include "CUDAModule.h"

class FireStarterGenerate {
public:
    static unsigned int RegisterInfo(const FireStarterCode* code, std::vector<FireStarterRegisterInfo>& registerInfo, const FireStarterSettings& settings);
    static void GenerateEvaluate(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& text);
    static void GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode);
}; // FireStarterGenerate
