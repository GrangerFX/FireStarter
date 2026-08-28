#pragma once
#include "FireStarterGenerate.h"
#include "FireStarterComplete.h"
#include "FireStarterManager.h"
#include "FireSinSim.h"
#include "CUDAThread.h"
#include "MoneyMakerStocks.h"

template<typename T>
class CUDAMemory {
private:
    const CUDAContext* m_context = nullptr;
    T* m_hostPtr = nullptr;
    CUdeviceptr m_devicePtr = 0;
    size_t m_size = 0;
    size_t m_count = 0;
    size_t m_elementSize = 0;

public:
    inline void Clear(void)
    {
        if (m_hostPtr) {
            checkCUDAErrors(cuMemFreeHost(m_hostPtr));
            m_hostPtr = nullptr;
        }
        if (m_devicePtr) {
            checkCUDAErrors(cuMemFree(m_devicePtr));
            m_devicePtr = 0;
        }
        m_size = 0;
    } // Clear

    inline void Init(const CUDAContext& context, size_t size = 0, size_t count = 1)
    {
        // Note: sizeof(T) cannot be relied upon because some structure sizes are dynamic.
        Clear();
        m_context = &context;
        m_size = size;
        if (m_size) {
            m_count = count;
            m_elementSize = m_size / m_count;

            // Allocate the host memory.
            checkCUDAErrors(cuMemHostAlloc((void**)&m_hostPtr, m_size, 0));
            memset(m_hostPtr, 0, m_size);

            // Allocate device memory for each device and generate the split start and count for each device.
            checkCUDAErrors(cuMemAllocAsync(&m_devicePtr, m_size, m_context->Stream()));
            checkCUDAErrors(cuMemsetD8Async(m_devicePtr, 0, m_size, m_context->Stream()));
            m_context->SynchronizeContext();
        } else
            m_count = 0;
    } // Init

    bool Allocated(void) const
    {
        if (m_hostPtr && m_devicePtr)
            return true;
        return false;
    } // Allocated

    inline size_t Size(void) const
    {
        return m_size;
    } // Size

    inline T*& HostPtr(void)
    {
        return m_hostPtr;
    } // HostPtr

    inline T* HostPtr(void) const
    {
        return m_hostPtr;
    } // HostPtr

    inline CUdeviceptr& DevicePtr(void)
    {
        return m_devicePtr;
    } // DevicePtr

    inline CUdeviceptr DevicePtr(void) const
    {
        return m_devicePtr;
    } // DevicePtr

    inline bool Copy(const T* srcPtr, size_t size, bool sync = false) const
    {
        if (Allocated() && (size == m_size)) {
            if (size == m_size) {
                if (srcPtr) {
                    memcpy(m_hostPtr, srcPtr, size);
                    checkCUDAErrors(cuMemcpyHtoDAsync(m_devicePtr, srcPtr, size, m_context->Stream()));
                } else {
                    memset(m_hostPtr, 0, size);
                    checkCUDAErrors(cuMemsetD8Async(m_devicePtr, 0, size, m_context->Stream()));
                }
                if (sync)
                    m_context->SynchronizeContext();
            }
            return true;
        }
        printf("CUDAMemory::Copy: Size mismatch! size = %zu, m_size = %zu\r\n", size, m_size);
        return false;
    } // Copy

    inline void HostToDevice(bool sync = false) const
    {
        if (m_hostPtr && m_devicePtr) {
            checkCUDAErrors(cuMemcpyHtoDAsync(m_devicePtr, m_hostPtr, m_size, m_context->Stream()));
            if (sync)
                m_context->SynchronizeContext();
        }
    } // HostToDevice

    inline void DeviceToHost(bool sync = false) const
    {
        if (m_hostPtr && m_devicePtr) {
            checkCUDAErrors(cuMemcpyDtoHAsync(m_hostPtr, m_devicePtr, m_size, m_context->Stream()));
            if (sync)
                m_context->SynchronizeContext();
        }
    } // DeviceToHost

