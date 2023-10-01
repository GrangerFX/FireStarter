#include "FireStarterExecute.h"
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
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before FinishPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    if (m_devicePopulation) {
        checkCUDAErrors(cudaFreeAsync(m_devicePopulation, stream));
        m_devicePopulation = nullptr;
        m_devicePopulation0 = nullptr;
        m_devicePopulation1 = nullptr;
    }
    if (m_hostPopulation) {
        checkCUDAErrors(cudaFreeHost(m_hostPopulation));
        m_hostPopulation = nullptr;
    }
    context->Synchronize();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterState& state, bool init)
{
    bool result = true;
    FireStarterSettings settings = state.Settings();

    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before InitPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    // Reallocate the populations if the size has changed.
    size_t populationSize = FireStarterPopulation::PopulationSize(settings.m_population, settings.m_registers, settings.m_variations);
    if (m_populationSize != populationSize) {
        FinishPopulation();
        m_populationSize = populationSize;
        if (m_populationSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
            checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, stream));
            if (m_devicePopulation) {
                m_devicePopulation0 = (FireStarterPopulation*)(m_devicePopulation);
                m_devicePopulation1 = (FireStarterPopulation*)(m_devicePopulation + m_populationSize);
            }
        }
    }

    // Initialize the populations.
    if (m_hostPopulation && m_devicePopulation) {
        if (init)
            m_hostPopulation->InitPopulation(settings.m_population, settings.m_registers, settings.m_variations, state.Results());
        else
            m_hostPopulation->InitPopulation(settings.m_population, settings.m_registers, settings.m_variations, settings.m_startResult);

        checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation0, m_hostPopulation, m_populationSize, cudaMemcpyHostToDevice, stream));
        checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation1, m_hostPopulation, m_populationSize, cudaMemcpyHostToDevice, stream));
    } else
        result = false;

    context->Synchronize();
    return result;
} // InitPopulation

float FireStarterExecute::OptimizeGenerations(FireStarterState& state, unsigned int generations, unsigned int pass, unsigned int variation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = HALF_WARP_THREADS;   // Same as the threads per CUDA core half warp.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;
    unsigned long long generation = pass * generations;

    for (unsigned int g = 0; g < generations; g++) {
        // Run all the evolve states in parallel.
        unsigned int maxRegisters = state.m_program.m_uniqueRegisters;
        FireStarterPopulation* newResults = g & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = g & 1 ? m_devicePopulation1 : m_devicePopulation0;
        unsigned long long generationSeed = state.OptimizationSeed(generation, state.m_test);
        int initData = generation == 0;

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&firstMember),
                        reinterpret_cast<void*>(&lastMember),
                        reinterpret_cast<void*>(&maxRegisters),
                        reinterpret_cast<void*>(&generationSeed),
                        reinterpret_cast<void*>(&initData) };

        unsigned int blocksPerGrid = ((lastMember - firstMember) + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            stream,                                             // stream
            &arr[0],                                            // arguments
            0));

        // Synchronize all GPU threads and results.
        context->Synchronize();
        generation++;

#if 0
        if ((state.m_generation == 1) && (state.m_id == 14)) { // Note: DEBUG!
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newResults, m_populationSize, cudaMemcpyDeviceToHost, stream));
            float hash = 0.0f;
            for (unsigned int i = 0; i < settings.m_population; i++) {
                float curResult = *m_hostPopulation->MinResult(i, variation);
                hash = fmodf(hash + curResult, 1.0f);
            }
            printf("Id=%u  variation=%u  pass=%u  generation=%u  hash=%.8f\n", state.m_id, variation, pass, g, hash);
        }
#endif
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterPopulation* newPopulation = settings.m_generations & 1 ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = settings.m_generations & 1 ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, stream));
    if (settings.m_generations & 1)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = *m_hostPopulation->MinResult(0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = *m_hostPopulation->MinResult(i, variation);
        if (curResult <= minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    FireStarterResult* result = state.Result(variation);
    memcpy(result->Data(), m_hostPopulation->Data(minIndex, variation), result->DataSize());
    *result->Index() = *m_hostPopulation->Index(minIndex, variation);
    *result->MinResult() = minResult;
    return minResult;
} // OptimizeGenerations

bool FireStarterExecute::Optimize(FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int variations = settings.m_variations;
    if (state.m_variationOrder.size() != variations) {
        state.m_variationOrder.resize(variations);
        state.m_variationCount.resize(variations);
        for (unsigned int v = 0; v < variations; v++) {
            state.m_variationOrder[v] = v;
            state.m_variationCount[v] = 0;
        }
    }

    FireStarterResults* results = state.Results();
    float oldResult = state.m_maxResult;
    bool validResult = true;
    bool needsResort = false;
    float variationMax = 0.0f;
    unsigned int passes = settings.m_passes;
    unsigned int generations = settings.m_generations;
    for (unsigned int v = 0; v < variations; v++) {
        unsigned int variation = state.m_variationOrder[v];
        if (validResult) {
            // Optimization: If any of the varation's pass result are worse, skip the rest of the pases.
            float variationResult = 0.0f;
            for (unsigned int pass = 0; pass < passes; pass++) {
                variationResult = OptimizeGenerations(state, generations, pass, variation);
                if (variationResult > FIRESTARTER_EVOLVE_SKIP * state.VariationPassResult(variation,pass))
                    break;
                state.VariationPassResult(variation, pass) = variationResult;
            }
            variationMax = MAX(variationMax, variationResult);

            // Optimization: If the variation result is worse, skip the rest of the variations.
            if (variationMax < oldResult)
                needsResort = true;
            else {
                state.m_variationCount[variation]++; // Counts the variation that caused an invalid result.
                validResult = false;
            }
        } else
            results->Result(variation)->Init(0, settings.m_registers, settings.m_startResult);
    }

    // Resort the variation order with the highest invalidation count first.
    if (needsResort) {
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
    state.m_maxResult = validResult ? variationMax : MAX(variationMax, oldResult);
    return validResult;
} // Optimize

void FireStarterExecute::OptimizePass(FireStarterState& state, unsigned int pass)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int generations = settings.m_generations;
    unsigned int variations = settings.m_variations;
    for (unsigned int v = 0; v < variations; v++)
        OptimizeGenerations(state, generations, pass, v);

    // Calculate the state's max result.
    state.m_maxResult = state.MaxResult();
} // OptimizePass

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
            m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, job->m_programFunction);
            if (m_optimizeFunction)
                return true;
            CUDACompile::ReleaseModule(m_optimizeModule);
        }

    // Something went wrong so free the job.
    m_executeManager->AddFree(job);
    job = nullptr;
    return false;
} // Compile

