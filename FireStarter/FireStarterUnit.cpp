#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterUnit::InitEvolveStates(void)
{
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        evolveState.m_hostResults->InitResults(m_settings.m_evolvePopulation, m_settings.m_instructions, m_settings.m_variations, m_settings.m_evolveStartResult);
        evolveState.m_deviceResults0 = (FireStarterResults*)(evolveState.m_deviceResults);
        evolveState.m_deviceResults1 = (FireStarterResults*)(evolveState.m_deviceResults + m_resultsSize);
        checkCUDAErrors(cudaMemcpy(evolveState.m_deviceResults0, evolveState.m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
        checkCUDAErrors(cudaMemcpy(evolveState.m_deviceResults1, evolveState.m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));

        if (m_settings.m_evolveMode == FIRESTARTER_EVOLVE) {
            evolveState.m_hostEvolutions->InitEvolutions(m_settings.m_evolvePopulation, m_settings.m_instructions);
            evolveState.m_deviceEvolutions0 = (FireStarterEvolutions*)(evolveState.m_deviceEvolutions);
            evolveState.m_deviceEvolutions1 = (FireStarterEvolutions*)(evolveState.m_deviceEvolutions + m_evolutionsSize);
            checkCUDAErrors(cudaMemcpy(evolveState.m_deviceEvolutions0, evolveState.m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
            checkCUDAErrors(cudaMemcpy(evolveState.m_deviceEvolutions1, evolveState.m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
        }
    }
} // ClearEvoInitEvolveStateslveStates

void FireStarterUnit::DeallocateEvolveStates(void)
{
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
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
} // DeallocateEvolveStates

bool FireStarterUnit::AllocateEvolveStates(void)
{
    m_resultsSize = FireStarterResults::ResultsSize(m_settings.m_evolvePopulation, m_settings.m_instructions, m_settings.m_variations);
    m_evolutionsSize = FireStarterEvolutions::EvolutionsSize(m_settings.m_evolvePopulation, m_settings.m_instructions);
    bool result = true;
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        checkCUDAErrors(cudaMallocHost(&evolveState.m_hostResults, m_resultsSize));
        checkCUDAErrors(cudaMalloc(&evolveState.m_deviceResults, m_resultsSize * 2));
        result &= &evolveState.m_hostResults && evolveState.m_deviceResults;
        if (m_settings.m_evolveMode == FIRESTARTER_EVOLVE) {
            checkCUDAErrors(cudaMallocHost(&evolveState.m_hostEvolutions, m_evolutionsSize));
            checkCUDAErrors(cudaMalloc(&evolveState.m_deviceEvolutions, m_evolutionsSize * 2));
            result &= &evolveState.m_hostEvolutions && evolveState.m_deviceEvolutions;
        }
    }
    if (!result) {
        DeallocateEvolveStates();
        return false;
    }

    InitEvolveStates();
    return true;
} // AllocateEvolveStates

void FireStarterUnit::FireGenerate(void)
{
    // Compile the program
    if (!m_generateModule && CUDACompile::CompileProgram(m_generateModule, m_fireGenerateCode, "FireGenerateEvaluate")) {
        m_fireGenerateEvolveFunction = CUDACompile::GetFunction(m_generateModule, "FireGenerateEvolve");
        m_fireGenerateEvaluateFunction = CUDACompile::GetFunction(m_generateModule, "FireGenerateEvaluate");
    }
} // FireGenerate

void FireStarterUnit::EvolveCode(std::string& code)
{
    std::string evolve;
    FireStarterCode::ExtractProgram(m_evolveCode, evolve, EVOLVE_CODE);

    // Generate the evaluate and optimize code
    std::string evaluateCode;
    std::string evolveCode;
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterState& state = m_evolveStates[i].m_state;

        // Update the Evaluate funtion.
        std::string evaluate;
        m_unitGenerate->GenerateEvolve(state, m_fireGenerateEvolveFunction, m_unitContext->Stream(), evaluate);
        if (m_settings.m_evolveStates > 1) {
            std::string evaluateName = Format("Evaluate%d", i);
            FireStarterCode::ReplaceCode(evaluate, "Evaluate", evaluateName);
        }
        if (i)
            evaluateCode += "\r\n";
        evaluateCode += evaluate;

        // Update the optimize function.
        std::string evolveUnit = evolve;
        if (m_settings.m_evolveStates > 1) {
            std::string evaluateName = Format("Evaluate%d", i);
            std::string evolveName = m_settings.m_evolveStates == 1 ? "Evolve" : Format("Evolve%d", i);
            FireStarterCode::ReplaceCode(evolveUnit, "Evaluate", evaluateName);
            FireStarterCode::ReplaceCode(evolveUnit, "Evolve", evolveName);
        }
        if (i)
            evolveCode += "\r\n";
        evolveCode += evolveUnit;
    }

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    code = m_evolveCode;
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(code, evolveCode, EVOLVE_CODE);
} // EvolveCode

void FireStarterUnit::UnitCode(std::string& code)
{
    std::string optimize;
    FireStarterCode::ExtractProgram(m_optimizeCode, optimize, OPTIMIZE_CODE);

    // Generate the evaluate and optimize code
    std::string evaluateCode;
    std::string optimizeCode;
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterState& state = m_evolveStates[i].m_state;

        // Update the Evaluate funtion.
        std::string evaluate;
        m_unitGenerate->GenerateOptimize(state, m_fireGenerateEvaluateFunction, m_unitContext->Stream(), evaluate);
        if (m_settings.m_evolveStates > 1) {
            std::string evaluateName = Format("Evaluate%d", i);
            FireStarterCode::ReplaceCode(evaluate, "Evaluate", evaluateName);
        }
        if (i)
            evaluateCode += "\r\n";
        evaluateCode += evaluate;

        // Update the optimize function.
        std::string optimizeUnit = optimize;
        if (m_settings.m_evolveStates > 1) {
            std::string evaluateName = Format("Evaluate%d", i);
            std::string optimizeName = m_settings.m_evolveStates == 1 ? "Optimize" : Format("Optimize%d", i);
            FireStarterCode::ReplaceCode(optimizeUnit, "Evaluate", evaluateName);
            FireStarterCode::ReplaceCode(optimizeUnit, "Optimize", optimizeName);
        }
        if (i)
            optimizeCode += "\r\n";
        optimizeCode += optimizeUnit;
    }

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    code = m_optimizeCode;
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(code, optimizeCode, OPTIMIZE_CODE);
} // UnitCode

void FireStarterUnit::EvolveGenerate(void)
{
    // Evolve each state.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterState& state = m_evolveStates[i].m_state;
        if (m_evolveGeneration && m_settings.m_evolution) {
            state = m_bestState;
            state.m_program.RandomInstruction(m_seed);
        } else
            state.m_program.RandomProgram(m_seed);
        state.m_program.RandomEvolve(m_seed);
        state.m_generation = m_evolveGeneration;
    }

    // Generate the unit code for the current generation
    std::string code;
    EvolveCode(code);

    // Compile the unit code.
    if (CUDACompile::CompileProgram(m_unitsModule, code, "Evolve")) {
        if (m_settings.m_evolveStates == 1)
            m_evolveStates[0].m_evolveFunction = CUDACompile::GetFunction(m_unitsModule, "Evolve");
        else for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
            m_evolveStates[i].m_evolveFunction = CUDACompile::GetFunction(m_unitsModule, Format("Evolve%d", i).c_str());
    }
} // EvolveGenerate

void FireStarterUnit::UnitGenerate(void)
{
    // Evolve each state.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterState& state = m_evolveStates[i].m_state;
        if (m_evolveGeneration && m_settings.m_evolution) {
            state = m_bestState;
            state.m_program.RandomInstruction(m_seed);
        } else
            state.m_program.RandomProgram(m_seed);
        state.m_program.OptimizeRegisters(true);
        state.m_generation = m_evolveGeneration;
    }

    // Generate the unit code for the current generation
    std::string code;
    UnitCode(code);

    // Compile the unit code.
    if (CUDACompile::CompileProgram(m_unitsModule, code, "Unit")) {
        if (m_settings.m_evolveStates == 1)
            m_evolveStates[0].m_optimizeFunction = CUDACompile::GetFunction(m_unitsModule, "Optimize");
        else for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
            m_evolveStates[i].m_optimizeFunction = CUDACompile::GetFunction(m_unitsModule, Format("Optimize%d", i).c_str());
    }
} // UnitGenerate

