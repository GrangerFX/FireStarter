#include "FireStarterExecute.h"
#include "CUDACompile.h"
#include "Checksum.h"
#include "FireStarterCode.h"

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
    FireStarterSettings settings = state.Settings();

    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before InitPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    // Reallocate the populations if the size has changed.
    size_t populationSize = FireStarterPopulation::PopulationSize(settings);
    if (m_populationSize != populationSize) {
        FinishPopulation();
        m_populationSize = populationSize;
        if (m_populationSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostPopulation, m_populationSize));
            checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, stream));
            if (m_devicePopulation) {
                m_devicePopulation0 = m_devicePopulation;
                m_devicePopulation1 = (FireStarterPopulation*)((char*)m_devicePopulation + m_populationSize);
            }
        }
    }

#if 1
    // Clear the population data.
    // Note: Temporary!
    if (m_devicePopulation)
        checkCUDAErrors(cudaMemsetAsync(m_devicePopulation, 0, m_populationSize * 2, stream));
    if (m_hostPopulation)
        memset(m_hostPopulation, 0, m_populationSize);
#endif

    context->Synchronize();
    return m_hostPopulation && m_devicePopulation;
} // InitPopulation

float FireStarterExecute::OptimizeGenerations(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
#if FIRESTARTER_OPTIMIZE_SHARED
    unsigned int threadsPerBlock = WARP_THREADS;   // Same as the threads per CUDA core half warp.
#else
    unsigned int threadsPerBlock = HALF_WARP_THREADS;   // Same as the threads per CUDA core half warp.
#endif
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned long long passes = settings.m_passes;
    unsigned long long optimizationPass = state.m_optimize_pass * passes;

    // Note: DEBUG!
    static unsigned long long checksumIndex = 0;
    if (!checksumIndex)
        FireStarterCode::SaveCode("Logs\\DebugChecksums.txt", "Debug Checksums\n");

    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_program.m_uniqueRegisters;
        FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
        unsigned long long optimizationSeed = state.OptimizationSeed(optimizationPass);

        void* arr[] = { reinterpret_cast<void*>(&settings),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&registers),
                        reinterpret_cast<void*>(&optimizationSeed),
                        reinterpret_cast<void*>(&optimizationPass) };

        unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
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
        optimizationPass++;
#if 1
        // Note: DEBUG!
        if ((checksumIndex == 9) && (p == 0)) {
            checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newResults, m_populationSize, cudaMemcpyDeviceToHost, stream));
            context->Synchronize();

            uint64_t checksum = Checksum(m_hostPopulation, m_hostPopulation->PopulationSize(settings));

            unsigned int i = 436;
            FireStarterResult* result = m_hostPopulation->Result(settings, i, variation);
            std::string checksumString = Format("Test: %4d  ID: %4d  Pass:%4d  Variation: %d  Result: %f  Index: %4d  Checksum: %.16llX\n", state.m_test, state.m_id, optimizationPass, variation, result->m_resultMin, checksumIndex, checksum);

            for (unsigned int j = 0; j < settings.m_registers; j++)
                checksumString += Format("    Member: %4d  Register: %2d  Age: %u  Value: %f\n", i, j, result->m_resultAge, result->Data()->d[j]);

            checksumString += state.m_evaluateCode;
            FireStarterCode::AppendCode("Logs\\DebugChecksums.txt", checksumString);
            std::terminate();
        }
#endif
    }

    // Single GPUs have their data syncronized with the host here.
    bool oddPasses = settings.m_passes & 1;
    FireStarterPopulation* newPopulation = oddPasses ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = oddPasses ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, stream));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Note: DEBUG!
    uint64_t checksum = Checksum(m_hostPopulation, m_hostPopulation->PopulationSize(settings));
    std::string cheksumString = Format("Test: %4d  ID: %4d  Pass:%4d  Variation: %d  Index: %4d  Checksum: %.16llX\n", state.m_test, state.m_id, optimizationPass, variation, checksumIndex++, checksum);
    FireStarterCode::AppendCode("Logs\\DebugChecksums.txt", cheksumString);

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float minResult = *m_hostPopulation->MinResult(settings, 0, variation);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < settings.m_population; i++) {
        float curResult = *m_hostPopulation->MinResult(settings, i, variation);
        if (curResult <= minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }

    FireStarterResult* result = state.Result(variation);
    memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex, variation), FireStarterData::DataSize(settings.m_registers));
    *result->Age() = *m_hostPopulation->Age(settings, minIndex, variation);
    *result->MinResult() = minResult;
    return minResult;
} // OptimizeGenerations

void FireStarterExecute::OptimizePass(FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int variations = settings.m_variations;
    for (unsigned int v = 0; v < variations; v++)
        OptimizeGenerations(state, v);

    // Calculate the state's max result.
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;
} // OptimizePass

bool FireStarterExecute::OptimizeEvolve(FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int variations = settings.m_variations;
    FireStarterResults* results = state.Results();
    float oldResult = state.m_maxResult;
    bool validResult = true;
    float variationMax = 0.0f;
    for (unsigned int v = 0; v < variations; v++) {
        unsigned int variation = state.m_variationOrder[v];
        if (validResult) {
            // If the variation result is worse, skip the rest of the variations.
            float variationResult = OptimizeGenerations(state, variation);
            variationMax = MAX(variationMax, variationResult);
            if (state.m_evolution && (variationMax >= oldResult)) {
                // Count the variation that caused an invalid result.
                state.m_variationCount[variation]++;
                validResult = false;
            }
        } else
            results->Result(variation)->Init(settings);
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
    return validResult;
} // OptimizeEvolve

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
        InitPopulation(state, true);
        OptimizeEvolve(state);
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

void FireStarterExecute::ExecuteInitPopulation(bool sync)
{
    Dispatch([this] {
        if (m_executeJob)
            InitPopulation(m_executeJob->m_state, false);
    }, sync);
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteOptimize(const FireStarterState& state, bool sync)
{
    Dispatch([this, state] {
        if (m_executeJob) {
            FireStarterJob* job = m_executeManager->GetFree();
            if (job) {
                m_executeJob->m_state = state;
                OptimizePass(m_executeJob->m_state);
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