    inline CUDAMemory(void)
    {
    } // CUDAMemory

    inline ~CUDAMemory(void)
    {
        Clear();
    } // ~CUDAMemory
}; // class CUDAMemory

class FireStarterExecute : public CUDAThread
{
private:
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
    FireStarterGenerate m_executeGenerate;
    FireStarterManager* m_executeManager = nullptr;
    FireStarterJob* m_executeJob = nullptr;
    std::string m_executeProgramName;
    std::string m_executeFunctionName;
    std::string m_executeTestName;
    std::string m_executeCode;
    size_t m_settingsSize = 0;
    size_t m_resultsSize = 0;
    size_t m_populationSize = 0;
    size_t m_networksSize = 0;
    size_t m_stocksSize = 0;
    size_t m_tradingDataSize = 0;
    size_t m_codesSize = 0;
    size_t m_parentCodeSize = 0;
    size_t m_executeIndex = 0;
    bool m_simulateGPU = FIRESTARTER_SIMULATE_GPU;

    void FinishPopulation(void);
    bool InitPopulation(const FireStarterSettings& settings);
    void FinishStocks(void);
    bool InitStocks(const MoneyMakerStocks* stocks);
    void ExecuteSelectPass(FireStarterState& state, const FireStarterSettings& selectSettings);
    void ExecuteEvolveGPUPass(FireStarterState& state, FireStarterBestCodes& bestCodes);
    void ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteEvolveSinSimPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteSinSimPass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteMoneyEvolvePass(FireStarterState& state, FireStarterBestCodes& bestCodes);
    void ExecuteOptimizePass(FireStarterState& state, unsigned int variation = 0);
    void ExecuteOptimizePasses(FireStarterState& state);
    void ExecuteSmartOptimizePasses(FireStarterState& state);
    void ExecuteMoneyOptimizePass(FireStarterState& state);
    void ExecuteMoneyTestPass(FireStarterState& state, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays);
    bool GenerateEvolve(unsigned int mode);
    bool GenerateOptimize(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& evaluateCode, unsigned int mode);
    bool Compile(FireStarterJob* &job);
    void GenerateCode(FireStarterJob* job);
    bool ExecuteJob(void);

public:
    inline size_t ExecuteIndex(void) const { return m_executeIndex; }
    bool ExecuteRandomState(const FireStarterState& state, bool sync = true);
    bool ExecuteSelectStates(unsigned long long test, const FireStarterSettings& selectSettings, const FireStarterSettings& optimizeSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation);
    bool EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation);
    void ExecuteSetStocks(const MoneyMakerStocks *stocks, bool sync = true);
    bool ExecuteGenerateEvolve(unsigned int mode, bool sync = true);
    bool ExecuteGenerateOptimize(FireStarterState& optimizeState, bool sync = true);
    void ExecuteSelect(FireStarterState& selectState, const FireStarterSettings& selectSettings);
    void ExecuteEvolveGPU(FireStarterState& evolveState, FireStarterBestCodes& bestCodes, bool sync = true);
    void ExecuteEvolveNew(FireStarterState& evolveState);
    void ExecuteEvolveSinSim(FireStarterState& evolveState);
    void ExecuteSinSim(FireStarterState& evolveState);
    void ExecuteMoneyEvolve(FireStarterState& evolveState, FireStarterBestCodes& bestCodes, bool sync = true);
    void ExecuteEvolveOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete, bool sync = true);
    void ExecuteMoneyOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete, bool sync = true);
    void ExecuteOptimize(FireStarterState& optimizeState);
    void ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount); // Must be async because the compiles come back out of order.
    MoneyMakerStocks* ExecuteMoneyTest(FireStarterState& testState, unsigned int startDay = MONEYMAKER_VARIATION, unsigned int tradingDays = MONEYMAKER_TRADING, unsigned int validationDays = MONEYMAKER_VALIDATION);
    void ExecuteRandom(void);
    void ExecuteFinish(void);
    void SimulateGPU(bool simulateGPU);
    const MoneyMakerStocks* GetTradingResults(void) const;
    FireStarterExecute(FireStarterManager* manager, const std::string& unitName = "FireStarterExecute", size_t index = 0);
    FireStarterExecute(const std::string& unitName = "FireStarterExecute", size_t index = 0);
    ~FireStarterExecute(void);
}; // class FireStarterExecute

