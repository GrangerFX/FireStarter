#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

std::atomic<float> FireStarterUnit::g_atomicResult = FIRESTARTER_RANDOM_START_RESULT;

void FireStarterUnit::UpdateEvolveStates(void)
{
    if (m_settings.m_evolve = FIRESTARTER_EVOLVE_BEST) {
        // Find the program's best state among all the states from all the units.
        float unitBestResult = m_allStates[0].MaxResult();
        unsigned int bestIndex = 0;
        for (unsigned int i = 1; i < m_settings.m_units; i++) {
            float result = m_allStates[i].MaxResult();
            if (result < unitBestResult) {
                unitBestResult = result;
                bestIndex = i;
            }
        }

        // Initialize the state with the best previous state.
        m_state = m_allStates[bestIndex];
    } else if (m_settings.m_evolve = FIRESTARTER_EVOLVE_RANDOM) {
        // If a state did not improve, replace it with a random state.
        if (m_state.MaxResult() > m_allStates[m_unitIndex].MaxResult()) {
            unsigned long long seed = m_state.EvolveSeed(1234567);
            m_state = m_allStates[RANDOMMOD64(seed, m_allStates.size())];
        }
    } else { // m_settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUIAL
        // Reset the state to its own best state.
        m_state = m_allStates[m_unitIndex];
    }
} // UpdateEvolveStates

void FireStarterUnit::GenerateCode(void)
{
    for (FireStarterContext& context : m_contexts)
        context.CodeCompile(m_evolveCode);
} // GenerateCode

void FireStarterUnit::GenerateOptimize(void)
{
    // Generate the evaluate and optimize code
    std::string evaluateCode;

    // Update the Evaluate funtion.
    m_generate->GenerateEvaluate(m_state, evaluateCode);

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    std::string code = m_optimizeCode;
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);

    // Compile the new code.
    for (FireStarterContext& context : m_contexts)
        context.OptimizeCompile(code);
} // GenerateOptimize

void FireStarterUnit::GenerateUnit(void)
{
    // Evolve each state.
    if (!m_state.m_generation || (m_settings.m_mode == FIRESTARTER_RANDOM))
        m_state.RandomProgram();
    else
        m_state.RandomInstruction();
    m_state.m_program.OptimizeRegisters();

    // Generate the unit code for the current generation
    GenerateOptimize();
} // GenerateUnit

void FireStarterUnit::SyncContexts(void)
{
    for (FireStarterContext& context : m_contexts)
        context.Syncronize();
} // SyncContexts

