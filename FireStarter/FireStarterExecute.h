#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "FireSinSim.h"
#include "CUDAThread.h"
#include "CUDACompile.h"
#include "MoneyMakerStocks.h"

class CUDADevice : public CUDAThread {
public:
    CUmodule m_executeModule = nullptr;
    CUfunction m_executeFunction = nullptr;
    CUfunction m_executeTest = nullptr;

    inline void Compile(const std::string& programCode, const std::string& programName, const std::string& functionName, const std::string& testName, bool sync = false)
    {
        Dispatch([this, &programCode, &programName, &functionName, &testName, sync] {
            // Compile the code and get the Evolver function from the module.
            if (CUDACompile::CompileProgram(m_executeModule, programCode, programName)) {
                m_executeFunction = CUDACompile::GetFunction(m_executeModule, functionName);
                if (!m_executeFunction) {
                    CUDACompile::ReleaseModule(m_executeModule);
                    m_executeFunction = nullptr;
                    m_executeTest = nullptr;
                } else
                    m_executeTest = CUDACompile::GetFunction(m_executeModule, testName);
            }
        }, sync);
    } // Compile

    inline void Clear(void)
    {
        DispatchSync([this] {
            CUDACompile::ReleaseModule(m_executeModule);
            m_executeFunction = nullptr;
            m_executeTest = nullptr;
        });
    } // Clear

    inline CUDADevice(const std::string& threadName = "CUDAThread", int device = CUDA_DEVICE, int priority = CUDA_PRIORITY) : CUDAThread(threadName, device, priority) {}
}; // class CUDADevice

typedef std::vector<CUDADevice*> CUDADevices;

template<typename T>
class CUDAMemory {
private:
    const CUDADevices* m_devices = nullptr;
    T* m_hostPtr = nullptr;
    std::vector<T*> m_devicePtrs;
    std::vector<size_t> m_splitStart;
    std::vector<size_t> m_splitCount;
    size_t m_size = 0;
    size_t m_count = 0;

public:
    bool Allocated(void) const
    {
        if (m_devices && m_hostPtr && m_devicePtrs.size() && m_size)
            return true;
        return false;
    } // Allocated

    inline size_t MemorySize(void) const
    {
        return m_size;
    } // MemorySize

    inline T* HostPtr(void) const
    {
        return m_hostPtr;
    } // HostPtr

    inline T*& HostPtr(void)
    {
        return m_hostPtr;
    } // HostPtr

    inline T* DevicePtr(size_t index = 0) const
    {
        if (m_devicePtrs.size() > index)
            return m_devicePtrs[index];
        else
            return nullptr;
    } // DevicePtr

    inline T*& DevicePtr(size_t index = 0)
    {
        return m_devicePtrs[index];
    } // DevicePtr

    inline size_t SplitStart(size_t index = 0) const
    {
        if (index < m_splitStart.size())
            return m_splitStart[index];
        return 0;
    } // SplitStart

    inline size_t SplitCount(size_t index = 0) const
    {
        if (index < m_splitCount.size())
            return m_splitCount[index];
        return 0;
    } // SplitCount

    inline void HostInit(const T* srcPtr, size_t size = 0, size_t offset = 0) const
    {
        if (m_hostPtr) {
            if (!size)
                size = m_size;
            else if (size > m_size)
                size = m_size;
            if (srcPtr) {
                char* hostPtr = (char*)m_hostPtr + offset;
                memcpy(hostPtr, srcPtr, size);
            }
        }
    } // HostInit

    inline void DeviceInit(const T* srcPtr, size_t index, size_t size = 0, size_t offset = 0) const
    {
        if (m_devicePtrs[index]) {
            if (!size)
                size = m_size;
            else if (size > m_size)
                size = m_size;
            char* devicePtr = (char*)m_devicePtrs[index] + offset;
            if (srcPtr)
                checkCUDAErrors(cudaMemcpyAsync(devicePtr, srcPtr, size, cudaMemcpyHostToDevice, (*m_devices)[index]->Stream()));
            else
                checkCUDAErrors(cudaMemsetAsync(devicePtr, 0, size, (*m_devices)[index]->Stream()));
        }
    } // DeviceInit

    inline void DevicesInit(const T* srcPtr, size_t size = 0) const
    {
        if (!size)
            size = m_size;
        else if (size > m_size)
            size = m_size;
        if (srcPtr) {
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                if (m_devicePtrs[i])
                    checkCUDAErrors(cudaMemcpyAsync(m_devicePtrs[i], srcPtr, size, cudaMemcpyHostToDevice, (*m_devices)[i]->Stream()));
        } else {
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                if (m_devicePtrs[i])
                    checkCUDAErrors(cudaMemsetAsync(m_devicePtrs[i], 0, size, (*m_devices)[i]->Stream()));
        }
    } // DevicesInit

