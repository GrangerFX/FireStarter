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
    for (FireStarterCode* code : m_hostPopulationCode)
        checkCUDAErrors(cudaFreeHost(code));
    m_hostPopulationCode.clear();
    for (FireStarterResult* result : m_hostEvolvePopulation)
        checkCUDAErrors(cudaFreeHost(result));
    m_hostEvolvePopulation.clear();
    for (FireStarterResult* result : m_hostOptimizePopulation)
        checkCUDAErrors(cudaFreeHost(result));
    m_hostOptimizePopulation.clear();
    for (FireStarterCode* code : m_devicePopulationCode)
        checkCUDAErrors(cudaFreeAsync(code, Stream()));
    m_devicePopulationCode.clear();
    for (FireStarterResult* result : m_deviceEvolvePopulation)
        checkCUDAErrors(cudaFreeAsync(result, Stream()));
    m_deviceEvolvePopulation.clear();
    for (FireStarterResult* result : m_deviceOptimizePopulation0)
        checkCUDAErrors(cudaFreeAsync(result, Stream()));
    m_deviceOptimizePopulation0.clear();
    for (FireStarterResult* result : m_deviceOptimizePopulation1)
        checkCUDAErrors(cudaFreeAsync(result, Stream()));
    m_deviceOptimizePopulation1.clear();
    Context()->Synchronize();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    bool result = true;
    if ((settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        // Reallocate the populations if the size has changed.
        size_t evolvePopulationSize = settings.m_population * FireStarterResult::ResultSize(settings);
        size_t evolveCodeSize = settings.m_population * FireStarterCode::CodeSize(settings);
        if (m_evolvePopulationSize != evolvePopulationSize) {
            FinishPopulation();
            m_evolvePopulationSize = evolvePopulationSize;
            if (m_evolvePopulationSize) {
                FireStarterCode* hostCode = nullptr;
                checkCUDAErrors(cudaMallocHost(&hostCode, evolveCodeSize));
                m_hostPopulationCode.push_back(hostCode);

                FireStarterCode* deviceCode = nullptr;
                checkCUDAErrors(cudaMallocAsync(&deviceCode, evolveCodeSize, Stream()));
                m_devicePopulationCode.push_back(deviceCode);

                FireStarterResult* hostPopulation = nullptr;
                checkCUDAErrors(cudaMallocHost(&hostPopulation, m_evolvePopulationSize));
                m_hostEvolvePopulation.push_back(hostPopulation);

                FireStarterResult* devicePopulation = nullptr;
                checkCUDAErrors(cudaMallocAsync(&devicePopulation, m_evolvePopulationSize, Stream()));
                m_deviceEvolvePopulation.push_back(devicePopulation);

                Context()->Synchronize();
                result = hostCode && deviceCode && hostPopulation && devicePopulation;
            }
        }
    } else {
        // Reallocate the populations if the size has changed.
        size_t optimizePopulationSize = settings.m_population * FireStarterResult::ResultSize(settings);
        if (m_optimizePopulationSize != optimizePopulationSize) {
            FinishPopulation();
            m_optimizePopulationSize = optimizePopulationSize;
            if (m_optimizePopulationSize) {
                for (unsigned int v = 0; v < settings.m_variations; v++) {
                    FireStarterResult* hostPopulation = nullptr;
                    checkCUDAErrors(cudaMallocHost(&hostPopulation, m_optimizePopulationSize));
                    m_hostOptimizePopulation.push_back(hostPopulation);

                    FireStarterResult* devicePopulation0 = nullptr;
                    checkCUDAErrors(cudaMallocAsync(&devicePopulation0, m_optimizePopulationSize, Stream()));
                    m_deviceOptimizePopulation0.push_back(devicePopulation0);

                    FireStarterResult* devicePopulation1 = nullptr;
                    checkCUDAErrors(cudaMallocAsync(&devicePopulation1, m_optimizePopulationSize, Stream()));
                    m_deviceOptimizePopulation1.push_back(devicePopulation1);

                    Context()->Synchronize();
                    result = result && hostPopulation && devicePopulation0 && devicePopulation1;
                }
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

    // Run all the evolve states in parallel.
    unsigned int registers = settings.m_registers;

    void* arr[] = { reinterpret_cast<void*>(&m_deviceEvolvePopulation[0]),
                    reinterpret_cast<void*>(&m_devicePopulationCode[0]),
                    reinterpret_cast<void*>(&variation),
                    reinterpret_cast<void*>(&registers),
                    reinterpret_cast<void*>(&seed),
                    reinterpret_cast<void*>(&generation),
                    reinterpret_cast<void*>(&passes),
                    reinterpret_cast<void*>(&population)
    };
        
    checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
        0,                                                  // shared mem
        Stream(),                                           // stream
        &arr[0],                                            // arguments
        0));

    // Synchronize all GPU threads and results.
    // Note: TODO: Syncronize to the completion of the previous variation if possible.
    Context()->Synchronize();

    // Single GPUs have their data syncronized with the host here.
    checkCUDAErrors(cudaMemcpyAsync(m_hostEvolvePopulation[0], m_deviceEvolvePopulation[0], m_evolvePopulationSize, cudaMemcpyDeviceToHost, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        float curResult = *m_hostEvolvePopulation[0][i].MinResult();
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
        if (curResult < bestStates.WorstResult()) {
            FireStarterState newState(settings, &m_hostEvolvePopulation[0][i], &m_hostPopulationCode[0][i], i);
            bestStates.AddState(newState, curResult);
        }
    }

    float oldResult = state.m_maxResult;
    state.InitResults(settings, m_hostEvolvePopulation[minIndex], m_hostPopulationCode[minIndex], minIndex);
    state.m_oldResult = oldResult;
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
    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_program.m_uniqueRegisters;
        FireStarterResult* newResults = p & 1 ? m_deviceOptimizePopulation0[variation] : m_deviceOptimizePopulation1[variation];
        FireStarterResult* oldResults = p & 1 ? m_deviceOptimizePopulation1[variation] : m_deviceOptimizePopulation0[variation];
        unsigned long long seed = state.OptimizationSeed(pass);

        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&registers),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&pass),
                        reinterpret_cast<void*>(&population)
        };

        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction,
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

    // Single GPUs have their data syncronized with the host here.
    // Note: TODO: Only the current variation results should be copied to save time.
    bool oddPasses = passes & 1;
    FireStarterResult* newPopulation = oddPasses ? m_deviceOptimizePopulation1[variation] : m_deviceOptimizePopulation0[variation];
    FireStarterResult* oldPopulation = oddPasses ? m_deviceOptimizePopulation0[variation] : m_deviceOptimizePopulation1[variation];
    checkCUDAErrors(cudaMemcpyAsync(m_hostOptimizePopulation[variation], newPopulation, m_optimizePopulationSize, cudaMemcpyDeviceToHost, Stream()));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_optimizePopulationSize, cudaMemcpyDeviceToDevice, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = *m_hostOptimizePopulation[variation][0].MinResult();
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < population; i++) {
        float curResult = *m_hostOptimizePopulation[variation][i].MinResult();
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    FireStarterResult* result = state.Result(variation);
    memcpy(result->Data(), m_hostOptimizePopulation[variation][minIndex].Data(), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = *m_hostOptimizePopulation[variation][minIndex].EvolveAge1();
    *result->EvolveAge2() = *m_hostOptimizePopulation[variation][minIndex].EvolveAge2();
    *result->MinResult() = minResult;
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
        if (CUDACompile::CompileModule(m_optimizeModule, job->m_ptx)) {
            m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimizer");
            if (m_optimizeFunction)
                return true;
            CUDACompile::ReleaseModule(m_optimizeModule);
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
    if (m_evolveFunction)
        return true;

    // Load the base Evolver code into memory.
    if (m_evolveCode.empty()) {
        if (!FireStarterSource::LoadSource(m_evolveCode, EVOLVE_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", EVOLVE_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Compile the code and get the Evolver and Optimizer functions from the module.
    if (CUDACompile::CompileProgram(m_evolveModule, m_evolveCode, EVOLVE_PROGRAM_NAME)) {
        m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolver");
        if (m_evolveFunction)
            return true;
        CUDACompile::ReleaseModule(m_evolveModule);
        m_evolveFunction = nullptr;
    }
    return false;
} // GenerateEvolver

bool FireStarterExecute::GenerateOptimize(FireStarterState& state)
{
    // Load the base Optimize code into memory.
    if (m_optimizeCode.empty()) {
        if (!FireStarterSource::LoadSource(m_optimizeCode, OPTIMIZE_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", OPTIMIZE_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the Optimize code by replacing the evaluate code block.
    std::string optimizeProgram = m_optimizeCode;
    FireStarterSource::UpdateProgram(optimizeProgram, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the Optimizer function from the module.
    if (CUDACompile::CompileProgram(m_optimizeModule, optimizeProgram, OPTIMIZE_PROGRAM_NAME)) {
        m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimizer");
        if (m_optimizeFunction)
            return true;
        CUDACompile::ReleaseModule(m_optimizeModule);
    }
    return false;
} // GenerateOptimize

bool FireStarterExecute::GenerateSpeedTest(FireStarterState& state)
{
    // Load the base SpeedTest code into memory.
    if (m_speedTestCode.empty()) {
        if (!FireStarterSource::LoadSource(m_speedTestCode, SPEEDTEST_PROGRAM_NAME)) {
            printf("%s could not be loaded!\n", SPEEDTEST_PROGRAM_NAME);
            std::terminate();
        }
    }

    // Generate the evaluate code
    m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

    // Create the SpeedTest code by replacing the evaluate code block.
    std::string program = m_speedTestCode;
    FireStarterSource::UpdateProgram(program, state.m_evaluateCode, EVALUATE_CODE);

    // Compile the code and get the SpeedTest function from the module.
    if (CUDACompile::CompileProgram(m_speedTestModule, program, SPEEDTEST_PROGRAM_NAME)) {
        m_evolveFunction = CUDACompile::GetFunction(m_speedTestModule, "SpeedTest");
        if (m_evolveFunction)
            return true;
        CUDACompile::ReleaseModule(m_speedTestModule);
    }
    return false;
} // GenerateSpeedTest

void FireStarterExecute::ExecuteCompileOptimize(const FireStarterState& initState)
{
    DispatchAsync([this, initState] {
        // Load the base Optimize code into memory.
        if (m_optimizeCode.empty()) {
            if (!FireStarterSource::LoadSource(m_optimizeCode, OPTIMIZE_PROGRAM_NAME)) {
                printf("%s could not be loaded!\n", OPTIMIZE_PROGRAM_NAME);
                std::terminate();
            }
        }

        // Release the previous optimize module.
        CUDACompile::ReleaseModule(m_optimizeModule);
        m_optimizeFunction = nullptr;

        // Generate the evaluate code
        std::string evaluateCode;
        m_executeGenerate->GenerateEvaluate(initState, evaluateCode);

        // Create the Optimize code by replacing the evaluate code block.
        FireStarterSource::UpdateProgram(m_optimizeCode, evaluateCode, EVALUATE_CODE);

        // Compile the code and get the Optimizer function from the module.
        std::string ptxCode;
        if (CUDACompile::CompilePTX(ptxCode, m_optimizeCode, OPTIMIZE_PROGRAM_NAME))
            if (CUDACompile::CompileModule(m_optimizeModule, ptxCode))
                m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimizer");
    });
} // ExecuteCompileOptimize

bool FireStarterExecute::ExecuteGenerateEvolver(void)
{
    if (m_evolveFunction)
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
        if (m_optimizeFunction) {
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
        CUDACompile::ReleaseModule(m_optimizeModule);
        CUDACompile::ReleaseModule(m_evolveModule);
        CUDACompile::ReleaseModule(m_speedTestModule);
        m_optimizeFunction = nullptr;
        m_evolveFunction = nullptr;
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
