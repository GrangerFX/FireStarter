#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterUnit::InitEvolveStates(const FireStarterState &state)
{
    for (FireStarterEvolveState& evolveState : m_evolveStates) {
        if ((m_settings.m_mode == FIRESTARTER_OPTIMIZE) && OPTIMIZE_LOAD_DATA)
            evolveState.m_hostResults->InitResults(m_settings.m_population, m_settings.m_instructions, m_settings.m_variations, state.Result());
        else
            evolveState.m_hostResults->InitResults(m_settings.m_population, m_settings.m_instructions, m_settings.m_variations, m_settings.m_startResult);

        evolveState.m_deviceResults0 = (FireStarterResults*)(evolveState.m_deviceResults);
        evolveState.m_deviceResults1 = (FireStarterResults*)(evolveState.m_deviceResults + m_resultsSize);
        checkCUDAErrors(cudaMemcpy(evolveState.m_deviceResults0, evolveState.m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
        checkCUDAErrors(cudaMemcpy(evolveState.m_deviceResults1, evolveState.m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));

        if (m_settings.m_mode == FIRESTARTER_CODE) {
            evolveState.m_hostEvolutions->InitEvolutions(m_settings.m_population, m_settings.m_instructions);
            evolveState.m_deviceEvolutions0 = (FireStarterEvolutions*)(evolveState.m_deviceEvolutions);
            evolveState.m_deviceEvolutions1 = (FireStarterEvolutions*)(evolveState.m_deviceEvolutions + m_evolutionsSize);
            checkCUDAErrors(cudaMemcpy(evolveState.m_deviceEvolutions0, evolveState.m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
            checkCUDAErrors(cudaMemcpy(evolveState.m_deviceEvolutions1, evolveState.m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
        }
    }
} // InitEvolveStates

void FireStarterUnit::DeallocateEvolveStates(void)
{
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        if (evolveState.m_deviceResults) {
            checkCUDAErrors(cudaFree(evolveState.m_deviceResults));
            evolveState.m_deviceResults = nullptr;
            evolveState.m_deviceResults0 = nullptr;
            evolveState.m_deviceResults1 = nullptr;
        }
        if (evolveState.m_hostResults) {
            checkCUDAErrors(cudaFreeHost(evolveState.m_hostResults));
            evolveState.m_hostResults = nullptr;
        }
        if (evolveState.m_deviceEvolutions) {
            checkCUDAErrors(cudaFree(evolveState.m_deviceEvolutions));
            evolveState.m_deviceEvolutions = nullptr;
            evolveState.m_deviceEvolutions0 = nullptr;
            evolveState.m_deviceEvolutions1 = nullptr;
        }
        if (evolveState.m_hostEvolutions) {
            checkCUDAErrors(cudaFreeHost(evolveState.m_hostEvolutions));
            evolveState.m_hostEvolutions = nullptr;
        }
    }
    m_resultsSize = 0;
    m_evolutionsSize = 0;
} // DeallocateEvolveStates

bool FireStarterUnit::AllocateEvolveStates(void)
{
    bool result = true;
    size_t resultsSize = FireStarterResults::ResultsSize(m_settings.m_population, m_settings.m_registers, m_settings.m_variations);
    size_t evolutionsSize = (m_settings.m_mode == FIRESTARTER_CODE) ? FireStarterEvolutions::EvolutionsSize(m_settings.m_population, m_settings.m_instructions) : 0;
    if ((m_resultsSize != resultsSize) || (m_evolutionsSize != evolutionsSize)) {
        DeallocateEvolveStates();
        m_resultsSize = resultsSize;
        m_evolutionsSize = evolutionsSize;
        for (unsigned int i = 0; i < m_settings.m_states; i++) {
            FireStarterEvolveState& evolveState = m_evolveStates[i];
            checkCUDAErrors(cudaMallocHost(&evolveState.m_hostResults, m_resultsSize));
            checkCUDAErrors(cudaMalloc(&evolveState.m_deviceResults, m_resultsSize * 2));
            result &= evolveState.m_hostResults && evolveState.m_deviceResults;

            if (m_evolutionsSize) {
                checkCUDAErrors(cudaMallocHost(&evolveState.m_hostEvolutions, m_evolutionsSize));
                checkCUDAErrors(cudaMalloc(&evolveState.m_deviceEvolutions, m_evolutionsSize * 2));
                result &= evolveState.m_hostEvolutions && evolveState.m_deviceEvolutions;
            }
        }
    }
    if (!result) {
        DeallocateEvolveStates();
        return false;
    }
    return true;
} // AllocateEvolveStates

void FireStarterUnit::UpdateEvolveStates(void)
{
    if (m_settings.m_evolve = FIRESTARTER_EVOLVE_BEST) {
        // Find the program's best state among all the states from all the units.
        float unitBestResult = m_allStates[0].MaxResult();
        unsigned int bestIndex = 0;
        for (unsigned int i = 1; i < m_settings.m_units * m_settings.m_states; i++) {
            float result = m_allStates[i].MaxResult();
            if (result < unitBestResult) {
                unitBestResult = result;
                bestIndex = i;
            }
        }

        // Initialize each state with the best previous state.
        for (unsigned int i = 0; i < m_settings.m_states; i++)
            m_evolveStates[i].m_state = m_allStates[bestIndex];
    } else if (m_settings.m_evolve = FIRESTARTER_EVOLVE_RANDOM) {
        // If a state did not improve, replace it with a random state.
        for (unsigned int i = 0; i < m_settings.m_states; i++)
            if (m_evolveStates[i].m_state.MaxResult() > m_allStates[i].MaxResult())
                m_evolveStates[i].m_state = m_allStates[RANDOMMOD(m_evolveStates[i].m_state.m_seed, m_allStates.size())];

    } else { // m_settings.m_evolve = FIRESTARTER_EVOLVE_INDIVIDUIAL
        // Reset each state to its own best state.
        for (unsigned int i = 0; i < m_settings.m_states; i++)
            m_evolveStates[i].m_state = m_allStates[i];
    }
} // UpdateEvolveStates

void FireStarterUnit::CompileGenerate(void)
{
    // Compile the program
    if (!m_fireGenerateEvaluateFunction && CUDACompile::CompileProgram(m_generateModule, m_fireGenerateCode, "FireGenerateEvaluate"))
        m_fireGenerateEvaluateFunction = CUDACompile::GetFunction(m_generateModule, "FireGenerateEvaluate");
} // CompileGenerate

void FireStarterUnit::EvolveGenerate(void)
{
    // Compile the program
    if (!m_evolveFunction && CUDACompile::CompileProgram(m_evolveModule, m_evolveCode, "Evolve"))
        m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolve");
} // EvolveGenerate

void FireStarterUnit::OptimizeGenerate(void)
{
    // Generate the optimize code for the current generation
    std::string optimize;
    FireStarterCode::ExtractProgram(m_optimizeCode, optimize, OPTIMIZE_CODE);

    // Generate the evaluate and optimize code
    std::string evaluateCode;
    std::string optimizeCode;
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterState& state = m_evolveStates[i].m_state;

        // Update the Evaluate funtion.
        std::string evaluate;
        m_unitGenerate->GenerateEvaluate(state, m_fireGenerateEvaluateFunction, m_unitContext->Stream(), evaluate);
        if (m_settings.m_states > 1) {
            std::string evaluateName = Format("Evaluate%d", i);
            FireStarterCode::ReplaceCode(evaluate, "Evaluate", evaluateName);
        }
        if (i)
            evaluateCode += "\r\n";
        evaluateCode += evaluate;

        // Update the optimize function.
        std::string optimizeUnit = optimize;
        if (m_settings.m_states > 1) {
            std::string optimizeName = m_settings.m_states == 1 ? "Optimize" : Format("Optimize%d", i);
            std::string evaluateName = Format("Evaluate%d", i);
            FireStarterCode::ReplaceCode(optimizeUnit, "Optimize", optimizeName);
            FireStarterCode::ReplaceCode(optimizeUnit, "Evaluate", evaluateName);
        }
        if (i)
            optimizeCode += "\r\n";
        optimizeCode += optimizeUnit;
    }

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    std::string code = m_optimizeCode;
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(code, optimizeCode, OPTIMIZE_CODE);

    // Compile the new code.
    if (CUDACompile::CompileProgram(m_optimizeModule, code, "Optimize")) {
        if (m_settings.m_states == 1)
            m_evolveStates[0].m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimize");
        else for (unsigned int i = 0; i < m_settings.m_states; i++)
            m_evolveStates[i].m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, Format("Optimize%d", i).c_str());
    }
} // OptimizeGenerate

void FireStarterUnit::UnitGenerate(void)
{
    // Evolve each state.
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterState& state = evolveState.m_state;
        if (!m_evolveGeneration)
            state.m_program.RandomProgram(evolveState.m_stateSeed);
        else
            state.m_program.RandomInstruction(evolveState.m_stateSeed);
        state.m_program.OptimizeRegisters(true);
    }

    // Generate the unit code for the current generation
    OptimizeGenerate();
} // UnitGenerate

void FireStarterUnit::EvolveGenerations(unsigned int forceInit)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = m_settings.m_population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (unsigned int i = 0; i < m_settings.m_states; i++) {
            FireStarterEvolveState& evolveState = m_evolveStates[i];
            FireStarterState& state = evolveState.m_state;
            FireStarterResults* newResults = g & 1 ? evolveState.m_deviceResults0 : evolveState.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
            FireStarterEvolutions* newEvolutions = g & 1 ? evolveState.m_deviceEvolutions0 : evolveState.m_deviceEvolutions1;
            FireStarterEvolutions* oldEvolutions = g & 1 ? evolveState.m_deviceEvolutions1 : evolveState.m_deviceEvolutions0;
            unsigned int seed = evolveState.m_stateSeed++;
            int init = 0;
            if (forceInit || ((g == 0) && (state.m_generation == 0)))
                init = 1;
            else if (g == 0)
                init = 2;

            void* arr[] = { reinterpret_cast<void*>(&newEvolutions),
                            reinterpret_cast<void*>(&oldEvolutions),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&seed),
                            reinterpret_cast<void*>(&init) };

            checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, m_unitContext->Stream(),                         // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
        }

        // Synchronize all GPU threads.
        // Note: TODO: Each evolve state could be individualy synced if this is possible.
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
        forceInit = 0;
    }

    // Copy the results to the host memory.
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterResults* results = m_settings.m_generations & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
        FireStarterEvolutions* evolutions = m_settings.m_generations & 1 ? evolveState.m_deviceEvolutions1 : evolveState.m_deviceEvolutions0;
        checkCUDAErrors(cudaMemcpyAsync(evolveState.m_hostResults, results, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
        checkCUDAErrors(cudaMemcpyAsync(evolveState.m_hostEvolutions, evolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));

    // Get the best results.
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterState& state = evolveState.m_state;
        float minResult = *evolveState.m_hostResults->MaxResult(0);
        unsigned int minIndex = 0;
        for (unsigned int i = 1; i < m_settings.m_population; i++) {
            float curResult = *evolveState.m_hostResults->MaxResult(i);
            if (curResult < minResult) {
                for (unsigned int v = 0; v < m_settings.m_variations; v++)
                    if (*evolveState.m_hostResults->MinResult(i, v) > curResult)
                        continue;
                minResult = curResult;
                minIndex = i;
            }
        }
        FireStarterResult* result = state.Result();
        memcpy(result, evolveState.m_hostResults->Result(minIndex), FireStarterResult::ResultSize(m_settings.m_registers, m_settings.m_variations));
        state.m_program.LoadInstructions(evolveState.m_hostEvolutions->Instructions(minIndex));
        state.m_program.OptimizeRegisters(false);
        state.OptimizeData();
        state.m_generation = m_evolveGeneration;
        state.m_seed = evolveState.m_stateSeed;
    }
} // EvolveGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int forceInit)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (m_settings.m_population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
 
    for (unsigned int g = 0; g < m_settings.m_generations; g++) {
        // Run all the evolve states in parallel.
        for (unsigned int i = 0; i < m_settings.m_states; i++) {
            FireStarterEvolveState& evolveState = m_evolveStates[i];
            FireStarterState& state = evolveState.m_state;
            unsigned int dataSize = state.m_program.m_dataSize;
            FireStarterResults* newResults = g & 1 ? evolveState.m_deviceResults0 : evolveState.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
            unsigned int seed = evolveState.m_stateSeed++;
            int init = forceInit || ((g == 0) && (state.m_generation == 0));

            void* arr[] = { reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&dataSize),
                            reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&seed),
                            reinterpret_cast<void*>(&init) };

            checkCUDAErrors(cuLaunchKernel(evolveState.m_optimizeFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, m_unitContext->Stream(),                         // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
        }

        // Synchronize all GPU threads.
        // Note: TODO: Each evolve state could be individualy synced if this is possible.
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
        forceInit = 0;
    }

    // Copy the results to the host memory.
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterResults* results = m_settings.m_generations & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
        checkCUDAErrors(cudaMemcpyAsync(evolveState.m_hostResults, results, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    
    // Get the best results.
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterState& state = evolveState.m_state;
        FireStarterResult* result = state.Result();
        for (unsigned int v = 0; v < m_settings.m_variations; v++)
            *result->MinResult(v) = *evolveState.m_hostResults->MinResult(0, v);
        std::vector<unsigned int> minIndex;
        minIndex.resize(m_settings.m_variations, 0);
        for (unsigned int i = 1; i < m_settings.m_population; i++) {
            for (unsigned int v = 0; v < m_settings.m_variations; v++) {
                float curResult = *evolveState.m_hostResults->MinResult(i, v);
                if (curResult < *result->MinResult(v)) {
                    *result->MinResult(v) = curResult;
                    minIndex[v] = i;
                }
            }
        }
        for (unsigned int v = 0; v < m_settings.m_variations; v++)
            *result->Data(v) = *evolveState.m_hostResults->Data(minIndex[v], v);
        result->maxResult = *result->MinResult(0);
        for (unsigned int v = 1; v < m_settings.m_variations; v++)
            result->maxResult = fmaxf(result->maxResult, *result->MinResult(v));
        state.m_generation = m_evolveGeneration;
        state.m_seed = evolveState.m_stateSeed;
    }
} // OptimizeGenerations

