#pragma once
#include "SerialThread.h"
#include "CUDAContext.h"
#include "CUDAModule.h"

class CUDAThread;

class CUDAThreads : public SerialThread
{
private:
    std::vector<CUDAThread*> m_CUDAThreads;
public:
    inline void AddCUDAThread(class CUDAThread& cudaThread)
    {
        DispatchSync([this, &cudaThread] {
            if (std::find(m_CUDAThreads.begin(), m_CUDAThreads.end(), &cudaThread) == m_CUDAThreads.end())
                m_CUDAThreads.push_back(&cudaThread);
        });
    } // AddCUDAThread

    inline void RemoveCUDAThread(class CUDAThread& cudaThread)
    {
        DispatchSync([this, &cudaThread] {
            m_CUDAThreads.erase(std::remove(m_CUDAThreads.begin(), m_CUDAThreads.end(), &cudaThread), m_CUDAThreads.end());
        });
    } // RemoveCUDAThread

    inline void KillCUDAThreads(void);

    inline CUDAThreads(const std::string threadName = "CUDAThreads") : SerialThread(threadName) {}

    inline ~CUDAThreads(void)
    {
        DispatchSync([this] {
            m_CUDAThreads.clear();
        });
    } // ~CUDAThreads
}; // CUDAThreads

inline CUDAThreads s_CUDAThreads;

class CUDAThread : public SerialThread
{
private:
    CUDAContext m_CUDAContext;
    CUDAModule m_CUDAModule;

protected:
    // Note: These methods must be called from this CUDAThread.

    inline void SetContext(void) const
    {
        m_CUDAContext.SetContext();
    } // SetContext

    inline void SynchronizeContext(void)
    {
        m_CUDAContext.SynchronizeContext();
    } // SynchronizeContext

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

public:

    inline void KillThread(void)
    {
        m_CUDAModule.SetKillSwitch(); // Signal GPU kernel to terminate
        DispatchSync([this] {
            // Just in case this gets called more than once.
            m_CUDAModule.SetKillSwitch();
            SynchronizeContext(); // Wait for GPU to acknowledge
        });
    } // KillThread

    inline bool TerminateThread(void) override
    {
        KillThread();
        return SerialThread::TerminateThread();
    } // TerminateThread

    inline static void KillThreads(void)
    {
        s_CUDAThreads.KillCUDAThreads();
    } // KillThreads

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

    inline CUDAThread(const std::string threadName = "", size_t deviceIndex = CUDA_DEVICE, int priority = CUDA_PRIORITY) : SerialThread(threadName), m_CUDAContext()
    {
        if (threadName.empty())
            m_threadName = "CUDAThread";
        DispatchSync([this, deviceIndex, priority] {
            m_CUDAContext.InitContext(deviceIndex, priority);
            });
        s_CUDAThreads.AddCUDAThread(*this);
    } // CUDAThread

    inline ~CUDAThread(void)
    {
        s_CUDAThreads.RemoveCUDAThread(*this);
    } // ~CUDAThread
}; // class CUDAThread

inline void CUDAThreads::KillCUDAThreads(void)
{
    DispatchSync([this] {
        for (CUDAThread* cudaThread : m_CUDAThreads) {
            if (cudaThread)
                cudaThread->KillThread();
        }
        m_CUDAThreads.clear();
    });
} // KillCUDAThreads