    inline void HostToDevices(void) const
    {
        if (m_hostPtr)
            for (size_t i = 0; i < m_devicePtrs.size(); i++)
                if (m_devicePtrs[i])
                    checkCUDAErrors(cudaMemcpyAsync(m_devicePtrs[i], m_hostPtr, m_size, cudaMemcpyHostToDevice, (*m_devices)[i]->Stream()));
    } // HostToDevices

    inline void DeviceToHost(size_t index = 0) const
    {
        if (m_hostPtr && (index < m_devicePtrs.size()) && m_devicePtrs[index])
            checkCUDAErrors(cudaMemcpyAsync(m_hostPtr, m_devicePtrs[index], m_size, cudaMemcpyDeviceToHost, (*m_devices)[index]->Stream()));
    } // DeviceToHost

    inline void DevicesToHost(void) const
    {
        if (m_hostPtr) {
            size_t numDevices = m_devices->size();
            for (size_t i = 0; i < numDevices; i++) {
                if (m_devicePtrs[i] && m_splitCount[i]) {
                    size_t splitOffset = m_splitStart[i] * sizeof(T);
                    if (splitOffset < m_size) {
                        char* hostPtr = (char*)m_hostPtr + splitOffset;
                        char* devicePtr = (char*)m_devicePtrs[i] + splitOffset;
                        size_t size = m_splitCount[i] * sizeof(T);
                        checkCUDAErrors(cudaMemcpyAsync(hostPtr, devicePtr, size, cudaMemcpyDeviceToHost, (*m_devices)[i]->Stream()));
                    } else
                        break;
                }
            }
        }
    } // DevicesToHost

    inline void Clear(void)
    {
        for (size_t i = 0; i < m_devicePtrs.size(); i++)
            if (m_devicePtrs[i])
                checkCUDAErrors(cudaFreeAsync(m_devicePtrs[i], (*m_devices)[i]->Stream()));
         m_devicePtrs.clear();
        if (m_hostPtr) {
            checkCUDAErrors(cudaFreeHost(m_hostPtr));
            m_hostPtr = nullptr;
        }
    } // Clear

    inline void Init(const CUDADevices& devices, size_t size = sizeof(T))
    {
        size_t numDevices = devices.size();
        m_devices = &devices;
        m_size = size;
        m_count = size / sizeof(T);
        if (m_size && numDevices) {
            m_devicePtrs.resize(numDevices);
            m_splitStart.resize(numDevices);
            m_splitCount.resize(numDevices);
            checkCUDAErrors(cudaMallocHost(&m_hostPtr, m_size));
            for (size_t i = 0; i < numDevices; i++) {
                T* devicePtr = nullptr;
                checkCUDAErrors(cudaMallocAsync(&devicePtr, m_size, (*m_devices)[i]->Stream()));
                m_devicePtrs[i] = devicePtr;
                m_splitStart[i] = 0;
                m_splitCount[i] = m_count;
            }
        } else {
            m_devicePtrs.clear();
            m_splitStart.clear();
            m_splitCount.clear();
        }
    } // Init

    inline void Split(const CUDADevices& devices, size_t size = sizeof(T))
    {
        size_t numDevices = devices.size();
        Init(devices, size);
        if (m_size && numDevices) {
            size_t splitStart = 0;
            size_t splitCount = (m_count + numDevices - 1) / numDevices;
            for (size_t i = 0; i < numDevices; i++) {
                size_t splitEnd = MIN(splitStart + splitCount, m_count);
                m_splitStart[i] = splitStart;
                m_splitCount[i] = splitEnd - splitStart;
                splitStart = splitEnd;
            }
        }
    } // Split

    inline CUDAMemory(void)
    {
    } // CUDAMemory

    inline ~CUDAMemory(void)
    {
        Clear();
    } // ~CUDAMemory
};

class FireStarterExecute : public SerialThread {
private:
    CUDADevices m_CUDADevices;
    CUDAMemory<FireStarterSettings> m_CUDASettings;
    CUDAMemory<float> m_CUDAResults;
    CUDAMemory<FireStarterCode> m_CUDACodes0;
    CUDAMemory<FireStarterCode> m_CUDACodes1;
    CUDAMemory<FireStarterResult> m_CUDAPopulation0;
    CUDAMemory<FireStarterResult> m_CUDAPopulation1;
    CUDAMemory<FireStarterCode> m_CUDAParentCode;
    CUDAMemory<SinSimNetwork> m_CUDANetworks;
    CUDAMemory<FireStarterData> m_CUDATradingData;
    CUDAMemory<MoneyMakerStocks> m_CUDAStocks;
    CUDAMemory<MoneyMakerStocks> m_CUDATradingResults;
    FireStarterGenerate* m_executeGenerate = nullptr;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
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
        if (index < m_numDevices)
            return m_CUDADevices[index]->Context();
        return nullptr;
    } // Context

    inline const CUstream Stream(size_t index = 0) const
    {
        const CUDAContext* context = Context(index);
        if (context)
            return context->Stream();
        return nullptr;
    } // Stream

    void SyncCUDAThreads(void);
    void ClearCUDAThreads(void);
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
