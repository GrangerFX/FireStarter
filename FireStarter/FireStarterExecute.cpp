#include "FireStarterExecute.h"
#include "FireStarterSource.h"
#include "FireStarterUtil.h"
#include "CUDAContext.h"

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

void FireStarterExecute::FinishPopulation(void)
{
    m_CUDASettings.Clear();
    m_settingsSize = 0;

    m_CUDAResults.Clear();
    m_resultsSize = 0;

    m_CUDACodes.Clear();
    m_codesSize = 0;

    m_CUDAPopulation0.Clear();
    m_CUDAPopulation1.Clear();
    m_populationSize = 0;

    m_CUDAParentCode.Clear();
    m_parentCodeSize = 0;

    m_CUDANetworks.Clear();
    m_networksSize = 0;

    m_CUDATradingData.Clear();
    m_tradingDataSize = 0;

    SynchronizeContext();
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

    if ((settings.m_mode == FIRESTARTER_SELECT) || (settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_EVOLVE_NEW) || (settings.m_mode == FIRESTARTER_EVOLVE_SINSIM) || (settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_MONEYOPTIMIZE) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        resultsSize = settings.m_population * sizeof(float);
        codesSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if (settings.m_mode != FIRESTARTER_MONEYMAKER)
            populationSize = FireStarterPopulation::PopulationSize(settings);
        if (settings.m_mode == FIRESTARTER_SELECT)
            parentCodeSize = FireStarterCode::CodeSize(settings);
        if ((settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_MONEYOPTIMIZE)) {
            settingsSize = sizeof(FireStarterSettings);
            tradingDataSize = FireStarterData::DataSize(settings);
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
            m_CUDASettings.Init(Context(), m_settingsSize);
        if (m_resultsSize)
            m_CUDAResults.Init(Context(), m_resultsSize, settings.m_population);
        if (m_codesSize)
            m_CUDACodes.Init(Context(), m_codesSize, settings.m_population);
        if (m_populationSize) {
            m_CUDAPopulation0.Init(Context(), m_populationSize, settings.m_population);
            m_CUDAPopulation1.Init(Context(), m_populationSize, settings.m_population);
        }
        if (m_parentCodeSize)
            m_CUDAParentCode.Init(Context(), m_parentCodeSize);
        if (m_networksSize)
            m_CUDANetworks.Init(Context(), m_networksSize, settings.m_population);
        if (m_tradingDataSize)
            m_CUDATradingData.Init(Context(), m_tradingDataSize);
        SynchronizeContext();
    }
    return result; // Always true curently.
} // InitPopulation

void FireStarterExecute::FinishStocks(void)
{
    m_CUDAStocks.Clear();
    m_CUDATradingResults.Clear();
    m_stocksSize = 0;
    SynchronizeContext();
} // FinishStocks

bool FireStarterExecute::InitStocks(const MoneyMakerStocks* stocks)
{
    size_t stocksSize = stocksSize = stocks ? stocks->StocksSize() : 0;
    if (stocksSize != m_stocksSize) {
        FinishStocks();
        m_stocksSize = stocksSize;
        if (m_stocksSize) {
            m_CUDAStocks.Init(Context(), m_stocksSize);
            m_CUDAStocks.Copy(stocks, m_stocksSize);

            m_CUDATradingResults.Init(Context(), m_stocksSize);
            m_CUDATradingResults.HostPtr()->Init(stocks->numStocks, stocks->numDays);
            m_CUDATradingResults.HostToDevice(true);
        }
    }
    return true;
} // InitStocks

void FireStarterExecute::ExecuteSelectPass(FireStarterState& state, const FireStarterSettings& selectSettings)
{
    // Launch the calculation kernel
    unsigned int populationCount = selectSettings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int variation = state.MaxVariation();
    unsigned int passes = selectSettings.m_passes;
    FireStarterCode* parentCode = state.m_code.CodePtr();

    m_CUDAParentCode.Copy(parentCode, m_parentCodeSize);
    if (m_simulateGPU) {
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                Selecter(m_CUDAResults.HostPtr(), m_CUDAPopulation0.HostPtr(), m_CUDACodes.HostPtr(), m_CUDAParentCode.HostPtr(), seed, passes, populationCount, variation);
     } else {

        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAParentCode.DevicePtr()),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationCount),
                        reinterpret_cast<void*>(&variation)
        };

        checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        m_CUDAPopulation0.DeviceToHost();
        m_CUDAResults.DeviceToHost();
        m_CUDACodes.DeviceToHost();
        SynchronizeContext();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = selectSettings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationCount; i++) {
        float curResult = m_CUDAResults.HostPtr()[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best code.
    state.InitCode(selectSettings, m_CUDACodes.HostPtr(), minResult, minIndex);
} // ExecuteSelectPass

void FireStarterExecute::ExecuteEvolveGPUPass(FireStarterState& state, FireStarterBestCodes& bestCodes)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int variation = FIRESTARTER_VARIATION;

    if (m_simulateGPU) {
        unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
        unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                EvolverGPU(m_CUDAResults.HostPtr(), m_CUDAPopulation0.HostPtr(), m_CUDACodes.HostPtr(), variation, seed, passes, populationCount);
    } else {
        unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
        unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
        CUDAParameters parameters(m_CUDAResults.DevicePtr(), m_CUDAPopulation0.DevicePtr(), m_CUDACodes.DevicePtr(), variation, seed, passes, populationCount);

        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            parameters.Parameters(),                            // arguments
            0));

        m_CUDAResults.DeviceToHost();
        m_CUDACodes.DeviceToHost();
        m_CUDAPopulation0.DeviceToHost();
        SynchronizeContext();
    }

    bool validResult = false;
    float minResult = m_CUDAResults.HostPtr()[0];
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationCount; i++) {
        float curResult = m_CUDAResults.HostPtr()[i];
        if (curResult < minResult) {
            if (!curResult) {
                int foo = 1;
            }
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < bestCodes.WorstResult())
            bestCodes.AddCode(m_CUDACodes.HostPtr()->Member(settings, i), curResult);
    }

    // Update the state's best code.
    state.InitCode(settings, m_CUDACodes.HostPtr(), minResult, minIndex);
    if (m_CUDAPopulation0.HostPtr())
        state.InitResult(settings, m_CUDAPopulation0.HostPtr(), minIndex, variation);
    state.MaxResult(variation) = minResult;
} // ExecuteEvolveGPUPass