void FireStarterUnit::OptimizeGenerate(bool compile)
{
    // Update the Evaluate funtion.
    std::string code;
    m_unitGenerate->GenerateOptimize(m_bestState, m_fireGenerateEvaluateFunction, m_unitContext->Stream(), code);
    FireStarterCode::UpdateProgram(m_optimizeCode, code, EVALUATE_CODE);

    // Compile the new code.
    if (compile && CUDACompile::CompileProgram(m_optimizeModule, m_optimizeCode, "Optimize")) {
        if (m_settings.m_evolveStates == 1)
            m_evolveStates[0].m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, "Optimize");
        else for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
            m_evolveStates[i].m_optimizeFunction = CUDACompile::GetFunction(m_optimizeModule, Format("Optimize%d", i).c_str());
    }
} // OptimizeGenerate

void FireStarterUnit::EvolveGenerations(unsigned int init)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (m_settings.m_evolvePopulation + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned int seed = RANDOM(RANDOM(m_evolveGeneration) + m_seed);

    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        // Run all the evolve states in parallel.
        for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
            FireStarterEvolveState& evolveState = m_evolveStates[i];
            FireStarterState& state = evolveState.m_state;
            unsigned int evolveInstruction = state.m_program.m_evolveInstruction;
            FireStarterResults* newResults = g & 1 ? evolveState.m_deviceResults0 : evolveState.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
            void* arr[] = { reinterpret_cast<void*>(&evolveInstruction),
                            reinterpret_cast<void*>(&newResults),
                            reinterpret_cast<void*>(&oldResults),
                            reinterpret_cast<void*>(&m_settings),
                            reinterpret_cast<void*>(&seed),
                            reinterpret_cast<void*>(&init) };

            checkCUDAErrors(cuLaunchKernel(evolveState.m_evolveFunction,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, m_unitContext->Stream(),                         // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
            seed++;
        }

        // Synchronize all GPU threads.
        // Note: TODO: Each evolve state could be individualy synced if this is possible.
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
        init = 0;
    }

    // Copy the results to the host memory.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterResults* results = m_settings.m_evolveGenerations & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
        checkCUDAErrors(cudaMemcpyAsync(evolveState.m_hostResults, results, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));

    // Get the best results.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterState& state = evolveState.m_state;
        FireStarterResult* result = state.Result();
        for (unsigned int v = 0; v < m_settings.m_variations; v++)
            *result->MinResult(v) = *evolveState.m_hostResults->MinResult(0, v);
        std::vector<unsigned int> minIndex;
        minIndex.resize(m_settings.m_variations, 0);
        for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
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

        // Find the best results.
        if (result->maxResult < m_bestState.Result()->maxResult)
            m_bestState = state;
    }
} // EvolveGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int init)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (m_settings.m_evolvePopulation + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned int seed = RANDOM(RANDOM(m_evolveGeneration) + m_seed);

    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        // Run all the evolve states in parallel.
        for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
            FireStarterEvolveState& evolveState = m_evolveStates[i];
            FireStarterState& state = evolveState.m_state;
            unsigned int dataSize = state.m_program.m_dataSize;
            FireStarterResults* newResults = g & 1 ? evolveState.m_deviceResults0 : evolveState.m_deviceResults1;
            FireStarterResults* oldResults = g & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
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
            seed++;
        }

        // Synchronize all GPU threads.
        // Note: TODO: Each evolve state could be individualy synced if this is possible.
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
        init = 0;
    }

    // Copy the results to the host memory.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterResults* results = m_settings.m_evolveGenerations & 1 ? evolveState.m_deviceResults1 : evolveState.m_deviceResults0;
        checkCUDAErrors(cudaMemcpyAsync(evolveState.m_hostResults, results, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    
    // Get the best results.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterEvolveState& evolveState = m_evolveStates[i];
        FireStarterState& state = evolveState.m_state;
        FireStarterResult* result = state.Result();
        for (unsigned int v = 0; v < m_settings.m_variations; v++)
            *result->MinResult(v) = *evolveState.m_hostResults->MinResult(0, v);
        std::vector<unsigned int> minIndex;
        minIndex.resize(m_settings.m_variations, 0);
        for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
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

        // Find the best results.
        if (result->maxResult < m_bestState.Result()->maxResult)
            m_bestState = state;
    }
} // OptimizeGenerations

