#pragma once
#include "CUDADefines.h"
#include "CUDAErrors.h"

class CUDAContext {
private:
    CUdevice m_device = 0;
    CUcontext m_context = nullptr;
    CUstream m_stream = nullptr;

public:
    inline const CUdevice Device(void) const
    {
        return m_device;
    } // Device

    inline const CUcontext Context(void) const
    {
        return m_context;
    } // Context

    inline const CUstream Stream(void) const
    {
        return m_stream;
    } // Stream

    inline CUDAContext(unsigned int device = 0)
    {
        // Initialize CUDA only once per process.
        static bool initialized = false;
        if (!initialized) {
            checkCUDAErrors(cuInit(0));
            initialized = true;
        }
  
        checkCUDAErrors(cuDeviceGet(&m_device, device));
        checkCUDAErrors(cuCtxCreate(&m_context, CU_CTX_SCHED_AUTO, m_device));
        checkCUDAErrors(cudaStreamCreate(&m_stream));
    } // CUDAContext

    inline ~CUDAContext(void)
    {
        if (m_stream)
            checkCUDAErrors(cudaStreamDestroy(m_stream));
        if (m_context)
            checkCUDAErrors(cuCtxDestroy(m_context));
    } // ~CUDAContext
}; // class CUDAContext