void FireStarterExecute::ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
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
                                EvolverNew(m_CUDAResults.HostPtr(), m_CUDAPopulation0.HostPtr(), m_CUDACodes.HostPtr(), variation, seed, passes, populationCount);
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes.DevicePtr()),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationCount)
        };

        checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        m_CUDAPopulation0.DeviceToHost();
        m_CUDACodes.DeviceToHost();
        SynchronizeContext();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0.HostPtr(), settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationCount; i++) {
        const FireStarterCode* code = m_CUDACodes.HostPtr()->Member(settings, i);
        float curResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0.HostPtr(), settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitResult(settings, m_CUDACodes.HostPtr(), m_CUDAPopulation0.HostPtr(), minIndex, variation);

    // Note: The above is used by Optimize and does not init the following variables:
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = minResult;
    state.m_minIndex = minIndex;
    state.m_optimizeValid = true;
} // ExecuteEvolveNewPass

void FireStarterExecute::ExecuteEvolveSinSimPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
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
                                EvolverSinSim(m_CUDAResults.HostPtr(), m_CUDAPopulation0.HostPtr(), m_CUDACodes.HostPtr(), variation, seed, passes, populationCount);
    }
    else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDAResults.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDAPopulation0.DevicePtr()),
                        reinterpret_cast<void*>(&m_CUDACodes.DevicePtr()),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationCount)
        };

        checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        m_CUDAPopulation0.DeviceToHost();
        m_CUDACodes.DeviceToHost();
        SynchronizeContext();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0.HostPtr(), settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < populationCount; i++) {
        const FireStarterCode* code = m_CUDACodes.HostPtr()->Member(settings, i);
        float curResult = FireStarterPopulation::PopulationMaxResult(m_CUDAPopulation0.HostPtr(), settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitResult(settings, m_CUDACodes.HostPtr(), m_CUDAPopulation0.HostPtr(), minIndex, variation);

    // Note: The above is used by Optimize and does not init the following variables:
    state.m_oldResult = state.m_bestResult;
    state.m_bestResult = minResult;
    state.m_minIndex = minIndex;
    state.m_optimizeValid = true;
} // ExecuteEvolveSinSimPass

void FireStarterExecute::ExecuteSinSimPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
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
                                SinSim(m_CUDANetworks.HostPtr(), variation, generation, seed, passes, populationCount);
    } else {
        void* arr[] = { reinterpret_cast<void*>(&m_CUDANetworks.DevicePtr()),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&generation),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&passes),
                        reinterpret_cast<void*>(&populationCount)
        };

        checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        m_CUDANetworks.DeviceToHost();
        SynchronizeContext();
    }

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    SinSimNetwork minNetwork;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationCount; i++) {
        SinSimNetwork& network = m_CUDANetworks.HostPtr()[i];
        if (network.grade < minResult) {
            minResult = network.grade;
            minNetwork = m_CUDANetworks.HostPtr()[i];
            minIndex = i;
        }
    }

    // Update the state's best results.
    state.InitNetwork(settings, minNetwork, minIndex);
} // ExecuteSinSimPass

