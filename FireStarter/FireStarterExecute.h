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

    inline CUDADevice(const std::string& threadName = "CUDAThread", size_t deviceIndex = CUDA_DEVICE, int priority = CUDA_PRIORITY) : CUDAThread(threadName, deviceIndex, priority) {}
}; // class CUDADevice

typedef std::vector<CUDADevice*> CUDADevices;

template<typename T>
class CUDAMemory {
private:
    const CUDADevices* m_devices = nullptr;
    T* m_hostPtr = nullptr;
    std::vector<T*> m_devicePtrs;
    std::vector<size_t> m_splitOffset;
    std::vector<size_t> m_splitSize;
    size_t m_elementSize = 0;
    size_t m_hostElements = 0;
    size_t m_hostSize = 0;
    size_t m_deviceElements = 0;
    size_t m_deviceSize = 0;

public:
    bool Allocated(void) const
    {
        if (m_devices && m_hostPtr && m_devicePtrs.size() && m_hostSize && m_deviceSize)
            return true;
        return false;
    } // Allocated

    inline size_t HostSize(void) const
    {
        return m_hostSize;
    } // HostSize

    inline size_t DeviceSize(void) const
    {
        return m_deviceSize;
    } // DeviceSize

    inline size_t HostElements(void) const
    {
        return m_hostElements;
    } // HostSize

    inline size_t DeviceElements(void) const
    {
        return m_deviceElements;
    } // DeviceElements

    inline T* HostPtr(void) const
    {
        return m_hostPtr;
    } // HostPtr

    inline T*& HostPtr(void)
    {
        return m_hostPtr;
    } // HostPtr

    inline T* DevicePtr(size_t i = 0) const
    {
        if (i < m_devicePtrs.size())
            return m_devicePtrs[i];
        else
            return nullptr;
    } // DevicePtr

    inline T*& DevicePtr(size_t i = 0)
    {
        return m_devicePtrs[i];
    } // DevicePtr

    inline size_t SplitOffset(size_t i = 0) const
    {
        if (i < m_splitOffset.size())
            return m_splitOffset[i];
        return 0;
    } // SplitStart

    inline size_t SplitStart(size_t i = 0) const
    {
        if (i < m_splitOffset.size())
            return m_splitOffset[i] / m_elementSize;
        return 0;
    } // SplitStart

    inline size_t SplitSize(size_t i = 0) const
    {
        if (i < m_splitSize.size())
            return m_splitSize[i];
        return 0;
    } // SplitSize

    inline size_t SplitCount(size_t i = 0) const
    {
        if (i < m_splitSize.size())
            return m_splitSize[i] / m_elementSize;
        return 0;
    } // SplitCount

    inline void SyncDevices(void) const
    {
        size_t numDevices = m_devices->size();
        for (size_t i = 0; i < numDevices; i++)
            (*m_devices)[i]->CUDASyncronize(); // Synchronizes both the thread and the CUDA context.
    } // SyncDevices

    inline void HostInit(const T* srcPtr, size_t size = 0, size_t offset = 0) const
    {
        if (m_hostPtr) {
            offset = MIN(offset, m_hostSize);
            if (!size)
                size = m_hostSize;
            else if (size + offset > m_hostSize)
                size = m_hostSize - offset;
            if (size) {
                char* hostPtr = (char*)m_hostPtr + offset;
                if (srcPtr)
                    memcpy(hostPtr, srcPtr, size);
                else
                    memset(hostPtr, 0, size);
            }
        }
    } // HostInit

    inline void DeviceInit(const T* srcPtr, size_t i, size_t size = 0, size_t offset = 0) const
    {
        if (m_devicePtrs[i]) {
            if (!size)
                size = m_deviceSize;
            else if (size > m_deviceSize)
                size = m_deviceSize;
            char* devicePtr = (char*)m_devicePtrs[i] + offset;
            CUDADevice* device = (*m_devices)[i];
            device->DispatchAsync([device, srcPtr, devicePtr, size] {
                if (srcPtr)
                    checkCUDAErrors(cudaMemcpyAsync(devicePtr, srcPtr, size, cudaMemcpyHostToDevice, device->Stream()));
                else
                    checkCUDAErrors(cudaMemsetAsync(devicePtr, 0, size, device->Stream()));
            });
        }
    } // DeviceInit

    inline void DevicesInit(const T* srcPtr, size_t size = 0, size_t offset = 0) const
    {
        size_t numDevices = m_devices->size();
        for (size_t i = 0; i < numDevices; i++)
            DeviceInit(srcPtr, i, size, offset);
    } // DevicesInit

    inline void HostToDevice(size_t i = 0, bool sync = false) const
    {
        if (m_hostPtr && (i < m_devicePtrs.size()) && m_devicePtrs[i]) {
            CUDADevice* device = (*m_devices)[i];
            char* hostPtr = (char*)m_hostPtr;
            char* devicePtr = (char*)m_devicePtrs[i];
            size_t size = m_hostSize;

            if (m_deviceSize != m_hostSize) {
                hostPtr += m_splitOffset[i];
                size = m_splitSize[i];
            }
            device->DispatchAsync([device, hostPtr, devicePtr, size] {
                checkCUDAErrors(cudaMemcpyAsync(devicePtr, hostPtr, size, cudaMemcpyHostToDevice, device->Stream()));
            });
            if (sync)
                device->CUDASyncronize();
        }
    } // HostToDevice

