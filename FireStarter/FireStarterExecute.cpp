#include "FireStarterExecute.h"
#include "FireStarterSource.h"
#include "CUDACompile.h"

// Not used currently.
inline float AtomicMin(std::atomic<float>& minFloat, float newFloat)
{
    float curFloat = minFloat;
    while ((newFloat < curFloat) && !minFloat.compare_exchange_weak(curFloat, newFloat))
        curFloat = minFloat;
    return curFloat;
} // AtomicMin

FireStarterCode* FireStarterBestCodes::GetBestCode(void)
{
    if (!m_numCodes)
        return nullptr;
    FireStarterCode* bestCode = m_bestCodes[0];
    float bestResult = m_bestResults[0];
    for (size_t i = 1; i < m_maxCodes; i++) {
        m_bestCodes[i - 1] = m_bestCodes[i];
        m_bestResults[i - 1] = m_bestResults[i];
    }
    m_bestCodes[m_maxCodes - 1] = bestCode;
    m_bestResults[m_maxCodes - 1] = bestResult;
    m_numCodes--;
    m_worstResult = m_settings.m_startResult;
    return bestCode;
} // GetBestCode

bool FireStarterBestCodes::AddCode(const FireStarterCode* code, float result)
{
    // Skip bad results entirely.
    if (result >= m_worstResult)
        return false;

    // Only add states with a unique instruction set.
    std::vector<unsigned char> codeInstructions(m_codeSize);
    memcpy(codeInstructions.data(), code, m_codeSize);
    if (m_testedCodes.count(codeInstructions))
        return false;
    m_testedCodes.insert(codeInstructions);

    // Insert the new code and result at the end of the list.
    float newResult = result;
    size_t newIndex = (m_numCodes < m_maxCodes) ? m_numCodes : --m_numCodes;
    m_bestResults[newIndex] = newResult;
    FireStarterCode* newCode = m_bestCodes[newIndex];
    memcpy(newCode, code, m_codeSize);

    for (size_t i = 0; i < m_numCodes; i++) {
        FireStarterCode* curCode = m_bestCodes[i];
        float curResult = m_bestResults[i];
        if (curResult > newResult) {
            for (size_t j = i; j < m_numCodes; j++) {
                curCode = m_bestCodes[j];
                curResult = m_bestResults[j];
                m_bestCodes[j] = newCode;
                m_bestResults[j] = newResult;
                newCode = curCode;
                newResult = curResult;
            }
            break;
        }
    }
    m_bestCodes[m_numCodes] = newCode;
    m_bestResults[m_numCodes] = newResult;
    m_numCodes++;
    return true;
} // AddCode

float FireStarterBestCodes::WorstResult(void)
{
    return m_worstResult;
} // WorstResult

FireStarterBestCodes::FireStarterBestCodes(const FireStarterSettings& settings, size_t maxCodes) : m_settings(settings)
{
    m_codeSize = FireStarterCode::CodeSize(m_settings);
    m_maxCodes = maxCodes;
    m_numCodes = 0;
    m_worstResult = m_settings.m_startResult;
    m_bestCodes.resize(m_maxCodes);
    m_bestResults.resize(m_maxCodes);
    for (size_t i = 0; i < m_maxCodes; i++) {
        m_bestCodes[i] = (FireStarterCode*)calloc(m_codeSize, 1);
        m_bestResults[i] = m_settings.m_startResult;
    }
} // FireStarterBestCodes

FireStarterBestCodes::~FireStarterBestCodes(void)
{
    for (size_t i = 0; i < m_maxCodes; i++)
        free(m_bestCodes[i]);
} // ~FireStarterBestCodes

