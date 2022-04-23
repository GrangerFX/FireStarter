#pragma once
#include "CUDADefines.h"
#include <string>

class CUDACompile {
public:
	static bool CompilePTX(std::string& ptx, const std::string& program, const std::string& programName = "");
	static bool CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName = "");
	static CUfunction GetFunction(CUmodule& cuda_module, const std::string& functionName);
}; // class CUDACompile