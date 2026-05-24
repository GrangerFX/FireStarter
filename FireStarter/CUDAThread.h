#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"

class CUDAThread : public SerialThread
{
private:
    CUDAContext m_CUDAContext;

public:
    inline const CUDAContext& Context(void) const
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

    // Note: This must be called from this CUDAThread.
    inline void SynchronizeContext(void)
    {
        m_CUDAContext.Synchronize();
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
        DispatchAsync([this, deviceIndex, priority] {
            m_CUDAContext.InitContext(deviceIndex, priority);
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        TerminateThread();
    } // ~CUDAThread
}; // class CUDAThread