void FireStarterUnit::EvolveExecute(void)
{
    // Generate the code for the first generation.
    EvolveGenerate();

    // Evolve the program instructions.
    EvolveGenerations(0);
    m_evolveGeneration += m_settings.m_generations;
} // EvolveExecute

void FireStarterUnit::OptimizeExecute(void)
{
    // Generate the code for the first generation.
    if (!m_evolveGeneration)
        OptimizeGenerate();

    // Evolve the program data.
    OptimizeGenerations(0);
    m_evolveGeneration += m_settings.m_generations;
} // OptimizeExecute

void FireStarterUnit::UnitExecute(void)
{
    // Evolve, generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    OptimizeGenerations(1);
    if (m_settings.m_mode != FIRESTARTER_RANDOM)
        m_evolveGeneration++;
} // UnitExecute

bool FireStarterUnit::LoadCode(void)
{
    if (m_codeLoaded)
        return true;
    if (FireStarterCode::LoadCode("FireGenerate.cu", m_fireGenerateCode) && FireStarterCode::LoadCode("Code.cu", m_evolveCode) && FireStarterCode::LoadCode("Optimize.cu", m_optimizeCode)) {
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
    DeallocateEvolveStates();
    if (m_generateModule) {
        checkCUDAErrors(cuModuleUnload(m_generateModule));
        m_generateModule = nullptr;
        m_fireGenerateEvaluateFunction = nullptr;
    }
    if (m_evolveModule) {
        checkCUDAErrors(cuModuleUnload(m_evolveModule));
        m_evolveModule = nullptr;
        m_evolveFunction = nullptr;
    }
    if (m_optimizeModule) {
        checkCUDAErrors(cuModuleUnload(m_optimizeModule));
        m_optimizeModule = nullptr;
        for (unsigned int i = 0; i < m_settings.m_states; i++)
            m_evolveStates[i].m_optimizeFunction = nullptr;
    }
} // Deallocate

void FireStarterUnit::Allocate(const FireStarterState& initState)
{
    if (!m_unitContext)
        m_unitContext = new CUDAContext(m_unitIndex);
    m_allStates.resize(m_settings.m_units * m_settings.m_states);
    for (FireStarterState& state : m_allStates)
        state = initState;

    m_evolveStates.resize(m_settings.m_states);
    for (unsigned int i = 0; i < m_settings.m_states; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterSettings evolveSettings = m_settings;
        evolveState.m_state = initState;
        evolveSettings.m_seed = m_settings.m_seed + m_unitIndex * m_settings.m_states + i;
        evolveState.m_state.m_program.m_settings.m_seed = evolveSettings.m_seed;
        evolveState.m_state.m_seed = evolveState.m_stateSeed = RANDOM(evolveSettings.m_seed);
        evolveState.m_stateID = m_unitIndex * m_settings.m_states + i;    // Index in m_allStates.
    }

    if (!m_server && AllocateEvolveStates())
        InitEvolveStates(initState);

    if (!m_unitGenerate)
        m_unitGenerate = new FireStarterGenerate();
} // Allocate

unsigned int FireStarterUnit::Index(void)
{
    return m_unitIndex;
} // Index

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    for (unsigned int i = 0; i < m_settings.m_states; i++)
        m_evolveStates[i].m_state.Packetize(packet);
    packet.Packetize(&m_settings, sizeof(m_settings));
    packet.Packetize(&m_evolveGeneration, sizeof(m_evolveGeneration));
    packet.Packetize(&m_unitIndex, sizeof(m_unitIndex));
} // Packetize

