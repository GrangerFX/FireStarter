#include "FireStarterExecute.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "CUDACompile.h"

// Note: Including these all the time is a very easy way to check for compiler errors.
#include "FireEvolver.cu"
#include "FireEvolverNew.cu"
#include "FireEvolverSinSim.cu"
#include "FireGenerate.cu"
#include "FireMoneyMaker.cu"
#include "FireMoneyOptimizer.cu"
#include "FireOptimizer.cu"
#include "FireSelect.cu"
#include "FireSettings.cu"
#include "FireSinSim.cu"
#include "FireSpeedTest.cu"

uint3 threadIdx = { 0, 0, 0 };
uint3 blockIdx = { 0, 0, 0 };
dim3 blockDim = { 1, 1, 1 };

// Not used currently.
inline float AtomicMin(std::atomic<float>& minFloat, float newFloat)
{
    float curFloat = minFloat;
    while ((newFloat < curFloat) && !minFloat.compare_exchange_weak(curFloat, newFloat))
        curFloat = minFloat;
    return curFloat;
} // AtomicMin

void FireStarterExecute::FinishPopulation(void)
{
    checkCUDAErrors(cudaFreeHost(m_hostSettings));
    m_hostResults = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostResults));
    m_hostResults = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostPopulation));
    m_hostPopulation = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostCodes));
    m_hostCodes = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostNetworks));
    m_hostNetworks = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostStocks));
    m_hostStocks = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostTradingResults));
    m_hostTradingResults = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostTradingData));
    m_hostTradingData = nullptr;
    checkCUDAErrors(cudaFreeHost(m_hostTradingCode));
    m_hostTradingCode = nullptr;

    if (m_simulateGPU) {
        checkCUDAErrors(cudaFreeHost(m_deviceSettings));
        m_deviceSettings = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceResults));
        m_deviceResults = nullptr;

        checkCUDAErrors(cudaFreeHost(m_devicePopulation0));
        m_devicePopulation0 = nullptr;
        checkCUDAErrors(cudaFreeHost(m_devicePopulation1));
        m_devicePopulation1 = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceCodes));
        m_deviceCodes = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceParentCode));
        m_deviceParentCode = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceNetworks));
        m_deviceNetworks = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceStocks));
        m_deviceStocks = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceTradingResults));
        m_deviceTradingResults = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceTradingData));
        m_deviceTradingData = nullptr;

        checkCUDAErrors(cudaFreeHost(m_deviceTradingCode));
        m_deviceTradingCode = nullptr;
    } else {
        checkCUDAErrors(cudaFreeAsync(m_deviceSettings, Stream()));
        m_deviceSettings = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceResults, Stream()));
        m_deviceResults = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_devicePopulation0, Stream()));
        m_devicePopulation0 = nullptr;
        checkCUDAErrors(cudaFreeAsync(m_devicePopulation1, Stream()));
        m_devicePopulation1 = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceCodes, Stream()));
        m_deviceCodes = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceParentCode, Stream()));
        m_deviceParentCode = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceNetworks, Stream()));
        m_deviceNetworks = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceStocks, Stream()));
        m_deviceStocks = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceTradingResults, Stream()));
        m_deviceTradingResults = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceTradingData, Stream()));
        m_deviceTradingData = nullptr;

        checkCUDAErrors(cudaFreeAsync(m_deviceTradingCode, Stream()));
        m_deviceTradingCode = nullptr;

        Context()->Synchronize();
    }

    m_settingsSize = 0;
    m_resultsSize = 0;
    m_populationSize = 0;
    m_codesSize = 0;
    m_parentCodeSize = 0;
    m_networksSize = 0;
    m_stocksSize = 0;
    m_tradingResultsSize = 0;
    m_tradingDataSize = 0;
    m_tradingCodeSize = 0;
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    bool result = true;
    size_t settingsSize = 0;
    size_t resultsSize = 0;
    size_t populationSize = 0;
    size_t codesSize = 0;
    size_t parentCodeSize = 0;
    size_t networksSize = 0;
    size_t stocksSize = 0;
    size_t tradingResultsSize = 0;
    size_t tradingDataSize = 0;
    size_t tradingCodeSize = 0;

    if ((settings.m_mode == FIRESTARTER_SELECT) || (settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_EVOLVE_NEW) || (settings.m_mode == FIRESTARTER_EVOLVE_SINSIM) || (settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        resultsSize = settings.m_population * sizeof(float);
        populationSize = FireStarterPopulation::PopulationSize(settings);   // Note: TODO: Only allocate this is FIRESTARTER_EVOLVE_RESULTS or this is an optimize pass.
        if (settings.m_mode != FIRESTARTER_SPEED_TEST)
            codesSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if (settings.m_mode == FIRESTARTER_SELECT)
            parentCodeSize = FireStarterCode::CodeSize(settings);
        if (settings.m_mode == FIRESTARTER_MONEYMAKER) {
            settingsSize = sizeof(FireStarterSettings);
            stocksSize = m_stocksData ? m_stocksData->StocksSize() : 0;
            tradingResultsSize = stocksSize;
            tradingDataSize = FireStarterData::DataSize(settings);
            tradingCodeSize = FireStarterCode::CodeSize(settings);
        }
    } else if ((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE_CPU) || (settings.m_mode == FIRESTARTER_OPTIMIZE))
        populationSize = FireStarterPopulation::PopulationSize(settings);
    else if (settings.m_mode == FIRESTARTER_SINSIM)
        networksSize = settings.m_population * sizeof(SinSimNetwork);

    // Reallocate the data if the sizes has changed.
    if ((m_settingsSize != settingsSize) || (m_resultsSize != resultsSize) || (m_populationSize != populationSize) || (codesSize != m_codesSize) || (parentCodeSize != m_parentCodeSize) || (networksSize != m_networksSize) || (stocksSize != m_stocksSize) || (tradingDataSize != m_tradingDataSize) || (tradingResultsSize != m_tradingResultsSize)) {
        FinishPopulation();
        m_settingsSize = settingsSize;
        m_resultsSize = resultsSize;
        m_populationSize = populationSize;
        m_codesSize = codesSize;
        m_parentCodeSize = parentCodeSize;
        m_networksSize = networksSize;
        m_stocksSize = stocksSize;
        m_tradingResultsSize = tradingResultsSize;
        m_tradingDataSize = tradingDataSize;
        m_tradingCodeSize = tradingCodeSize;

        if (m_settingsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostSettings, m_settingsSize));
            memcpy(m_hostSettings, &settings, m_settingsSize);
        }
        if (m_resultsSize)
            checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
        if (m_codesSize)
            checkCUDAErrors(cudaMallocHost(&m_hostCodes, m_codesSize));
        if (m_populationSize)
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
        if (m_networksSize)
            checkCUDAErrors(cudaMallocHost(&m_hostNetworks, m_networksSize));
        if (m_stocksSize)
            checkCUDAErrors(cudaMallocHost(&m_hostStocks, m_stocksSize));
        if (m_tradingResultsSize)
            checkCUDAErrors(cudaMallocHost(&m_hostTradingResults, m_tradingResultsSize));
        if (m_tradingDataSize)
            checkCUDAErrors(cudaMallocHost(&m_hostTradingData, m_tradingDataSize));
        if (m_tradingCodeSize)
            checkCUDAErrors(cudaMallocHost(&m_hostTradingCode, m_tradingCodeSize));

        if (m_simulateGPU) {
            if (m_settingsSize) {
                checkCUDAErrors(cudaMallocHost(&m_deviceSettings, m_settingsSize));
                memcpy(m_deviceSettings, &settings, m_settingsSize);
            }
            if (m_resultsSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceResults, m_resultsSize));
            if (m_codesSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceCodes, m_codesSize));
            if (m_populationSize) {
                checkCUDAErrors(cudaMallocHost(&m_devicePopulation0, m_populationSize));
                checkCUDAErrors(cudaMallocHost(&m_devicePopulation1, m_populationSize));
            }
            if (m_parentCodeSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceParentCode, m_parentCodeSize));
            if (m_networksSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceNetworks, m_networksSize));
            if (m_stocksSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceStocks, m_stocksSize));
            if (m_tradingResultsSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceTradingResults, m_tradingResultsSize));
            if (m_tradingDataSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceTradingData, m_tradingDataSize));
            if (m_tradingCodeSize)
                checkCUDAErrors(cudaMallocHost(&m_deviceTradingCode, m_tradingCodeSize));
        } else {
            if (m_settingsSize) {
                checkCUDAErrors(cudaMallocAsync(&m_deviceSettings, m_settingsSize, Stream()));
                checkCUDAErrors(cudaMemcpyAsync(m_deviceSettings, &settings, m_settingsSize, cudaMemcpyHostToDevice, Stream()));
            }
            if (m_resultsSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceResults, m_resultsSize, Stream()));
            if (m_codesSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceCodes, m_codesSize, Stream()));
            if (m_populationSize) {
                checkCUDAErrors(cudaMallocAsync(&m_devicePopulation0, m_populationSize, Stream()));
                checkCUDAErrors(cudaMallocAsync(&m_devicePopulation1, m_populationSize, Stream()));
            }
            if (m_parentCodeSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceParentCode, m_parentCodeSize, Stream()));
            if (m_networksSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceNetworks, m_networksSize, Stream()));
            if (m_stocksSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceStocks, m_stocksSize, Stream()));
            if (m_tradingResultsSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceTradingResults, m_tradingResultsSize, Stream()));
            if (m_tradingDataSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceTradingData, m_tradingDataSize, Stream()));
            if (m_tradingCodeSize)
                checkCUDAErrors(cudaMallocAsync(&m_deviceTradingCode, m_tradingCodeSize, Stream()));

            Context()->Synchronize();
        }

        result = (!m_settingsSize || (m_hostSettings && m_deviceSettings));
        result = (!m_resultsSize || (m_hostResults && m_deviceResults));
        result = result && (!m_codesSize || (m_hostCodes && m_deviceCodes));
        result = result && (!m_populationSize || (m_hostPopulation && m_devicePopulation0 && m_devicePopulation1));
        result = result && (!m_parentCodeSize || m_deviceParentCode);
        result = result && (!m_networksSize || (m_hostNetworks && m_deviceNetworks));
        result = result && (!m_stocksSize || (m_hostStocks && m_deviceStocks));
        result = result && (!m_tradingResultsSize || (m_hostTradingResults && m_deviceTradingResults));
        result = result && (!m_tradingDataSize || (m_hostTradingData && m_deviceTradingData));
        result = result && (!m_tradingCodeSize || (m_hostTradingCode && m_deviceTradingCode));
    }
    return result;
} // InitPopulation

