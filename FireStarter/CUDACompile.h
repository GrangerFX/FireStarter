#pragma once
#include "CUDADefines.h"
#include <string>
#include <vector>

class CUDACompile {
public:
	static void CompileOptions(std::vector<std::string>& options);
	static bool Compile(std::string& ptx, std::string& log, const std::string& program, const std::string& programName, const std::vector<std::string>& options);
    static bool CompilePTX(std::string& ptx, const std::string& program, const std::string& programName);
    static bool CompileModule(CUmodule& cuda_module, const std::string& ptx);
	static void ReleaseModule(CUmodule& cuda_module);
    static bool CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName);
    static CUfunction GetFunction(CUmodule& cuda_module, const std::string& functionName);
}; // class CUDACompile