void FireStarterExecute::FinishPopulation(void)
{
    checkCUDAErrors(cudaFreeHost(m_hostResults));
    m_hostResults = nullptr;
    checkCUDAErrors(cudaFreeAsync(m_deviceResults, Stream()));
    m_deviceResults = nullptr;

    checkCUDAErrors(cudaFreeHost(m_hostPopulation));
    m_hostPopulation = nullptr;
    for (FireStarterResult* result : m_devicePopulation0)
        checkCUDAErrors(cudaFreeAsync(result, Stream()));
    m_devicePopulation0.clear();
    for (FireStarterResult* result : m_devicePopulation1)
        checkCUDAErrors(cudaFreeAsync(result, Stream()));
    m_devicePopulation1.clear();

    checkCUDAErrors(cudaFreeHost(m_hostNetworks));
    checkCUDAErrors(cudaFreeAsync(m_deviceNetworks, Stream()));

    checkCUDAErrors(cudaFreeHost(m_hostCode));
    m_hostCode = nullptr;
    checkCUDAErrors(cudaFreeAsync(m_deviceCode, Stream()));
    m_deviceCode = nullptr;

    Context()->Synchronize();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    bool result = true;
    if ((settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_EVOLVE_NEW_GPU) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        // Reallocate the populations if the size has changed.
        size_t resultsSize = settings.m_population * sizeof(float);
        size_t populationSize = 0;
        if ((settings.m_mode == FIRESTARTER_EVOLVE_NEW_GPU) || FIRESTARTER_EVOLVE_RESULTS)
            populationSize = settings.m_population * FireStarterResult::ResultSize(settings);
        size_t codeSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if ((m_resultsSize != resultsSize) || (m_populationSize != populationSize) || (codeSize != m_codeSize)) {
            FinishPopulation();
            m_resultsSize = resultsSize;
            m_populationSize = populationSize;
            m_codeSize = codeSize;

            checkCUDAErrors(cudaMallocHost(&m_hostResults, resultsSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceResults, resultsSize, Stream()));
            checkCUDAErrors(cudaMallocHost(&m_hostCode, codeSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceCode, codeSize, Stream()));
            FireStarterResult* devicePopulation = nullptr;
            if (populationSize) {
                checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
                checkCUDAErrors(cudaMallocAsync(&devicePopulation, m_populationSize, Stream()));
            } else {
                m_hostPopulation = nullptr;
                devicePopulation = nullptr;
            }
            Context()->Synchronize();

            m_devicePopulation0.push_back(devicePopulation);
            result = m_hostResults && m_deviceResults && m_hostCode && m_deviceCode;
            if (populationSize)
                result = result && m_hostPopulation && devicePopulation;
        }
    } else if ((settings.m_mode == FIRESTARTER_RANDOM) || (settings.m_mode == FIRESTARTER_EVOLVE_CPU) || (settings.m_mode == FIRESTARTER_OPTIMIZE)) {
        // Reallocate the populations if the size has changed.
        size_t resultsSize = settings.m_population * sizeof(float);
        size_t populationSize = settings.m_population * FireStarterResult::ResultSize(settings);
        if ((m_resultsSize != resultsSize) || (m_populationSize != populationSize)) {
            FinishPopulation();
            m_resultsSize = resultsSize;
            m_populationSize = populationSize;

            checkCUDAErrors(cudaMallocHost(&m_hostResults, resultsSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceResults, resultsSize, Stream()));
            if (populationSize)
                checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
            else
                checkCUDAErrors(cudaMallocHost(&m_hostPopulation, FireStarterResult::ResultSize(settings)));
            Context()->Synchronize();

            result = m_hostResults && m_deviceResults && m_hostPopulation;

            for (unsigned int v = 0; v < settings.m_variations; v++) {
                FireStarterResult* devicePopulation0 = nullptr;
                checkCUDAErrors(cudaMallocAsync(&devicePopulation0, m_populationSize, Stream()));
                Context()->Synchronize();
                m_devicePopulation0.push_back(devicePopulation0);

                FireStarterResult* devicePopulation1 = nullptr;
                checkCUDAErrors(cudaMallocAsync(&devicePopulation1, m_populationSize, Stream()));
                Context()->Synchronize();
                m_devicePopulation1.push_back(devicePopulation1);

                result = result && devicePopulation0 && devicePopulation1;
            }
        }
    } else if (settings.m_mode == FIRESTARTER_SINSIM) {
        // Reallocate the populations if the size has changed.
        size_t networksSize = settings.m_population * sizeof(FireStarterNetwork);
        if (m_networksSize != networksSize) {
            FinishPopulation();

            m_networksSize = networksSize;
            checkCUDAErrors(cudaMallocHost(&m_hostNetworks, m_networksSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceNetworks, m_networksSize, Stream()));
            Context()->Synchronize();

            result = result && m_hostNetworks && m_deviceNetworks;
        }
    }
    return result;
} // InitPopulation

void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state, FireStarterBestCodes& bestCodes, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int populationSize = settings.m_population;

    void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                    reinterpret_cast<void*>(&m_devicePopulation0[0]),
                    reinterpret_cast<void*>(&m_deviceCode),
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

    if (m_populationSize) {
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0[0], m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCode, m_deviceCode, m_codeSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();

        // Get the best variation results.
        bool validResult = false;
        float minResult = settings.m_startResult;
        unsigned int minIndex = 0;
        for (unsigned int i = 0; i < populationSize; i++) {
            float curResult = *m_hostPopulation[i].MinResult();
            if (curResult < minResult) {
                minResult = curResult;
                minIndex = i;
            }
            if (curResult < bestCodes.WorstResult())
                bestCodes.AddCode(m_hostCode->Member(settings, i), curResult);
        }

        float oldResult = state.m_maxResult;
        state.InitResults(settings, m_hostPopulation, m_hostCode, minIndex);
        state.m_oldResult = oldResult;
    } else {
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostCode, m_deviceCode, m_codeSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();

        // Get the best variation results.
        bool validResult = false;
        float minResult = settings.m_startResult;
        unsigned int minIndex = 0;
        for (unsigned int i = 0; i < populationSize; i++) {
            float curResult = m_hostResults[i];
            if (curResult < minResult) {
                minResult = curResult;
                minIndex = i;
            }
            if (curResult < bestCodes.WorstResult())
                bestCodes.AddCode(m_hostCode->Member(settings, i), curResult);
        }

        float oldResult = state.m_maxResult;
        checkCUDAErrors(cudaMemcpyAsync(m_hostCode, FireStarterCode::Member(m_deviceCode, settings, minIndex), FireStarterCode::CodeSize(settings), cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
        state.InitResult(settings, minResult, m_hostCode->Member(settings, minIndex), minIndex);
        state.m_oldResult = oldResult;
    }
} // ExecuteEvolvePass

void FireStarterExecute::ExecuteEvolveNewPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int populationSize = settings.m_population;

    void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                    reinterpret_cast<void*>(&m_devicePopulation0[0]),
                    reinterpret_cast<void*>(&m_deviceCode),
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

    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0[0], m_populationSize, cudaMemcpyDeviceToHost, Stream()));
    checkCUDAErrors(cudaMemcpyAsync(m_hostCode, m_deviceCode, m_codeSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        FireStarterResult& member = m_hostPopulation[i];
        float curResult = *member.MinResult();
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    float oldResult = state.m_maxResult;
    state.InitResults(settings, m_hostPopulation, m_hostCode, minIndex);
    state.m_oldResult = oldResult;
} // ExecuteEvolveNewPass

void FireStarterExecute::ExecuteEvolveVariationsPass(FireStarterState& state, FireStarterBestCodes& bestCodes, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int populationSize = settings.m_population;

    void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                    reinterpret_cast<void*>(&m_devicePopulation0[0]),
                    reinterpret_cast<void*>(&m_deviceCode),
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

    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
    checkCUDAErrors(cudaMemcpyAsync(m_hostCode, m_deviceCode, m_codeSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        float curResult = m_hostResults[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < bestCodes.WorstResult())
            bestCodes.AddCode(m_hostCode->Member(settings, i), curResult);
    }

    float oldResult = state.m_maxResult;
    checkCUDAErrors(cudaMemcpyAsync(m_hostCode, FireStarterCode::Member(m_deviceCode, settings, minIndex), FireStarterCode::CodeSize(settings), cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();
    state.InitResult(settings, minResult, m_hostCode->Member(settings, minIndex), minIndex);
    state.m_oldResult = oldResult;
} // ExecuteEvolveVariationsPass

void FireStarterExecute::ExecuteSinSimPass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long generation = state.m_generation;
    unsigned long long seed = state.EvolutionSeed();
    unsigned int passes = settings.m_passes;
    unsigned int populationSize = settings.m_population;

    checkCUDAErrors(cudaMemcpyAsync(m_hostNetworks, m_deviceNetworks, m_networksSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

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

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    FireStarterNetwork minNetwork;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < populationSize; i++) {
        FireStarterNetwork& network = m_hostNetworks[i];
        float curResult = network.grade;
        if (curResult < minResult) {
            minResult = curResult;
            minNetwork = m_hostNetworks[i];
            minIndex = i;
        }
    }

    float oldResult = state.m_maxResult;
    state.InitNetwork(settings, minNetwork, minResult, minIndex);
    state.m_oldResult = oldResult;
} // ExecuteSinSimPass

void FireStarterExecute::ExecuteOptimizePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int population = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long passes = settings.m_passes;
    unsigned long long pass = state.m_optimize_pass * passes;
    FireStarterResult* newPopulation = nullptr;
    FireStarterResult* oldPopulation = nullptr;

    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_program.m_uniqueRegisters;
        newPopulation = p & 1 ? m_devicePopulation0[variation] : m_devicePopulation1[variation];
        oldPopulation = p & 1 ? m_devicePopulation1[variation] : m_devicePopulation0[variation];
        unsigned long long seed = state.OptimizationSeed(pass);

        void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                        reinterpret_cast<void*>(&newPopulation),
                        reinterpret_cast<void*>(&oldPopulation),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&registers),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&pass),
                        reinterpret_cast<void*>(&population)
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
        pass++;
    }

    // If the number off passes is odd, copy the new population to the old population for the next pass.
    if (passes & 1) {
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
        Context()->Synchronize();
    }

    if (m_populationSize) {
        // Get the population data.
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();

        // Get the best variation results.
        // Note: The best result may get worse generation to generation before it improves.
        // This allows for better diversity among members when they struggle to evolve and yields better results.
        float minResult = *m_hostPopulation[0].MinResult();
        unsigned int minIndex = 0;
        for (unsigned int i = 1; i < population; i++) {
            float curResult = *m_hostPopulation[i].MinResult();
            if (curResult < minResult) {
                minResult = curResult;
                minIndex = i;
            }
        }

        FireStarterResult* result = state.Result(variation);
        state.InitResults(settings, m_hostPopulation, variation, minIndex);
    } else {
        // Get the results.
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();

        // Get the best variation results.
        // Note: The best result may get worse generation to generation before it improves.
        // This allows for better diversity among members when they struggle to evolve and yields better results.
        float minResult = m_hostResults[0];
        unsigned int minIndex = 0;
        for (unsigned int i = 1; i < population; i++) {
            float curResult = m_hostResults[i];
            if (curResult < minResult) {
                minResult = curResult;
                minIndex = i;
            }
        }

        // Get the best population member result for the variation.
        checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, FireStarterResult::Member(m_devicePopulation0[variation], settings, minIndex), FireStarterResult::ResultSize(settings), cudaMemcpyDeviceToHost, Stream()));
        Context()->Synchronize();
        state.InitResult(settings, m_hostPopulation, nullptr, variation, minIndex);
    }
} // ExecuteOptimizePass

void FireStarterExecute::ExecuteOptimizePasses(FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int variations = settings.m_variations;
    for (unsigned int v = 0; v < variations; v++)
        ExecuteOptimizePass(state, v);

    // Calculate the state's max result.
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;
} // ExecuteOptimizePasses

void FireStarterExecute::ExecuteSmartOptimizePasses(FireStarterState& state)
{
    unsigned int variations = state.Settings().m_variations;
    if (variations > 1) {
        std::vector<FireStarterResult*> results = state.Results();
        float oldResult = state.m_maxResult;
        bool validResult = true;
        float variationMax = 0.0f;
        for (unsigned int v = 0; v < variations; v++) {
            unsigned int variation = state.m_variationOrder[v];
            if (validResult) {
                // If the variation result is worse, skip the rest of the variations.
                ExecuteOptimizePass(state, variation);
                float variationResult = state.MinResult(variation);
                variationMax = MAX(variationMax, variationResult);
                if (state.m_evolution && (variationMax >= oldResult)) {
                    // Count the variation that caused an invalid result.
                    state.m_variationCount[variation]++;
                    validResult = false;
                }
            } else
                results[variation]->Init(state.Settings());
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
        state.m_maxResult = variationMax;
        state.m_optimizeValid = validResult;
    } else {
        ExecuteOptimizePass(state, 0);

        // Set the state's max result.
        state.m_maxResult = state.MaxResult();
        state.m_optimizeValid = true;
    }
} // ExecuteSmartOptimizePass

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
            m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
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
            m_executeManager->AddComplete(nullptr);
        return true;
    }
    if (job)
        m_executeManager->AddFree(job);
    m_executeManager->AddComplete(nullptr);
    return false;
} // ExecuteJob

bool FireStarterExecute::GenerateEvolve(void)
{
    // Load the base Evolver code into memory.
    m_executeProgramName = EVOLVE_PROGRAM_NAME;
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", EVOLVE_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Return immediately if the Evolver code has already been compiled.
    m_executeProgramName = EVOLVE_NEW_PROGRAM_NAME;
    if (m_executeFunction)
        return true;

    // Compile the code and get the Evolver and Optimizer functions from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Evolver");
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateEvolve

bool FireStarterExecute::GenerateEvolveNew(void)
{
    // Load the base Evolver code into memory.
    m_executeProgramName = EVOLVE_NEW_PROGRAM_NAME;
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", EVOLVE_NEW_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Return immediately if the Evolver code has already been compiled.
    if (m_executeFunction)
        return true;

    // Compile the code and get the Evolver and Optimizer functions from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "EvolverNew");
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateEvolveNew

bool FireStarterExecute::GenerateSinSim(void)
{
    // Load the base Evolver code into memory.
    m_executeProgramName = SINSIM_PROGRAM_NAME;
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", SINSIM_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Return immediately if the Evolver code has already been compiled.
    if (m_executeFunction)
        return true;

    // Compile the code and get the Evolver and Optimizer functions from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "SinSim");
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateSinSim

bool FireStarterExecute::GenerateOptimize(FireStarterState& state)
{
    // Load the base Optimize code into memory.
    m_executeProgramName = OPTIMIZE_PROGRAM_NAME;
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the Optimize code by replacing the evaluate code block.
    FireStarterSource::UpdateProgram(m_executeCode, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the Optimizer function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateOptimize

bool FireStarterExecute::GenerateSpeedTest(FireStarterState& state)
{
    // Load the base SpeedTest code into memory.
    m_executeProgramName = SPEEDTEST_PROGRAM_NAME;
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, m_executeProgramName)) {
            printf("%s could not be loaded!\n", m_executeProgramName);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the SpeedTest code by replacing the evaluate code block.
    FireStarterSource::UpdateProgram(m_executeCode, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the SpeedTest function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, m_executeProgramName)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "SpeedTest");
        if (m_executeFunction)
            return true;
    }
    CUDACompile::ReleaseModule(m_executeModule);
    m_executeFunction = nullptr;
    return false;
} // GenerateSpeedTest

bool FireStarterExecute::ExecuteGenerateEvolve(bool sync)
{
    if (m_executeFunction)
        return true;
    bool result = false;
    Dispatch([this, &result] {
        result = GenerateEvolve();
    }, sync);
    return result;
} // ExecuteGenerateEvolve

bool FireStarterExecute::ExecuteGenerateEvolveNew(bool sync)
{
    if (m_executeFunction)
        return true;
    bool result = false;
    Dispatch([this, &result] {
        result = GenerateEvolveNew();
    }, sync);
    return result;
} // ExecuteGenerateEvolveNew

bool FireStarterExecute::ExecuteGenerateSinSim(bool sync)
{
    if (m_executeFunction)
        return true;
    bool result = false;
    Dispatch([this, &result] {
        result = GenerateSinSim();
    }, sync);
    return result;
} // ExecuteGenerateSinSim

bool FireStarterExecute::ExecuteGenerateOptimize(const FireStarterState& initState, bool sync)
{
    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    bool result = false;
    Dispatch([this, initState, &result] {
        FireStarterState state(initState);
        result = GenerateOptimize(state);
    }, sync);
    return result;
} // ExecuteGenerateOptimize

bool FireStarterExecute::ExecuteGenerateSpeedTest(const FireStarterState& initState, bool sync)
{
    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    bool result = false;
    Dispatch([this, initState, &result] {
        FireStarterState state(initState);
        result = GenerateSpeedTest(state);
    }, sync);
    return result;
} // ExecuteGenerateSpeedTest

void FireStarterExecute::ExecuteInitPopulation(const FireStarterState& state)
{
    DispatchSync([this, state] {
        InitPopulation(state.Settings());
    });
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteEvolve(FireStarterState& state, FireStarterBestCodes& bestCodes)
{
    DispatchSync([this, &state, &bestCodes] {
        if (GenerateEvolveNew()) {
            state.m_timer.Start();
            if (InitPopulation(state.Settings()))
                if (state.Settings().m_variations == 1)
                    ExecuteEvolvePass(state, bestCodes);
                else
                    ExecuteEvolveVariationsPass(state, bestCodes);
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteEvolveNew(FireStarterState& state)
{
    DispatchSync([this, &state] {
        if (GenerateEvolveNew()) {
            state.m_timer.Start();
            if (InitPopulation(state.Settings()))
                ExecuteEvolveNewPass(state);
        }
    });
} // ExecuteEvolveNew

void FireStarterExecute::ExecuteSinSim(FireStarterState& state)
{
    DispatchSync([this, &state] {
        if (GenerateSinSim()) {
            state.m_timer.Start();
            if (InitPopulation(state.Settings()))
                ExecuteSinSimPass(state);
        }
    });
} // ExecuteSinSim

void FireStarterExecute::ExecuteEvolveOptimize(FireStarterState& state, FireStarterState& bestState, FireStarterComplete* complete)
{
    DispatchSync([this, complete, &state, &bestState] {
        if (m_executeFunction) {
            if (InitPopulation(state.Settings())) {
                while (!WillTerminate() && (state.m_optimize_pass < state.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    state.m_timer.Start();
                    ExecuteOptimizePasses(state);

                    // Update the results in the UI and check for completion.
                    if (complete && complete->CompleteState(bestState, state))
                        break;

                    // Increment the generation.
                    state.m_optimize_pass++;
                }
            }
        }
    });
} // ExecuteEvolveOptimize

void FireStarterExecute::ExecuteOptimize(FireStarterState& state)
{
    DispatchSync([this, &state] {
        if (InitPopulation(state.Settings()))
            ExecuteOptimizePasses(state);
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
