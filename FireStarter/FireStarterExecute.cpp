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

void FireStarterExecute::FinishResult(void)
{
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before FinishPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    if (m_deviceResult) {
        checkCUDAErrors(cudaFreeAsync(m_deviceResult, stream));
        m_deviceResult = nullptr;
    }
    context->Synchronize();
} // FinishResult

bool FireStarterExecute::InitResult(const FireStarterSettings& settings)
{
    CUDAContext* context = Context();
    if (!context) {
        printf("CUDA context destroyed before InitPopulation() called!\n");
        std::terminate();
    }
    CUstream stream = context->Stream();

    // Reallocate the initial result if the size has changed.
    size_t resultSize = FireStarterPopulation::ResultSize(settings);
    if (m_resultSize != resultSize) {
        if (m_deviceResult) {
            checkCUDAErrors(cudaFreeAsync(m_deviceResult, stream));
            m_deviceResult = nullptr;
        }
        m_resultSize = resultSize;
        checkCUDAErrors(cudaMallocAsync(&m_deviceResult, m_resultSize, stream));
    }

    context->Synchronize();
    return m_deviceResult != nullptr;
} // InitResult

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

bool FireStarterExecute::InitPopulation(const FireStarterSettings& settings)
{
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
            if (m_hostPopulation)
                memset(m_hostPopulation, 0, m_populationSize);
            checkCUDAErrors(cudaMallocAsync(&m_devicePopulation, m_populationSize * 2, stream));
            if (m_devicePopulation) {
                checkCUDAErrors(cudaMemsetAsync(m_devicePopulation, 0, m_populationSize * 2, stream));
                m_devicePopulation0 = m_devicePopulation;
                m_devicePopulation1 = (FireStarterPopulation*)((char*)m_devicePopulation + m_populationSize);
            }
        }
    }
    context->Synchronize();
    return m_hostPopulation && m_devicePopulation;
} // InitPopulation

void FireStarterExecute::ExecuteEvolvePass(FireStarterState& state)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
    unsigned long long passes = settings.m_passes;
    unsigned long long evolutionPass = state.m_generation * passes;

    for (unsigned int variation = 0; variation < settings.m_variations; variation++) {
        if (m_deviceResult)
            checkCUDAErrors(cudaMemcpyAsync(m_deviceResult, state.Result(variation), m_resultSize, cudaMemcpyHostToDevice, stream));
        for (unsigned int p = 0; p < passes; p++) {
            // Run all the evolve states in parallel.
            FireStarterPopulation* newResults = p & 1 ? m_devicePopulation0 : m_devicePopulation1;
            FireStarterPopulation* oldResults = p & 1 ? m_devicePopulation1 : m_devicePopulation0;
            unsigned long long evolutionSeed = state.EvolutionSeed(evolutionPass);

            void* arr[] = { reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&m_deviceResult),
                            reinterpret_cast<void*>(&variation),
                            reinterpret_cast<void*>(&evolutionSeed),
                            reinterpret_cast<void*>(&evolutionPass)
            };

            dim3 cudaGridSize(settings.m_population, 1, 1);
            checkCUDAErrors(cuLaunchKernel(m_executeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
                0,                                                  // shared mem
                stream,                                             // stream
                &arr[0],                                            // arguments
                0));

            // Synchronize all GPU threads and results.
            // Note: TODO: Syncronize to the completion of the previous variation if possible.
            context->Synchronize();
            evolutionPass++;
        }
    }

    // Single GPUs have their data syncronized with the host here.
    bool oddPasses = settings.m_passes & 1;
    FireStarterPopulation* newPopulation = oddPasses ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = oddPasses ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, stream));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    float variationMax = 0.0f;
    bool validResult = false;
    for (unsigned int variation = 0; variation < settings.m_variations; variation++) {
        float minResult = settings.m_startResult;
        unsigned int maxAge = 0;
        unsigned int minIndex = 0;
        for (unsigned int i = 0; i < settings.m_population; i++) {
            unsigned int curAge = *m_hostPopulation->DataAge(settings, i, variation);
            maxAge = MAX(curAge, maxAge);
            float curResult = *m_hostPopulation->MinResult(settings, i, variation);
            if (curResult <= minResult) {
                minResult = curResult;
                minIndex = i;
            }
        }
        FireStarterResult* result = state.Result(variation);
        memcpy(result->Data(), m_hostPopulation->Data(settings, minIndex, variation), FireStarterData::DataSize(settings.m_registers));
        memcpy(result->Code(settings.m_registers), m_hostPopulation->Code(settings, minIndex, variation), FireStarterCode::CodeSize(settings.m_instructions));
        *result->DataAge() = *m_hostPopulation->DataAge(settings, minIndex, variation);
        *result->CodeAge() = *m_hostPopulation->CodeAge(settings, minIndex, variation);
        *result->MinResult() = minResult;
        printf("minResult: %f  minIndex: %d  dataAge: %d  codeAge: %d  maxAge: %u\n", minResult, minIndex, *result->DataAge(), *result->CodeAge(), maxAge);
    }

    // Set the state's max result.
    state.m_maxResult = state.MaxResult();
    state.m_optimizeValid = true;

    // Load the state's program from the GPU evolved code (variation 0).
    state.LoadProgramFromCode();
} // ExecuteEvolvePass