void FireStarterExecute::ExecuteMoneyEvolvePass(FireStarterState& state, FireStarterBestCodes& bestCodes)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;
    unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long evolutionSeed = state.EvolutionSeed();
    unsigned int stock = 0;

    float averageResult = 0.0f;
    if (m_simulateGPU) {
        m_CUDASettings.Copy(&settings, m_settingsSize);
        FireStarterResult* populationPtr = m_CUDAPopulation0.HostPtr();

        blockDim = cudaBlockSize;
        for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
            for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                    for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                        for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                            for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                MoneyEvolve(m_CUDASettings.HostPtr(),
                                            m_CUDAResults.HostPtr(),
                                            m_CUDACodes.HostPtr(),
                                            populationPtr,
                                            m_CUDAStocks.HostPtr(),
                                            evolutionSeed);
    } else {
        m_CUDASettings.Copy(&settings, m_settingsSize);
        CUDALaunch(m_executeFunctionName, threadsPerBlock, blocksPerGrid, m_CUDASettings.DevicePtr(), m_CUDAResults.DevicePtr(), m_CUDACodes.DevicePtr(), m_CUDAPopulation0.DevicePtr(), m_CUDAStocks.DevicePtr(), evolutionSeed);

        m_CUDAResults.DeviceToHost();
        m_CUDACodes.DeviceToHost();
        m_CUDAPopulation0.DeviceToHost();
        SynchronizeContext();
    }

    // Check if the user quit the app.
    if (!WillTerminate()) {
        float bestResult = settings.m_startResult;
        unsigned int goodResults = 0;
        unsigned int bestIndex = 0;
        for (unsigned int i = 0; i < settings.m_population; i++) {
            float curResult = m_CUDAResults.HostPtr()[i];
            if (curResult < settings.m_startResult) {
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = i;
                }
                if (curResult < bestCodes.WorstResult())
                    bestCodes.AddCode(m_CUDACodes.HostPtr()->Member(settings, i), curResult);
                goodResults++;
            }
        }

        float goodPercent = 100.0f * (float)goodResults / (float)settings.m_population;
        if (m_CUDAPopulation0.Allocated()) {
            const FireStarterCode& minCode = m_CUDACodes.HostPtr()->Member(settings, bestIndex);
            const FireStarterResult& minResult = m_CUDAPopulation0.HostPtr()->Member(settings, bestIndex);
            unsigned int minAge = minResult.m_evolveAge1;
            int foo = 1;
        }

        // Update the state's best code.
        state.InitCode(settings, m_CUDACodes.HostPtr(), bestResult, bestIndex);
        state.MaxResult() = bestResult;
    }
} // ExecuteMoneyEvolvePass

