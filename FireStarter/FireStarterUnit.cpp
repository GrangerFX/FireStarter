#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

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
        if (m_state.MaxResult() > m_allStates[m_unitIndex].MaxResult())
            m_state = m_allStates[RANDOMMOD(m_state.m_seed, m_allStates.size())];

    } else { // m_settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUIAL
        // Reset the state to its own best state.
        m_state = m_allStates[m_unitIndex];
    }
} // UpdateEvolveStates

void FireStarterUnit::EvolveGenerate(void)
{
    for (FireStarterContext& context : m_contexts)
        context.EvolveCompile(m_evolveCode);
} // EvolveGenerate

void FireStarterUnit::OptimizeGenerate(void)
{
    // Generate the evaluate and optimize code
    std::string evaluateCode;

    // Update the Evaluate funtion.
    m_contexts[0].m_generate->GenerateEvaluate(m_state, evaluateCode);

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    std::string code = m_optimizeCode;
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);

    // Compile the new code.
    for (FireStarterContext& context : m_contexts)
        context.OptimizeCompile(code);
} // OptimizeGenerate

void FireStarterUnit::UnitGenerate(void)
{
    // Evolve each state.
    if (!m_evolveGeneration)
        m_state.m_program.RandomProgram(m_stateSeed);
    else
        m_state.m_program.RandomInstruction(m_stateSeed);
    m_state.m_program.OptimizeRegisters(true);

    // Generate the unit code for the current generation
    OptimizeGenerate();
} // UnitGenerate

void FireStarterUnit::SyncContexts(void)
{
    for (FireStarterContext& context : m_contexts)
        context.Syncronize();
} // SyncContexts

void FireStarterUnit::EvolveGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);

    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (FireStarterContext& context : m_contexts) {
            context.SetContext();
            FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
            FireStarterEvolutions* newEvolutions = g & 1 ? context.m_deviceEvolutions0 : context.m_deviceEvolutions1;
            FireStarterEvolutions* oldEvolutions = g & 1 ? context.m_deviceEvolutions1 : context.m_deviceEvolutions0;
            int init = (g == 0) && (forceInit || (m_evolveGeneration == 0));

            void* arr[] = { reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&newEvolutions),
                            reinterpret_cast<void*>(&oldEvolutions),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&firstVariation),
                            reinterpret_cast<void*>(&lastVariation),
                            reinterpret_cast<void*>(&context.m_firstMember),
                            reinterpret_cast<void*>(&context.m_lastMember),
                            reinterpret_cast<void*>(&m_stateSeed),
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
        m_stateSeed++;
        forceInit = 0;
    }

    // Single GPUs have their data syncronized with the host here.
    if (m_contexts.size() == 1) {
        FireStarterContext& context = m_contexts[0];
        context.SetContext();
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
    m_state.m_program.OptimizeRegisters(false);
    m_state.OptimizeData();
    m_state.m_generation = m_evolveGeneration;
    m_state.m_seed = m_stateSeed;
    m_state.m_best = bestIndex;
} // EvolveGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int forceInit, unsigned int firstVariation, unsigned int lastVariation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    unsigned int generationSeed = m_stateSeed;

    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (FireStarterContext& context : m_contexts) {
            context.SetContext();
            unsigned int dataSize = m_state.m_program.m_dataSize;
            FireStarterResults* newResults = g & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
            int init = (g == 0) && (forceInit || (m_evolveGeneration == 0));

            void* arr[] = { reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&firstVariation),
                            reinterpret_cast<void*>(&lastVariation),
                            reinterpret_cast<void*>(&context.m_firstMember),
                            reinterpret_cast<void*>(&context.m_lastMember),
                            reinterpret_cast<void*>(&dataSize),
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
    if (m_contexts.size() == 1) {
        FireStarterContext& context = m_contexts[0];
        context.SetContext();
        FireStarterResults* newResults = m_settings.m_generations & 1 ? context.m_deviceResults1 : context.m_deviceResults0;
        FireStarterResults* oldResults = m_settings.m_generations & 1 ? context.m_deviceResults0 : context.m_deviceResults1;
        checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, context.m_CUDAContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(oldResults, newResults, m_resultsSize, cudaMemcpyDeviceToDevice, context.m_CUDAContext->Stream()));
        SyncContexts();
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
    m_stateSeed += m_settings.m_generations;

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
    m_state.m_generation = m_evolveGeneration;
    m_state.m_seed = m_stateSeed;
    m_state.m_best = bestIndex;
} // OptimizeVaraitions