void FireStarterExecute::ExecuteSelectPass(FireStarterState& state, const FireStarterSettings& selectSettings)
{
    // Launch the calculation kernel
    unsigned int populationSize = selectSettings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (selectSettings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int variation = state.MaxVariation();
    unsigned int passes = selectSettings.m_passes;
    FireStarterCode* parentCode = state.m_code.CodePtr();

    if (m_simulateGPU) {
        checkCUDAErrors(cudaMemcpy(m_deviceParentCode, parentCode, m_parentCodeSize, cudaMemcpyHostToHost));

        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                Selecter(m_deviceResults, m_devicePopulation0, m_deviceCodes, m_deviceParentCode, seed, passes, populationSize, variation);
        if (m_populationSize)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyHostToHost));
    } else {
        checkCUDAErrors(cudaMemcpyAsync(m_deviceParentCode, parentCode, m_parentCodeSize, cudaMemcpyHostToDevice, Stream()));

        void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                        reinterpret_cast<void*>(&m_devicePopulation0),
                        reinterpret_cast<void*>(&m_deviceCodes),
                        reinterpret_cast<void*>(&m_deviceParentCode),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationSize)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        Context()->Synchronize();

        if (m_populationSize)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = selectSettings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        float curResult = m_hostResults[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best code.
    state.InitCode(selectSettings, m_hostCodes, minResult, minIndex);
} // ExecuteSelectPass