void FireStarterExecute::ExecuteOptimizePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int populationCount = settings.m_population;
    unsigned long long passes = settings.m_passes;
    FireStarterResult* newPopulation = nullptr;
    FireStarterResult* oldPopulation = nullptr;

    if (m_simulateGPU) {
        for (unsigned int pass = 0; pass < passes; pass++) {
            // Run all the evolve states in parallel.
            unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
            unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
            dim3 cudaBlockSize(threadsPerBlock, 1, 1);
            dim3 cudaGridSize(blocksPerGrid, 1, 1);
            unsigned int registers = state.m_uniqueRegisters;
            unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
            unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);
            FireStarterResult* newPopulation = pass & 1 ? m_CUDAPopulation0.HostPtr() : m_CUDAPopulation1.HostPtr();
            FireStarterResult* oldPopulation = pass & 1 ? m_CUDAPopulation1.HostPtr() : m_CUDAPopulation0.HostPtr();

            blockDim = cudaBlockSize;
            for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
                for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                    for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                            for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                                for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                    Optimizer(newPopulation, oldPopulation, variation, registers, optimizeSeed, optimizePass, populationCount);

            // Check if the user quit the app.
            if (WillTerminate())
                return;
        }
        if (passes & 1)
            memcpy(oldPopulation, newPopulation, m_populationSize);
    } else {
        for (unsigned int pass = 0; pass < passes; pass++) {
            unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
            unsigned int blocksPerGrid = (populationCount + (threadsPerBlock - 1)) / threadsPerBlock;
            dim3 cudaBlockSize(threadsPerBlock, 1, 1);
            dim3 cudaGridSize(blocksPerGrid, 1, 1);
            unsigned int registers = state.m_uniqueRegisters;
            unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
            unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);
            CUdeviceptr newPopulation = pass & 1 ? m_CUDAPopulation0.DevicePtr() : m_CUDAPopulation1.DevicePtr();
            CUdeviceptr oldPopulation = pass & 1 ? m_CUDAPopulation1.DevicePtr() : m_CUDAPopulation0.DevicePtr();
            CUDAParameters parameters(newPopulation, oldPopulation, variation, registers, optimizeSeed, optimizePass, populationCount);

            checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                parameters.Parameters(),                            // arguments
                0));
            SynchronizeContext();

            // Check if the user quit the app.
            if (WillTerminate())
                return;
        }

        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1) {
            CUdeviceptr cudaPopulation0 = m_CUDAPopulation0.DevicePtr();
            CUdeviceptr cudaPopulation1 = m_CUDAPopulation1.DevicePtr();
            checkCUDAErrors(cuMemcpyDtoDAsync(cudaPopulation0, cudaPopulation1, m_populationSize, Stream()));
        }
        m_CUDAPopulation0.DeviceToHost();
        SynchronizeContext();
    }

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    FireStarterResult* hostPopulation = m_CUDAPopulation0.HostPtr();
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

    for (unsigned int pass = 0; pass < passes; pass++) {
        unsigned int registers = state.m_uniqueRegisters;
        unsigned long long optimizePass = state.m_optimize_pass * passes + pass;
        unsigned long long optimizeSeed = state.OptimizationSeed(optimizePass);

        m_CUDASettings.Copy(&settings, m_settingsSize);
        if (m_simulateGPU) {
            FireStarterResult* newPopulation = (pass & 1) ? m_CUDAPopulation0.HostPtr() : m_CUDAPopulation1.HostPtr();
            FireStarterResult* oldPopulation = (pass & 1) ? m_CUDAPopulation1.HostPtr() : m_CUDAPopulation0.HostPtr();

            blockDim = cudaBlockSize;
            for (blockIdx.x = 0; blockIdx.x < cudaGridSize.x; blockIdx.x++)
                for (blockIdx.y = 0; blockIdx.y < cudaGridSize.y; blockIdx.y++)
                    for (blockIdx.z = 0; blockIdx.z < cudaGridSize.z; blockIdx.z++)
                        for (threadIdx.x = 0; threadIdx.x < cudaBlockSize.x; threadIdx.x++)
                            for (threadIdx.y = 0; threadIdx.y < cudaBlockSize.y; threadIdx.y++)
                                for (threadIdx.z = 0; threadIdx.z < cudaBlockSize.z; threadIdx.z++)
                                    MoneyOptimizer(m_CUDASettings.HostPtr(), newPopulation, oldPopulation, m_CUDAStocks.HostPtr(), registers, optimizeSeed, optimizePass);

            unsigned int hash = 0;
            for (unsigned int i = 0; i < settings.m_population; i++) {
                const FireStarterResult* member = FireStarterPopulation::PopulationResult(newPopulation, settings, i);
                float curResult = member->MaxResult();
                hash ^= *(unsigned int*)&curResult;
            }
        } else {
            CUdeviceptr newPopulation = (pass & 1) ? m_CUDAPopulation0.DevicePtr() : m_CUDAPopulation1.DevicePtr();
            CUdeviceptr oldPopulation = (pass & 1) ? m_CUDAPopulation1.DevicePtr() : m_CUDAPopulation0.DevicePtr();

            void* arr[] = { reinterpret_cast<void*>(&m_CUDASettings.DevicePtr()),
                            reinterpret_cast<void*>(&newPopulation),
                            reinterpret_cast<void*>(&oldPopulation),
                            reinterpret_cast<void*>(&m_CUDAStocks.DevicePtr()),
                            reinterpret_cast<void*>(&registers),
                            reinterpret_cast<void*>(&optimizeSeed),
                            reinterpret_cast<void*>(&optimizePass)
            };

            checkCUDAErrors(cuLaunchKernel(Module().m_executeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                &arr[0],                                            // arguments
                0));

            // Synchronize all GPU threads and results.
            SynchronizeContext();
        }
    }

    if (m_simulateGPU) {
        if (passes & 1)
            memcpy(m_CUDAPopulation0.HostPtr(), m_CUDAPopulation1.HostPtr(), m_populationSize);
    } else {
        // If the number off passes is odd, copy the new population to the old population for the next pass.
        if (passes & 1) {
            CUdeviceptr cudaPopulation0 = m_CUDAPopulation0.DevicePtr();
            CUdeviceptr cudaPopulation1 = m_CUDAPopulation1.DevicePtr();
            checkCUDAErrors(cuMemcpyDtoDAsync(cudaPopulation0, cudaPopulation1, m_populationSize, Stream()));
        }
        m_CUDAPopulation0.DeviceToHost();
        SynchronizeContext();
    }

    // Gather the best results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    FireStarterResult* hostPopulation = m_CUDAPopulation0.HostPtr();
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
    if (m_CUDATradingData.Allocated()) {
        FireStarterSettings settings = state.Settings();
        unsigned int threadsPerBlock = FIRESTARTER_BLOCK_THREADS;
        unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        const FireStarterResult& bestResult = state.Result();
        m_CUDATradingData.Copy(&bestResult.m_data, m_tradingDataSize);
        m_CUDASettings.Copy(&settings, m_settingsSize);

        if (m_simulateGPU) {
            blockDim = { settings.m_stocks, 1, 1 };
            blockIdx = { 0, 0, 0 };
            threadIdx = { 0, 0, 0 };
            for (threadIdx.x = 0; threadIdx.x < blockDim.x; threadIdx.x++)
                MoneyTester(m_CUDASettings.HostPtr(), m_CUDAStocks.HostPtr(), m_CUDATradingResults.HostPtr(), m_CUDATradingData.HostPtr(), startDay, tradingDays, validationDays);
        } else {
            cudaGridSize = { 1, 1, 1 };
            cudaBlockSize = { settings.m_stocks, 1, 1 };

            m_CUDASettings.HostToDevice();
            m_CUDATradingResults.HostToDevice();
            m_CUDATradingData.HostToDevice();

            FireStarterCode* nullCode = nullptr;
            void* arr[] = { reinterpret_cast<void*>(&m_CUDASettings.DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDAStocks.DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDATradingResults.DevicePtr()),
                            reinterpret_cast<void*>(&m_CUDATradingData.DevicePtr()),
                            reinterpret_cast<void*>(&startDay),
                            reinterpret_cast<void*>(&tradingDays),
                            reinterpret_cast<void*>(&validationDays)
            };

            checkCUDAErrors(cuLaunchKernel(Module().m_executeTest,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                Stream(),                                           // stream
                &arr[0],                                            // arguments
                0));

            m_CUDATradingResults.DeviceToHost();
            SynchronizeContext();
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
    m_executeFunctionName = FireStarterSettings::OptimizeFunctionName(job->m_state.PassMode());
    m_executeTestName = FireStarterSettings::OptimizeTestName(job->m_state.PassMode());
    bool result = Module().BuildModulePtx(job->m_ptx, m_executeFunctionName, m_executeTestName);

    // If something went wrong so free the job.
    if (!result) {
        m_executeManager->AddFree(job);
        job = nullptr;
    }
    return result;
} // Compile

void FireStarterExecute::GenerateCode(FireStarterJob* job)
{
    // Generate the optimize code
    if (m_executeCode.empty()) {
        unsigned int mode = job->m_state.Settings().m_mode;
        m_executeProgramName = FireStarterSettings::OptimizeProgramName(mode);
        m_executeFunctionName = FireStarterSettings::OptimizeFunctionName(mode);
        m_executeTestName = FireStarterSettings::OptimizeTestName(mode);
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName.c_str());
            std::terminate();
        }
    }

    // Generate the evaluate code
    std::string evaluateCode;
    m_executeGenerate.GenerateEvaluate(job->m_state.Settings(), job->m_state.Code(), evaluateCode);
    job->m_state.m_evaluateCode = evaluateCode;

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    CUDACompile::CompileOptions(job->m_options);
    job->m_programName = m_executeProgramName;
    job->m_program = m_executeCode;
    FireStarterSource::UpdateProgram(job->m_program, evaluateCode, EVALUATE_CODE);
    m_executeManager->AddCode(job);
} // GenearateCode

