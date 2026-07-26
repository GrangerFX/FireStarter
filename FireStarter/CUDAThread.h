#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"
#include "CUDAModule.h"

#define CUDA_KILL_SWITCH    1

class CUDAThread : public SerialThread
{
private:
    CUDAContext m_CUDAContext;
    CUDAModule m_CUDAModule;
#if CUDA_KILL_SWITCH
    int* m_GPUKillSwitch = nullptr;
#endif

public:

    inline int*& GPUKillSwitch(void)
    {
#if CUDA_KILL_SWITCH
        return m_GPUKillSwitch;
#else
        return nullptr;
#endif
    } // GPUKillSwitch

    inline bool TerminateThread(void) override
    {
#if CUDA_KILL_SWITCH
        if (m_GPUKillSwitch) {
            *m_GPUKillSwitch = 1; // Signal GPU kernel to terminate
            DispatchSync([this] {
                // Just in case this gets called more than once.
                if (m_GPUKillSwitch) {
                    *m_GPUKillSwitch = 1; // Signal GPU to terminate
                    SynchronizeContext(); // Wait for GPU to acknowledge
                    cuMemFree((CUdeviceptr)m_GPUKillSwitch);
                    m_GPUKillSwitch = nullptr;
                }
            });
        }
#endif
        return SerialThread::TerminateThread();
    } // TerminateThread

    inline const CUDAContext& Context(void) const
    {
        return m_CUDAContext;
    } // Context

    inline CUDAContext& Context(void)
    {
        return m_CUDAContext;
    } // Context

    inline const CUDAModule& Module(void) const
    {
        return m_CUDAModule;
    } // Module

    inline CUDAModule& Module(void)
    {
        return m_CUDAModule;
    } // Module

    inline CUstream Stream(void) const
    {
        return m_CUDAContext.Stream();
    } // Stream

    inline int Device(void) const
    {
        return m_CUDAContext.Device();
    } // Device

    inline void SetContext(void) const
    {
        m_CUDAContext.SetContext();
    } // SetContext

    // Note: This must be called from this CUDAThread.
    inline void SynchronizeContext(void)
    {
#if CUDA_KILL_SWITCH
        while (true) {
            // 1. Check stream status without blocking
            CUresult status = cuStreamQuery(Stream());
            if (status == CUDA_ERROR_NOT_READY) {
                // Kill the GPU kernel if the thread is terminating. This is a cooperative kill switch.
                if (WillTerminate())
                    *m_GPUKillSwitch = 1;

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
        m_CUDAContext.SynchronizeContext();
#endif
    } // SynchronizeContext

    // Note: This must be not called from this CUDAThread.
    inline void CUDASynchronize(void)
    {
        DispatchSync([this] {
            SynchronizeContext();
        });
    } // CUDASynchronize

    template <typename... Args>
    inline bool CUDALaunch(const std::string& functionName, unsigned int threadsPerBlock, unsigned int blocksPerGrid, const Args&... args)
    {
        CUDAParameters parameters(args...); // Don't forget the pack expansion dots (...)

        return checkCUDAErrors(cuLaunchKernel(
            Module().GetFunction(functionName),
            blocksPerGrid, 1, 1,        // grid dim (X, Y, Z) - Controls number of blocks
            threadsPerBlock, 1, 1,      // block dim (X, Y, Z) - Controls threads per block
            0,                          // shared mem 
            Stream(),                   // stream
            parameters.Parameters(),    // arguments
            0                           // extra
        ));
    } // CUDALaunch

    inline CUDAThread(const std::string threadName = "", size_t deviceIndex = CUDA_DEVICE, int priority = CUDA_PRIORITY) : SerialThread(threadName), m_CUDAContext()
    {
        if (threadName.empty())
            m_threadName = "CUDAThread";
        DispatchSync([this, deviceIndex, priority] {
            m_CUDAContext.InitContext(deviceIndex, priority);

#if CUDA_KILL_SWITCH
#if 1
            checkCUDAErrors(cuMemAllocHost((void**)&m_GPUKillSwitch, sizeof(int)));
#else
            // Allocate managed memory for the kill switch
            checkCUDAErrors(cuMemAllocManaged((CUdeviceptr*)&m_GPUKillSwitch, sizeof(int), CU_MEM_ATTACH_GLOBAL));

            // Create the location struct for the CPU
            CUmemLocation cpuLocation = {};
            cpuLocation.type = CU_MEM_LOCATION_TYPE_HOST;
            cpuLocation.id = 0; // ID is ignored when type is HOST

            // Pass the struct instead of 'CU_DEVICE_CPU'
            cuMemAdvise((CUdeviceptr)m_GPUKillSwitch, sizeof(int), CU_MEM_ADVISE_SET_ACCESSED_BY, cpuLocation);
#endif

            // Initialize the value.
            *m_GPUKillSwitch = 0; // 0 = Run, 1 = Die
#endif
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
    } // ~CUDAThread
}; // class CUDAThread