void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int variation = FIRESTARTER_VARIATION;

    if (m_simulateGPU) {
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                Evolver(m_deviceResults, m_devicePopulation0, m_deviceCodes, variation, seed, passes, populationSize);
        if (m_populationSize && FIRESTARTER_EVOLVE_RESULTS)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyHostToHost));
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                        reinterpret_cast<void*>(&m_devicePopulation0),
                        reinterpret_cast<void*>(&m_deviceCodes),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationSize)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        if (m_populationSize && FIRESTARTER_EVOLVE_RESULTS)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    bool validResult = false;
    float minResult = m_hostResults[0];
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationSize; i++) {
        float curResult = m_hostResults[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < state.m_bestCodes.WorstResult())
            state.m_bestCodes.AddCode(m_hostCodes->Member(settings, i), curResult);
    }

    // Update the state's best code.
    state.InitCode(settings, m_hostCodes, minResult, minIndex);
} // ExecuteEvolvePass

void FireStarterExecute::ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long generation = state.m_generation;
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;

    if (m_simulateGPU) {
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                EvolverNew(m_deviceResults, m_devicePopulation0, m_deviceCodes, variation, seed, passes, populationSize);
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyHostToHost));
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                        reinterpret_cast<void*>(&m_devicePopulation0),
                        reinterpret_cast<void*>(&m_deviceCodes),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationSize)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationSize; i++) {
        const FireStarterCode* code = m_hostCodes->Member(settings, i);
        float curResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitResult(settings, m_hostCodes, m_hostPopulation, minIndex, variation);

    // Note: The above is used by Optimize and does not init the following variables:
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = minResult;
    state.m_minIndex = minIndex;
    state.m_optimizeValid = true;
} // ExecuteEvolveNewPass