bool FireStarterExecute::ExecuteJob(void)
{
    // Compile the next job.
    FireStarterJob* job = nullptr;
    Compile(job);

    // If the compile was successful, execute the job and add it to the complete list.
    if (job) {
        FireStarterState& state = job->m_state;
        if (InitPopulation(state.Settings())) {
            ExecuteSmartOptimizePasses(state);
            m_executeManager->AddComplete(job);
            return true;
        }
    }
    m_executeManager->AddComplete();
    return false;
} // ExecuteJob

bool FireStarterExecute::GenerateEvolve(unsigned int mode)
{
    // Evolve only needs to be generated once.
    if (Module().m_module && Module().m_executeFunction)
        return true;

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
    return Module().CompileProgram(m_executeCode, m_executeProgramName, m_executeFunctionName, m_executeTestName);
} // GenerateEvolve

bool FireStarterExecute::GenerateOptimize(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& evaluateCode, unsigned int mode)
{
    // Load the base Optimizer code into memory.
    // Note: The same execute code is used by all GPU device units.
    m_executeProgramName = FireStarterSettings::OptimizeProgramName(mode);
    m_executeFunctionName = FireStarterSettings::OptimizeFunctionName(mode);
    m_executeTestName = FireStarterSettings::OptimizeTestName(mode);
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName.c_str());
            std::terminate();
        }
    }

    // Generate the evaluate code.
    evaluateCode.clear();
    m_executeGenerate.GenerateEvaluate(settings, code, evaluateCode);

    // Create the Optimizer code by replacing the evaluate code block.
    FireStarterSource::UpdateProgram(m_executeCode, evaluateCode, EVALUATE_CODE);

    // Compile the code and get the Optimizer function from the module.
    return Module().CompileProgram(m_executeCode, m_executeProgramName, m_executeFunctionName, m_executeTestName);
} // GenerateOptimize

