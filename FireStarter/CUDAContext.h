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

    inline CUDAContext(int device = 0, int priority = 0)
    {
        // Initialize CUDA only once per process.
        Initialize();

        // Use all the CUDA devices.
        int count = 0;
        checkCUDAErrors(cuDeviceGetCount(&count));
        if (count > 0)
            device %= count;

        // Create a context and stream on the device.
        checkCUDAErrors(cuDeviceGet(&m_device, device));
        
        // More latency but better thread utilization.
        checkCUDAErrors(cuCtxCreate_v4(&m_context, nullptr, CU_CTX_SCHED_AUTO, m_device));

        // Less latency but worse thread utilization.
//      checkCUDAErrors(cuCtxCreate(&m_contextt, nullptr, CU_CTX_SCHED_SPIN, m_device));

        checkCUDAErrors(cudaStreamCreateWithPriority(&m_stream, cudaStreamDefault, priority));

#if 0
        // Get some information about the device.
        // A block is the kernal threads that run together the size as specified when the kernal is launched.
        // Note: My original idea was to find out how many kernel threads or warps I should send to the GPU in order to keep it fully loaded.
        // This actually makes no sense since the number of active threads being executed per SM is based on the registers and shared memory
        // they use up to the maximum per multiprocessor and/or block. These are then executed until they are all complete but not necessarilly
        // at the same time. Use the CUDA occupancy API to determine the number of kernel threads can run on a SM.
        cudaDeviceProp deviceProperties;
        checkCUDAErrors(cudaGetDeviceProperties(&deviceProperties, m_device));
        int multiProcessorCount = deviceProperties.multiProcessorCount;                   // Number of multiprocessors on device: 128 (matches online documentation for the RTX 4090)
        int maxBlocksPerMultiProcessor = deviceProperties.maxBlocksPerMultiProcessor;     // Maximum number of resident blocks per multiprocessor: 24
        int maxThreadsPerMultiProcessor = deviceProperties.maxThreadsPerMultiProcessor;   // Maximum resident threads per multiprocessor: 1536
        int maxThreadsPerBlock = deviceProperties.maxThreadsPerBlock;                     // Maximum number of threads per block: 1024
        int warpSize = deviceProperties.warpSize;                                         // Warp size in threads: 32
        // Missing: Warps per SM: 64 for all current CUDA GPUs accourding to online documentation.
#endif
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