bool FireStarterExecute::Evolve(void)
{
    FireStarterJob* job = nullptr;
    if (Compile(job)) {
        FireStarterState& state = job->m_state;
        FireStarterSettings stateSettings = state.Settings();
        InitPopulation(state);
        Optimize(state);
        m_executeManager->AddComplete(job);
        return true;
    }

    m_executeManager->AddFree(job);
    m_executeManager->AddComplete(nullptr);
    return false;
} // Evolve

void FireStarterExecute::ExecuteCompile(bool sync)
{
    Dispatch([this] {
        Compile(m_executeJob);
    }, sync);
} // ExecuteCompile

void FireStarterExecute::ExecuteInitPopulation(bool init, bool sync)
{
    Dispatch([this, init] {
        if (m_executeJob)
            InitPopulation(m_executeJob->m_state, init);
    }, sync);
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteOptimize(const FireStarterState& state, unsigned int pass, bool sync)
{
    Dispatch([this, state, pass] {
        if (m_executeJob) {
            FireStarterJob* job = m_executeManager->GetFree();
            if (job) {
                m_executeJob->m_state = state;
                m_executeJob->m_state.m_optimizePass = true;
                OptimizePass(m_executeJob->m_state, pass);
                job->Copy(m_executeJob);
            }
            m_executeManager->AddComplete(job);
        }
    }, sync);
} // ExecuteOptimize

void FireStarterExecute::ExecuteEvolve(std::atomic<long long>& evolveCount, bool sync)
{
    Dispatch([this, &evolveCount] {
        while (evolveCount-- > 0) {
            if (!Evolve())
                break;
        }
    }, sync);
} // ExecuteEvolve

void FireStarterExecute::ExecuteEvolve(bool sync)
{
    Dispatch([this] {
        Evolve();
    }, sync);
} // ExecuteEvolve

void FireStarterExecute::ExecuteRandom(bool sync)
{
    Dispatch([this] {
        static std::atomic<float> g_atomicResult = FIRESTARTER_RANDOM_START_RESULT;
        FireStarterJob* job = nullptr;
        while (Compile(job)) {
            FireStarterState& state = job->m_state;
            InitPopulation(state);
            Optimize(state);
            AtomicMin(g_atomicResult, state.m_maxResult);
            m_executeManager->AddComplete(job);
            job = nullptr;
        }
        LOG("Execute unit %d complete\n", (unsigned int)m_executeIndex);
    }, sync);
} // ExecuteRandom

void FireStarterExecute::ExecuteFinish(bool sync)
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
    });
} // ExecuteFinish

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterExecute%zu", index))
{
    m_executeManager = manager;
    m_executeIndex = index;
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
    ExecuteFinish();
} // ~FireStarterExecute(void)

FireStarterExecuteRandom::FireStarterExecuteRandom(FireStarterManager* manager, size_t numExecute) : SerialThread("FireStarterExecuteRandom")
{
    // Create and start the random execution units.
    for (size_t i = 0; i < numExecute; i++) {
        FireStarterExecute* executeUnit = new FireStarterExecute(manager, i);
        m_executionUnits.push_back(executeUnit);
        executeUnit->ExecuteRandom();
    }

    // When the last random execution unit is complete, terminate the complete queue.
    DispatchAsync([this, manager] {
        for (FireStarterExecute* executeUnit : m_executionUnits)
            executeUnit->Synchronize();
        manager->AddComplete();
    });
} // FireStarterExecuteRandom

FireStarterExecuteRandom::~FireStarterExecuteRandom(void)
{
    for (FireStarterExecute* executeUnit : m_executionUnits)
        delete executeUnit;
} // ~FireStarterExecuteRandom
