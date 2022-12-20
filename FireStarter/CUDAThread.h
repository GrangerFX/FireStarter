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

    inline bool TerminateThread(void) final
    {
        return DispatchSync([this] {
            delete m_CUDAContext;
            m_CUDAContext = nullptr;
        }) && SerialThread::TerminateThread();
    } // TerminateThread

    inline CUDAThread(size_t device = 0, bool pollThread = false) : SerialThread(pollThread)
    {
        DispatchSync([this, device] {
            m_CUDAContext = new CUDAContext(device);
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        TerminateThread();
    } // ~CUDAThread
}; // class CUDAThread