#include "FireStarterExecute.h"
#include "CUDACompile.h"

void FireStarterExecute::CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long generationSeed = state.EvolveSeed(1);
    FireStarterSettings settings = state.Settings();
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;

    for (unsigned int g = 0; g < settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        FireStarterResults* newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterEvolutions* newEvolutions = g & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
        FireStarterEvolutions* oldEvolutions = g & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;
        int init = (g == 0) && (forceInit || (state.m_generation == 0));

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newEvolutions),
                        reinterpret_cast<void*>(&oldEvolutions),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
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

    // Single GPUs have their data syncronized with the host here.
    FireStarterResults* newResults = settings.m_generations & 1 ? m_deviceResults1 : m_deviceResults0;
    FireStarterResults* oldResults = settings.m_generations & 1 ? m_deviceResults0 : m_deviceResults1;
    FireStarterEvolutions* newEvolutions = settings.m_generations & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;
    FireStarterEvolutions* oldEvolutions = settings.m_generations & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, stream));
    checkCUDAErrors(cudaMemcpyAsync(m_hostEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, stream));
    checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, stream));
    checkCUDAErrors(cudaMemcpyAsync(oldEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Get the best results.
    float bestResult = *m_hostResults->MaxResult(0);
    unsigned int bestIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        unsigned int curIndex = *m_hostResults->Index(i, 0);
        if (curIndex == i) {
            float curResult = *m_hostResults->MaxResult(i);
            if (curResult <= bestResult) {
                bestResult = curResult;
                bestIndex = i;
            }
        }
    }

    memcpy(state.Result(), m_hostResults->Result(bestIndex), FireStarterResult::ResultSize(settings.m_registers, settings.m_variations));
    state.m_program.LoadInstructions(m_hostEvolutions->Instructions(bestIndex));
} // EvolveGenerations

void FireStarterExecute::OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int variation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = 16; // BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned long long generationSeed = state.OptimizeSeed(1) + state.m_generation * settings.m_generations;
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;
//    printf("Mode: %d  test: %llu  index: %llu  generation: %llu: seed: %llu\n", state.m_program.m_settings.m_mode, state.m_test, state.m_index, state.m_generation, generationSeed);

    for (unsigned int g = 0; g < settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        unsigned int maxRegisters = state.m_program.m_uniqueRegisters;
        FireStarterResults* newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        int init = (g == 0) && (forceInit || (state.m_generation == 0));

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
        generationSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterResults* newResults = settings.m_generations & 1 ? m_deviceResults1 : m_deviceResults0;
    FireStarterResults* oldResults = settings.m_generations & 1 ? m_deviceResults0 : m_deviceResults1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, stream));
    checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = *m_hostResults->MinResult(0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = *m_hostResults->MinResult(i, variation);
        if (curResult <= minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    FireStarterResult* result = state.Result();
    memcpy(result->Data(variation), m_hostResults->Data(minIndex, variation), result->DataSize());
    *result->Index(variation) = *m_hostResults->Index(minIndex, variation);
    *result->MinResult(variation) = minResult;
    result->maxResult = fmaxf(result->maxResult, minResult);
} // OptimizeGenerations

bool FireStarterExecute::InitResults(const FireStarterState& state)
{
    bool result = true;
    FireStarterSettings settings = state.Settings();

    CUDAContext* context = Context();
    CUstream stream = context->Stream();

    size_t resultsSize = FireStarterResults::ResultsSize(settings.m_population, settings.m_registers, settings.m_variations);
    if (m_resultsSize != resultsSize) {
        m_resultsSize = resultsSize;
        if (m_hostResults) {
            checkCUDAErrors(cudaFreeHost(m_hostResults));
            m_hostResults = nullptr;
        }
        if (m_deviceResults) {
            checkCUDAErrors(cudaFreeAsync(m_deviceResults, stream));
            m_deviceResults = nullptr;
            m_deviceResults0 = nullptr;
            m_deviceResults1 = nullptr;
        }
        if (m_resultsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
            if (m_hostResults)
                m_hostResults->InitResults(settings.m_population, settings.m_instructions, settings.m_variations, settings.m_startResult);
            else
                result = false;
        }
        if (m_resultsSize) {
            checkCUDAErrors(cudaMallocAsync(&m_deviceResults, m_resultsSize * 2, stream));
            if (m_hostResults && m_deviceResults) {
                m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
                m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
                checkCUDAErrors(cudaMemcpyAsync(m_deviceResults0, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice, stream));
                checkCUDAErrors(cudaMemcpyAsync(m_deviceResults1, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice, stream));
            } else
                result = false;
        }
    }

    size_t evolutionsSize = (settings.m_mode == FIRESTARTER_CODE) ? FireStarterEvolutions::EvolutionsSize(settings.m_population, settings.m_instructions) : 0;
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
                m_hostEvolutions->InitEvolutions(settings.m_population, settings.m_instructions);
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
} // InitResults

void FireStarterExecute::FinishResults(void)
{
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before FinishResults() called!\n");
        std::terminate();
    }

    CUstream stream = context->Stream();
    if (m_deviceResults) {
        checkCUDAErrors(cudaFreeAsync(m_deviceResults, stream));
        m_deviceResults = nullptr;
        m_deviceResults0 = nullptr;
        m_deviceResults1 = nullptr;
    }
    if (m_deviceEvolutions) {
        checkCUDAErrors(cudaFreeAsync(m_deviceEvolutions, stream));
        m_deviceEvolutions = nullptr;
        m_deviceEvolutions0 = nullptr;
        m_deviceEvolutions1 = nullptr;
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    if (m_hostEvolutions) {
        checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
        m_hostEvolutions = nullptr;
    }
    context->Synchronize();
} // FinishResults

bool FireStarterExecute::Optimize(FireStarterState& state, bool init, bool skipVariations)
{
    if (!m_optimizeFunction)
        return false;
    FireStarterSettings stateSettings = state.Settings();
    FireStarterResult* stateResult = state.Result();
    float bestResult = stateResult->maxResult;
    stateResult->maxResult = 0;
    bool found = true;

    if (stateSettings.m_variations != m_variationOrder.size()) {
        m_variationOrder.resize(stateSettings.m_variations);
        for (unsigned int v = 0; v < stateSettings.m_variations; v++)
            m_variationOrder[v] = v;
    }
    for (unsigned int v = 0; v < stateSettings.m_variations; v++) {
        unsigned int variation = m_variationOrder[v];

        // Optimization: If the variation result is worse, skip the rest of the variations.
        if (found) {
            OptimizeGenerations(state, init, variation);
            if (skipVariations)
                found = stateResult->maxResult < bestResult;
            if (v)
                for (unsigned int i = 0; i < v; i++) {
                    if (stateResult->MinResult(m_variationOrder[i]) < stateResult->MinResult(variation)) {
                        m_variationOrder[v] = m_variationOrder[i];
                        m_variationOrder[i] = variation;
                        variation = m_variationOrder[v];
                    }
                }
        } else
            // The variation data is reset when it is skipped.
            stateResult->InitVariation(0, stateSettings.m_registers, variation, stateSettings.m_startResult);
    }
    return true;
} // Optimize

bool FireStarterExecute::Compile(void)
{
    // Release the current job.
    if (m_job)
        m_manager->AddFree(m_job);

    // Get the next available compile job.
    m_job = m_manager->GetCompile();
    if (!m_job)
        return false;

    // Output the compile log if it is not empty.
    if (!m_job->m_log.empty())
        printf("%s\n", m_job->m_log.c_str());

    // Initialize the results and compile the CUDA module.
    if (!m_job->m_ptx.empty())
        if (InitResults(m_job->m_state))
            if (CUDACompile::CompileModule(m_optimizeModule, m_job->m_ptx)) {
                m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, m_job->m_programFunction);
                if (m_optimizeFunction)
                    return true;
                CUDACompile::ReleaseModule(m_optimizeModule);
            }

    // Something went wrong so free the job.
    m_manager->AddFree(m_job);
    m_job = nullptr;
    return false;
} // Compile