void FireStarterUnit::CodeGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long generationSeed = m_state.EvolveSeed(1);
    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (FireStarterContext& context : m_contexts) {
            context.SetContext();
            FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
            FireStarterEvolutions* newEvolutions = g & 1 ? context.m_deviceEvolutions0 : context.m_deviceEvolutions1;
            FireStarterEvolutions* oldEvolutions = g & 1 ? context.m_deviceEvolutions1 : context.m_deviceEvolutions0;
            int init = (g == 0) && (forceInit || (m_state.m_generation == 0));

            void* arr[] = { reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&newEvolutions),
                            reinterpret_cast<void*>(&oldEvolutions),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&firstVariation),
                            reinterpret_cast<void*>(&lastVariation),
                            reinterpret_cast<void*>(&context.m_firstMember),
                            reinterpret_cast<void*>(&context.m_lastMember),
                            reinterpret_cast<void*>(&generationSeed),
                            reinterpret_cast<void*>(&init) };

            unsigned int blocksPerGrid = context.m_lastMember - context.m_firstMember;
            dim3 cudaGridSize(blocksPerGrid, 1, 1);
            checkCUDAErrors(cuLaunchKernel(context.m_evolveFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, context.m_CUDAContext->Stream(),                 // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
        }

        // Synchronize all GPU threads and results.
        SyncContexts();

        // Multiple GPUs must have their data syncronized prior to the next generation.
        if (m_contexts.size() > 1) {
            for (FireStarterContext& context : m_contexts) {
                context.SetContext();
                size_t membersSize = m_hostResults->MemorySize(context.m_lastMember - context.m_firstMember);
                size_t membersOffset = m_hostResults->MemorySize(context.m_firstMember);
                FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
                checkCUDAErrors(cudaMemcpyAsync(&m_hostResults->m_memory[membersOffset], &newResults->m_memory[membersOffset], membersSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));

                size_t evolutionsSize = m_hostEvolutions->MemorySize(context.m_lastMember - context.m_firstMember);
                size_t evolutionsOffset = m_hostEvolutions->MemorySize(context.m_firstMember);
                FireStarterEvolutions* newEvolutions = g & 1 ? context.m_deviceEvolutions0 : context.m_deviceEvolutions1;
                checkCUDAErrors(cudaMemcpyAsync(&m_hostEvolutions->m_memory[evolutionsOffset], &newEvolutions->m_memory[evolutionsOffset], evolutionsSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
            }
            SyncContexts();
            for (FireStarterContext& context : m_contexts) {
                context.SetContext();
                FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
                checkCUDAErrors(cudaMemcpyAsync(oldResults, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice, context.m_CUDAContext->Stream()));

                FireStarterEvolutions* oldEvolutions = g & 1 ? context.m_deviceEvolutions1 : context.m_deviceEvolutions0;
                checkCUDAErrors(cudaMemcpyAsync(oldEvolutions, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice, context.m_CUDAContext->Stream()));
            }
            SyncContexts();
        }
        generationSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterContext& context = m_contexts[0];
    context.SetContext();
    if (m_contexts.size() == 1) {
        FireStarterResults* newResults = m_settings.m_generations & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
        FireStarterResults* oldResults = m_settings.m_generations & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
        FireStarterEvolutions* newEvolutions = m_settings.m_generations & 1 ? context.m_deviceEvolutions1 : context.m_deviceEvolutions0;
        FireStarterEvolutions* oldEvolutions = m_settings.m_generations & 1 ? context.m_deviceEvolutions0 : context.m_deviceEvolutions1;
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(m_hostEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, context.m_CUDAContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(oldEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToDevice, context.m_CUDAContext->Stream()));
        SyncContexts();
    }

    // Get the best results.
    float bestResult = *m_hostResults->MaxResult(0);
    unsigned int bestIndex = 0;
    for (unsigned int i = 1; i < m_settings.m_population; i++) {
        unsigned int curIndex = *m_hostResults->Index(i, 0);
        if (curIndex == i) {
            float curResult = *m_hostResults->MaxResult(i);
            if (curResult <= bestResult) {
                bestResult = curResult;
                bestIndex = i;
            }
        }
    }

    memcpy(m_state.Result(), m_hostResults->Result(bestIndex), FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations));
    m_state.m_program.LoadInstructions(m_hostEvolutions->Instructions(bestIndex));
} // CodeGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned long long generationSeed = m_state.OptimizeSeed(1) * m_settings.m_generations;

    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (FireStarterContext& context : m_contexts) {
            context.SetContext();
            unsigned int maxRegister = m_state.m_program.m_uniqueRegisters;
            FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
            int init = (g == 0) && (forceInit || (m_state.m_generation == 0));
 
            void* arr[] = { reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&firstVariation),
                            reinterpret_cast<void*>(&lastVariation),
                            reinterpret_cast<void*>(&context.m_firstMember),
                            reinterpret_cast<void*>(&context.m_lastMember),
                            reinterpret_cast<void*>(&maxRegister),
                            reinterpret_cast<void*>(&generationSeed),
                            reinterpret_cast<void*>(&init) };

            unsigned int blocksPerGrid = ((context.m_lastMember - context.m_firstMember) + (threadsPerBlock - 1)) / threadsPerBlock;
            dim3 cudaGridSize(blocksPerGrid, 1, 1);
            checkCUDAErrors(cuLaunchKernel(context.m_optimizeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, context.m_CUDAContext->Stream(),                 // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
        }
 
        // Synchronize all GPU threads and results.
        SyncContexts();

        // Multiple GPUs must have their data syncronized prior to the next generation.
        if (m_contexts.size() > 1) {
            for (FireStarterContext& context : m_contexts) {
                context.SetContext();
                size_t membersSize = m_hostResults->MemorySize(context.m_lastMember - context.m_firstMember);
                size_t membersOffset = m_hostResults->MemorySize(context.m_firstMember);
                FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
                checkCUDAErrors(cudaMemcpyAsync(&m_hostResults->m_memory[membersOffset], &newResults->m_memory[membersOffset], membersSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
            }
            SyncContexts();
            for (FireStarterContext& context : m_contexts) {
                context.SetContext();
                FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
                checkCUDAErrors(cudaMemcpyAsync(oldResults, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice, context.m_CUDAContext->Stream()));
            }
        }
        generationSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    FireStarterContext& context = m_contexts[0];
    context.SetContext();
    if (m_contexts.size() == 1) {
        FireStarterResults* newResults = m_settings.m_generations & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
        FireStarterResults* oldResults = m_settings.m_generations & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, context.m_CUDAContext->Stream()));
        context.m_CUDAContext->Synchronize();
    }

    // Get the best variation results.
    // Note: The best result may get worse generation to generation before it improves.
    // This allows for better diversity among members when they struggle to evolve and yields better results.
    for (unsigned int v = firstVariation; v <= lastVariation; v++) {
        float minResult = *m_hostResults->MinResult(0, v);
        unsigned int minIndex = 0;
        for (unsigned int i = 1; i < m_settings.m_population; i++) {
            float curResult = *m_hostResults->MinResult(i, v);
            if (curResult <= minResult) {
                minResult = curResult;
                minIndex = i;
            }
        }

        FireStarterResult* result = m_state.Result();
        memcpy(result->Data(v), m_hostResults->Data(minIndex, v), result->DataSize());
        *result->Index(v) = *m_hostResults->Index(minIndex, v);
        *result->MinResult(v) = minResult;
        result->maxResult = fmaxf(result->maxResult, minResult);
    }
} // OptimizeGenerations

void FireStarterUnit::OptimizeVariations(unsigned int forceInit)
{
    // Initialize maxResult.
    m_state.Result()->maxResult = 0.0f;

    // Evolve the program data.
    OptimizeGenerations(forceInit, m_firstVariation, m_lastVariation);

    // Find the best overall result for the state.
    unsigned int bestIndex = 0;
    float bestResult = *m_hostResults->MaxResult(0);
    for (unsigned int i = 1; i < m_settings.m_population; i++) {
        float curResult = *m_hostResults->MaxResult(i);
        if (curResult < bestResult) {
            bestIndex = i;
            bestResult = curResult;
        }
    }
    FireStarterResult* result = m_state.Result();
    result->debug1 = *m_hostResults->Debug1(bestIndex);
    result->debug2 = *m_hostResults->Debug2(bestIndex);
} // OptimizeVaraitions

void FireStarterUnit::ExecuteCode(void)
{
    // Set the state's generation
    m_state.m_generation = m_generation++;

    // Generate the code for the first generation.
    GenerateCode();

    // Evolve the program instructions.
    CodeGenerations(0, m_firstVariation, m_lastVariation);
} // ExecuteCode

void FireStarterUnit::ExecuteOptimize(void)
{
    // Set the state's generation
    m_state.m_generation = m_generation;

    // Generate the code for the first generation.
    if (!m_generation++)
        GenerateOptimize();

    // Evolve the program data.
    OptimizeVariations(0);
} // ExecuteOptimize

void FireStarterUnit::ExecuteUnit(void)
{
    // Set the state's generation
    m_state.m_generation = m_generation++;

    // Evolve, generate and compile the program.
    GenerateUnit();

    // Evolve the program data.
    OptimizeVariations(1);
} // ExecuteUnit

bool FireStarterUnit::LoadCode(void)
{
    static bool codeLoaded = false;
    static std::string evolveCode;
    static std::string optimizeCode;
    if (!codeLoaded) {
        FireStarterCode::LoadCode("FireInterpreter.cu", evolveCode);
        FireStarterCode::LoadCode("FireOptimizer.cu", optimizeCode);
        codeLoaded = true;
    }
    m_evolveCode = evolveCode;
    m_optimizeCode = optimizeCode;
    return !(m_evolveCode.empty() || m_optimizeCode.empty());
} // LoadCode

void FireStarterUnit::Deallocate(void)
{
    if (m_generate) {
        delete m_generate;
        m_generate = nullptr;
    }
    m_contexts.clear();
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    if (m_hostEvolutions) {
        checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
        m_hostEvolutions = nullptr;
    }
} // Deallocate

void FireStarterUnit::Allocate(void)
{
    m_allStates.resize(m_settings.m_units);
    for (FireStarterState& state : m_allStates)
        state = m_initState;

    FireStarterSettings evolveSettings = m_settings;
    m_state = m_initState;

    size_t resultsSize = FireStarterResults::ResultsSize(m_settings.m_population, m_settings.m_registers, m_settings.m_variations);
    if (m_resultsSize != resultsSize) {
        m_resultsSize = resultsSize;
        if (m_hostResults) {
            checkCUDAErrors(cudaFreeHost(m_hostResults));
            m_hostResults = nullptr;
        }
        if (m_resultsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
            m_hostResults->InitResults(m_settings.m_population, m_settings.m_instructions, m_settings.m_variations, m_settings.m_startResult);
        }
    }

    size_t evolutionsSize = (m_settings.m_mode == FIRESTARTER_CODE) ? FireStarterEvolutions::EvolutionsSize(m_settings.m_population, m_settings.m_instructions) : 0;
    if (m_evolutionsSize != evolutionsSize) {
        m_evolutionsSize = evolutionsSize;
        if (m_hostEvolutions) {
            checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
            m_hostEvolutions = nullptr;
        }
        if (m_evolutionsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostEvolutions, m_evolutionsSize));
            m_hostEvolutions->InitEvolutions(m_settings.m_population, m_settings.m_instructions);
        }
    }

    unsigned int numContexts = (m_settings.m_mode == FIRESTARTER_CODE) ? m_gpus : 1;
    if (numContexts != m_contexts.size()) {
        m_contexts.resize(numContexts);
        unsigned int contextMembers = ((m_settings.m_population + (numContexts - 1)) / numContexts);
        unsigned int lastMember = 0;
        for (unsigned int contextIndex = 0; contextIndex < numContexts; contextIndex++) {
            unsigned int firstMember = lastMember;
            lastMember += contextMembers;
            lastMember = min(lastMember, m_settings.m_population);
            m_contexts[contextIndex].InitContext(m_unitIndex + contextIndex, firstMember, lastMember, m_hostResults, m_hostEvolutions, evolveSettings);
        }
    }

    if (!m_generate)
        m_generate = new FireStarterGenerate(m_contexts[0].m_CUDAContext);
} // Allocate

