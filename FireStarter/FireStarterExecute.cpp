#include "FireStarterExecute.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "CUDACompile.h"

// Note: Including these all the time is a very easy way to check for compiler errors.
#include "FireEvolverGPU.cu"
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

void FireStarterExecute::CUDASyncThreads(void)
{
    for (size_t i = 0; i < m_CUDAThreads.size(); i++)
        m_CUDAThreads[i]->Synchronize();
} // CUDASyncThreads

void FireStarterExecute::FinishPopulation(void)
{
    delete m_CUDASettings;
    m_CUDASettings = nullptr;
    m_settingsSize = 0;

    delete m_CUDAResults;
    m_CUDAResults = nullptr;
    m_resultsSize = 0;

    delete m_CUDACodes0;
    delete m_CUDACodes1;
    m_CUDACodes0 = nullptr;
    m_CUDACodes1 = nullptr;
    m_codesSize = 0;

    delete m_CUDAPopulation0;
    delete m_CUDAPopulation1;
    m_CUDAPopulation0 = nullptr;
    m_CUDAPopulation1 = nullptr;
    m_populationSize = 0;

    delete m_CUDAParentCode;
    m_CUDAParentCode = nullptr;
    m_parentCodeSize = 0;

    delete m_CUDANetworks;
    m_CUDANetworks = nullptr;
    m_networksSize = 0;

    delete m_CUDATradingData;
    m_CUDATradingData = nullptr;
    m_tradingDataSize = 0;

    CUDASyncThreads();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    bool result = true;
    size_t settingsSize = 0;
    size_t resultsSize = 0;
    size_t codesSize = 0;
    size_t populationSize = 0;
    size_t parentCodeSize = 0;
    size_t networksSize = 0;
    size_t tradingDataSize = 0;
    size_t tradingCodeSize = 0;

    if ((settings.m_mode == FIRESTARTER_SELECT) || (settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_EVOLVE_NEW) || (settings.m_mode == FIRESTARTER_EVOLVE_SINSIM) || (settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_MONEYOPTIMIZE) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        resultsSize = settings.m_population * sizeof(float);
#if FIRESTARTER_EVOLVE_RESULTS
        populationSize = FireStarterPopulation::PopulationSize(settings);   // Only allocate this if FIRESTARTER_EVOLVE_RESULTS is set to 1
#endif
        if (settings.m_mode != FIRESTARTER_SPEED_TEST)
            codesSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if (settings.m_mode != FIRESTARTER_MONEYOPTIMIZE)
            populationSize = FireStarterPopulation::PopulationSize(settings);
        if (settings.m_mode == FIRESTARTER_SELECT)
            parentCodeSize = FireStarterCode::CodeSize(settings);
        if ((settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_MONEYOPTIMIZE)) {
            settingsSize = sizeof(FireStarterSettings);
            tradingDataSize = FireStarterData::DataSize(settings);
            tradingCodeSize = FireStarterCode::CodeSize(settings);
        }
    } else if ((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE_CPU) || (settings.m_mode == FIRESTARTER_OPTIMIZE))
        populationSize = FireStarterPopulation::PopulationSize(settings);
    else if (settings.m_mode == FIRESTARTER_SINSIM)
        networksSize = settings.m_population * sizeof(SinSimNetwork);

    // Reallocate the data if the sizes has changed.
    if ((m_settingsSize != settingsSize) || (m_resultsSize != resultsSize) || (m_populationSize != populationSize) || (codesSize != m_codesSize) || (parentCodeSize != m_parentCodeSize) || (networksSize != m_networksSize) || (tradingDataSize != m_tradingDataSize)) {
        FinishPopulation();
        m_settingsSize = settingsSize;
        m_resultsSize = resultsSize;
        m_codesSize = codesSize;
        m_populationSize = populationSize;
        m_parentCodeSize = parentCodeSize;
        m_networksSize = networksSize;
        m_tradingDataSize = tradingDataSize;

        if (m_settingsSize)
            m_CUDASettings = new CUDAMemory<FireStarterSettings>(m_CUDAThreads, m_settingsSize);
        if (m_resultsSize)
            m_CUDAResults = new CUDAMemory<float>(m_CUDAThreads, m_resultsSize);
        if (m_codesSize) {
            m_CUDACodes0 = new CUDAMemory<FireStarterCode>(m_CUDAThreads, m_codesSize);
            m_CUDACodes1 = new CUDAMemory<FireStarterCode>(m_CUDAThreads, m_codesSize);
        }
        if (m_populationSize) {
            m_CUDAPopulation0 = new CUDAMemory<FireStarterResult>(m_CUDAThreads, m_populationSize);
            m_CUDAPopulation1 = new CUDAMemory<FireStarterResult>(m_CUDAThreads, m_populationSize);
        }
        if (m_parentCodeSize)
            m_CUDAParentCode = new CUDAMemory<FireStarterCode>(m_CUDAThreads, m_parentCodeSize);
        if (m_networksSize)
            m_CUDANetworks = new CUDAMemory<SinSimNetwork>(m_CUDAThreads, m_networksSize);
        if (m_tradingDataSize)
            m_CUDATradingData = new CUDAMemory<FireStarterData>(m_CUDAThreads, m_tradingDataSize);
        CUDASyncThreads();
    }
    return result; // Always true curently.
} // InitPopulation