void FireStarterExecute::ExecuteSinSimPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long generation = state.m_generation;
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;

    if (m_simulateGPU) {
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                SinSim(m_deviceNetworks, variation, generation, seed, passes, populationSize);
        checkCUDAErrors(cudaMemcpyAsync(m_hostNetworks, m_deviceNetworks, m_networksSize, cudaMemcpyHostToHost));
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_deviceNetworks),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&generation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationSize)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        checkCUDAErrors(cudaMemcpyAsync(m_hostNetworks, m_deviceNetworks, m_networksSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    SinSimNetwork minNetwork;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        SinSimNetwork& network = m_hostNetworks[i];
        if (network.grade < minResult) {
            minResult = network.grade;
            minNetwork = m_hostNetworks[i];
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitNetwork(settings, minNetwork, minIndex);
} // ExecuteSinSimPass

void FireStarterExecute::ExecuteMoneyMakerPass(FireStarterState& state)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long evolutionSeed = state.EvolutionSeed();
    unsigned int variation = FIRESTARTER_VARIATION;
    unsigned int stock = 0;

    static double lastTime = 0.0 ;                  // Note: DEBUG!
    double entryTime = SimpleTimer::RunDuration();  // Note: DEBUG!
    Context()->Synchronize();                       // Note: DEBUG!
    double startTime = SimpleTimer::RunDuration();  // Note: DEBUG!

    float averageResult = 0.0f;
    if (m_simulateGPU) {
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                MoneyMaker(m_deviceSettings, m_deviceResults, m_devicePopulation0, m_deviceCodes, m_deviceStocks, evolutionSeed);
        if (m_populationSize)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyHostToHost));
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_deviceSettings),
                        reinterpret_cast<void*>(&m_deviceResults),
                        reinterpret_cast<void*>(&m_devicePopulation0),
                        reinterpret_cast<void*>(&m_deviceCodes),
                        reinterpret_cast<void*>(&m_deviceStocks),
                        reinterpret_cast<void*>(&evolutionSeed)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        if (m_populationSize && FIRESTARTER_EVOLVE_RESULTS)
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCodes, m_deviceCodes, m_codesSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }
    double endTime = SimpleTimer::RunDuration();   // Note: DEBUG!
    
    bool validResult = false;
    float minResult = m_hostResults[0];
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = m_hostResults[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < state.m_bestCodes.WorstResult())
            state.m_bestCodes.AddCode(m_hostCodes->Member(settings, i), curResult);
    }

    if (m_populationSize && FIRESTARTER_EVOLVE_RESULTS) {
        const FireStarterCode& minCode = m_hostCodes->Member(settings, minIndex);
        const FireStarterResult& minResult = m_hostPopulation->Member(settings, minIndex);
        unsigned int minAge = minResult.m_evolveAge1;
        unsigned int minTrades = minResult.m_evolveAge2;
        int foo = 1;
    }

    // Update the state's best code.
    state.InitCode(settings, m_hostCodes, minResult, minIndex);

    double exitTime = SimpleTimer::RunDuration();   // Note: DEBUG!
    std::string resultText = Format("MoneyMaker: Entry = % .2f  Start = % .2f  End = % .2f  Exit = % .2f  Time = % .2f\n", entryTime - lastTime, startTime - lastTime, endTime - lastTime, exitTime - lastTime, endTime - startTime);   // Note: DEBUG!
    static std::string fileDate;   // Note: DEBUG!
    if (fileDate.empty())   // Note: DEBUG!
        fileDate = FileNameDate(SimpleTimer::RunSecond()).c_str();   // Note: DEBUG!
    FireStarterSource::AppendSource(resultText, Format("Logs\\%s_MoneyMakerDebug.txt", fileDate.c_str()));   // Note: DEBUG!
    lastTime = exitTime;    // Note: DEBUG!
} // ExecuteMoneyMakerPass