unsigned int FireStarterUnit::Index(void)
{
    return m_unitIndex;
} // Index

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    m_state.Packetize(packet);
    packet.Packetize(&m_settings, sizeof(m_settings));
    packet.Packetize(m_unitIndex);
} // Packetize

void FireStarterUnit::PacketizeAllStates(FireStarterPacket& packet)
{
    for (unsigned int i = 0; i < m_settings.m_units; i++)
        m_allStates[i].Packetize(packet);
} // PacketizeAllStates

void FireStarterUnit::GetState(FireStarterState& state)
{
    DispatchSync([this, &state] {
        state = m_state;
    });
} // GetState

std::string FireStarterUnit::GetEvolveCode(void)
{
    LoadCode();
    return m_evolveCode;
} // GetEvolveCode

std::string FireStarterUnit::GetOptimizeCode(void)
{
    LoadCode();
    return m_optimizeCode;
} // GetOptimizeCode

bool FireStarterUnit::InitUnit(const FireStarterState& initState)
{
    m_settings = initState.Settings();
    m_initState = initState;
    m_state = initState;
    m_state.m_index = m_unitIndex;
    m_firstVariation = 0;
    m_lastVariation = m_settings.m_variations - 1;
    m_generation = initState.m_generation;
    if (!LoadCode())
        return false;
    DispatchAsync([this] {
        Allocate();
    });
    return true;
} // InitUnit

void FireStarterUnit::Execute(void)
{
    DispatchAsync([this] {
        switch (m_settings.m_mode) {
            case FIRESTARTER_CODE:
                ExecuteCode();
                break;
            case FIRESTARTER_UNIT:
                ExecuteUnit();
                break;
            case FIRESTARTER_OPTIMIZE:
                ExecuteOptimize();
                break;
            default:
                break;  // Error!
        }
    });
} // Execute

void FireStarterUnit::Sync(FireStarterState* allStates)
{
    DispatchSync([this, allStates] {
        for (unsigned int i = 0; i < m_settings.m_units; i++)
            m_allStates[i] = allStates[i];
        UpdateEvolveStates();
    });
} // Sync

FireStarterUnit::FireStarterUnit(unsigned int index)
{
    m_unitIndex = index;
    m_gpus = 1;
} // FireStarterUnit

FireStarterUnit::FireStarterUnit(unsigned int index, unsigned int gpus) : m_state(m_settings)
{
    m_unitIndex = index;
    m_gpus = gpus;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
    Synchronize();
    Deallocate();
} // ~FireStarterUnit