void FireStarterExecute::FinishStocks(void)
{
    delete m_CUDAStocks;
    m_CUDAStocks = nullptr;
    delete m_CUDATradingResults;
    m_CUDATradingResults = nullptr;
    m_stocksSize = 0;
    CUDASyncThreads();
} // FinishStocks

bool FireStarterExecute::InitStocks(const MoneyMakerStocks* stocks)
{
    size_t stocksSize = stocksSize = stocks ? stocks->StocksSize() : 0;
    if (stocksSize != m_stocksSize) {
        FinishStocks();
        m_stocksSize = stocksSize;
        if (m_stocksSize) {
            m_CUDAStocks = new CUDAMemory<MoneyMakerStocks>(m_CUDAThreads, m_stocksSize);
            m_CUDAStocks->HostInit(stocks);
            m_CUDAStocks->HostToDevices();

            m_CUDATradingResults = new CUDAMemory<MoneyMakerStocks>(m_CUDAThreads, m_stocksSize);
            m_CUDATradingResults->HostPtr()->Init(stocks->numStocks, stocks->numDays);
            m_CUDATradingResults->HostToDevices();

            CUDASyncThreads();
        }
    }
    return true;
} // InitStocks

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
        m_CUDAParentCode->HostInit(parentCode, m_parentCodeSize);

        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                Selecter(m_CUDAResults->HostPtr(), m_CUDAPopulation0->HostPtr(), m_CUDACodes0->HostPtr(), m_CUDAParentCode->HostPtr(), seed, passes, populationSize, variation);
     } else {
        m_CUDAParentCode->DevicesInit(parentCode, m_parentCodeSize);

        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes0->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAParentCode->DevicePtr()),
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

        if (m_CUDAPopulation0)
            m_CUDAPopulation0->DeviceToHost();
        m_CUDAResults->DeviceToHost();
        m_CUDACodes0->DeviceToHost();
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = selectSettings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        float curResult = m_CUDAResults->HostPtr()[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best code.
    state.InitCode(selectSettings, m_CUDACodes0->HostPtr(), minResult, minIndex);
} // ExecuteSelectPass