void FireStarterUnit::EvolveExecute(void)
{
    // Evolve, generate and compile the program.
    EvolveGenerate();

    // Evolve the program instructions and data.
    EvolveGenerations(1);
    m_evolveGeneration++;
} // EvolveExecute

void FireStarterUnit::UnitExecute(void)
{ 
    // Evolve, generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    OptimizeGenerations(1);
    m_evolveGeneration++;
} // UnitExecute

void FireStarterUnit::OptimizeExecute(void)
{
    // Initialize each state with the best previous state.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        m_evolveStates[i].m_state = m_bestState;
        m_evolveStates[i].m_state.m_generation = m_evolveGeneration;
    }

    // Evolve the program data.
    OptimizeGenerations(m_evolveGeneration == 0);
    m_evolveGeneration += m_settings.m_evolveGenerations;
} // OptimizeExecute

bool FireStarterUnit::LoadCode(void)
{
    if (m_codeLoaded)
        return true;
    if (FireStarterCode::LoadCode("FireGenerate.cu", m_fireGenerateCode) && FireStarterCode::LoadCode("Evolve.cu", m_evolveCode) && FireStarterCode::LoadCode("Optimize.cu", m_optimizeCode)) {
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
    }
} // Deallocate

bool FireStarterUnit::Allocate(void)
{
    if (!m_unitContext)
        m_unitContext = new CUDAContext(m_unitIndex);
    Deallocate();
    return AllocateEvolveStates();
} // Allocate

