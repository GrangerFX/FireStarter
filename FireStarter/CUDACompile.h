#pragma once
#include "CUDADefines.h"
#include <string>

class CUDACompile {
public:
	static bool CompilePTX(const std::string& program, std::string& ptx, const std::string& programName = "");
	static CUfunction CompileProgram(const std::string& program, CUmodule& cuda_module, const std::string& functionName = "");
	static CUfunction GetFunction(CUmodule& cuda_module, const char* functionName);
}; // class CUDACompile