bool FireStarterExecute::ExecuteRandomState(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        FireStarterState evolveState(state);
        evolveState.InitGenerationSeed();
        const FireStarterSettings& settings = evolveState.Settings();
        unsigned int numInstructions = settings.m_instructions;
        float bestResult = evolveState.MaxResults();
        FireStarterJob* job = m_executeManager->GetFree();
        if (job) {
            // Randomize the program.
            job->m_state = evolveState;
            job->m_state.RandomCode();

            // Optimize the program registers.
            job->m_state.OptimizeCode();

            // Generate the evaluate code
            GenerateCode(job);
        } else
            // Pass along the null job to cause the next stage to exit.
            m_executeManager->AddCode();
        }, sync);
    return true;
} // ExecuteRandomState

bool FireStarterExecute::ExecuteSelectStates(unsigned long long test, const FireStarterSettings& selectSettings, const FireStarterSettings& optimizeSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation)
{
    DispatchSync([this, test, &selectSettings, &optimizeSettings, &allStates, &testedCodes, generation] {
        unsigned long long numStates = selectSettings.m_states;
        unsigned long long randomStates = generation == 0 ? numStates : FIRESTARTER_EVOLVE_RANDOM;
        unsigned long long totalStates = allStates.size();

        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_executeManager->GetFree();
            if (job) {
                FireStarterState& curState = job->m_state;

                // Evolved states are generated first so they cannot used the random states created in this generation.
                if (index < randomStates) {
                    // Randomize the instructions.
                    curState.InitState(optimizeSettings, 0, index, allStates.size(), test);

                    // Keep randomizing the code until a unique set of instructions is found.
                    const FireStarterCode* bestCode = nullptr;
                    do {
                        // Randomize the program.
                        curState.RandomCode();

                        // Optimize the program registers.
                        curState.OptimizeCode();

                        // Select the best candidate evolution variation.
                        if (GenerateEvolve(selectSettings.m_mode)) {
                            curState.m_timer.Start();
                            if (InitPopulation(selectSettings))
                                ExecuteSelectPass(curState, selectSettings);
                        }
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // Set the state mode to optimize.
                    curState.m_settings.SetMode(FIRESTARTER_OPTIMIZE);

                    // Add the state to the list of active states.
                    allStates.push_back(curState);
                } else {
                    // Find the best state to evolve based on a weighting algorithm.
                    float evolveWeight = 0.0f;
                    size_t evolveIndex = 0;
                    for (size_t curIndex = 0; curIndex < totalStates; curIndex++) {
                        FireStarterState& curState = allStates[curIndex];
                        float curWeight = curState.SelectWeight();
                        if (!curIndex || (curWeight < evolveWeight)) {
                            evolveWeight = curWeight;
                            evolveIndex = curIndex;
                        }
                    }

                    // Loop until a unique new state is found.
                    FireStarterState& oldState = allStates[evolveIndex];

                    // Keep varying the code until a unique set of instructions is found.
                    const FireStarterCode* bestCode = nullptr;
                    do {
                        // Copy and setup the new candidate state.
                        // Note: The bestCodes are initialized instead of copied.
                        curState = oldState;

                        // Copy the program and result from the random index.
                        curState.CopyCode(allStates[evolveIndex]);

                        // Note: The age and generation will increment even if the current instructions are not unique by design.
                        curState.m_age = ++oldState.m_age;
                        curState.m_generation = ++oldState.m_generation;
                        curState.m_evolution++;
                        curState.m_index = index;
                        curState.m_evolveIndex = evolveIndex;
                        curState.m_oldResult = oldState.MaxResults();
                        curState.m_evolveWeight = evolveWeight;
                        curState.InitGenerationSeed();
                        curState.m_timer.Start();

                        // Select the best candidate evolution variation.
                        ExecuteSelect(curState, selectSettings);
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // The optimize pass should be compared with the best result of the last generation and not from the select code evolution.
                    curState.m_bestResult = oldState.m_bestResult;
                }

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_executeManager->AddCode();
        }
    });
    return true;
} // ExecuteSelectStates

bool FireStarterExecute::EvolveStates(unsigned long long test, const FireStarterSettings& evolveSettings, FireStarterStates& allStates, TestedCodes& testedCodes, unsigned long long generation)
{
    DispatchSync([this, test, &evolveSettings, &allStates, &testedCodes, generation] {
        unsigned long long numStates = evolveSettings.m_states;
        unsigned long long randomStates = generation == 0 ? numStates : FIRESTARTER_EVOLVE_RANDOM;
        unsigned long long totalStates = allStates.size();

        for (unsigned long long index = 0; index < numStates; index++) {
            FireStarterJob* job = m_executeManager->GetFree();
            if (job) {
                // Evolved states are generated first so they cannot used the random states created in this generation.
                if (index < randomStates) {
                    // Randomize the instructions.
                    FireStarterState& curState = job->m_state;
                    curState.InitState(evolveSettings, 0, index, allStates.size(), test);

                    // Keep randomizing instructions until a unique set of instructions is found.
                    do {
                        // Randomize the program.
                        curState.RandomCode();

                        // Optimize the program registers.
                        curState.OptimizeCode();
                    } while (testedCodes.count(curState.CodeVector()));

                    // Add the instructions to the set of unique instructions.
                    testedCodes.insert(curState.CodeVector());

                    // Add the state to the list of active states.
                    allStates.push_back(curState);
                } else {
                    // Find the best state to evolve based on a weighting algorithm.
                    float evolveWeight = 0.0f;
                    size_t evolveIndex = 0;
                    for (size_t curIndex = 0; curIndex < totalStates; curIndex++) {
                        FireStarterState& curState = allStates[curIndex];
                        float curWeight = curState.EvolveWeight();
                        if (!curIndex || (curWeight < evolveWeight)) {
                            evolveWeight = curWeight;
                            evolveIndex = curIndex;
                        }
                    }

                    // Loop until a unique new state is found.
                    for (;;) {
                        // Copy and setup the new candidate state.
                        FireStarterState& oldState = allStates[evolveIndex];
                        FireStarterState& curState = job->m_state;
                        curState = oldState;

                        // Note: The age and generation will increment even if the current instructions are not unique by design.
                        curState.m_age = ++oldState.m_age;
                        curState.m_generation = ++oldState.m_generation;
                        curState.m_evolution++;
                        curState.m_index = index;
                        curState.m_evolveIndex = evolveIndex;
                        curState.m_oldResult = curState.MaxResults();
                        curState.m_evolveWeight = evolveWeight;
                        curState.InitGenerationSeed();
                        curState.m_timer.Start();

                        // Copy the program and result from the random index.
                        curState.CopyCode(allStates[evolveIndex]);

                        // Randomize 2 and 3 instructions alternately.
                        curState.RandomInstruction();
                        curState.RandomInstruction();
                        if (generation & 1)
                            curState.RandomInstruction();

                        // Optimize the program registers.
                        curState.OptimizeCode();

                        // Check if the optimized instructions are unique.
                        if (!testedCodes.count(curState.CodeVector())) {
                            // Add the instructions to the set of unique instructions.
                            testedCodes.insert(curState.CodeVector());
                            break;
                        }
                    }
                }

                // Generate the evaluate code
                GenerateCode(job);
            } else
                // Pass along the null job to cause the next stage to exit.
                m_executeManager->AddCode();
        }
    });
    return true;
} // EvolveStates

void FireStarterExecute::ExecuteSetStocks(const MoneyMakerStocks *stocks, bool sync)
{
    Dispatch([this, stocks] {
        InitStocks(stocks);
    }, sync);
} // ExecuteSetStocks

bool FireStarterExecute::ExecuteGenerateEvolve(unsigned int mode, bool sync)
{
    // Evolve only needs to be generated once.
    if (Module().m_module && Module().m_executeFunction)
        return true;

    // Compile the Evolver code for the specified mode.
    bool result = false;
    Dispatch([this, mode, &result] {
        result = GenerateEvolve(mode);
    }, sync);
    return sync ? result : true;
} // ExecuteGenerateEvolve

bool FireStarterExecute::ExecuteGenerateOptimize(FireStarterState& optimizeState, bool sync)
{
    bool result = false;
    Dispatch([this, &optimizeState, &result] {
        // Generate the evaluate code. Note: The same code is used by all GPU threads.
        optimizeState.m_evaluateCode.clear();
        m_executeGenerate.GenerateEvaluate(optimizeState.Settings(), optimizeState.Code(), optimizeState.m_evaluateCode);
        result = GenerateOptimize(optimizeState.Settings(), optimizeState.Code(), optimizeState.m_evaluateCode, optimizeState.PassMode());
    }, sync);
    return sync ? result : true;
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

void FireStarterExecute::ExecuteEvolveGPU(FireStarterState& evolveState, FireStarterBestCodes& bestCodes, bool sync)
{
    // Note: EvolveGPU has been converted to use multiple GPUs.
    Dispatch([this, &evolveState, &bestCodes] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings())) {
                ExecuteEvolveGPUPass(evolveState, bestCodes);
                evolveState.m_generation++;
            }
        }
    }, sync);
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
                ExecuteEvolveSinSimPass(evolveState);
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

