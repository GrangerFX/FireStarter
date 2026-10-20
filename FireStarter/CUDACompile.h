#pragma once
#include "CUDADefines.h"
#include <string>
#include <vector>

class CUDACompile {
public:
	static void CompileOptions(std::vector<std::string>& options);
	static bool Compile(std::string& ptx, std::string& log, const std::string& program, const std::string& programName, const std::vector<std::string>& options = {});
}; // class CUDACompile