void FireStarterUnit::EvolveExecute(void)
{
    // Generate the code for the first generation.
    EvolveGenerate();

    // Evolve the program instructions.
    EvolveGenerations(0, m_firstVariation, m_lastVariation);
    m_evolveGeneration += m_settings.m_generations;
} // EvolveExecute

void FireStarterUnit::OptimizeExecute(void)
{
    // Generate the code for the first generation.
    if (!m_evolveGeneration)
        OptimizeGenerate();

    // Evolve the program data.
    OptimizeVariations(0);

    // Increment the generation.
    m_evolveGeneration += m_settings.m_generations;
} // OptimizeExecute

void FireStarterUnit::UnitExecute(void)
{
    // Evolve, generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    OptimizeVariations(1);

    // Increment the generation.
    m_evolveGeneration++;
} // UnitExecute

bool FireStarterUnit::JobCompile(FireStarterCompilerJob* job)
{
    return CUDACompile::Compile(job->m_ptx, job->m_log, job->m_program, job->m_programName, job->m_options);
} // JobCompile

bool FireStarterUnit::JobExecute(FireStarterCompilerJob* job, std::atomic<float> &atomicResult, bool skipVariations)
{
    if (!job)
        return false;
    if (!job->m_log.empty())
        printf("%s\n", job->m_log.c_str());
    if (job->m_ptx.empty())
        return false;

    m_evolveGeneration = job->m_state.m_generation;
    CUmodule cuda_module = CUDACompile::CompileModule(job->m_ptx);
    if (!cuda_module)
        return false;

    m_contexts[0].m_optimizeFunction = CUDACompile::GetFunction(cuda_module, job->m_programName);
    if (!m_contexts[0].m_optimizeFunction)
        return false;

    m_state = job->m_state;
    m_stateSeed = m_state.Settings().m_seed;
    float& maxResult = m_state.Result()->maxResult;
    maxResult = 0;
    bool found = true;
    if (skipVariations)
        for (unsigned int variation = m_firstVariation; variation <= m_lastVariation; variation++) {
            OptimizeGenerations(1, variation, variation);

            // Optimization: If the variation result is worse, skip the rest of the variations.
            if (maxResult > atomicResult) {
                found = false;
                break;
            }
        }
    else
        OptimizeGenerations(1, m_firstVariation, m_lastVariation);
    m_stateSeed += m_settings.m_generations;

    // Find the best overall result for the state.
    if (found) {
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
        m_state.m_best = bestIndex;

        // Find the best result for all the units.
        float oldResult = atomicResult;
        while ((oldResult > maxResult) && !atomicResult.compare_exchange_weak(oldResult, maxResult));
    }
    m_state.m_generation = m_evolveGeneration;
    m_state.m_seed = m_stateSeed;
    job->m_state = m_state;
    return true;
} // JobExecute

void FireStarterUnit::RandomExecute(void)
{
    static std::atomic<float> g_atomicResult = FIRESTARTER_RANDOM_START_RESULT;
    if (!WillTerminate()) {
        FireStarterCompilerJob* job = m_compilerManager->GetCompile();
        if (JobExecute(job, g_atomicResult)) {  // Returns true if the job was compiled and executed successfully.
            m_compilerManager->AddComplete(job);
            if (!WillTerminate())
                DispatchAsync([this] { RandomExecute(); });
        }
     }
} // RandomExecute

bool FireStarterUnit::LoadCode(void)
{
    if (m_codeLoaded)
        return true;
    if (FireStarterCode::LoadCode("Evolve.cu", m_evolveCode) && FireStarterCode::LoadCode("Optimize.cu", m_optimizeCode)) {
        m_codeLoaded = true;
        return true;
    } else {
        m_evolveCode.clear();
        m_optimizeCode.clear();
        return false;
    }
} // LoadCode

