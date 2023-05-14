#include "FireStarterExecute.h"
#include "CUDACompile.h"

void FireStarterExecute::CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = WARP_THREADS;  // Same as the threads per CUDA core warp.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;

    for (unsigned int g = 0; g < settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        FireStarterEvolutions* newEvolutions = g & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
        FireStarterEvolutions* oldEvolutions = g & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;
        int init = (g == 0) && (forceInit || (state.m_generation == 0));
        unsigned long long generationSeed = state.RandomSeed();

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newEvolutions),
                        reinterpret_cast<void*>(&oldEvolutions),
                        reinterpret_cast<void*>(&firstVariation),
                        reinterpret_cast<void*>(&lastVariation),
                        reinterpret_cast<void*>(&firstMember),
                        reinterpret_cast<void*>(&lastMember),
                        reinterpret_cast<void*>(&generationSeed),
                        reinterpret_cast<void*>(&init) };

        unsigned int blocksPerGrid = lastMember - firstMember;
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0,                                                  // shared mem
            stream,                                             // stream */
            &arr[0],                                            // arguments */
            0));

        // Synchronize all GPU threads and results.
        context->Synchronize();

        // Multiple GPUs must have their data syncronized prior to the next generation.
        generationSeed++;
        forceInit = 0;
    }

    // Syncronize the device with the host.
    FireStarterEvolutions* newEvolutions = settings.m_generations & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;
    FireStarterEvolutions* oldEvolutions = settings.m_generations & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, stream));
    if (settings.m_generations & 1)
        checkCUDAErrors(cudaMemcpyAsync(oldEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Get the best results.
    float bestResult = *m_hostEvolutions->MaxResult(0);
    unsigned int bestIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        unsigned int curIndex = *m_hostEvolutions->Index(i, 0);
        if (curIndex == i) {
            float curResult = *m_hostEvolutions->MaxResult(i);
            if (curResult <= bestResult) {
                bestResult = curResult;
                bestIndex = i;
            }
        }
    }

    memcpy(state.Results(), m_hostEvolutions->Results(bestIndex), FireStarterResults::ResultsSize(settings.m_registers, settings.m_variations));
    state.m_program.LoadInstructions(m_hostEvolutions->Instructions(bestIndex));
} // CodeGenerations

void FireStarterExecute::OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int variation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = HALF_WARP_THREADS;   // Same as the threads per CUDA core half warp.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;

    for (unsigned int g = 0; g < settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        unsigned int maxRegisters = state.m_program.m_uniqueRegisters;
        FireStarterPopulation* newResults = g & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = g & 1 ? m_devicePopulation1 : m_devicePopulation0;
        int init = (g == 0) && (forceInit || (state.m_generation == 0));
        unsigned long long generationSeed = state.OptimizationSeed(g, state.m_test);

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&firstMember),
                        reinterpret_cast<void*>(&lastMember),
                        reinterpret_cast<void*>(&maxRegisters),
                        reinterpret_cast<void*>(&generationSeed),
                        reinterpret_cast<void*>(&init) };

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
        forceInit = 0;
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
    state.m_maxResult = fmaxf(state.m_maxResult, minResult);
} // OptimizeGenerations

