#pragma once

#include "CUDADefines.h"
#include "CUDAErrors.h"
#include <unordered_set>

// Default device and priority.
#define CUDA_DEVICE             0
#define CUDA_PRIORITY           0

// These were experiments based on suggestions from Google Gemini.
// None of these resolved the CUDA process shutdown zombie GPU issue.
// Note: TODO: Delete these if and when NVIDIA resolves the bug.
#define CUDA_KILL_CONTEXTS      0   // Note: This one is not even thread safe.
#define CUDA_KILL_DEVICES       0
#define CUDA_KILL_PROCESS       0
#define CUDA_POLL_SYNCHRONIZE   0

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
    // Static members for global CUDA state
    inline static int m_CUDA_devices = 0;
    inline static bool m_initialized = false;
    inline static std::mutex m_ContextMutex;
#if CUDA_KILL_CONTEXTS
    inline static std::unordered_set<CUcontext> m_ActiveContexts;
#endif

    // Local members for this context instance
    int m_CUDA_device = CUDA_DEVICE;
    int m_CUDA_priority = CUDA_PRIORITY;
    CUdevice m_device = 0;
    CUcontext m_context = nullptr;
    CUstream m_stream = nullptr;

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

    // CUDAShutdown is an attempt to forcefully clean up all CUDA contexts and resources before the process exits.
    // A possible solution is to use volatile CUDA memory variables to cause the kernels to exist early.
    // Note: Experimental work in progress!
    static inline void CUDAShutdown(void)
    {
        // This lock_guard ensures that no other thread is creating or destroying contexts while we are shutting down.
        std::lock_guard<std::mutex> lock(m_ContextMutex);

#if CUDA_KILL_CONTEXTS
        // 1. Force fully destroy surviving zombie contexts across all threads
        for (CUcontext ctx : m_ActiveContexts) {
            if (ctx)
                cuCtxDestroy(ctx);  // Note: This blocks for the kernel to complete.
        }
        m_ActiveContexts.clear();
#endif

#if CUDA_KILL_DEVICES
        // 2. Hardware fallback reset for primary devices
        // Note: This does not work currenty.
        // Note: This may work if the program is run as an administrator.
        int count = 0;
        if (cuDeviceGetCount(&count) == CUDA_SUCCESS) {
            for (int device = 0; device < count; device++) {
                CUdevice cuDevice;
                if (cuDeviceGet(&cuDevice, device) == CUDA_SUCCESS) {
                    // 2. Clear the primary fallback queue just to be absolutely safe
                    cuDevicePrimaryCtxReset(cuDevice);
                }
            }
        }
#endif

#if CUDA_KILL_PROCESS
#if 1
        // 3. Nuclear option: Kill the process immediately from the inside out.
        // Unlike ExitProcess, which attempts a semi-orderly DLL detach sequence,
        // TerminateProcess stops all threads instantly and returns control to the OS kernel.
        TerminateProcess(GetCurrentProcess(), 0);
#else
        // Force the process to exit immediately. CUDA will also be terminated.
        ExitProcess(0);
#endif
#endif
    } // CUDAShutdown

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
#if CUDA_POLL_SYNCHRONIZE
        while (true) {
            // 1. Check stream status without blocking
            CUresult status = cuStreamQuery(m_stream);

            if (status == CUDA_ERROR_NOT_READY) {
                // Kernel is still running.
                // Yield CPU to keep usage low, but stay in User Mode.
                // If TerminateProcess() happens now, it's a clean OS exit.
                Sleep(1);
            } else {
                // Actual error occurred (e.g., CUDA_ERROR_LAUNCH_FAILED)
                checkCUDAErrors(status);
                return;
            }
        }
#else
         checkCUDAErrors(cuStreamSynchronize(m_stream));
#endif
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
            // Get the CUDA device id.
            m_CUDA_priority = priority;
            m_CUDA_device = (int)(deviceIndex % m_CUDA_devices);
            checkCUDAErrors(cuDeviceGet(&m_device, m_CUDA_device));

            // Create Driver Context. This automatically binds it to the current host thread.
            // Register the context so we can exit cleanly if needed.
            std::lock_guard<std::mutex> lock(m_ContextMutex);
            checkCUDAErrors(cuCtxCreate(&m_context, nullptr, CU_CTX_SCHED_AUTO, m_device));
#if CUDA_KILL_CONTEXTS
            m_ActiveContexts.insert(m_context);
#endif

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
        if (m_context) {
            // Destroy the stream and context, ensuring thread safety.
            std::lock_guard<std::mutex> lock(m_ContextMutex);

            if (m_stream) {
                checkCUDAErrors(cuStreamDestroy(m_stream));
                m_stream = nullptr;
            }

#if CUDA_KILL_CONTEXTS
            m_ActiveContexts.erase(m_context);
#endif
            checkCUDAErrors(cuCtxDestroy(m_context));
            m_context = nullptr;
        }
    } // ~CUDAContext
}; // class CUDAContext