void FireStarterExecute::ExecuteOptimizePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long passes = settings.m_passes;
    FireStarterResult* newPopulation = nullptr;
    FireStarterResult* oldPopulation = nullptr;

    for (unsigned int pass = 0; pass < passes; pass++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_uniqueRegisters;
        unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
        unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);
        if (pass & 1) {
            newPopulation = m_devicePopulation0;
            oldPopulation = m_devicePopulation1;
        } else {
            newPopulation = m_devicePopulation1;
            oldPopulation = m_devicePopulation0;
        }

        if (m_simulateGPU) {
            blockDim = cudaBlockSize;
            for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
                for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                    for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                            for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                                for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                    Optimizer(newPopulation, oldPopulation, variation, registers, optimizeSeed, optimizePass, populationSize);

            unsigned int hash = 0;
            for (unsigned int i = 0; i < settings.m_population; i++) {
                const FireStarterResult* member = FireStarterPopulation::PopulationResult(newPopulation, settings, i);
                float curResult = member->MaxResult();
                hash ^= *(unsigned int*)&curResult;
            }
        } else {
            void* arr[] = { reinterpret_cast<void*>(&newPopulation),
                            reinterpret_cast<void*>(&oldPopulation),
                            reinterpret_cast<void*>(&variation),
                            reinterpret_cast<void*>(&registers),
                            reinterpret_cast<void*>(&optimizeSeed),
                            reinterpret_cast<void*>(&optimizePass),
                            reinterpret_cast<void*>(&populationSize)
            };

            checkCUDAErrors(cuLaunchKernel(m_executeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                &arr[0],                                            // arguments
                0));

            // Synchronize all GPU threads and results.
            Context()->Synchronize();
        }
    }

    // Gather the best results.
    if (m_simulateGPU) {
        if (passes & 1)
            checkCUDAErrors(cudaMemcpy(oldPopulation, newPopulation, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpy(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyHostToHost));
    } else {
        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1)
            checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Store the state's best result.
    state.InitResult(settings, m_hostPopulation, minIndex, variation);
} // ExecuteOptimizePass

void FireStarterExecute::ExecuteOptimizePasses(FireStarterState& state)
{
    unsigned int variations = state.Settings().m_variations;
    for (unsigned int v = 0; v < variations; v++)
        ExecuteOptimizePass(state, v);

    // Calculate the state's max result.
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = state.MaxResults();
    state.m_optimizeValid = true;
} // ExecuteOptimizePasses

void FireStarterExecute::ExecuteSmartOptimizePasses(FireStarterState& state)
{
    unsigned int variations = state.Settings().m_variations;
    if ((variations > 1) && state.m_evolution) {
        float oldResult = state.m_bestResult;
        bool validResult = true;
        state.InitResults();
        for (unsigned int v = 0; v < variations; v++) {
            unsigned int variation = state.m_variationOrder[v];
            if (validResult) {
                // If the variation result is worse, skip the rest of the variations.
                ExecuteOptimizePass(state, variation);
                if (state.MaxResult(v) >= oldResult) {
                    // Count the variation that caused an invalid result.
                    state.m_variationCount[variation]++;
                    FireStarterResult* result = state.Result(variation);
                    result->InitResult(state.Settings());
                    validResult = false;
                }
            }
        }

        // Resort the variation order with the highest invalidation count first.
        if (validResult) {
            for (unsigned int v = 0; v < variations - 1; v++) {
                unsigned int variation = state.m_variationOrder[v];
                unsigned int count = state.m_variationCount[variation];
                for (unsigned int i = v + 1; i < variations; i++) {
                    unsigned int curVariation = state.m_variationOrder[i];
                    unsigned int curCount = state.m_variationCount[curVariation];
                    if (curCount > count) {
                        state.m_variationOrder[v] = curVariation;
                        state.m_variationOrder[i] = variation;
                        variation = curVariation;
                        count = curCount;
                    }
                }
            }
        }

        // Set the state's max result.
        state.m_oldResult = oldResult;
        state.m_bestResult = state.MaxResults();
        state.m_optimizeValid = validResult;
    }
    else
        ExecuteOptimizePasses(state);
} // ExecuteSmartOptimizePasses