void FireStarterUnit::PacketizeAllStates(FireStarterPacket& packet)
{
    for (unsigned int i = 0; i < m_settings.m_units * m_settings.m_states; i++)
        m_allStates[i].Packetize(packet);
} // PacketizeAllStates

void FireStarterUnit::GetState(FireStarterState* state, size_t index)
{
    DispatchSync([this, state, index] {
        if (index < m_evolveStates.size())
            *state = m_evolveStates[index].m_state;
    });
} // GetState

void FireStarterUnit::InitUnit(unsigned int index, const FireStarterState& initState)
{
    DispatchAsync([this, index, initState] {
        m_unitIndex = index;
        m_settings = initState.Settings();
        m_evolveGeneration = 0;
        if (LoadCode()) {
            Allocate(initState);
            if (m_server) {
                FireStarterPacket sendPacket(UNIT_INIT);
                sendPacket.Packetize(&m_unitIndex, sizeof(m_unitIndex));
                FireStarterState sendState(initState);
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
                case FIRESTARTER_RANDOM:
                    UnitExecute();
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

        unsigned int index = m_unitIndex * m_settings.m_states;
        for (unsigned int i = 0; i < m_settings.m_states; i++) {
            if (!states[index].m_generation || (m_evolveStates[i].m_state.Result()->maxResult < states[index].Result()->maxResult))
                states[index] = m_evolveStates[i].m_state;
            index++;
        }
    });
} // Update

void FireStarterUnit::Sync(FireStarterState* allStates)
{
    DispatchSync([this, allStates] {
        for (unsigned int i = 0; i < m_settings.m_units * m_settings.m_states; i++)
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
        DispatchAsync([this] { m_process->Start(); });
} // Start

void FireStarterUnit::Stop(void)
{
    if (m_process)
        DispatchAsync([this] {
            m_process->Stop();
            m_process->Terminate();
        });
} // Stop

void FireStarterUnit::Client(void)
{
    if (!m_process->ShouldTerminate())
        DispatchAsync([this] {
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket);
            const std::string& command = receivePacket.Command();
            if (command == UNIT_INIT) {
                bool result = true;
                unsigned int unitIndex = 0;
                result = result && receivePacket.Packetize(&unitIndex, sizeof(unitIndex));
                FireStarterState receiveState;
                result = result && receiveState.Packetize(receivePacket);
                if (result)
                    InitUnit(unitIndex, receiveState);
                m_process->SendCommand(UNIT_INIT);
            } else if (command == UNIT_EXECUTE) {
                Execute();
                m_process->SendCommand(UNIT_EXECUTE);
            } else if (command == UNIT_UPDATE) {
                FireStarterPacket sendPacket(UNIT_UPDATE);
                Packetize(sendPacket);
                m_process->SendPacket(sendPacket);
            } else if (command == UNIT_SYNC) {
                PacketizeAllStates(receivePacket);
                m_process->SendCommand(UNIT_SYNC);
            } else {
                // Error: Unknown command!
                m_process->Terminate();
            }
            DispatchAsync([this] { Client(); });
        });
} // ClientCommand

FireStarterUnit::FireStarterUnit(FireStarterProcess* process)
{
    m_process = process;
    m_server = m_process && !m_process->IsClient();
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
    DispatchSync([this] {
        if (m_process)
            m_process->Stop();
        Deallocate();
        if (m_unitGenerate)
            delete m_unitGenerate;
        if (m_unitContext)
            delete m_unitContext;
    });
} // ~FireStarterUnit
