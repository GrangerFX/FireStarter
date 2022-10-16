#pragma once
#include "CUDADefines.h"
#include "FireStarterProcess.h"
#include <string>
#include <vector>

class CUDACompile {
public:
	static void StandardOptions(std::vector<std::string>& options);
	static void DeviceOptions(std::vector<std::string>& options);
	static bool Compile(std::string& ptx, std::string& log, const std::string& program, const std::string& programName, const std::vector<std::string>& options);
	static void CompileModule(CUmodule& cuda_module, const std::string& ptx);
	static bool CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName);
	static CUfunction GetFunction(CUmodule& cuda_module, const std::string& functionName);
}; // class CUDACompile