void FireStarterExecute::ExecuteEvolveGPUPass(FireStarterState& state)
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
                                EvolverGPU(m_CUDAResults->HostPtr(), m_CUDAPopulation0->HostPtr(), m_CUDACodes0->HostPtr(), variation, seed, passes, populationSize);
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes0->DevicePtr()),
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

        if (m_CUDAPopulation0)
            m_CUDAPopulation0->DeviceToHost();
        m_CUDAResults->DeviceToHost();
        m_CUDACodes0->DeviceToHost();
        Context()->Synchronize();
    }

    bool validResult = false;
    float minResult = m_CUDAResults->HostPtr()[0];
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationSize; i++) {
        float curResult = m_CUDAResults->HostPtr()[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < state.m_bestCodes.WorstResult())
            state.m_bestCodes.AddCode(m_CUDACodes0->HostPtr()->Member(settings, i), curResult);
    }

    // Update the state's best code.
    state.InitCode(settings, m_CUDACodes0->HostPtr(), minResult, minIndex);
    state.MaxResult(variation) = minResult;
} // ExecuteEvolveGPUPass

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
                                EvolverNew(m_CUDAResults->HostPtr(), m_CUDAPopulation0->HostPtr(), m_CUDACodes0->HostPtr(), variation, seed, passes, populationSize);
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes0->DevicePtr()),
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

        m_CUDAPopulation0->DeviceToHost();
        m_CUDACodes0->DeviceToHost();
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0->HostPtr(), settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationSize; i++) {
        const FireStarterCode* code = m_CUDACodes0->HostPtr()->Member(settings, i);
        float curResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0->HostPtr(), settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitResult(settings, m_CUDACodes0->HostPtr(), m_CUDAPopulation0->HostPtr(), minIndex, variation);

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
                                SinSim(m_CUDANetworks->HostPtr(), variation, generation, seed, passes, populationSize);
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDANetworks->DevicePtr()),
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

        m_CUDANetworks->DeviceToHost();
        Context()->Synchronize();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    SinSimNetwork minNetwork;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        SinSimNetwork& network = m_CUDANetworks->HostPtr()[i];
        if (network.grade < minResult) {
            minResult = network.grade;
            minNetwork = m_CUDANetworks->HostPtr()[i];
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitNetwork(settings, minNetwork, minIndex);
} // ExecuteSinSimPass