void FireStarterExecute::ExecuteMoneyEvolve(FireStarterState& evolveState, FireStarterBestCodes& bestCodes, bool sync)
{
    Dispatch([this, &evolveState, &bestCodes] {
        if (GenerateEvolve(evolveState.Settings().m_mode)) {
            evolveState.m_timer.Start();
            if (InitPopulation(evolveState.Settings()))
                ExecuteMoneyEvolvePass(evolveState, bestCodes);
        }
    }, sync);
} // ExecuteMoneyEvolve

void FireStarterExecute::ExecuteEvolveOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete, bool sync)
{
    Dispatch([this, complete, &optimizeState, &bestState] {
        if (!Module().m_executeFunction || optimizeState.m_evaluateCode.empty()) {
            // Generate the evaluate code. Note: The same code is used by all GPU threads.
            optimizeState.m_evaluateCode.clear();
            m_executeGenerate.GenerateEvaluate(optimizeState.Settings(), optimizeState.Code(), optimizeState.m_evaluateCode);
            GenerateOptimize(optimizeState.Settings(), optimizeState.Code(), optimizeState.m_evaluateCode, optimizeState.PassMode());
        }
        if (Module().m_executeFunction) {
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
    }, sync);
} // ExecuteEvolveOptimize

void FireStarterExecute::ExecuteMoneyOptimize(FireStarterState& optimizeState, FireStarterState& bestState, FireStarterComplete* complete, bool sync)
{
    Dispatch([this, complete, &optimizeState, &bestState] {
        if (Module().m_executeFunction) {
            if (InitPopulation(optimizeState.Settings())) {
                // Initialize the optimize pass at zero.
                optimizeState.m_optimize_pass = 0;
                while (!WillTerminate() && (optimizeState.m_optimize_pass < optimizeState.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    optimizeState.m_timer.Start();
                    ExecuteMoneyOptimizePass(optimizeState);

                    // Update the results in the UI and check for completion.
                    if (complete && complete->CompleteState(bestState, optimizeState, m_CUDAStocks.HostPtr(), m_CUDATradingResults.HostPtr()))
                        break;

                    // Increment the generation.
                    optimizeState.m_optimize_pass++;
                }
            }
        }
    }, sync);
} // ExecuteMoneyOptimize

MoneyMakerStocks* FireStarterExecute::ExecuteMoneyTest(FireStarterState& testState, unsigned int startDay, unsigned int tradingDays, unsigned int validationDays)
{
    DispatchSync([this, &testState, startDay, tradingDays, validationDays] {
        if (Module().m_executeFunction) {
            if (InitPopulation(testState.Settings())) {
                // Execute the optimization passes.
                testState.m_timer.Start();
                ExecuteMoneyTestPass(testState, startDay, tradingDays, validationDays);
            }
        }
    });
    return m_CUDATradingResults.HostPtr();
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
        Module().ClearModule();
    });
} // ExecuteFinish

void FireStarterExecute::SimulateGPU(bool simulateGPU)
{
    m_simulateGPU = simulateGPU;
} // SimulateGPU

const MoneyMakerStocks* FireStarterExecute::GetTradingResults(void) const
{
    return m_CUDATradingResults.HostPtr();
} // GetTradingResults

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, const std::string& unitName, size_t index) : CUDAThread(Format("%s%zu", unitName.c_str(), index), index), m_executeGenerate(&Context(), &Module())
{
    m_executeManager = manager;
    m_executeIndex = index;
} // FireStaterExecute

FireStarterExecute::FireStarterExecute(const std::string& unitName, size_t index) : CUDAThread(Format("%s%zu", unitName.c_str(), index), index), m_executeGenerate(&Context(), &Module())
{
    m_executeManager = nullptr;
    m_executeIndex = index;
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{ 
    ExecuteFinish();
} // ~FireStarterExecute(void)
