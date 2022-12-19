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

    inline CUDAThread(size_t device = 0, bool pollThread = false) : SerialThread(pollThread)
    {
        DispatchSync([this, device] {
            m_CUDAContext = new CUDAContext(device);
        });
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        DispatchSync([this] {
            delete m_CUDAContext;
            m_CUDAContext = nullptr;
        });
    } // ~CUDAThread
}; // class CUDAThread