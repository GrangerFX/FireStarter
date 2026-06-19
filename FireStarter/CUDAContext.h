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

    // Using a simplified struct for driver-level device properties
    struct DeviceProperties {
        int multiProcessorCount = 0;
        int maxThreadsPerMultiProcessor = 0;
        int maxThreadsPerBlock = 0;
        int warpSize = 32;
    };
    inline static std::vector<DeviceProperties> m_deviceProperties;

    static inline void CUDAInitialize(void)
    {
        static std::mutex CUDAContextMutex;
        CUDAContextMutex.lock();
        if (!m_initialized) {
            // Initialize the Driver API
            checkCUDAErrors(cuInit(0));
            m_initialized = true;

            checkCUDAErrors(cuDeviceGetCount(&m_CUDA_devices));
            if (m_CUDA_devices <= 0) {
                m_CUDA_devices = 0;
            } else {
                for (int i = 0; i < m_CUDA_devices; i++) {
                    CUdevice device;
                    checkCUDAErrors(cuDeviceGet(&device, i));

                    // Query specific attributes via Driver API
                    DeviceProperties props;
                    checkCUDAErrors(cuDeviceGetAttribute(&props.multiProcessorCount, CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, device));
                    checkCUDAErrors(cuDeviceGetAttribute(&props.maxThreadsPerMultiProcessor, CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR, device));
                    checkCUDAErrors(cuDeviceGetAttribute(&props.maxThreadsPerBlock, CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK, device));
                    checkCUDAErrors(cuDeviceGetAttribute(&props.warpSize, CU_DEVICE_ATTRIBUTE_WARP_SIZE, device));
                    m_deviceProperties.push_back(props);
                }
            }
        }
        CUDAContextMutex.unlock();
    } // CUDAInitialize

public:
    static inline int CUDADevices(void)
    {
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

    inline void SynchronizeContext(void) const
    {
         checkCUDAErrors(cuStreamSynchronize(m_stream));
    } // SynchronizeContext

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
            m_CUDA_device = (int)(deviceIndex % m_CUDA_devices);

            checkCUDAErrors(cuDeviceGet(&m_device, m_CUDA_device));

            // Create Driver Context. This automatically binds it to the current host thread.
            checkCUDAErrors(cuCtxCreate(&m_context, nullptr, CU_CTX_SCHED_AUTO, m_device));

            // FIX: Use the Driver API to create the stream with priority.
            // It explicitly honors the currently bound active context (m_context).
            checkCUDAErrors(cuStreamCreateWithPriority(&m_stream, CU_STREAM_DEFAULT, priority));
        }
    } // InitContext

    inline CUDAContext(void)
    {
        CUDAContext::CUDAInitialize();
    } // CUDAContext

    inline CUDAContext(size_t deviceIndex, int priority = CUDA_PRIORITY)
    {
        CUDAContext::CUDAInitialize();
        InitContext(deviceIndex, priority);
    } // CUDAContext

    inline ~CUDAContext(void)
    {
        if (m_stream) {
            checkCUDAErrors(cuStreamDestroy(m_stream));
            m_stream = nullptr;
        }
        if (m_context) {
            checkCUDAErrors(cuCtxDestroy(m_context));
            m_context = nullptr;
        }
    } // ~CUDAContext
}; // class CUDAContext