unsigned int FireStarterUnit::Index(void)
{
    return m_unitIndex;
} // Index

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    m_bestState.Packetize(packet);
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
        m_evolveStates[i].m_state.Packetize(packet);
    packet.Packetize(&m_settings, sizeof(m_settings));
    packet.Packetize(&m_evolveGeneration, sizeof(m_evolveGeneration));
    packet.Packetize(&m_unitIndex, sizeof(m_unitIndex));
    packet.Packetize(&m_seed, sizeof(m_seed));
} // Packetize

void FireStarterUnit::PacketizeAllStates(FireStarterPacket& packet)
{
    for (unsigned int i = 0; i < m_settings.m_evolveUnits * m_settings.m_evolveStates; i++)
        m_allStates[i].Packetize(packet);
} // PacketizeAllStates

void FireStarterUnit::InitUnit(unsigned int index, const FireStarterState& state)
{
    DispatchAsync([this, index, state] {
        m_unitIndex = index;
        m_bestState = state;
        m_settings = m_bestState.Settings();
        m_seed = RANDOM(RANDOM(m_unitIndex) + m_settings.m_seed);

        m_allStates.resize(m_settings.m_evolveUnits * m_settings.m_evolveStates);
        for (FireStarterState &state: m_allStates)
            state.InitState(m_settings);

        m_evolveStates.resize(m_settings.m_evolveStates);
        for (FireStarterEvolveState &evolveState: m_evolveStates)
            evolveState.m_state.InitState(m_settings);

        if (!m_unitGenerate)
            m_unitGenerate = new FireStarterGenerate();

        if (LoadCode() && Allocate()) {
            switch (m_settings.m_evolveMode) {
                case FIRESTARTER_EVOLVE:
                    FireGenerate();
                    break;
                case FIRESTARTER_UNIT:
                    FireGenerate();
                    break;
                case FIRESTARTER_PROCESS:
                    FireGenerate();
                    if (!m_client) {
                        FireStarterPacket sendPacket(UNIT_INIT);
                        sendPacket.Packetize(&m_unitIndex, sizeof(m_unitIndex));
                        FireStarterState sendState(m_bestState);
                        sendState.Packetize(sendPacket);
                        m_process->SendPacket(sendPacket);
                        FireStarterPacket receivePacket;
                        m_process->ReceivePacket(receivePacket, UNIT_INIT);
                    }
                    break;
                case FIRESTARTER_OPTIMIZE:
                    OptimizeGenerate();
                    break;
            }
        }
    });
} // InitUnit

