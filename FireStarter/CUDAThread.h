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

    // Note: int is used instead of bool for correct type matching.
    inline CUDAThread(const std::string& threadName = "CUDAThread", int device = 0, int pollThread = false) : SerialThread(threadName, pollThread)
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