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

void FireStarterExecute::FinishPopulation(void)
{
    if (m_devicePopulation || m_deviceInitResults) {
        if (m_devicePopulation) {
            checkCUDAErrors(cudaFreeAsync(m_devicePopulation, Stream()));
            m_devicePopulation = nullptr;
            m_devicePopulation0 = nullptr;
            m_devicePopulation1 = nullptr;
        }
        if (m_deviceInitResults) {
            checkCUDAErrors(cudaFreeAsync(m_deviceInitResults, Stream()));
            m_deviceInitResults = nullptr;
        }
        Context()->Synchronize();
    }
    if (m_hostPopulation) {
        checkCUDAErrors(cudaFreeHost(m_hostPopulation));
        m_hostPopulation = nullptr;
    }
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    // Reallocate the populations if the size has changed.
    size_t populationSize = FireStarterPopulation::PopulationSize(settings);
    size_t initResultsSize = FireStarterPopulation::ResultsSize(settings);
    bool result = true;
    if ((m_populationSize != populationSize) || (m_initResultsSize != initResultsSize)) {
        if (m_populationSize != populationSize) {
            FinishPopulation();
            m_populationSize = populationSize;
            if (m_populationSize) {
                checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
                if (m_hostPopulation)
                    memset(m_hostPopulation, 0, m_populationSize);
                checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, Stream()));
                if (m_devicePopulation) {
                    checkCUDAErrors(cudaMemsetAsync(m_devicePopulation, 0, m_populationSize * 2, Stream()));
                    m_devicePopulation0 = m_devicePopulation;
                    m_devicePopulation1 = (FireStarterPopulation*)((char*)m_devicePopulation + m_populationSize);
                }
            }
        }
        if (m_initResultsSize != initResultsSize) {
            if (m_deviceInitResults) {
                checkCUDAErrors(cudaFreeAsync(m_deviceInitResults, Stream()));
                m_deviceInitResults = nullptr;
            }
            m_initResultsSize = initResultsSize;
            checkCUDAErrors(cudaMallocAsync(&m_deviceInitResults, m_initResultsSize, Stream()));
        }
        Context()->Synchronize();
        result = (!m_populationSize || (m_hostPopulation && m_devicePopulation)) && (!m_initResultsSize || m_deviceInitResults);
    }
    return result;
} // InitPopulation