void FireStarterUnit::Deallocate(void)
{
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
    evolveSettings.m_seed = m_settings.m_seed + m_unitIndex;
    m_state = m_initState;
    m_state.m_program.m_settings.m_seed = evolveSettings.m_seed;
    m_state.m_seed = m_stateSeed = RANDOM(evolveSettings.m_seed);
    m_stateID = m_unitIndex;    // Index in m_allStates.

    size_t resultsSize = FireStarterResults::ResultsSize(m_settings.m_population, m_settings.m_registers, m_settings.m_variations);
    if (m_resultsSize != resultsSize) {
        m_resultsSize = resultsSize;
        if (m_hostResults) {
            checkCUDAErrors(cudaFreeHost(m_hostResults));
            m_hostResults = nullptr;
        }
        if (m_resultsSize) {
            checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
            if ((m_settings.m_mode == FIRESTARTER_OPTIMIZE) && OPTIMIZE_LOAD_DATA)
                m_hostResults->InitResults(m_settings.m_population, m_settings.m_instructions, m_settings.m_variations, m_initState.Result());
            else
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

    if (!m_server) {
        unsigned int numContexts = (m_settings.m_mode == FIRESTARTER_CODE) ? m_gpus : 1;
//      unsigned int numContexts = m_gpus;
        unsigned int contextMembers = ((m_settings.m_population + (numContexts - 1)) / numContexts);
        m_contexts.resize(numContexts);
        unsigned int lastMember = 0;
        for (unsigned int contextIndex = 0; contextIndex < numContexts; contextIndex++) {
            unsigned int firstMember = lastMember;
            lastMember += contextMembers;
            lastMember = min(lastMember, m_settings.m_population);
            m_contexts[contextIndex].InitContext(m_unitIndex + contextIndex, firstMember, lastMember, m_hostResults, m_hostEvolutions, evolveSettings);

        }
    } else
        m_contexts.clear();
} // Allocate

unsigned int FireStarterUnit::Index(void)
{
    return m_unitIndex;
} // Index

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    m_state.Packetize(packet);
    packet.Packetize(&m_settings, sizeof(m_settings));
    packet.Packetize(&m_evolveGeneration, sizeof(m_evolveGeneration));
    packet.Packetize(&m_unitIndex, sizeof(m_unitIndex));
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

std::string& FireStarterUnit::GetEvolveCode(void)
{
    return m_evolveCode;
} // GetEvolveCode

std::string& FireStarterUnit::GetOptimizeCode(void)
{
    return m_optimizeCode;
} // GetOptimizeCode

void FireStarterUnit::StartRandom(unsigned int index, const FireStarterState& state, FireStarterCompilerManager* manager)
{
    m_unitIndex = index;
    m_settings = state.Settings();
    m_evolveGeneration = 0;
    m_compilerManager = manager;
    m_initState = state;
    m_state = state;
    m_firstVariation = 0;
    m_lastVariation = m_settings.m_variations - 1;

    if (LoadCode()) {
        DispatchAsync([this] {
            Allocate();
            RandomExecute();
        });
    }
} // StartRandom

bool FireStarterUnit::FinishRandom(void)
{
    return m_evolveGeneration >= m_settings.m_attempts;
} // FinishRandom

void FireStarterUnit::InitUnit(unsigned int index, const FireStarterState& initState)
{
    m_unitIndex = index;
    m_settings = initState.Settings();
    m_evolveGeneration = 0;
    m_initState = initState;
    m_state = initState;
    m_firstVariation = 0;
    m_lastVariation = m_settings.m_variations - 1;
 
    DispatchAsync([this] {
        if (LoadCode()) {
            Allocate();
            if (m_server) {
                FireStarterPacket sendPacket(UNIT_INIT);
                sendPacket.Packetize(&m_unitIndex, sizeof(m_unitIndex));
                FireStarterState sendState(m_initState);
                sendState.Packetize(sendPacket);
                m_process->SendPacket(sendPacket);
                FireStarterPacket receivePacket;
                m_process->ReceivePacket(receivePacket, UNIT_INIT);
            }
        }
    });
} // InitUnit

void FireStarterUnit::Execute(void)
{
    DispatchAsync([this] {
        if (m_server) {
            FireStarterPacket sendPacket(UNIT_EXECUTE);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket, UNIT_EXECUTE);
        } else {
            switch (m_settings.m_mode) {
                case FIRESTARTER_CODE:
                    EvolveExecute();
                    break;
                case FIRESTARTER_UNIT:
                    UnitExecute();
                    break;
                case FIRESTARTER_RANDOM:
                    RandomExecute();
                    break;
                case FIRESTARTER_OPTIMIZE:
                    OptimizeExecute();
                    break;
            }
        }
    });
} // Execute

void FireStarterUnit::Update(FireStarterState* states)
{
    bool result = false;
    DispatchSync([this, states] {
        if (m_server) {
            // Send the entire unit back to the host.
            FireStarterPacket sendPacket(UNIT_UPDATE);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            if (m_process->ReceivePacket(receivePacket, UNIT_UPDATE))
                Packetize(receivePacket);
        }

        if (!states[m_unitIndex].m_generation || (m_state.Result()->maxResult < states[m_unitIndex].Result()->maxResult))
            states[m_unitIndex] = m_state;
    });
} // Update

void FireStarterUnit::Sync(FireStarterState* allStates)
{
    DispatchSync([this, allStates] {
        for (unsigned int i = 0; i < m_settings.m_units; i++)
            m_allStates[i] = allStates[i];
        if (m_server && (m_unitIndex == 0)) {
            FireStarterPacket sendPacket(UNIT_SYNC);
            PacketizeAllStates(sendPacket);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket, UNIT_SYNC);
        };
        UpdateEvolveStates();
    });
} // Sync

