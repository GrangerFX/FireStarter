#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "FireSinSim.h"
#include "CUDAThread.h"
#include "MoneyMakerStocks.h"

typedef std::vector<CUDAThread*> CUDAThreads;

template<typename T>
class CUDAMemory {
private:
    CUDAThreads& m_threads;
    std::vector<T*> m_devicePtrs;
    T* m_hostPtr = nullptr;
    size_t m_size = 0;

public:
    inline size_t MemorySize(void) const
    {
        return m_size;
    } // MemorySize

    inline T*& HostPtr(void)
    {
        return m_hostPtr;
    } // HostPtr

    inline T*& DevicePtr(size_t index = 0)
    {
        return m_devicePtrs[index];
    } // DevicePtr

    inline void HostInit(const T* srcPtr, size_t size = 0, size_t offset = 0) const
    {
        if (!size)
            size = m_size;
        else if (size > m_size)
            size = m_size;
        if (srcPtr) {
            char* hostPtr = (char*)m_hostPtr + offset;
            memcpy(hostPtr, srcPtr, size);
        }
    } // HostInit

    inline void DeviceInit(const T* srcPtr, size_t index, size_t size = 0, size_t offset = 0) const
    {
        if (!size)
            size = m_size;
        else if (size > m_size)
            size = m_size;
        char* devicePtr = (char*)m_devicePtrs[index] + offset;
        if (srcPtr)
            checkCUDAErrors(cudaMemcpyAsync(devicePtr, srcPtr, size, cudaMemcpyHostToDevice, m_threads[index]->Stream()));
        else
            checkCUDAErrors(cudaMemsetAsync(devicePtr, 0, size, m_threads[index]->Stream()));
    } // DeviceInit

    inline void DevicesInit(const T* srcPtr, size_t size = 0) const
    {
        if (!size)
            size = m_size;
        else if (size > m_size)
            size = m_size;
        if (srcPtr)
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                checkCUDAErrors(cudaMemcpyAsync(m_devicePtrs[i], srcPtr, size, cudaMemcpyHostToDevice, m_threads[i]->Stream()));
        else
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                checkCUDAErrors(cudaMemsetAsync(m_devicePtrs[i], 0, size, m_threads[i]->Stream()));
    } // DevicesInit

    inline void HostToDevices(void) const
    {
        for (size_t i = 0; i < m_devicePtrs.size(); i++)
            checkCUDAErrors(cudaMemcpyAsync(m_devicePtrs[i], m_hostPtr, m_size, cudaMemcpyHostToDevice, m_threads[i]->Stream()));
    } // HostToDevices

    inline void DevicesToHost(size_t deviceSize) const
    {
        for (size_t i = 0; i < m_devicePtrs.size(); i++) {
            size_t offset = i * deviceSize;
            if (offset < m_size) {
                size_t size = offset + deviceSize <= m_size ? deviceSize : m_size - offset;
                char* hostPtr = (char*)m_hostPtr + offset;
                char* dstPtr = (char*)m_devicePtrs[i] + offset;
                checkCUDAErrors(cudaMemcpyAsync(hostPtr, m_devicePtrs[i], size, cudaMemcpyDeviceToHost, m_threads[i]->Stream()));
            } else
                break;
        }
    } // DevicesToHost

    inline void DeviceToHost(size_t index = 0) const
    {
        if (index < m_devicePtrs.size())
            checkCUDAErrors(cudaMemcpyAsync(m_hostPtr, m_devicePtrs[index], m_size, cudaMemcpyDeviceToHost, m_threads[index]->Stream()));
    } // DeviceToHost

    inline CUDAMemory(CUDAThreads& threads, size_t size = sizeof(T)) : m_threads(threads), m_size(size)
    {
        if (m_size) {
             for (size_t i = 0; i < m_threads.size(); i++) {
                T* devicePtr = nullptr;
                checkCUDAErrors(cudaMallocAsync(&devicePtr, m_size, m_threads[i]->Stream()));
                m_devicePtrs.push_back(devicePtr);
            }
            checkCUDAErrors(cudaMallocHost(&m_hostPtr, m_size));
        }
    } // CUDAMemory

    inline ~CUDAMemory(void)
    {
        if (m_threads.size())
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                if (m_devicePtrs[i])
                    checkCUDAErrors(cudaFreeAsync(m_devicePtrs[i], m_threads[i]->Stream()));
        else
            if ((m_devicePtrs.size() == 1) && m_devicePtrs[0])
                checkCUDAErrors(cudaFreeHost(m_devicePtrs[0]));
        if (m_hostPtr)
            checkCUDAErrors(cudaFreeHost(m_hostPtr));
    } // ~CUDAMemory
};

