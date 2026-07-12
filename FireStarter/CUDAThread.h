#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"

#define CUDA_KILL_SWITCH    0

class CUDAThread : public SerialThread
{
private:
    CUDAContext m_CUDAContext;
#if CUDA_KILL_SWITCH
    int* m_GPUKillSwitch = nullptr;
#endif

public:

    inline int* GPUKillSwitch(void)
    {
#if CUDA_KILL_SWITCH
        return m_GPUKillSwitch;
#else
        return nullptr;
#endif
    } // GPUKillSwitch

    inline void Terminate(void) override
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
        SerialThread::Terminate();
    } // Terminate

    inline const CUDAContext& Context(void) const
    {
        return m_CUDAContext;
    } // Context

    inline CUDAContext& Context(void)
    {
        return m_CUDAContext;
    } // Context

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

    // Note: int is used instead of bool for correct type matching.
    inline CUDAThread(const std::string& threadName = "CUDAThread", size_t deviceIndex = CUDA_DEVICE, int priority = CUDA_PRIORITY) : SerialThread(threadName), m_CUDAContext()
    {
        DispatchSync([this, deviceIndex, priority] {
            m_CUDAContext.InitContext(deviceIndex, priority);

#if CUDA_KILL_SWITCH
            // Allocate managed memory for the kill switch
            cuMemAllocManaged((CUdeviceptr*)&m_GPUKillSwitch, sizeof(int), CU_MEM_ATTACH_GLOBAL);

            // Create the location struct for the CPU
            CUmemLocation cpuLocation = {};
            cpuLocation.type = CU_MEM_LOCATION_TYPE_HOST;
            cpuLocation.id = 0; // ID is ignored when type is HOST

            // Pass the struct instead of 'CU_DEVICE_CPU'
            cuMemAdvise((CUdeviceptr)m_GPUKillSwitch, sizeof(int), CU_MEM_ADVISE_SET_ACCESSED_BY, cpuLocation);

            // Initialize the value.
            *m_GPUKillSwitch = 0; // 0 = Run, 1 = Die
#endif
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        Terminate();
    } // ~CUDAThread
}; // class CUDAThread