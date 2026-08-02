#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"
#include "CUDAModule.h"

class CUDAThread : public SerialThread
{
private:
    CUDAContext m_CUDAContext;
    CUDAModule m_CUDAModule;

public:

    inline bool TerminateThread(void) override
    {
        m_CUDAModule.SetKillSwitch(); // Signal GPU kernel to terminate
        DispatchSync([this] {
            // Just in case this gets called more than once.
            m_CUDAModule.SetKillSwitch();
            SynchronizeContext(); // Wait for GPU to acknowledge
        });
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
        while (true) {
            // 1. Check stream status without blocking
            CUresult status = cuStreamQuery(Stream());
            if (status == CUDA_ERROR_NOT_READY) {
                // Kill the GPU kernel if the thread is terminating. This is a cooperative kill switch.
                if (WillTerminate())
                    m_CUDAModule.SetKillSwitch();

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
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
    } // ~CUDAThread
}; // class CUDAThread