bool FireStarterExecute::InitPopulation(const FireStarterState& state, bool init)
{
    bool result = true;
    FireStarterSettings settings = state.Settings();

    CUDAContext* context = Context();
    CUstream stream = context->Stream();

    size_t populationSize = FireStarterPopulation::PopulationSize(settings.m_population, settings.m_registers, settings.m_variations);
    if (m_populationSize != populationSize) {
        m_populationSize = populationSize;
        if (m_hostPopulation) {
            checkCUDAErrors(cudaFreeHost(m_hostPopulation));
            m_hostPopulation = nullptr;
        }
        if (m_devicePopulation) {
            checkCUDAErrors(cudaFreeAsync(m_devicePopulation, stream));
            m_devicePopulation = nullptr;
            m_devicePopulation0 = nullptr;
            m_devicePopulation1 = nullptr;
        }
        if (m_populationSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
            if (m_hostPopulation)
                if (init)
                    m_hostPopulation->InitPopulation(settings.m_population, settings.m_registers, settings.m_variations, state.Results());
                else
                    m_hostPopulation->InitPopulation(settings.m_population, settings.m_registers, settings.m_variations, settings.m_startResult);
            else
                result = false;

            checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, stream));
            if (m_hostPopulation && m_devicePopulation) {
                m_devicePopulation0 = (FireStarterPopulation*)(m_devicePopulation);
                m_devicePopulation1 = (FireStarterPopulation*)(m_devicePopulation + m_populationSize);
                checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation0, m_hostPopulation, m_populationSize, cudaMemcpyHostToDevice, stream));
                checkCUDAErrors(cudaMemcpyAsync(m_devicePopulation1, m_hostPopulation, m_populationSize, cudaMemcpyHostToDevice, stream));
            } else
                result = false;
        }
    }

    size_t evolutionsSize = (settings.m_mode == FIRESTARTER_CODE) ? FireStarterEvolutions::EvolutionsSize(settings.m_population, settings.m_instructions, settings.m_registers, settings.m_variations) : 0;
    if (m_evolutionsSize != evolutionsSize) {
        m_evolutionsSize = evolutionsSize;
        if (m_hostEvolutions) {
            checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
            m_hostEvolutions = nullptr;
        }
        if (m_deviceEvolutions) {
            checkCUDAErrors(cudaFreeAsync(m_deviceEvolutions, stream));
            m_deviceEvolutions = nullptr;
            m_deviceEvolutions0 = nullptr;
            m_deviceEvolutions1 = nullptr;
        }
        if (m_evolutionsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostEvolutions, m_evolutionsSize));
            if (m_hostEvolutions)
                m_hostEvolutions->InitEvolutions(settings.m_population, settings.m_instructions, settings.m_registers, settings.m_variations, settings.m_startResult);
            else
                result = false;

            checkCUDAErrors(cudaMallocAsync(&m_deviceEvolutions, m_evolutionsSize * 2, stream));
            if (m_deviceEvolutions) {
                m_deviceEvolutions0 = (FireStarterEvolutions*)(m_deviceEvolutions);
                m_deviceEvolutions1 = (FireStarterEvolutions*)(m_deviceEvolutions + m_evolutionsSize);
                checkCUDAErrors(cudaMemcpyAsync(m_deviceEvolutions0, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice, stream));
                checkCUDAErrors(cudaMemcpyAsync(m_deviceEvolutions1, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice, stream));
            } else
                result = false;
        }
    }
    context->Synchronize();
    return result;
} // InitPopulation

void FireStarterExecute::FinishResults(void)
{
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before FinishResults() called!\n");
        std::terminate();
    }

    CUstream stream = context->Stream();
    if (m_devicePopulation) {
        checkCUDAErrors(cudaFreeAsync(m_devicePopulation, stream));
        m_devicePopulation = nullptr;
        m_devicePopulation0 = nullptr;
        m_devicePopulation1 = nullptr;
    }
    if (m_deviceEvolutions) {
        checkCUDAErrors(cudaFreeAsync(m_deviceEvolutions, stream));
        m_deviceEvolutions = nullptr;
        m_deviceEvolutions0 = nullptr;
        m_deviceEvolutions1 = nullptr;
    }
    if (m_hostPopulation) {
        checkCUDAErrors(cudaFreeHost(m_hostPopulation));
        m_hostPopulation = nullptr;
    }
    if (m_hostEvolutions) {
        checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
        m_hostEvolutions = nullptr;
    }
    context->Synchronize();
} // FinishResults

void FireStarterExecute::Code(FireStarterState& state, bool init)
{
    state.m_maxResult = 0;
    CodeGenerations(state, init, 0, state.Settings().m_variations);
} // Code

void FireStarterExecute::Optimize(FireStarterState& state, bool init, bool skipVariations)
{
    FireStarterSettings stateSettings = state.Settings();
    FireStarterResults* stateResults = state.Results();
    float bestResult = state.m_maxResult;
    state.m_maxResult = 0;
    bool validResult = true;
    bool needsResort = false;

    if (stateSettings.m_variations != m_variationOrder.size()) {
        m_variationOrder.resize(stateSettings.m_variations);
        m_variationCount.resize(stateSettings.m_variations);
        for (unsigned int v = 0; v < stateSettings.m_variations; v++) {
            m_variationOrder[v] = v;
            m_variationCount[v] = 0;
        }
    }
    for (unsigned int v = 0; v < stateSettings.m_variations; v++) {
        unsigned int variation = m_variationOrder[v];
        if (validResult) {
            OptimizeGenerations(state, init, variation);
            if (skipVariations) {
                // Optimization: If the variation result is worse, skip the rest of the variations.
                float variationResult = *stateResults->MinResult(variation);
                validResult = variationResult < bestResult;
                if (validResult)
                    needsResort = true;
                else
                    m_variationCount[variation]++;
            }
        } else
            stateResults->Result(variation)->Init(0, stateSettings.m_registers, stateSettings.m_startResult);
    }

    // Resort the variation order with the worst results first.
    if (needsResort) {
        for (unsigned int v = 0; v < stateSettings.m_variations - 1; v++) {
            unsigned int variation = m_variationOrder[v];
            unsigned int count = m_variationCount[variation];
            for (unsigned int i = v + 1; i < stateSettings.m_variations; i++) {
                unsigned int curVariation = m_variationOrder[i];
                unsigned int curCount = m_variationCount[curVariation];
                if (curCount > count) {
                    m_variationOrder[v] = curVariation;
                    m_variationOrder[i] = variation;
                    variation = curVariation;
                    count = curCount;
                }
            }
        }
    }
} // Optimize