void FireStarterExecute::ExecuteMoneyEvolvePass(FireStarterState& state)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationSize = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;
    unsigned int blocksPerGrid = (populationSize + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long evolutionSeed = state.EvolutionSeed();
    unsigned int stock = 0;

    float averageResult = 0.0f;
    if (m_simulateGPU) {
        m_CUDASettings->HostInit(&settings, m_settingsSize);
        FireStarterResult* populationPtr = m_CUDAPopulation0 ? m_CUDAPopulation0->HostPtr() : nullptr;

        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                MoneyEvolve(m_CUDASettings->HostPtr(),
                                            m_CUDAResults->HostPtr(),
                                            m_CUDACodes0->HostPtr(),
                                            populationPtr,
                                            m_CUDAStocks->HostPtr(),
                                            evolutionSeed);
    } else {
        m_CUDASettings->DeviceInit(&settings, m_settingsSize);
        FireStarterResult* populationPtr = m_CUDAPopulation0 ? m_CUDAPopulation0->DevicePtr() : nullptr;

        void* arr[] = { reinterpret_cast<void*>(&m_CUDASettings->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAResults->DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes0->DevicePtr()),
                        reinterpret_cast<void*>(&populationPtr),
                        reinterpret_cast<void*>(&m_CUDAStocks->DevicePtr()),
                        reinterpret_cast<void*>(&evolutionSeed)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        m_CUDAResults->DeviceToHost();
        m_CUDACodes0->DeviceToHost();
        if (m_CUDAPopulation0)
            m_CUDAPopulation0->DeviceToHost();
        Context()->Synchronize();
    }

    float bestResult = settings.m_startResult;
    unsigned int goodResults = 0;
    unsigned int bestIndex = 0;
    for (unsigned int i = 0; i < settings.m_population; i++) {
        float curResult = m_CUDAResults->HostPtr()[i];
        if (curResult < settings.m_startResult) {
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = i;
            }
            if (curResult < state.m_bestCodes.WorstResult())
                state.m_bestCodes.AddCode(m_CUDACodes0->HostPtr()->Member(settings, i), curResult);
            goodResults++;
        }
    }

    float goodPercent = 100.0f * (float)goodResults / (float)settings.m_population;
    if (m_CUDAPopulation0) {
        const FireStarterCode& minCode = m_CUDACodes0->HostPtr()->Member(settings, bestIndex);
        const FireStarterResult& minResult = m_CUDAPopulation0->HostPtr()->Member(settings, bestIndex);
        unsigned int minAge = minResult.m_evolveAge1;
        int foo = 1;
    }

    // Update the state's best code.
    state.InitCode(settings, m_CUDACodes0->HostPtr(), bestResult, bestIndex);
    state.MaxResult() = bestResult;
} // ExecuteMoneyEvolvePass

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
    FireStarterResult* hostPopulation = nullptr;

    for (unsigned int pass = 0; pass < passes; pass++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_uniqueRegisters;
        unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
        unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);
        if (m_simulateGPU) {
            if (pass & 1) {
                newPopulation = m_CUDAPopulation0->HostPtr();
                oldPopulation = m_CUDAPopulation1->HostPtr();
            } else {
                newPopulation = m_CUDAPopulation1->HostPtr();
                oldPopulation = m_CUDAPopulation0->HostPtr();
            }
            hostPopulation = newPopulation;

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
            if (pass & 1) {
                hostPopulation = m_CUDAPopulation0->HostPtr();
                newPopulation = m_CUDAPopulation0->DevicePtr();
                oldPopulation = m_CUDAPopulation1->DevicePtr();
            } else {
                hostPopulation = m_CUDAPopulation1->HostPtr();
                newPopulation = m_CUDAPopulation1->DevicePtr();
                oldPopulation = m_CUDAPopulation0->DevicePtr();
            }

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
    } else {
        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1)
            checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = FireStarterPopulation::PopulationMaxResult(hostPopulation, settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = FireStarterPopulation::PopulationMaxResult(hostPopulation, settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Store the state's best result.
    state.InitResult(settings, hostPopulation, minIndex, variation);
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
    unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;
    unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long evolutionSeed = state.EvolutionSeed();
    unsigned long long passes = settings.m_passes;
    FireStarterResult* newPopulation = nullptr;
    FireStarterResult* oldPopulation = nullptr;
    FireStarterResult* hostPopulation = nullptr;

    for (unsigned int pass = 0; pass < passes; pass++) {
        unsigned int registers = state.m_uniqueRegisters;
        unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
        unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);

        if (m_simulateGPU) {
            if (pass & 1) {
                newPopulation = m_CUDAPopulation0->HostPtr();
                oldPopulation = m_CUDAPopulation1->HostPtr();
            } else {
                newPopulation = m_CUDAPopulation1->HostPtr();
                oldPopulation = m_CUDAPopulation0->HostPtr();
            }
            hostPopulation = newPopulation;
            m_CUDASettings->HostInit(&settings, m_settingsSize);

            blockDim = cudaBlockSize;
            for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
                for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                    for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                            for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                                for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                    MoneyOptimizer(m_CUDASettings->HostPtr(), newPopulation, oldPopulation, m_CUDAStocks->HostPtr(), registers, optimizeSeed, optimizePass);

            unsigned int hash = 0;
            for (unsigned int i = 0; i < settings.m_population; i++) {
                const FireStarterResult* member = FireStarterPopulation::PopulationResult(newPopulation, settings, i);
                float curResult = member->MaxResult();
                hash ^= *(unsigned int*)&curResult;
            }
        } else {
            if (pass & 1) {
                hostPopulation = m_CUDAPopulation0->HostPtr();
                newPopulation = m_CUDAPopulation0->DevicePtr();
                oldPopulation = m_CUDAPopulation1->DevicePtr();
            } else {
                hostPopulation = m_CUDAPopulation1->HostPtr();
                newPopulation = m_CUDAPopulation1->DevicePtr();
                oldPopulation = m_CUDAPopulation0->DevicePtr();
            }
            m_CUDASettings->DeviceInit(&settings, m_settingsSize);

            void* arr[] = { reinterpret_cast<void*>(&m_CUDASettings->DevicePtr()),
                            reinterpret_cast<void*>(&newPopulation),
                            reinterpret_cast<void*>(&oldPopulation),
                            reinterpret_cast<void*>(&m_CUDAStocks->DevicePtr()),
                            reinterpret_cast<void*>(&registers),
                            reinterpret_cast<void*>(&optimizeSeed),
                            reinterpret_cast<void*>(&optimizePass)
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
    } else {
        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1)
            checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
    }

    // Gather the best results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = FireStarterPopulation::PopulationMaxResult(hostPopulation, settings, 0);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = FireStarterPopulation::PopulationMaxResult(hostPopulation, settings, i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Store the state's best result.
    state.InitResult(settings, hostPopulation, minIndex);

    // Calculate the state's max result.
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = minResult;
    state.m_optimizeValid = true;
} // ExecuteMoneyOptimizePass

void FireStarterExecute::ExecuteMoneyTestPass(FireStarterState& state, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays)
{
    // Launch the calculation kernel
    if (m_CUDATradingData) {
        FireStarterSettings settings = state.Settings();
        unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;
        unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        const FireStarterResult& bestResult = state.Result();
        m_CUDATradingData->HostInit(&bestResult.m_data, m_tradingDataSize);
        m_CUDASettings->HostInit(&settings, m_settingsSize);

        if (m_simulateGPU) {
            blockDim = { settings.m_stocks, 1, 1 };
            blockIdx = { 0, 0, 0 };
            threadIdx = { 0, 0, 0 };
            for (threadIdx.x = 0; threadIdx.x < blockDim.x; threadIdx.x++)
                MoneyTester(m_CUDASettings->HostPtr(), m_CUDAStocks->HostPtr(), m_CUDATradingResults->HostPtr(), m_CUDATradingData->HostPtr(), startDay, tradingDays, validationDays);
        } else {
            cudaGridSize = { 1, 1, 1 };
            cudaBlockSize = { settings.m_stocks, 1, 1 };

            m_CUDASettings->HostToDevices();
            m_CUDATradingResults->HostToDevices();
            m_CUDATradingData->HostToDevices();

            FireStarterCode* nullCode = nullptr;
            void* arr[] = { reinterpret_cast<void*>(&m_CUDASettings->DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDAStocks->DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDATradingResults->DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDATradingData->DevicePtr()),
                            reinterpret_cast<void*>(&startDay),
                            reinterpret_cast<void*>(&tradingDays),
                            reinterpret_cast<void*>(&validationDays)
            };

            checkCUDAErrors(cuLaunchKernel(m_executeTest,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                &arr[0],                                            // arguments
                0));

            m_CUDATradingResults->DeviceToHost();
            Context()->Synchronize();
        }
    }
} // ExecuteMoneyTestPass

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

void FireStarterExecute::ExecuteSetStocks(const MoneyMakerStocks *stocks)
{
    DispatchSync([this, stocks] {
        InitStocks(stocks);
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

void FireStarterExecute::ExecuteEvolveGPU(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteEvolveGPUPass(evolveState);
        }
    });
} // ExecuteEvolveGPU

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

void FireStarterExecute::ExecuteMoneyEvolve(FireStarterState& evolveState)
{
    DispatchSync([this, &evolveState] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteMoneyEvolvePass(evolveState);
        }
    });
} // ExecuteMoneyEvolve

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
                // Initialize the optimize pass at zero.
                optimizeState.m_optimize_pass = 0;
                while (!WillTerminate() && !bestState.Complete() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    optimizeState.m_timer.Start();
                    ExecuteMoneyOptimizePass(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete && complete->CompleteState(bestState, optimizeState, m_CUDAStocks->HostPtr(), m_CUDATradingResults->HostPtr()))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }
            }
        }
    });
} // ExecuteMoneyOptimize

