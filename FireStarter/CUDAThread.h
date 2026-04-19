#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"

class CUDAThread : public SerialThread
{
private:
    CUDAContext* m_CUDAContext = nullptr;
    int m_device = 0;

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
  
    inline void CUDASyncronize(void)
    {
        DispatchSync([this] {
            m_CUDAContext->Synchronize();
        });
    } // CUDASyncronize

    inline bool TerminateThread(void) final
    {
        // Atomic 'check and set' - ensures cleanup only happens once
        if (m_willTerminate.exchange(true))
            return false;

        // Ensure this runs on the worker thread to safely destroy CUDA resources
        DispatchSync([this] {
            if (m_CUDAContext) {
                delete m_CUDAContext;
                m_CUDAContext = nullptr;
            }
        });

        // Let the base class finish the job (joining the thread, etc.)
        return SerialThread::TerminateThread();
    } // TerminateThread

    // Note: int is used instead of bool for correct type matching.
    inline CUDAThread(const std::string& threadName = "CUDAThread", int device = CUDA_DEVICE, int priority = CUDA_PRIORITY) : SerialThread(threadName)
    {
        m_device = device;
        DispatchSync([this, device, priority] {
            m_CUDAContext = new CUDAContext(device, priority);
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        TerminateThread();
    } // ~CUDAThread
}; // class CUDAThread