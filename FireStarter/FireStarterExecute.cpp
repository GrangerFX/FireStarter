#include "FireStarterExecute.h"
#include "CUDACompile.h"

void FireStarterExecute::CodeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long generationSeed = state.StateSeed(1);
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
            0, m_CUDAContext->Stream(),                 // shared mem, stream */
            &arr[0],                                            // arguments */
            0));

        // Synchronize all GPU threads and results.
        m_CUDAContext->Synchronize();

        // Multiple GPUs must have their data syncronized prior to the next generation.
        generationSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterResults* newResults = settings.m_generations & 1 ? m_deviceResults1 : m_deviceResults0;
    FireStarterResults* oldResults = settings.m_generations & 1 ? m_deviceResults0 : m_deviceResults1;
    FireStarterEvolutions* newEvolutions = settings.m_generations & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;
    FireStarterEvolutions* oldEvolutions = settings.m_generations & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaMemcpyAsync(m_hostEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaMemcpyAsync(oldEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToDevice, m_CUDAContext->Stream()));
    m_CUDAContext->Synchronize();

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

void FireStarterExecute::OptimizeGenerations(FireStarterState& state, unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long generationSeed = state.StateSeed(1);
    FireStarterSettings settings = state.Settings();
    unsigned int firstMember = 0;
    unsigned int lastMember = settings.m_population;

    for (unsigned int g = 0; g < settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        unsigned int maxRegister = state.m_program.m_uniqueRegisters;
        FireStarterResults* newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        int init = (g == 0) && (forceInit || (state.m_generation == 0));

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&firstVariation),
                        reinterpret_cast<void*>(&lastVariation),
                        reinterpret_cast<void*>(&firstMember),
                        reinterpret_cast<void*>(&lastMember),
                        reinterpret_cast<void*>(&maxRegister),
                        reinterpret_cast<void*>(&generationSeed),
                        reinterpret_cast<void*>(&init) };

        unsigned int blocksPerGrid = ((lastMember - firstMember) + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_CUDAContext->Stream(),                 // shared mem, stream */
            &arr[0],                                            // arguments */
            0));

        // Synchronize all GPU threads and results.
        m_CUDAContext->Synchronize();
        generationSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterResults* newResults = settings.m_generations & 1 ? m_deviceResults1 : m_deviceResults0;
    FireStarterResults* oldResults = settings.m_generations & 1 ? m_deviceResults0 : m_deviceResults1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, m_CUDAContext->Stream()));
    checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, m_CUDAContext->Stream()));
    m_CUDAContext->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        float minResult = *m_hostResults->MinResult(0, v);
        unsigned int minIndex = 0;
        for (unsigned int i = 1; i < settings.m_population; i++) {
            float curResult = *m_hostResults->MinResult(i, v);
            if (curResult <= minResult) {
                minResult = curResult;
                minIndex = i;
            }
        }

        FireStarterResult* result = state.Result();
        memcpy(result->Data(v), m_hostResults->Data(minIndex, v), result->DataSize());
        *result->Index(v) = *m_hostResults->Index(minIndex, v);
        *result->MinResult(v) = minResult;
        result->maxResult = fmaxf(result->maxResult, minResult);
    }
} // OptimizeGenerations

bool FireStarterExecute::InitResults(const FireStarterState& state)
{
    bool result = true;
    FireStarterSettings settings = state.Settings();

    if (!m_CUDAContext)
        m_CUDAContext = new CUDAContext(m_device);
    CUstream stream = m_CUDAContext->Stream();
    m_CUDAContext->SetContext();

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
            if (m_deviceResults) {
                m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
                m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
                checkCUDAErrors(cudaMemcpy(m_deviceResults0, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
                checkCUDAErrors(cudaMemcpy(m_deviceResults1, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
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
                checkCUDAErrors(cudaMemcpy(m_deviceEvolutions0, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
                checkCUDAErrors(cudaMemcpy(m_deviceEvolutions1, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
            } else
                result = false;
        }
    }
    return result;
} // InitResults

bool FireStarterExecute::ExecuteJob(FireStarterCompilerManager* manager)
{
    FireStarterJob* job = manager->GetCompile();
    if (!job)
        return false;
    if (!job->m_log.empty())
        printf("%s\n", job->m_log.c_str());
    if (job->m_ptx.empty()) {
        manager->AddFree(job);
        return false;
    }

    FireStarterState& state = job->m_state;
    if (!InitResults(state))
        return false;

    CUmodule cuda_module = nullptr;
    CUDACompile::CompileModule(cuda_module, job->m_ptx);
    if (!cuda_module) {
        manager->AddFree(job);
        return false;
    }

    m_optimizeFunction = CUDACompile::GetFunction(cuda_module, job->m_programFunction);
    if (!m_optimizeFunction) {
        manager->AddFree(job);
        return false;
    }

    FireStarterSettings stateSettings = state.Settings();
    FireStarterResult* stateResult = state.Result();
    stateResult->maxResult = 0;
    bool found = true;
#if FIRESTARTER_RANDOM_SKIP_VARIATIONS
    static std::atomic<float> g_atomicResult;
    for (unsigned int variation = 0; variation < stateSettings.m_variations; variation++) {
        // Optimization: If the variation result is worse, skip the rest of the variations.
        if (found) {
            OptimizeGenerations(state, 1, variation, variation);
            found = stateResult->maxResult <= g_atomicResult;
        } else
            // The variation data is reset when it is skipped.
            stateResult->InitVariation(0, stateSettings.m_registers, variation, stateSettings.m_startResult);
    }
#else
    OptimizeGenerations(1, m_firstVariation, m_lastVariation);
#endif

    // Find the best overall result for the state.
    if (found) {
        unsigned int bestIndex = 0;
        float bestResult = *m_hostResults->MaxResult(0);
        for (unsigned int i = 1; i < stateSettings.m_population; i++) {
            float curResult = *m_hostResults->MaxResult(i);
            if (curResult < bestResult) {
                bestIndex = i;
                bestResult = curResult;
            }
        }
        FireStarterResult* result = state.Result();
        result->debug1 = *m_hostResults->Debug1(bestIndex);
        result->debug2 = *m_hostResults->Debug2(bestIndex);

        // Find the best result for all the units.
#if FIRESTARTER_RANDOM_SKIP_VARIATIONS
        float oldResult = g_atomicResult;
        while ((oldResult > stateResult->maxResult) && !g_atomicResult.compare_exchange_weak(oldResult, stateResult->maxResult));
#endif
    }
    manager->AddComplete(job);
    return true;
} // ExecuteJob

void FireStarterExecute::ExecuteRandom(FireStarterCompilerManager* manager)
{
    DispatchAsync([this, manager] {
        if (!WillTerminate()) {
            if (ExecuteJob(manager)) {  // Returns true if the job was compiled and executed successfully.
                if (!WillTerminate())
                    ExecuteRandom(manager);
            } else
                manager->AddComplete(nullptr);
        }
    });
} // ExecuteRandom

FireStarterExecute::FireStarterExecute(unsigned int index)
{
    m_device = index;
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
} // ~FireStarterExecute(void)