void FireStarterUnit::Execute(void)
{
    DispatchAsync([this] {
        switch (m_settings.m_evolveMode) {
            case FIRESTARTER_EVOLVE:
                EvolveExecute();
                break;
            case FIRESTARTER_UNIT:
                UnitExecute();
                break;
            case FIRESTARTER_PROCESS:
                if (m_client)
                    UnitExecute();
                else {
                    FireStarterPacket sendPacket(UNIT_EXECUTE);
                    m_process->SendPacket(sendPacket);
                    FireStarterPacket receivePacket;
                    m_process->ReceivePacket(receivePacket, UNIT_EXECUTE);
                }
                break;
            case FIRESTARTER_OPTIMIZE:
                OptimizeExecute();
                break;
        }
    });
} // Execute

bool FireStarterUnit::Update(FireStarterState* states, FireStarterState& bestState, float& bestResult)
{
    bool result = false;
    DispatchSync([this, states, &bestState, &bestResult, &result] {
        if ((m_settings.m_evolveMode == FIRESTARTER_PROCESS) && !m_client) {
            // Send the entire unit back to the host.
            FireStarterPacket sendPacket(UNIT_UPDATE);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            if (m_process->ReceivePacket(receivePacket, UNIT_UPDATE))
                Packetize(receivePacket);
        }

        unsigned int index = m_unitIndex * m_settings.m_evolveStates;
        for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
            states[index++] = m_evolveStates[i].m_state;
        float unitBestResult = m_bestState.Result()->maxResult;
        if (unitBestResult < bestResult) {
            bestResult = unitBestResult;
            bestState = m_bestState;
            result = true;
        }
    });
    return result;
} // Update

void FireStarterUnit::Sync(FireStarterState* states)
{
    DispatchSync([this, states] {
        float unitBestResult = m_bestState.Result()->maxResult;
        for (unsigned int i = 0; i < m_settings.m_evolveUnits * m_settings.m_evolveStates; i++) {
            m_allStates[i] = states[i];
            if (m_allStates[i].Result()->maxResult < unitBestResult) {
                m_bestState = m_allStates[i];
                unitBestResult = m_bestState.Result()->maxResult;
            }
        }
        if ((m_settings.m_evolveMode == FIRESTARTER_PROCESS) && (m_unitIndex == 0) && !m_client) {
            FireStarterPacket sendPacket(UNIT_SYNC);
            PacketizeAllStates(sendPacket);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket, UNIT_SYNC);
        };
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
    m_client = m_process && m_process->IsClient();
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