MoneyMakerStocks* FireStarterExecute::ExecuteMoneyTest(FireStarterState& testState, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays)
{
    DispatchSync([this, &testState, startDay, tradingDays, validationDays] {
        if (m_executeFunction) {
            if (InitPopulation(testState.Settings())) {
                // Execute the optimization passes.
                testState.m_timer.Start();
                ExecuteMoneyTestPass(testState, startDay, tradingDays, validationDays);
            }
        }
    });
    return m_CUDATradingResults->HostPtr();
} // ExecuteMoneyTest

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
        FinishStocks();
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
    return m_CUDATradingResults->HostPtr();
} // GetTradingResults

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index, int priority) : CUDAThread(Format("FireStarterExecute%zu", index), 0, priority)
{
    m_executeManager = manager;
    m_executeIndex = index;
    m_numDevices = CUDAContext::CUDADevices();
    if (m_numDevices) {
        for (unsigned int i = 0; i < m_numDevices; i++) {
            CUDAThread* thread = new CUDAThread(Format("FireStarterExecuteThread%zu", index), i, priority);
            m_CUDAThreads.push_back(thread);
        }
        m_executeGenerate = new FireStarterGenerate(m_CUDAThreads[0]->Context());
    }
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
    ExecuteFinish();
    delete m_executeGenerate;
} // ~FireStarterExecute(void)
