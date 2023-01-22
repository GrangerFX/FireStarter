#pragma once
#include "CUDADefines.h"
#include "CUDAErrors.h"

class CUDAContext {
private:
    CUdevice m_device = 0;
    CUcontext m_context = nullptr;
    CUstream m_stream = nullptr;

    // Initialize CUDA only once per process.
    static inline void Initialize(void)
    {
        static bool initialized = false;
        if (!initialized) {
            checkCUDAErrors(cuInit(0));
            initialized = true;
        }
    } // Initialize

public:
    static inline unsigned int CUDADevices(void)
    {
        // Initialize CUDA only once per process.
        Initialize();

        // Find the number of CUDA devices.
        int count = 0;
        checkCUDAErrors(cuDeviceGetCount(&count));
        if (count > 0)
            return (unsigned int)count;
        return 0;
    } // CUDADevices

    static inline void CUDAText(std::string& text, unsigned int count = 0)
    {
        if (!count)
            count = CUDADevices();
        text += Format("CUDA devices = %u\r\n", count);

        for (unsigned int device = 0; device < count; device++) {
            char deviceName[1024];
            checkCUDAErrors(cuDeviceGetName(deviceName, sizeof(deviceName) - 1, device));
            text += Format("Device %u: %s\r\n", device, deviceName);
        }
    } // CUDAText

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

    inline void SetContext(void) const
    {
        checkCUDAErrors(cuCtxSetCurrent(m_context));
    } // SetContext

    inline void Synchronize(void) const
    {
        checkCUDAErrors(cudaStreamSynchronize(m_stream));
    } // Syncronize

    inline void PushContext(void) const
    {
        checkCUDAErrors(cuCtxPushCurrent(m_context));
    } // PushContext

    inline void PopContext(void) const
    {
        CUcontext oldContext = nullptr;
        checkCUDAErrors(cuCtxPopCurrent(&oldContext));
    } // PopContext

    inline CUDAContext(size_t device = 0)
    {
        // Initialize CUDA only once per process.
        Initialize();

        // Use all the CUDA devices.
        int count = 0;
        checkCUDAErrors(cuDeviceGetCount(&count));
        if (count > 0)
            device %= count;
        checkCUDAErrors(cuDeviceGet(&m_device, (int)device));
        checkCUDAErrors(cuCtxCreate(&m_context, CU_CTX_SCHED_AUTO, m_device));
        checkCUDAErrors(cudaStreamCreate(&m_stream));
    } // CUDAContext

    inline ~CUDAContext(void)
    {
        if (m_stream) {
            checkCUDAErrors(cudaStreamDestroy(m_stream));
            m_stream = nullptr;
        }
        if (m_context) {
            checkCUDAErrors(cuCtxDestroy(m_context));
            m_context = nullptr;
        }
    } // ~CUDAContext
}; // class CUDAContext