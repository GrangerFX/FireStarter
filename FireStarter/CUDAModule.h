#pragma once
#include "CUDACompile.h"

class CUDAModule {
public:
    std::string m_programPTX;
    std::string m_compileLog;
    CUmodule m_module = nullptr;
    CUfunction m_executeFunction = nullptr;
    CUfunction m_executeTest = nullptr;
    volatile int* m_hostGPUKillSwitch = nullptr;
    CUdeviceptr m_deviceGPUKillSwitch = 0;

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
        if (m_module && !functionName.empty()) {
            CUfunction function = nullptr;
            if (cuModuleGetFunction(&function, m_module, functionName.c_str()) == CUDA_SUCCESS)
                return true;
        }
        return false;
    } // HasFunction

    inline CUfunction GetFunction(const std::string& functionName)
    {
        if (m_module && !functionName.empty()) {
            CUfunction function = nullptr;
            if (cuModuleGetFunction(&function, m_module, functionName.c_str()) == CUDA_SUCCESS)
                return function;
        }
        return nullptr;
    } // GetFunction

    inline size_t HasGlobal(const std::string& globalName)
    {
        if (m_module) {
            CUdeviceptr devicePtr = 0;
            size_t size = 0;
            if ((cuModuleGetGlobal(&devicePtr, &size, m_module, globalName.c_str()) == CUDA_SUCCESS) && (devicePtr != 0))
                return size;
        }
        return 0;
    } // HasGlobal

    inline bool GetGlobal(const std::string& globalName, void* hostPtr, size_t hostSize)
    {
        if (m_module) {
            CUdeviceptr devicePtr = 0;
            size_t deviceSize = 0;
            if ((cuModuleGetGlobal(&devicePtr, &deviceSize, m_module, globalName.c_str()) == CUDA_SUCCESS) && (devicePtr != 0) && (deviceSize == hostSize))
                if (cuMemcpyDtoH(hostPtr, devicePtr, hostSize) == CUDA_SUCCESS)
                    return true;
        }
        return false;
    } // GetGlobal

    inline bool SetGlobal(const std::string& globalName, void* hostPtr, size_t hostSize)
    {
        if (m_module) {
            CUdeviceptr devicePtr = 0;
            size_t deviceSize = 0;
            if ((cuModuleGetGlobal(&devicePtr, &deviceSize, m_module, globalName.c_str()) == CUDA_SUCCESS) && (devicePtr != 0) && (deviceSize == hostSize))
                if (cuMemcpyHtoD(devicePtr, hostPtr, hostSize) == CUDA_SUCCESS)
                    return true;
        }
        return false;
    } // SetGlobal

    inline volatile int* InitGPUKillSwitch(int killNow = 0)
    {
        if (!m_hostGPUKillSwitch) {
            // Allocate the kill switch in pinned host memory so that the host can access it.
            if (cuMemHostAlloc((void**)&m_hostGPUKillSwitch, sizeof(int), CU_MEMHOSTALLOC_DEVICEMAP) != CUDA_SUCCESS)
                return nullptr;

            // Set the device pointer for the host memory kill switch so that the GPU kernel can access it.
            if (cuMemHostGetDevicePointer(&m_deviceGPUKillSwitch, (void*)m_hostGPUKillSwitch, 0) != CUDA_SUCCESS)
                return nullptr;

            // Initialize the value.
            *m_hostGPUKillSwitch = killNow;

            // Set the global variable in the CUDA module to point to the kill switch in pinned host memory.
            SetGlobal("g_GPUKillSwitch", &m_deviceGPUKillSwitch, sizeof(CUdeviceptr));
        }
        if (killNow)
            *m_hostGPUKillSwitch = killNow;
        return m_hostGPUKillSwitch;
    } // InitGPUKillSwitch

    inline bool SetKillSwitch(void)
    {
        // Set the kill switch variable in pinned host memory.
        return InitGPUKillSwitch(1) != nullptr;
    } // SetKillSwitch

    inline bool BuildModule(const std::string& functionName = {}, const std::string& testName = {})
    {
        ClearModule();
        if (!m_programPTX.empty() && checkCUDAErrors(cuModuleLoadDataEx(&m_module, m_programPTX.c_str(), 0, 0, 0)) && m_module) {
            InitGPUKillSwitch();
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
