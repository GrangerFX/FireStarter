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

void FireStarterExecute::FinishResults(void)
{
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before FinishPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    if (m_deviceInitResults) {
        checkCUDAErrors(cudaFreeAsync(m_deviceInitResults, stream));
        m_deviceInitResults = nullptr;
    }
    context->Synchronize();
} // FinishResults

bool FireStarterExecute::InitResults(const FireStarterSettings& settings)
{
    // Reallocate the initial result if the size has changed.
    size_t initResultsSize = FireStarterPopulation::ResultsSize(settings);
    if (m_initResultsSize != initResultsSize) {
        if (m_deviceInitResults) {
            checkCUDAErrors(cudaFreeAsync(m_deviceInitResults, Stream()));
            m_deviceInitResults = nullptr;
        }
        m_initResultsSize = initResultsSize;
        checkCUDAErrors(cudaMallocAsync(&m_deviceInitResults, m_initResultsSize, Stream()));
    }
    Context()->Synchronize();
    return m_deviceInitResults != nullptr;
} // InitResults

void FireStarterExecute::FinishPopulation(void)
{
    if (m_devicePopulation) {
        checkCUDAErrors(cudaFreeAsync(m_devicePopulation, Stream()));
        m_devicePopulation = nullptr;
        m_devicePopulation0 = nullptr;
        m_devicePopulation1 = nullptr;
    }
    if (m_hostPopulation) {
        checkCUDAErrors(cudaFreeHost(m_hostPopulation));
        m_hostPopulation = nullptr;
    }
    Context()->Synchronize();
} // FinishPopulation

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
    // Reallocate the populations if the size has changed.
    size_t populationSize = FireStarterPopulation::PopulationSize(settings);
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
        Context()->Synchronize();
    }
    return m_hostPopulation && m_devicePopulation;
} // InitPopulation

void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    bool optimizePass = settings.m_mode == FIRESTARTER_OPTIMIZE_GPU;
    unsigned int population = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = optimizePass ? (population + (threadsPerBlock - 1)) / threadsPerBlock : population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long passes = settings.m_passes;
    unsigned long long evolutionPass = optimizePass ? state.m_optimize_pass * passes : state.m_generation * passes;
    CUfunction executeFunction = optimizePass ? m_executeOptimizeFunction : m_executeEvolveFunction;

    if (m_deviceInitResults)
        checkCUDAErrors(cudaMemcpyAsync(m_deviceInitResults, state.Results(), m_initResultsSize, cudaMemcpyHostToDevice, Stream()));
    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
        unsigned long long evolutionSeed = optimizePass ? state.EvolutionSeed(evolutionPass + SEED2(state.m_generation)) : state.EvolutionSeed(evolutionPass);

        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&m_deviceInitResults),
                        reinterpret_cast<void*>(&evolutionSeed),
                        reinterpret_cast<void*>(&evolutionPass),
                        reinterpret_cast<void*>(&population)
        };

        checkCUDAErrors(cuLaunchKernel(executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));

        // Synchronize all GPU threads and results.
        // Note: TODO: Syncronize to the completion of the previous variation if possible.
        Context()->Synchronize();
        evolutionPass++;
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
    unsigned int maxAge1 = 0;
    unsigned int maxAge2 = 0;
    unsigned int minIndex = 0;
    for (unsigned int i = 0; i < population; i++) {
        unsigned int curAge1 = *m_hostPopulation->EvolveAge1(settings, i);
        unsigned int curAge2 = *m_hostPopulation->EvolveAge2(settings, i);
        maxAge1 = MAX(curAge1, maxAge1);
        maxAge2 = MAX(curAge1, maxAge2);
        FireStarterData* testData = m_hostPopulation->Data(settings, i);
        float curResult = *m_hostPopulation->MinResult(settings, i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterResult* result = state.Result();
    if (!optimizePass)
        memcpy(state.Code(), m_hostPopulation->Code(settings, minIndex), FireStarterCode::CodeSize(settings.m_instructions));
    memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = *m_hostPopulation->EvolveAge1(settings, minIndex);
    *result->EvolveAge2() = *m_hostPopulation->EvolveAge2(settings, minIndex);
    *result->MinResult() = minResult;
    state.m_minIndex = minIndex;

    // Set the state's max result.
    if (!optimizePass)
        state.m_oldResult = state.m_maxResult;
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;

    // Load the state's program from the GPU evolved code (variation 0).
    state.LoadProgramFromCode();
} // ExecuteEvolvePass

float FireStarterExecute::ExecuteOptimizePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    FireStarterSettings settings = state.Settings();
    unsigned int population = settings.m_population;
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    unsigned int blocksPerGrid = (population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long passes = settings.m_passes;
    unsigned long long optimizationPass = state.m_optimize_pass * passes;
    for (unsigned int p = 0; p < passes; p++) {
        // Run all the evolve states in parallel.
        unsigned int registers = state.m_program.m_uniqueRegisters;
        FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
        FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
        unsigned long long optimizationSeed = state.OptimizationSeed(optimizationPass);

        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&variation),
                        reinterpret_cast<void*>(&registers),
                        reinterpret_cast<void*>(&optimizationSeed),
                        reinterpret_cast<void*>(&optimizationPass),
                        reinterpret_cast<void*>(&population)
        };

        checkCUDAErrors(cuLaunchKernel(m_executeOptimizeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            Stream(),                                           // stream
            &arr[0],                                            // arguments
            0));


        // Synchronize all GPU threads and results.
        Context()->Synchronize();
        optimizationPass++;
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
    return minResult;
} // ExecuteOptimizePass