    inline void HostToDevices(bool sync = false) const
    {
        if (m_hostPtr) {
            size_t numDevices = m_devices->size();
            for (size_t i = 0; i < numDevices; i++)
                HostToDevice(i, sync);
        }
    } // HostToDevices

    inline void DeviceToHost(size_t i = 0, bool sync = false) const
    {
        if (m_hostPtr && (i < m_devicePtrs.size()) && m_devicePtrs[i]) {
            CUDADevice* device = (*m_devices)[i];
            size_t size = m_splitSize[i];
            size_t splitOffset = m_splitOffset[i];
            char* hostPtr = (char*)m_hostPtr + splitOffset;
            char* devicePtr = (char*)m_devicePtrs[i];

            if (m_deviceSize == m_hostSize)
                devicePtr += splitOffset;

            device->DispatchAsync([device, hostPtr, devicePtr, size] {
                checkCUDAErrors(cudaMemcpyAsync(hostPtr, devicePtr, size, cudaMemcpyDeviceToHost, device->Stream()));
            });
            if (sync)
                device->CUDASyncronize();
        }
    } // DeviceToHost

    inline void DevicesToHost(bool sync = false) const
    {
        if (m_hostPtr) {
            size_t numDevices = m_devices->size();
            for (size_t i = 0; i < numDevices; i++)
                DeviceToHost(i, false);
        }
        if (sync)
            SyncDevices();
    } // DevicesToHost

    inline void Clear(void)
    {
        size_t numDevices = m_devicePtrs.size();
        for (size_t i = 0; i < numDevices; i++)
            if (m_devicePtrs[i]) {
                CUDADevice* device = (*m_devices)[i];
                void* devicePtr = m_devicePtrs[i];
                (*m_devices)[i]->DispatchSync([device, devicePtr] {
                    checkCUDAErrors(cudaFree(devicePtr));
                });
            }
        if (m_hostPtr) {
            checkCUDAErrors(cudaFreeHost(m_hostPtr));
            m_hostPtr = nullptr;
        }
        m_devicePtrs.clear();
        m_splitOffset.clear();
        m_splitSize.clear();
        m_hostSize = 0;
        m_deviceSize = 0;
        m_hostElements = 0;
        m_deviceElements = 0;
    } // Clear

    inline void Init(const CUDADevices& devices, size_t size, size_t elements = 1, bool split = false)
    {
        // Note: sizeof(T) cannot be relied upon because some structure sizes are dynamic.
        Clear();
        size_t numDevices = devices.size();
        m_devices = &devices;
        m_hostSize = size;
        m_hostElements = elements;
        m_elementSize = m_hostSize / m_hostElements;
        if (m_hostSize && numDevices) {
            m_devicePtrs.resize(numDevices, 0);
            m_splitOffset.resize(numDevices, 0);
            m_splitSize.resize(numDevices, 0);
            size_t splitElements = (elements + numDevices - 1) / numDevices;
            size_t spitSize = splitElements * m_elementSize;
            size_t splitOffset = 0;
            size_t deviceSize = split ? spitSize : m_hostSize;
            m_deviceSize = deviceSize;
            m_deviceElements = elements;

            // Allocate the host memory.
            (*m_devices)[0]->DispatchAsync([this] {
                checkCUDAErrors(cudaMallocHost(&m_hostPtr, m_hostSize, cudaHostAllocPortable));
            });

            // Allocate device memory for each device and generate the split start and count for each device.
            for (size_t i = 0; i < numDevices; i++) {
                CUDADevice* device = (*m_devices)[i];
                T** devicePtr = &m_devicePtrs[i];
                (*m_devices)[i]->DispatchAsync([device, deviceSize, devicePtr] {
                    checkCUDAErrors(cudaMallocAsync(devicePtr, deviceSize, device->Stream()));
                    checkCUDAErrors(cudaMemsetAsync(*devicePtr, 0, deviceSize, device->Stream()));
                });

                // Generate the split start and count for each device.
                size_t splitEnd = MIN(splitOffset + spitSize, m_hostSize);
                m_splitOffset[i] = splitOffset;
                m_splitSize[i] = splitEnd - splitOffset;
                splitOffset = splitEnd;
            }
            SyncDevices();
        }
    } // Init

    inline CUDAMemory(void)
    {
    } // CUDAMemory

    inline ~CUDAMemory(void)
    {
        Clear();
    } // ~CUDAMemory
}; // class CUDAMemory

class FireStarterExecute : public CUDAThread {
private:
    CUDADevices m_CUDADevices;
    CUDAMemory<FireStarterSettings> m_CUDASettings;
    CUDAMemory<float> m_CUDAResults;
    CUDAMemory<FireStarterCode> m_CUDACodes;
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

    inline CUDADevice* Device(size_t index = 0)
    {
        if (index < m_CUDADevices.size())
            return m_CUDADevices[index];
        else
            return nullptr;
    } // Device

    inline const CUDAContext& Context(size_t index = 0) const
    {
        return m_CUDADevices[index]->Context();
    } // Context

    inline const CUstream Stream(size_t index = 0) const
    {
        return m_CUDADevices[index]->Stream();
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
    FireStarterExecute(FireStarterManager* manager, size_t devices = 0, size_t index = 0, int priority = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute
