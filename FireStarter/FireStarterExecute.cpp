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

bool FireStarterBestStates::CheckStates(void)
{
#if 0
    // Validate that the states have not become corrupted (bug detection).
    std::vector<size_t> stateCount(m_maxStates, 0);
    for (size_t i = 0; i < m_maxStates; i++) {
        FireStarterState* curState = m_bestStates[i];
        for (size_t j = 0; j < m_maxStates; j++) 
            if (curState == &m_allStates[j]) {
                stateCount[j]++;
                break;
            }
    }
    for (size_t i = 0; i < m_maxStates; i++)
        if (stateCount[i] != 1)
            return false;
#endif
    return true;
} // CheckStates

bool FireStarterBestStates::GetBestState(FireStarterState& state)
{
    if (!m_numStates)
        return false;
    FireStarterState* bestState = m_bestStates[0];
    for (size_t i = 1; i < m_maxStates; i++)
        m_bestStates[i - 1] = m_bestStates[i];
    m_bestStates[m_maxStates - 1] = bestState;
    m_numStates--;
    m_worstResult = m_settings.m_startResult;
    state = *bestState;
    return CheckStates();
} // GetBestState

bool FireStarterBestStates::AddState(const FireStarterState& state, float maxResult)
{
    // Skip bad results entirely.
    float newResult = maxResult ? maxResult : state.MaxResult();
    if (newResult >= m_worstResult)
        return false;

    // Only add states with a unique instruction set.
    if (m_testedInstructions.count(state.m_program.OptimizedInstructionsData()))
        return false;
    m_testedInstructions.insert(state.m_program.OptimizedInstructionsData());

    FireStarterState* newState = (m_numStates < m_maxStates) ? m_bestStates[m_numStates] : m_bestStates[--m_numStates];
    *newState = state;

    for (size_t i = 0; i < m_numStates; i++) {
        FireStarterState* curState = m_bestStates[i];
        float curResult = curState->MaxResult();
        if (curResult > newResult) {
            for (size_t j = i; j < m_numStates; j++) {
                curState = m_bestStates[j];
                m_bestStates[j] = newState;
                newState = curState;
            }
            break;
        }
    }
    m_bestStates[m_numStates++] = newState;
    return CheckStates();
} // AddState

float FireStarterBestStates::WorstResult(void)
{
    CheckStates();
    return m_worstResult;
} // WorstResult

FireStarterBestStates::FireStarterBestStates(const FireStarterSettings& settings, size_t maxStates) : m_settings(settings)
{
    m_maxStates = maxStates;
    m_numStates = 0;
    m_worstResult = m_settings.m_startResult;
    m_allStates.resize(m_maxStates);
    m_bestStates.resize(m_maxStates);
    for (size_t i = 0; i < m_maxStates; i++) {
        m_allStates[i].InitState(settings);
        m_bestStates[i] = &m_allStates[i];
    }
    CheckStates();
} // FireStarterBestStates

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

    checkCUDAErrors(cudaFreeHost(m_hostCode));
    m_hostCode = nullptr;
    checkCUDAErrors(cudaFreeAsync(m_deviceCode, Stream()));
    m_deviceCode = nullptr;

    Context()->Synchronize();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    bool result = true;
    if ((settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        // Reallocate the populations if the size has changed.
        size_t resultsSize = settings.m_population * sizeof(float);
#if FIRESTARTER_EVOLVE_DEBUG
        size_t populationSize = settings.m_population * FireStarterResult::ResultSize(settings);
#else
        size_t populationSize = 0;
#endif
        size_t codeSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if ((m_resultsSize != resultsSize) || (m_populationSize != populationSize) || (codeSize != m_codeSize)) {
            FinishPopulation();
            m_resultsSize = resultsSize;
            m_populationSize = populationSize;
            m_codeSize = codeSize;

            checkCUDAErrors(cudaMallocHost(&m_hostResults, resultsSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceResults, resultsSize, Stream()));
            checkCUDAErrors(cudaMallocAsync(&m_deviceCode, codeSize, Stream()));
#if FIRESTARTER_EVOLVE_DEBUG
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
            checkCUDAErrors(cudaMallocHost(&m_hostCode, codeSize));

            FireStarterResult* devicePopulation = nullptr;
            checkCUDAErrors(cudaMallocAsync(&devicePopulation, m_populationSize, Stream()));
            Context()->Synchronize();
            m_devicePopulation0.push_back(devicePopulation);

            result = m_hostResults && m_hostCode && m_deviceCode && m_hostPopulation && devicePopulation;
#else
            checkCUDAErrors(cudaMallocHost(&m_hostCode, FireStarterCode::CodeSize(settings)));
            Context()->Synchronize();
            m_devicePopulation0.push_back(nullptr);
            result = m_hostResults && m_hostCode && m_deviceCode;
#endif
        }
    } else {
        // Reallocate the populations if the size has changed.
        size_t resultsSize = settings.m_population * sizeof(float);
        size_t populationSize = settings.m_population * FireStarterResult::ResultSize(settings);
        if ((m_resultsSize != resultsSize) || (m_populationSize != populationSize)) {
            FinishPopulation();
            m_resultsSize = resultsSize;
            m_populationSize = populationSize;

            checkCUDAErrors(cudaMallocHost(&m_hostResults, resultsSize));
            checkCUDAErrors(cudaMallocAsync(&m_deviceResults, resultsSize, Stream()));
#if FIRESTARTER_EVOLVE_DEBUG
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
#else
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, FireStarterResult::ResultSize(settings)));
#endif
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
    }
    return result;
} // InitPopulation

void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state, FireStarterBestStates& bestStates, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = settings.m_population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long seed = state.EvolutionSeed();
    unsigned long long generation = state.m_generation;
    unsigned int passes = settings.m_passes;
    unsigned int population = settings.m_population;

    void* arr[] = { reinterpret_cast<void*>(&m_deviceResults),
                    reinterpret_cast<void*>(&m_devicePopulation0[0]),
                    reinterpret_cast<void*>(&m_deviceCode),
                    reinterpret_cast<void*>(&variation),
                    reinterpret_cast<void*>(&seed),
                    reinterpret_cast<void*>(&generation),
                    reinterpret_cast<void*>(&passes),
                    reinterpret_cast<void*>(&population)
    };
        
    checkCUDAErrors(cuLaunchKernel(m_executeFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
        0,                                                  // shared mem
        Stream(),                                           // stream
        &arr[0],                                            // arguments
        0));

#if FIRESTARTER_EVOLVE_DEBUG
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, m_devicePopulation0[0], m_populationSize, cudaMemcpyDeviceToHost, Stream()));
    checkCUDAErrors(cudaMemcpyAsync(m_hostCode, m_deviceCode, m_codeSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        float curResult = *m_hostPopulation[i].MinResult();
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < bestStates.WorstResult()) {
            FireStarterState newState(settings, m_hostPopulation, m_hostCode, i);
            bestStates.AddState(newState, curResult);
        }
    }

    float oldResult = state.m_maxResult;
    state.InitResults(settings, m_hostPopulation, m_hostCode, minIndex);
    state.m_oldResult = oldResult;
#else
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        float curResult = m_hostResults[i];
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < bestStates.WorstResult()) {
            checkCUDAErrors(cudaMemcpyAsync(m_hostCode, FireStarterCode::Member(m_deviceCode, settings, i), FireStarterCode::CodeSize(settings), cudaMemcpyDeviceToHost, Stream()));
            Context()->Synchronize();

            FireStarterState newState(settings);
            newState.InitResult(settings, curResult, m_hostCode, i);
            bestStates.AddState(newState, curResult);
        }
    }

    float oldResult = state.m_maxResult;
    checkCUDAErrors(cudaMemcpyAsync(m_hostCode, FireStarterCode::Member(m_deviceCode, settings, minIndex), FireStarterCode::CodeSize(settings), cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();
    state.InitResult(settings, minResult, m_hostCode, minIndex);
    state.m_oldResult = oldResult;
#endif
} // ExecuteEvolvePass

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

#if FIRESTARTER_EVOLVE_DEBUG
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
#else
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
    state.InitResult(settings, m_hostPopulation, nullptr, 0, minIndex);
#endif
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

bool FireStarterExecute::GenerateEvolver(void)
{
    // Return immediately if the Evolver code has already been compiled.
    if (m_executeFunction)
        return true;

    // Load the base Evolver code into memory.
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, EVOLVE_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", EVOLVE_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Compile the code and get the Evolver and Optimizer functions from the module.
    if (CUDACompile::CompileProgram(m_executeModule, m_executeCode, EVOLVE_PROGRAM_NAME)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Evolver");
        if (m_executeFunction)
            return true;
        CUDACompile::ReleaseModule(m_executeModule);
        m_executeFunction = nullptr;
    }
    return false;
} // GenerateEvolver

bool FireStarterExecute::GenerateOptimize(FireStarterState& state)
{
    // Load the base Optimize code into memory.
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, OPTIMIZE_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", OPTIMIZE_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the Optimize code by replacing the evaluate code block.
    std::string program = m_executeCode;
    FireStarterSource::UpdateProgram(program, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the Optimizer function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, program, OPTIMIZE_PROGRAM_NAME)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
        if (m_executeFunction)
            return true;
        CUDACompile::ReleaseModule(m_executeModule);
    }
    return false;
} // GenerateOptimize

bool FireStarterExecute::GenerateSpeedTest(FireStarterState& state)
{
    // Load the base SpeedTest code into memory.
    if (m_executeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_executeCode, SPEEDTEST_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", SPEEDTEST_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the SpeedTest code by replacing the evaluate code block.
    std::string program = m_executeCode;
    FireStarterSource::UpdateProgram(program, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the SpeedTest function from the module.
    if (CUDACompile::CompileProgram(m_executeModule, program, SPEEDTEST_PROGRAM_NAME)) {
        m_executeFunction = CUDACompile::GetFunction(m_executeModule, "SpeedTest");
        if (m_executeFunction)
            return true;
        CUDACompile::ReleaseModule(m_executeModule);
    }
    return false;
} // GenerateSpeedTest

void FireStarterExecute::ExecuteCompileOptimize(const FireStarterState& initState)
{
    DispatchAsync([this, initState] {
        // Load the base Optimize code into memory.
        if (m_executeCode.empty()) {
            if (!FireStarterSource::LoadSource(m_executeCode, OPTIMIZE_PROGRAM_NAME)) {
                printf("%s could not be loaded!\n", OPTIMIZE_PROGRAM_NAME);
                std::terminate();
            }
        }

        // Release the previous optimize module.
        CUDACompile::ReleaseModule(m_executeModule);
        m_executeFunction = nullptr;

        // Generate the evaluate code
        std::string evaluateCode;
        m_executeGenerate->GenerateEvaluate(initState, evaluateCode);

        // Create the Optimize code by replacing the evaluate code block.
        FireStarterSource::UpdateProgram(m_executeCode, evaluateCode, EVALUATE_CODE);

        // Compile the code and get the Optimizer function from the module.
        std::string ptxCode;
        if (CUDACompile::CompilePTX(ptxCode, m_executeCode, OPTIMIZE_PROGRAM_NAME))
            if (CUDACompile::CompileModule(m_executeModule, ptxCode))
                m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
    });
} // ExecuteCompileOptimize

bool FireStarterExecute::ExecuteGenerateEvolver(void)
{
    if (m_executeFunction)
        return true;
    bool result = false;
    DispatchSync([this, &result] {
        result = GenerateEvolver();
    });
    return result;
} // ExecuteGenerateEvolver

bool FireStarterExecute::ExecuteGenerateOptimize(const FireStarterState& initState)
{
    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    bool result = false;
    DispatchSync([this, initState, &result] {
        FireStarterState state(initState);
        result = GenerateOptimize(state);
    });
    return result;
} // ExecuteGenerateOptimize

bool FireStarterExecute::ExecuteGenerateSpeedTest(const FireStarterState& initState)
{
    bool result = false;

    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    DispatchSync([this, initState, &result] {
        FireStarterState state(initState);
        result = GenerateSpeedTest(state);
    });
    return result;
} // ExecuteGenerateSpeedTest

void FireStarterExecute::ExecuteInitPopulation(const FireStarterState& state)
{
    DispatchSync([this, state] {
        InitPopulation(state.Settings());
    });
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteEvolve(FireStarterState& state, FireStarterBestStates& bestStates)
{
    DispatchSync([this, &state, &bestStates] {
        if (GenerateEvolver()) {
            state.m_timer.Start();
            if (InitPopulation(state.Settings()))
                ExecuteEvolvePass(state, bestStates);
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& state, FireStarterState& bestState)
{
    DispatchSync([this, complete, &state, &bestState] {
        if (m_executeFunction) {
            if (InitPopulation(state.Settings())) {
                while (!WillTerminate() && (state.m_optimize_pass < state.Settings().m_optimize)) {
                    // Execute the optimization passes.
                    state.m_timer.Start();
                    ExecuteOptimizePasses(state);

                    // Update the results in the UI and check for completion.
                    if (complete->CompleteState(bestState, state))
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