void FireStarterExecute::ExecuteCompile(void)
{
    DispatchAsync([this] {
        if (!Compile()) {
            m_manager->AddFree(m_job);
            m_job = nullptr;
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteOptimize(size_t generation, size_t index, size_t test, bool init)
{
    DispatchAsync([this, generation, index, test, init] {
        FireStarterJob* job = nullptr;
        if (m_job && (job = m_manager->GetFree())) {
            job->Copy(m_job);
            job->m_state.m_generation = generation;
            job->m_state.m_index = index;
            job->m_state.m_test = test;
            Optimize(job->m_state, init, FIRESTARTER_RANDOM_SKIP_VARIATIONS);
            m_manager->AddComplete(job);
        }
    });
} // ExecuteOptimize

void FireStarterExecute::ExecuteEvolve(void)
{
    DispatchAsync([this] {
        if (Compile()) {
            Optimize(m_job->m_state, true, FIRESTARTER_RANDOM_SKIP_VARIATIONS);
            m_manager->AddComplete(m_job);
            m_job = nullptr;
        }
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteRandom(void)
{
    DispatchAsync([this] {
        static std::atomic<float> g_atomicResult = FIRESTARTER_RANDOM_START_RESULT;
        while (Compile()) {
            m_job->m_state.Result()->maxResult = g_atomicResult;
            Optimize(m_job->m_state, FIRESTARTER_RANDOM_SKIP_VARIATIONS);
            float stateResult = m_job->m_state.Result()->maxResult;
            if (stateResult < g_atomicResult) {
                float oldResult = g_atomicResult;
                while ((stateResult < oldResult) && !g_atomicResult.compare_exchange_weak(oldResult, stateResult));
            }
            m_manager->AddComplete(m_job);
            m_job = nullptr;
        }
        LOG("Execute unit %d complete\n", (unsigned int)m_index);
    });
} // ExecuteRandom

void FireStarterExecute::ExecuteFinish(void)
{
    DispatchSync([this] {
        delete m_job;
        m_job = nullptr;
        FinishResults();
        CUDACompile::ReleaseModule(m_optimizeModule);
    });
} // ExecuteFinish

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index) : CUDAThread(index)
{
    m_manager = manager;
    m_index = index;
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
    ExecuteFinish();
} // ~FireStarterExecute(void)

FireStarterExecuteRandom::FireStarterExecuteRandom(FireStarterManager* manager, size_t numExecute)
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