class FireStarterExecute : public CUDAThread {
private:
    CUDAThreads m_CUDAThreads;
    CUDAMemory<FireStarterSettings>* m_CUDASettings = nullptr;
    CUDAMemory<float>* m_CUDAResults = nullptr;
    CUDAMemory<FireStarterCode>* m_CUDACodes0 = nullptr;
    CUDAMemory<FireStarterCode>* m_CUDACodes1 = nullptr;
    CUDAMemory<FireStarterResult>* m_CUDAPopulation0 = nullptr;
    CUDAMemory<FireStarterResult>* m_CUDAPopulation1 = nullptr;
    CUDAMemory<FireStarterCode>* m_CUDAParentCode = nullptr;
    CUDAMemory<SinSimNetwork>* m_CUDANetworks = nullptr;
    CUDAMemory<FireStarterData>* m_CUDATradingData = nullptr;
    CUDAMemory<MoneyMakerStocks>* m_CUDAStocks = nullptr;
    CUDAMemory<MoneyMakerStocks>* m_CUDATradingResults = nullptr;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    SerialThread m_compilerThread;
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    CUfunction m_executeTest = nullptr;
    std::string m_executeProgramName;
    std::string m_executeFunctionName;
    std::string m_executeTestName;
    std::string m_executeCode;
    size_t m_numDevices = 0;
    size_t m_settingsSize = 0;
    size_t m_resultsSize = 0;
    size_t m_populationSize = 0;
    size_t m_networksSize = 0;
    size_t m_stocksSize = 0;
    size_t m_tradingDataSize = 0;
    size_t m_codesSize = 0;
    size_t m_parentCodeSize = 0;
    size_t m_executeIndex = 0;
    bool m_simulateGPU = false;

    inline const CUDAContext* Context(size_t index = 0) const
    {
        if (m_CUDAThreads.size() >= index)
            return m_CUDAThreads[index]->Context();
        return nullptr;
    } // Context

    inline const CUstream Stream(size_t index = 0) const
    {
        const CUDAContext* context = Context(index);
        if (context)
            context->Stream();
        return nullptr;
    } // Stream

    void CUDASyncThreads(void);
    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void FinishStocks(void);
    bool InitStocks(const MoneyMakerStocks* stocks);
    void ExecuteSelectPass(FireStarterState& state, const FireStarterSettings& selectSettings);
    void ExecuteEvolveGPUPass(FireStarterState& state);
    void ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteSinSimPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteMoneyEvolvePass(FireStarterState& state);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePasses(FireStarterState& state);
    void ExecuteSmartOptimizePasses(FireStarterState& state);
    void ExecuteMoneyOptimizePass(FireStarterState& state);
    void ExecuteMoneyTestPass(FireStarterState& state, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays);
    bool GenerateEvolve(unsigned int mode);
    bool GenerateOptimize(FireStarterState& state);
    bool Compile(FireStarterJob* &job);
    bool ExecuteJob(void);

public:
    void ExecuteSetStocks(const MoneyMakerStocks *stocks);
    bool ExecuteGenerateEvolve(unsigned int mode, bool sync = true);
    bool ExecuteGenerateOptimize(FireStarterState& optimizeState, bool sync = true);
    void ExecuteSelect(FireStarterState& selectState, const FireStarterSettings& selectSettings);
    void ExecuteEvolveGPU(FireStarterState& evolveState);
    void ExecuteEvolveNew(FireStarterState& evolveState);
    void ExecuteEvolveSinSim(FireStarterState& evolveState);
    void ExecuteSinSim(FireStarterState& evolveState);
    void ExecuteMoneyEvolve(FireStarterState& evolveState);
    void ExecuteEvolveOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete);
    void ExecuteMoneyOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete);
    void ExecuteOptimize(FireStarterState& optimizeState);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    MoneyMakerStocks* ExecuteMoneyTest(FireStarterState& testState, unsigned int startDay = MONEYMAKER_VARIATION, unsigned int tradingDays = MONEYMAKER_TRADING, unsigned int validationDays = MONEYMAKER_VALIDATION);
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    void SimulateGPU(bool simulateGPU);
    const MoneyMakerStocks* GetTradingResults(void) const;
    FireStarterExecute(FireStarterManager* manager, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