void FireStarterExecute::ExecuteMoneyOptimizePass(FireStarterState& state)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long evolutionSeed = state.EvolutionSeed();
    unsigned long long passes = settings.m_passes;
    FireStarterResult* newPopulation = nullptr;
    FireStarterResult* oldPopulation = nullptr;

    for (unsigned int pass = 0; pass < passes; pass++) {
        unsigned int registers = state.m_uniqueRegisters;
        unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
        unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);
        if (pass & 1) {
            newPopulation = m_devicePopulation0;
            oldPopulation = m_devicePopulation1;
        } else {
            newPopulation = m_devicePopulation1;
            oldPopulation = m_devicePopulation0;
        }

        if (m_simulateGPU) {
            blockDim = cudaBlockSize;
            for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
                for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                    for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                            for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                                for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                    MoneyOptimizer(m_deviceSettings, newPopulation, oldPopulation, m_deviceStocks, registers, optimizeSeed, optimizePass, populationSize);

            unsigned int hash = 0;
            for (unsigned int i = 0; i < settings.m_population; i++) {
                const FireStarterResult* member = FireStarterPopulation::PopulationResult(newPopulation, settings, i);
                float curResult = member->MaxResult();
                hash ^= *(unsigned int*)&curResult;
            }
        } else {
            void* arr[] = { reinterpret_cast<void*>(&m_deviceSettings),
                            reinterpret_cast<void*>(&newPopulation),
                            reinterpret_cast<void*>(&oldPopulation),
                            reinterpret_cast<void*>(&m_deviceStocks),
                            reinterpret_cast<void*>(&registers),
                            reinterpret_cast<void*>(&optimizeSeed),
                            reinterpret_cast<void*>(&optimizePass),
                            reinterpret_cast<void*>(&populationSize)
            };

            checkCUDAErrors(cuLaunchKernel(m_executeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                &arr[0],                                            // arguments
                0));

            // Synchronize all GPU threads and results.
            Context()->Synchronize();
        }
    }

    if (m_simulateGPU) {
        if (passes & 1)
            checkCUDAErrors(cudaMemcpy(oldPopulation, newPopulation, m_populationSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpy(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyHostToHost));
    } else {
        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1)
            checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Gather the best results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, 0);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = FireStarterPopulation::PopulationMaxResult(m_hostPopulation, settings, i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Store the state's best result.
    state.InitResult(settings, m_hostPopulation, minIndex);

    // Calculate the state's max result.
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = minResult;
    state.m_optimizeValid = true;

    if (m_hostTradingResults)
        m_hostTradingResults->Init(m_hostStocks->numStocks, m_hostStocks->numDays);
    if (m_hostTradingData) {
        const FireStarterResult& bestResult = state.Result();
        memcpy(m_hostTradingData, &bestResult.m_data, m_tradingDataSize);
    }
    if (m_hostTradingCode) {
        const FireStarterCode& bestCode = state.Code();
        memcpy(m_hostTradingCode, &bestCode, m_tradingCodeSize);
    }

    if (0) {
        blockDim  = { m_hostStocks->numStocks, 1, 1 };
        blockIdx  = { 0, 0, 0 };
        threadIdx = { 0, 0, 0 };
        MoneyTester(m_deviceSettings, m_hostStocks, m_hostTradingResults, m_hostTradingData);
    } else if (m_simulateGPU) {
        checkCUDAErrors(cudaMemcpyAsync(m_deviceTradingResults, m_hostTradingResults, m_tradingResultsSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceTradingData, m_hostTradingData, m_tradingDataSize, cudaMemcpyHostToHost));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceTradingCode, m_hostTradingCode, m_tradingCodeSize, cudaMemcpyHostToHost));

        blockDim  = { m_hostStocks->numStocks, 1, 1 };
        blockIdx  = { 0, 0, 0 };
        threadIdx = { 0, 0, 0 };
        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
            MoneyTester(m_deviceSettings, m_deviceStocks, m_deviceTradingResults, m_deviceTradingData);

        checkCUDAErrors(cudaMemcpyAsync(m_hostTradingResults, m_deviceTradingResults, m_tradingResultsSize, cudaMemcpyHostToHost));
    } else {
        cudaGridSize = { 1, 1, 1 };
        cudaBlockSize = { FIRESTARTER_WARP_THREADS, 1, 1 };

        checkCUDAErrors(cudaMemcpyAsync(m_deviceTradingResults, m_hostTradingResults, m_tradingResultsSize, cudaMemcpyHostToDevice, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_deviceTradingData, m_hostTradingData, m_tradingDataSize, cudaMemcpyHostToDevice, Stream()));

        FireStarterCode* nullCode = nullptr;
        void* arr[] = { reinterpret_cast<void*>(&m_deviceSettings),
                        reinterpret_cast<void*>(&m_deviceStocks),
                        reinterpret_cast<void*>(&m_deviceTradingResults),
                        reinterpret_cast<void*>(&m_deviceTradingData)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeTest,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        checkCUDAErrors(cudaMemcpyAsync(m_hostTradingResults, m_deviceTradingResults, m_tradingResultsSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }
} // ExecuteMoneyOptimizePass

bool FireStarterExecute::Compile(FireStarterJob*& job)
{
    // Release the current job.
    if (job)
        m_executeManager->AddFree(job);

    // Get the next available compile job.
    job = m_executeManager->GetCompile();
    if (!job)
        return false;

    // Output the compile log if it is not empty.
    if (!job->m_log.empty())
        printf("%s\n", job->m_log.c_str());

    // Initialize the results and compile the CUDA module.
    if (!job->m_ptx.empty())
        if (CUDACompile::CompileModule(m_executeModule, job->m_ptx)) {
            m_executeFunctionName = FireStarterSettings::OptimizeFunctionName(job->m_state.PassMode());
            m_executeTestName = FireStarterSettings::OptimizeTestName(job->m_state.PassMode());
            m_executeFunction = CUDACompile::GetFunction(m_executeModule, m_executeFunctionName);
            m_executeTest = CUDACompile::GetFunction(m_executeModule, m_executeTestName);
            if (m_executeFunction)
                return true;
            CUDACompile::ReleaseModule(m_executeModule);
        }

    // Something went wrong so free the job.
    m_executeManager->AddFree(job);
    job = nullptr;
    return false;
} // Compile

bool FireStarterExecute::ExecuteJob(void)
{
    FireStarterJob* job = nullptr;
    if (Compile(job)) {
        FireStarterState& state = job->m_state;
        if (InitPopulation(state.Settings())) {
            ExecuteSmartOptimizePasses(state);
            m_executeManager->AddComplete(job);
        } else
            m_executeManager->AddComplete();
        return true;
    }
    if (job)
        m_executeManager->AddFree(job);
    m_executeManager->AddComplete();
    return false;
} // ExecuteJob

bool FireStarterExecute::GenerateEvolve(unsigned int mode)
{
    // Load the base Evolver code into memory.
    m_executeProgramName = FireStarterSettings::EvolveProgramName(mode);
    m_executeFunctionName = FireStarterSettings::EvolveFunctionName(mode);
    m_executeTestName = FireStarterSettings::EvolveTestName(mode);
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName.c_str());
            std::terminate();
        }
    }

    // Return immediately if the Evolver code has already been compiled.
    if (m_executeFunction)
        return true;

    // Compile the code and get the Evolver function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, m_executeFunctionName);
        m_executeTest = CUDACompile::GetFunction(m_executeModule, m_executeTestName);
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    m_executeTest = nullptr;
    return false;
} // GenerateEvolve