bool FireStarterExecute::Compile(FireStarterJob*& job)
{
    // Release the current job.
    if (job)
        m_manager->AddFree(job);

    // Get the next available compile job.
    job = m_manager->GetCompile();
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
    m_manager->AddFree(job);
    job = nullptr;
    return false;
} // Compile

void FireStarterExecute::ExecuteCompile(bool sync)
{
    Dispatch([this] {
        Compile(m_job);
    }, sync);
} // ExecuteCompile

void FireStarterExecute::ExecuteInitPopulation(bool init, bool sync)
{
    Dispatch([this, init] {
        InitPopulation(m_job->m_state, init);
    }, sync);
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteCode(bool init, bool sync)
{
    Dispatch([this, init] {
        if (m_job) {
            FireStarterJob* job = m_manager->GetCode();
            if (job)
                Code(job->m_state, init);
            m_manager->AddComplete(job);
        }
    }, sync);
} // ExecuteCode

void FireStarterExecute::ExecuteOptimize(const FireStarterState& state, bool init, bool optimizePass, bool sync)
{
    Dispatch([this, state, init, optimizePass] {
        if (m_job) {
            FireStarterJob* job = m_manager->GetFree();
            if (job) {
                if (optimizePass) {
                    m_job->m_state = state;
                    m_job->m_state.m_optimizePass = optimizePass;
                }
                Optimize(m_job->m_state, init, FIRESTARTER_SKIP_VARIATIONS);
                job->Copy(m_job);
            }
            m_manager->AddComplete(job);
        }
    }, sync);
} // ExecuteOptimize

void FireStarterExecute::ExecuteOptimize(unsigned long long test, bool sync)
{
    Dispatch([this, test] {
        if (m_job) {
            FireStarterJob* job = m_manager->GetFree();
            if (job) {
                m_job->m_state.m_test = test;
                Optimize(m_job->m_state, true, FIRESTARTER_SKIP_VARIATIONS);
                job->Copy(m_job);
            }
            m_manager->AddComplete(job);
        }
    }, sync);
} // ExecuteOptimize

void FireStarterExecute::ExecuteEvolve(bool sync)
{
    Dispatch([this] {
        FireStarterJob* job = nullptr;
        if (Compile(job)) {
            InitPopulation(job->m_state, FIRESTARTER_INIT_EVOLVE);
            Optimize(job->m_state, FIRESTARTER_INIT_EVOLVE, FIRESTARTER_SKIP_VARIATIONS);
        } else {
            m_manager->AddFree(job);
            job = nullptr;
        }
        m_manager->AddComplete(job);
    }, sync);
} // ExecuteEvolve

void FireStarterExecute::ExecuteRandom(bool sync)
{
    Dispatch([this] {
        static std::atomic<float> g_atomicResult = FIRESTARTER_RANDOM_START_RESULT;
        FireStarterJob* job = nullptr;
        while (Compile(job)) {
            InitPopulation(job->m_state, true);
            job->m_state.m_maxResult = g_atomicResult;
            Optimize(job->m_state, true, FIRESTARTER_SKIP_VARIATIONS);
            float stateResult = job->m_state.m_maxResult;
            if (stateResult < g_atomicResult) {
                float oldResult = g_atomicResult;
                while ((stateResult < oldResult) && !g_atomicResult.compare_exchange_weak(oldResult, stateResult));
            }
            m_manager->AddComplete(job);
            job = nullptr;
        }
        LOG("Execute unit %d complete\n", (unsigned int)m_index);
    }, sync);
} // ExecuteRandom

void FireStarterExecute::ExecuteFinish(bool sync)
{
    DispatchSync([this] {
        if (m_job) {
            if (m_manager)
                m_manager->AddFree(m_job);
            else
                delete m_job;
            m_job = nullptr;
        }
        FinishResults();
        CUDACompile::ReleaseModule(m_optimizeModule);
    });
} // ExecuteFinish

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterExecute%zu", index))
{
    m_manager = manager;
    m_index = index;
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