class FireStarterUnits : public std::vector<FireStarterExecute*>
{
public:
    void ExecuteSynchronize(void)
    {
        for (FireStarterExecute* unit : *this)
            unit->Synchronize();
    } // Synchronize

    void ExecuteSetStocks(const MoneyMakerStocks* stocks)
    {
        for (FireStarterExecute* unit : *this)
            unit->ExecuteSetStocks(stocks, false);
        ExecuteSynchronize();
    } // ExecuteSetStocks

    void ExecuteGenerateEvolve(unsigned int mode)
    {
        for (FireStarterExecute* unit : *this)
            unit->ExecuteGenerateEvolve(mode, false);
        ExecuteSynchronize();
    } // ExecuteGenerateEvolve

    void ExecuteGenerateOptimize(FireStarterStates& optimizeStates)
    {
        size_t numStates = optimizeStates.size();
        size_t numUnits = this->size();
        for (size_t index = 0; index < numStates; index++) {
            FireStarterExecute* unit = (*this)[index % numUnits];
            unit->ExecuteGenerateOptimize(optimizeStates[index], false);
        }
        ExecuteSynchronize();
    } // ExecuteGenerateOptimize

    void ExecuteEvolve(FireStarterStates& evolveStates, FireStarterBestCodes& bestCodes)
    {
        size_t numStates = evolveStates.size();
        size_t numUnits = this->size();
        for (size_t index = 0; index < numStates; index++) {
            FireStarterExecute* unit = (*this)[index % numUnits];
            unit->ExecuteEvolveGPU(evolveStates[index], bestCodes, false);
        }
        ExecuteSynchronize();
    } // ExecuteEvolve

    void ExecuteMoneyEvolve(FireStarterStates& evolveStates, FireStarterBestCodes& bestCodes)
    {
        size_t numStates = evolveStates.size();
        size_t numUnits = this->size();
        for (size_t index = 0; index < numStates; index++) {
            FireStarterExecute* unit = (*this)[index % numUnits];
            unit->ExecuteMoneyEvolve(evolveStates[index], bestCodes, false);
        }
        ExecuteSynchronize();
    } // ExecuteMoneyEvolve

    void ExecuteMoneyOptimize(FireStarterStates& optimizeStates, FireStarterState& bestState, FireStarterComplete* complete)
    {
        size_t numStates = optimizeStates.size();
        size_t numUnits = this->size();
        for (size_t index = 0; index < numStates; index++) {
            FireStarterExecute* unit = (*this)[index % numUnits];
            unit->ExecuteGenerateOptimize(optimizeStates[index], false);
            unit->ExecuteMoneyOptimize(optimizeStates[index], bestState, complete, false);
        }
        ExecuteSynchronize();
    } // ExecuteMoneyOptimize

    FireStarterUnits(FireStarterManager* manager, size_t numUnits = 1, const std::string& unitName = "FireStarterUnit")
    {
        reserve(numUnits);
        for (size_t i = 0; i < numUnits; i++)
            push_back(new FireStarterExecute(manager, unitName, i));
    } // FireStarterUnits

    FireStarterUnits(size_t numUnits = 1, const std::string& unitName = "FireStarterUnit")
    {
        reserve(numUnits);
        for (size_t i = 0; i < numUnits; i++)
            push_back(new FireStarterExecute(unitName, i));
    } // FireStarterUnits

    ~FireStarterUnits(void)
    {
        for (FireStarterExecute* unit : *this)
            delete unit;
        clear();
    } // ~FireStarterUnits
}; // class FireStarterUnits