bool FireStarterExecute::GenerateOptimize(FireStarterState& state)
{
    // Load the base Optimizer code into memory.
    m_executeProgramName = FireStarterSettings::OptimizeProgramName(state.PassMode());
    m_executeFunctionName = FireStarterSettings::OptimizeFunctionName(state.PassMode());
    m_executeTestName = FireStarterSettings::OptimizeTestName(state.PassMode());
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName.c_str());
            std::terminate();
        }
    }

    // Generate the evaluate code
    state.m_evaluateCode.clear();
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the Optimizer code by replacing the evaluate code block.
    FireStarterSource::UpdateProgram(m_executeCode, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the Optimizer function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, m_executeFunctionName);
        m_executeTest = CUDACompile::GetFunction(m_executeModule, m_executeTestName);
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateOptimize

void FireStarterExecute::ExecuteSetStocks(const FireStarterSettings& settings, const MoneyMakerStocks *stocks)
{
    DispatchSync([this, settings, stocks] {
        m_stocksData = stocks;
        InitPopulation(settings);
        checkCUDAErrors(cudaMemcpy(m_hostStocks, m_stocksData, m_stocksSize, cudaMemcpyHostToHost));
        if (m_simulateGPU)
            checkCUDAErrors(cudaMemcpy(m_deviceStocks, m_hostStocks, m_stocksSize, cudaMemcpyHostToHost));
        else {
            checkCUDAErrors(cudaMemcpyAsync(m_deviceStocks, m_hostStocks, m_stocksSize, cudaMemcpyHostToDevice, Stream()));
            Context()->Synchronize();
        }
    });
} // ExecuteSetStocks

