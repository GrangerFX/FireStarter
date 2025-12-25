#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"

class CUDAThread : public SerialThread
{
private:
    CUDAContext* m_CUDAContext = nullptr;

public:
    inline CUDAContext* Context(void)
    {
        return m_CUDAContext;
    } // Context

    inline const CUstream Stream(void)
    {
        CUDAContext* context = Context();
        if (!context) {
            printf("Attempted to access a destroyed context!\n");
            std::terminate();
        }
        return context->Stream();
    } // Stream
  
    inline bool TerminateThread(void) final
    {
        return DispatchSync([this] {
            delete m_CUDAContext;
            m_CUDAContext = nullptr;
        }) && SerialThread::TerminateThread();
    } // TerminateThread

    // Note: int is used instead of bool for correct type matching.
    inline CUDAThread(const std::string& threadName = "CUDAThread", int device = CUDA_DEVICE, int priority = CUDA_PRIORITY) : SerialThread(threadName)
    {
        DispatchSync([this, device, priority] {
            m_CUDAContext = new CUDAContext(device, priority);
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        TerminateThread();
    } // ~CUDAThread
}; // class CUDAThread