#if 1
void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int population = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long passes = settings.m_passes;
    unsigned long long pass = state.m_generation * passes;

    if (m_deviceInitResults)
        checkCUDAErrors(cudaMemcpyAsync(m_deviceInitResults, state.Results(), m_initResultsSize, cudaMemcpyHostToDevice, Stream()));
    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        unsigned int registers = settings.m_registers;
        FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
        unsigned long long seed = state.EvolutionSeed(pass);

        void* arr[] = { reinterpret_cast<void*>(&m_deviceInitResults),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&registers),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&pass),
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
        pass++;
    }

    // Single GPUs have their data syncronized with the host here.
    bool oddPasses = passes & 1;
    FireStarterPopulation* newPopulation = oddPasses ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = oddPasses ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        float curResult = *m_hostPopulation->MinResult(settings, i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterResult* result = state.Result();
    memcpy(state.Code(), m_hostPopulation->Code(settings, minIndex), FireStarterCode::CodeSize(settings.m_instructions));
    memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = *m_hostPopulation->EvolveAge1(settings, minIndex);
    *result->EvolveAge2() = *m_hostPopulation->EvolveAge2(settings, minIndex);
    *result->MinResult() = minResult;
    state.m_minIndex = minIndex;

    // Set the state's max result.
    state.m_oldResult = state.m_maxResult;
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;

    // Load the state's program from the GPU evolved code (variation 0).
    state.LoadProgramFromCode();
} // ExecuteEvolvePass
#else
void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int population = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long passes = settings.m_passes;
    unsigned long long pass = state.m_generation;

    if (m_deviceInitResults)
        checkCUDAErrors(cudaMemcpyAsync(m_deviceInitResults, state.Results(), m_initResultsSize, cudaMemcpyHostToDevice, Stream()));

    // Run all the evolve states in parallel.
    unsigned int registers = settings.m_registers;
    FireStarterPopulation* newResults = pass & 1 ? m_devicePopulation0 : m_devicePopulation1;
    FireStarterPopulation* oldResults = pass & 1 ? m_devicePopulation1 : m_devicePopulation0;
    unsigned long long seed = state.EvolutionSeed(pass);

    void* arr[] = { reinterpret_cast<void*>(&m_deviceInitResults),
                    reinterpret_cast<void*>(&newResults),
                    reinterpret_cast<void*>(&oldResults),
                    reinterpret_cast<void*>(&variation),
                    reinterpret_cast<void*>(&registers),
                    reinterpret_cast<void*>(&seed),
                    reinterpret_cast<void*>(&pass),
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

    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newResults, m_populationSize, cudaMemcpyDeviceToHost, Stream()));

    Context()->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    bool validResult = false;
    float minResult = settings.m_startResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        float curResult = *m_hostPopulation->MinResult(settings, i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterResult* result = state.Result();
    memcpy(state.Code(), m_hostPopulation->Code(settings, minIndex), FireStarterCode::CodeSize(settings.m_instructions));
    memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = *m_hostPopulation->EvolveAge1(settings, minIndex);
    *result->EvolveAge2() = *m_hostPopulation->EvolveAge2(settings, minIndex);
    *result->MinResult() = minResult;
    state.m_minIndex = minIndex;

    // Set the state's max result.
    state.m_oldResult = state.m_maxResult;
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;

    // Load the state's program from the GPU evolved code (variation 0).
    state.LoadProgramFromCode();
} // ExecuteEvolvePass
#endif

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
        FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
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
    FireStarterPopulation* newPopulation = oddPasses ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = oddPasses ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, Stream()));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, Stream()));
    Context()->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = *m_hostPopulation->MinResult(settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < population; i++) {
        float curResult = *m_hostPopulation->MinResult(settings, i, variation);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    FireStarterResult* result = state.Result(variation);
    memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex, variation), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = *m_hostPopulation->EvolveAge1(settings, minIndex, variation);
    *result->EvolveAge2() = *m_hostPopulation->EvolveAge2(settings, minIndex, variation);
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
        FireStarterResults* results = state.Results();
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
                results->Result(variation)->Init(state.Settings());
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
        m_speedTestFunction = CUDACompile::GetFunction(m_speedTestModule, "SpeedTest");
        if (m_speedTestFunction)
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

        // Get a new job for compiling the optimization code.
        FireStarterJob* compileJob = m_executeManager->GetFree();
        if (compileJob) {
            // Copy the initial state.
            compileJob->m_state = initState;
            FireStarterState& state = compileJob->m_state;

            // Generate the evaluate code
            m_executeGenerate->GenerateEvaluate(state, state.m_evaluateCode);

            // Create the Optimize code by replacing the evaluate code block.
            compileJob->m_program = m_optimizeCode;
            FireStarterSource::UpdateProgram(compileJob->m_program, state.m_evaluateCode, EVALUATE_CODE);

            // Compile the code and get the Optimizer function from the module.
            if (CUDACompile::CompilePTX(compileJob->m_ptx, compileJob->m_program, OPTIMIZE_PROGRAM_NAME))
                m_executeManager->AddCompile(compileJob);
            else
                m_executeManager->AddFree(compileJob);
        }
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

void FireStarterExecute::ExecuteEvolve(FireStarterState& state)
{
    DispatchSync([this, &state] {
        if (GenerateEvolver()) {
            state.m_timer.Start();
            if (InitPopulation(state.Settings()))
                ExecuteEvolvePass(state);
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteEvolveOptimize(FireStarterComplete* complete, FireStarterState& bestState)
{
    FireStarterJob* compileJob = nullptr;
    while ((compileJob = m_executeManager->GetCompile(false)) != nullptr) {
        DispatchSync([this, compileJob, complete, &bestState] {
            // Compile the code and get the Optimizer function from the module.
            if (CUDACompile::CompileModule(m_optimizeModule, compileJob->m_ptx)) {
                m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimizer");
                if (m_optimizeFunction) {
                    FireStarterState& state = compileJob->m_state;
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
                CUDACompile::ReleaseModule(m_optimizeModule);
                m_optimizeFunction = nullptr;
            }
        });
        m_executeManager->AddFree(compileJob);
    }
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
        m_speedTestFunction = nullptr;
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