void FireStarterExecute::ExecutePass(FireStarterState& state)
{
    const FireStarterSettings& settings = state.Settings();
    unsigned int variations = settings.m_variations;
    for (unsigned int v = 0; v < variations; v++)
        ExecuteOptimizePass(state, v);

    // Calculate the state's max result.
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;
} // ExecutePass

void FireStarterExecute::ExecuteSmartPass(FireStarterState& state)
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
                float variationResult = ExecuteOptimizePass(state, variation);
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
} // ExecuteSmartPass

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
            m_executeOptimizeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
            if (m_executeOptimizeFunction)
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
        InitPopulation(state.Settings());
        ExecuteSmartPass(state);
        m_executeManager->AddComplete(job);
        return true;
    }

    m_executeManager->AddFree(job);
    m_executeManager->AddComplete(nullptr);
    return false;
} // ExecuteJob

bool FireStarterExecute::ExecuteCompileEvolver(void)
{
    if (!m_executeEvolveFunction)
        DispatchSync([this] {
            std::string program;
            if (FireStarterSource::LoadSource(program, "FireEvolver.cu")) {
                if (CUDACompile::CompileProgram(m_executeModule, program, "FireEvolver")) {
                    m_executeEvolveFunction = CUDACompile::GetFunction(m_executeModule, "Evolver");
                    m_executeOptimizeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
                    if (!m_executeEvolveFunction && m_executeOptimizeFunction)
                        CUDACompile::ReleaseModule(m_executeModule);
                }
            }
         });
    return m_executeEvolveFunction != nullptr;
} // ExecuteCompileEvolver

bool FireStarterExecute::ExecuteGenerateOptimize(const FireStarterState& initState)
{
    bool result = false;

    // Must copy the intitState pointer in case it becomes invalid when the code below is called.
    DispatchSync([this, initState, &result] {
        FireStarterState state(initState);

        // Generate the evaluate code
        std::string evaluateCode;
        m_executeGenerate->GenerateEvaluate(state, evaluateCode);
        state.m_evaluateCode = evaluateCode;

        // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
        std::vector<std::string> options;
        CUDACompile::CompileOptions(options);
        std::string programName = OPTIMIZE_PROGRAM_NAME;
        std::string program = m_executeCode;
        FireStarterSource::UpdateProgram(program, evaluateCode, EVALUATE_CODE);

        if (CUDACompile::CompileProgram(m_executeModule, program, programName)) {
            m_executeOptimizeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
            if (m_executeOptimizeFunction)
                result = true;
            else
                CUDACompile::ReleaseModule(m_executeModule);
        }
        });
    return result;
} // ExecuteGenerateOptimize

void FireStarterExecute::ExecuteInitPopulation(const FireStarterState& state)
{
    DispatchSync([this, state] {
        InitPopulation(state.Settings());
    });
} // ExecuteInitPopulation

void FireStarterExecute::ExecuteEvolve(FireStarterState& state)
{
    DispatchSync([this, &state] {
        state.m_timer.Start();
        InitResults(state.Settings());
        InitPopulation(state.Settings());
        ExecuteEvolvePass(state);
    });
} // ExecuteEvolve

void FireStarterExecute::ExecuteOptimize(FireStarterState& state)
{
    DispatchSync([this, &state] {
        InitPopulation(state.Settings());
        ExecutePass(state);
    });
} // ExecuteOptimize

void FireStarterExecute::ExecuteOptimizePasses(std::atomic<unsigned int>& evolveCount)
{
    DispatchAsync([this, &evolveCount] {
        while (evolveCount-- > 0) {
            if (!ExecuteJob())
                break;
        }
    });
} // ExecuteOptimizePasses

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
        FinishResults();
        CUDACompile::ReleaseModule(m_executeModule);
    });
} // ExecuteFinish

FireStarterExecute::FireStarterExecute(FireStarterManager* manager, size_t index) : CUDAThread(Format("FireStarterExecute%zu", index))
{
    if (!FireStarterSource::LoadSource(m_executeCode, OPTIMIZE_PROGRAM_NAME)) {
        printf(OPTIMIZE_PROGRAM_NAME" could not be loaded!\n");
        std::terminate();
    }
    m_executeManager = manager;
    m_executeIndex = index;
    m_executeGenerate = new FireStarterGenerate(Context());
} // FireStaterExecute

FireStarterExecute::~FireStarterExecute(void)
{
    ExecuteFinish();
    delete m_executeGenerate;
} // ~FireStarterExecute(void)
