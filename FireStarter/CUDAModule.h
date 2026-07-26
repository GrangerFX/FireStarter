#pragma once
#include "CUDACompile.h"

class CUDAModule {
public:
    std::string m_programPTX;
    std::string m_compileLog;
    CUmodule m_module = nullptr;
    CUfunction m_executeFunction = nullptr;
    CUfunction m_executeTest = nullptr;

    inline bool Compile(const std::string& programCode, const std::string& programName)
    {
        m_programPTX.clear();
        m_compileLog.clear();
        return CUDACompile::Compile(m_programPTX, m_compileLog, programCode, programName) && !m_programPTX.empty();
    } // Compile

    inline void ClearModule(void)
    {
        if (m_module) {
            checkCUDAErrors(cuModuleUnload(m_module));
            m_module = nullptr;
        }
        m_executeFunction = nullptr;
        m_executeTest = nullptr;
    } // ClearModule

    inline bool HasFunction(const std::string& functionName)
    {
        CUfunction function = nullptr;
        CUresult result = cuModuleGetFunction(&function, m_module, functionName.c_str());
        return (result == 0) && (function != nullptr);
    } // HasFunction

    inline CUfunction GetFunction(const std::string& functionName)
    {
        CUfunction function = nullptr;
        if (!functionName.empty())
            checkCUDAErrors(cuModuleGetFunction(&function, m_module, functionName.c_str()));
        return function;
    } // GetFunction

    inline bool BuildModule(const std::string& functionName = {}, const std::string& testName = {})
    {
        ClearModule();
        if (!m_programPTX.empty() && checkCUDAErrors(cuModuleLoadDataEx(&m_module, m_programPTX.c_str(), 0, 0, 0))) {
            m_executeFunction = GetFunction(functionName);
            m_executeTest = GetFunction(testName);
            return functionName.empty() || (m_executeFunction != nullptr);
        }
        return false;
    } // BuildModule

    inline bool BuildModulePtx(const std::string& ptx, const std::string& functionName = {}, const std::string& testName = {})
    {
        m_programPTX = ptx;
        return BuildModule(functionName, testName);
    } // BuildModulePtx

    inline bool CompileProgram(const std::string& programCode, const std::string& programName, const std::string& functionName = {}, const std::string& testName = {})
    {
        return Compile(programCode, programName) && BuildModule(functionName, testName);
    } // CompileProgram

    inline ~CUDAModule(void)
    {
        ClearModule();
    } // ~CUDAModule
}; // class CUDAModule