float FireStarterExecute::ExecuteOptimizePass(FireStarterState& state, unsigned int variation)
{
    // Launch the calculation kernel
    CUDAContext* context = Context();
    CUstream stream = context->Stream();
    unsigned int threadsPerBlock = FIRESTARTER_WARP_THREADS;   // Same as the threads per CUDA core warp.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    FireStarterSettings settings = state.Settings();
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
                        reinterpret_cast<void*>(&optimizationPass)
                      };

        unsigned int blocksPerGrid = (settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
        dim3 cudaGridSize(blocksPerGrid, 1, 1);
        checkCUDAErrors(cuLaunchKernel(m_executeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim
            0,                                                  // shared mem
            stream,                                             // stream
            &arr[0],                                            // arguments
            0));


        // Synchronize all GPU threads and results.
        context->Synchronize();
        optimizationPass++;
    }

    // Single GPUs have their data syncronized with the host here.
    // Note: TODO: Only the current variation results should be copied to save time.
    bool oddPasses = settings.m_passes & 1;
    FireStarterPopulation* newPopulation = oddPasses ? m_devicePopulation1 : m_devicePopulation0;
    FireStarterPopulation* oldPopulation = oddPasses ? m_devicePopulation0 : m_devicePopulation1;
    checkCUDAErrors(cudaMemcpyAsync(m_hostPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToHost, stream));
    if (oddPasses)
        checkCUDAErrors(cudaMemcpyAsync(oldPopulation, newPopulation, m_populationSize, cudaMemcpyDeviceToDevice, stream));
    context->Synchronize();

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
    *result->DataAge() = *m_hostPopulation->DataAge(settings, minIndex, variation);
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
            float variationResult = ExecuteOptimizePass(state, variation);
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
        InitPopulation(state.Settings());
        ExecuteSmartPass(state);
        m_executeManager->AddComplete(job);
        return true;
    }

    m_executeManager->AddFree(job);
    m_executeManager->AddComplete(nullptr);
    return false;
} // ExecuteJob

void FireStarterExecute::ExecuteCompileEvolver(void)
{
    DispatchSync([this] {
        std::string program;
        if (FireStarterSource::LoadSource(program, "FireEvolver.cu")) {
            if (CUDACompile::CompileProgram(m_executeModule, program, "FireEvolver")) {
                m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Evolver");
                if (!m_executeFunction)
                    CUDACompile::ReleaseModule(m_executeModule);
            }
        }
     });
} // ExecuteCompileEvolver

void FireStarterExecute::ExecuteCompileOptimizer(void)
{
    DispatchSync([this] {
        std::string program;
        if (FireStarterSource::LoadSource(program, "FireEvolver.cu")) {
            if (CUDACompile::CompileProgram(m_executeModule, program, "FireEvolver")) {
                m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
                if (!m_executeFunction)
                    CUDACompile::ReleaseModule(m_executeModule);
            }
        }
    });
} // ExecuteCompileOptimizer

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
            m_executeFunction = CUDACompile::GetFunction(m_executeModule, "Optimizer");
            if (m_executeFunction)
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

void FireStarterExecute::ExecuteOptimize(FireStarterState& state, bool& init)
{
    DispatchSync([this, &state, &init] {
        if (init) {
            InitPopulation(state.Settings());
            init = false;
        }
        ExecutePass(state);
    });
} // ExecuteOptimize

void FireStarterExecute::ExecuteOptimizeGPU(FireStarterState& state, bool init)
{
    DispatchSync([this, &state, init] {
        state.m_timer.Start();
        InitResult(state.Settings());
        InitPopulation(state.Settings());
        ExecuteEvolvePass(state);
    });
} // ExecuteOptimizeGPU

void FireStarterExecute::ExecuteEvolveGPU(FireStarterState& state)
{
    DispatchSync([this, &state] {
        state.m_timer.Start();
        InitResult(state.Settings());
        InitPopulation(state.Settings());
        ExecuteEvolvePass(state);
    });
} // ExecuteEvolveGPU

void FireStarterExecute::ExecuteEvolveCPU(std::atomic<unsigned int>& evolveCount)
{
    DispatchAsync([this, &evolveCount] {
        while (evolveCount-- > 0) {
            if (!ExecuteJob())
                break;
        }
    });
} // ExecuteEvolve

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
