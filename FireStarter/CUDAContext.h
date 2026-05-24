#pragma once
#include "CUDADefines.h"
#include "CUDAErrors.h"

#define CUDA_DEVICE     0
#define CUDA_PRIORITY   0

class CUDAParameters {
private:
    mutable std::vector<void*> m_parameters;
    std::vector<unsigned char> m_data;
    std::vector<size_t> m_offsets;

public:
    // Single parameter addition
    template <typename T>
    void operator+=(const T& parameter)
    {
        // Ensure we aren't trying to copy complex objects (strings, vectors, etc.)
        static_assert(std::is_trivially_copyable<T>::value, "Only trivially copyable types can be CUDA parameters.");

        // 1. Calculate 8-byte aligned offset
        size_t oldSize = m_data.size();
        size_t alignedOffset = (oldSize + 7) & ~7ULL;

        // 2. Record the starting position
        m_offsets.push_back(alignedOffset);

        // 3. Resize and Copy
        m_data.resize(alignedOffset + sizeof(T));
        std::memcpy(m_data.data() + alignedOffset, &parameter, sizeof(T));
    } // operator+=

    // Variadic helper to add multiple parameters at once
    template <typename... Args>
    void add(const Args&... args)
    {
        // C++11 fold-expression simulation using initializer list
        int dummy[] = { 0, ((*this += args), 0)... };
        static_cast<void>(dummy); // Avoid unused variable warning
    } // add

    // Returns the array of pointers required by cudaLaunchKernel
    void** Parameters()
    {
        m_parameters.clear();
        // Rebuild pointers from offsets in case m_data.data() moved
        for (size_t off : m_offsets) {
            m_parameters.push_back(static_cast<void*>(m_data.data() + off));
        }
        return m_parameters.data();
    } // Parameters

    // Useful for checking parameter count
    size_t count() const
    {
        return m_offsets.size();
    } // count

    template <typename... Args>
    CUDAParameters(const Args&... args) {
        add(args...);
    } // CUDAParameters
}; // class CUDAParameters

class CUDAContext {
private:
    int m_CUDA_device = CUDA_DEVICE;
    int m_CUDA_priority = CUDA_PRIORITY;
    CUdevice m_device = 0;
    CUcontext m_context = nullptr;
    CUstream m_stream = nullptr;
    inline static int m_CUDA_devices = 0;
    inline static bool m_initialized = false;

    // Initialize CUDA only once per process.
    static inline void CUDAInitialize(void)
    {
        static std::mutex CUDAContextMutex;
        CUDAContextMutex.lock();
        if (!m_initialized) {
            checkCUDAErrors(cuInit(0));
            m_initialized = true;

            // Find the number of CUDA devices.
            checkCUDAErrors(cuDeviceGetCount(&m_CUDA_devices));
            if (m_CUDA_devices < 0)
                m_CUDA_devices = 0;
        }
        CUDAContextMutex.unlock();
    } // CUDAInitialize

public:
    static inline int CUDADevices(void)
    {
        // Initialize CUDA only once per process.
        CUDAInitialize();
        return m_CUDA_devices;
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
        SetContext();
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

    inline void InitContext(size_t deviceIndex = CUDA_DEVICE, int priority = CUDA_PRIORITY)
    {
        if (m_CUDA_devices) {
            m_CUDA_priority = priority;
            if (m_CUDA_devices)
                m_CUDA_device = (int)(deviceIndex % m_CUDA_devices);
            else
                m_CUDA_device = 0;

            // Create a context and stream on the device.
            checkCUDAErrors(cuDeviceGet(&m_device, m_CUDA_device));

            // More latency but better thread utilization.
            checkCUDAErrors(cuCtxCreate(&m_context, nullptr, CU_CTX_SCHED_AUTO, m_device));

            // Less latency but worse thread utilization.
    //      checkCUDAErrors(cuCtxCreate(&m_context, CU_CTX_SCHED_SPIN, m_device));

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
        }
    } // InitContext

    inline CUDAContext(void)
    {
        CUDAContext::CUDAInitialize();  // Global initalization. Once for all contexts.
    } // CUDAContext

    inline CUDAContext(size_t deviceIndex, int priority = CUDA_PRIORITY)
    {
        CUDAContext::CUDAInitialize();  // Global initalization. Once for all contexts.
        InitContext(deviceIndex, priority);
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