bool FireStarterExecute::ExecuteGenerateEvolve(unsigned int mode, bool sync)
{
    if (m_executeFunction)
        return true;
    bool result = false;
    Dispatch([this, mode, &result] {
        result = GenerateEvolve(mode);
    }, sync);
    return result;
} // ExecuteGenerateEvolve

bool FireStarterExecute::ExecuteGenerateOptimize(FireStarterState& optimizeState, bool sync)
{
    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    bool result = false;
    Dispatch([this, &optimizeState, &result] {
        result = GenerateOptimize(optimizeState);
    }, sync);
    return result;
} // ExecuteGenerateOptimize

void FireStarterExecute::ExecuteSelect(FireStarterState& selectState, const FireStarterSettings& selectSettings)
{
    DispatchSync([this, &selectState, &selectSettings] {
        if (GenerateEvolve(selectSettings.m_mode)) {
            selectState.m_timer.Start();
            if (InitPopulation(selectSettings))
                ExecuteSelectPass(selectState, selectSettings);
        }
    });
} // ExecuteSelect

void FireStarterExecute::ExecuteEvolve(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteEvolvePass(evolveState);
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteEvolveNew(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteEvolveNewPass(evolveState);
        }
    });
} // ExecuteEvolveNew

void FireStarterExecute::ExecuteEvolveSinSim(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteEvolveNewPass(evolveState);
        }
        });
} // ExecuteEvolveNew

void FireStarterExecute::ExecuteSinSim(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteSinSimPass(evolveState);
        }
    });
} // ExecuteSinSim

void FireStarterExecute::ExecuteMoneyMaker(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteMoneyMakerPass(evolveState);
        }
    });
} // ExecuteMoneyMaker

void FireStarterExecute::ExecuteEvolveOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete)
{
    DispatchSync([this, complete, &optimizeState, &bestState] {
        if (m_executeFunction) {
            if (InitPopulation(optimizeState.Settings())) {
                while (!WillTerminate() && !bestState.Complete() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    optimizeState.m_timer.Start();
                    ExecuteOptimizePasses(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete && complete->CompleteState(bestState, optimizeState))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }
            }
        }
    });
} // ExecuteEvolveOptimize

void FireStarterExecute::ExecuteMoneyOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete)
{
    DispatchSync([this, complete, &optimizeState, &bestState] {
        if (m_executeFunction) {
            if (InitPopulation(optimizeState.Settings())) {
                while (!WillTerminate() && !bestState.Complete() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    optimizeState.m_timer.Start();
                    ExecuteMoneyOptimizePass(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete && complete->CompleteState(bestState, optimizeState, m_hostStocks, m_hostTradingResults))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }
            }
        }
    });
} // ExecuteMoneyOptimize

void FireStarterExecute::ExecuteOptimize(FireStarterState& optimizeState)
{
    DispatchSync([this, &optimizeState] {
        if (InitPopulation(optimizeState.Settings()))
            ExecuteOptimizePasses(optimizeState);
    });
} // ExecuteOptimize

void FireStarterExecute::ExecuteOptimizeCount(std::atomic<unsigned int>& evolveCount)
{
    DispatchAsync([this, &evolveCount] {
        while (evolveCount-- > 0) {
            if (!ExecuteJob())
                break;
        }
    });
} // ExecuteOptimizeCount

void FireStarterExecute::ExecuteRandom(void)
{
    DispatchSync([this] {
        ExecuteJob();
    });
} // ExecuteRandom

void FireStarterExecute::ExecuteFinish(void)
{
    DispatchSync([this] {
        if (m_executeJob) {
            if (m_executeManager)
                m_executeManager->AddFree(m_executeJob);
            else
                delete m_executeJob;
            m_executeJob = nullptr;
        }
        FinishPopulation();
        CUDACompile::ReleaseModule(m_executeModule);
        m_executeFunction = nullptr;
    });
} // ExecuteFinish

void FireStarterExecute::SimulateGPU(bool simulateGPU)
{
    m_simulateGPU = simulateGPU;
} // SimulateGPU

const MoneyMakerStocks* FireStarterExecute::GetTradingResults(void) const
{
    return m_hostTradingResults;
} // GetTradingResults

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index, int priority) : CUDAThread(Format("FireStarterExecute%zu", index), 0, priority)
{
    m_executeManager = manager;
    m_executeIndex = index;
    m_executeGenerate = new FireStarterGenerate(Context());
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
    m_compilerThread.TerminateThread();
    ExecuteFinish();
    delete m_executeGenerate;
} // ~FireStarterExecute(void)