void FireStarterUnit::Start(void)
{
    if (m_process)
        DispatchAsync([this] {
            m_process->Start();
        });
} // Start

void FireStarterUnit::Stop(void)
{
    if (m_process)
        DispatchAsync([this] {
            m_process->Stop();
            m_process->Terminate();
            m_process = nullptr;
        });
} // Stop

void FireStarterUnit::Client(void)
{
    if (!m_process->ShouldTerminate())
        DispatchAsync([this] {
            FireStarterPacket receivePacket;
            bool result = m_process->ReceivePacket(receivePacket);
            if (result) {
                const std::string& command = receivePacket.Command();
                if (command == UNIT_INIT) {
                    unsigned int unitIndex = 0;
                    result = result && receivePacket.Packetize(&unitIndex, sizeof(unitIndex));
                    FireStarterState receiveState(m_settings);
                    result = result && receiveState.Packetize(receivePacket);
                    if (result)
                        InitUnit(unitIndex, receiveState);
                    m_process->SendCommand(UNIT_INIT);
                } else if (command == UNIT_EXECUTE) {
                    Execute();
                    result = result && m_process->SendCommand(UNIT_EXECUTE);
                } else if (command == UNIT_UPDATE) {
                    FireStarterPacket sendPacket(UNIT_UPDATE);
                    Packetize(sendPacket);
                    result = result && m_process->SendPacket(sendPacket);
                } else if (command == UNIT_SYNC) {
                    PacketizeAllStates(receivePacket);
                    result = result && m_process->SendCommand(UNIT_SYNC);
                } else
                    // Error: Unknown command!
                    result = false;

                // Error: Terminate the process on failure.
                if (!result)
                    m_process->Terminate();
            }
            if (!m_process->ShouldTerminate())
                DispatchAsync([this] { Client(); });
        });
} // ClientCommand

FireStarterUnit::FireStarterUnit(FireStarterProcess* process)
{
    m_gpus = 1;
    m_process = process;
    m_server = m_process && !m_process->IsClient();
} // FireStarterUnit

FireStarterUnit::FireStarterUnit(unsigned int gpus) : m_state(m_settings)
{
    m_gpus = gpus;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
    Stop();
    TerminateThread();
    Deallocate();
} // ~FireStarterUnit
