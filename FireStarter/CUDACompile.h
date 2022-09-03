#pragma once
#include "CUDADefines.h"
#include "FireStarterProcess.h"
#include <string>
#include <vector>

#define COMPILE_INIT    "CompileInit"
#define COMPILE_EXECUTE "CompileExecute"

class CUDACompile {
public:
	FireStarterProcess* m_process = nullptr;
	size_t m_index;
	bool m_server = false;

	static void StandardOptions(std::vector<std::string>& options);
	static bool Compile(std::string& ptx, std::string& log, const std::string& program, const std::string& programName, const std::vector<std::string>& options);
	static bool CompileProgram(CUmodule& cuda_module, const std::string& program, const std::string& programName);
	static CUfunction GetFunction(CUmodule& cuda_module, const std::string& functionName);

	CUDACompile(FireStarterProcess* process = nullptr);
	~CUDACompile(void);
}; // class CUDACompile