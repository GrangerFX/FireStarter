#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterUnit::ClearResults(void)
{
    if (m_deviceResults)
        checkCUDAErrors(cudaMemset(m_deviceResults, 0, m_resultsSize * 2));
    if (m_hostResults)
        memset(m_hostResults, 0, m_resultsSize);
} // ClearResults

void FireStarterUnit::ClearEvolutions(void)
{
    if (m_deviceEvolutions)
        checkCUDAErrors(cudaMemset(m_deviceEvolutions, 0, m_evolutionsSize * 2));
    if (m_hostEvolutions)
        memset(m_hostEvolutions, 0, m_evolutionsSize);
} // ClearEvolutions

void FireStarterUnit::EvolveGenerate(void)
{
    // Update the defines section.
    std::string definesCode;
    m_settings.GenerateDefines(definesCode);
    FireStarterCode::UpdateProgram(m_evolveCode, definesCode, EVALUATE_CODE);

    // Compile the program
    if (!m_evolveFunction && CUDACompile::CompileProgram(m_evolveModule, m_evolveCode, "Evolve"))
        m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolve");
} // EvolveGenerate

void FireStarterUnit::UnitCode(std::string& code)
{
    std::string optimize;
    FireStarterCode::ExtractProgram(m_optimizeCode, optimize, OPTIMIZE_CODE);

    // Generate the defines
    std::string definesCode;
    m_settings.GenerateDefines(definesCode);

    // Generate the evaluate and optimize code
    std::string evaluateCode;
    std::string optimizeCode;
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        // Update the Evaluate funtion.
        std::string evaluate;
        m_states[i].m_program.GenerateEvaluate(evaluate);
        std::string evaluateName = Format("Evaluate%d", i);
        FireStarterCode::ReplaceCode(evaluate, "Evaluate", evaluateName);
        if (i)
            evaluateCode += "\r\n";
        evaluateCode += evaluate;

        // Update the optimize function.
        std::string optimizeUnit = optimize;
        std::string optimizeName = Format("Optimize%d", i);
        FireStarterCode::ReplaceCode(optimizeUnit, "Optimize", optimizeName);
        FireStarterCode::ReplaceCode(optimizeUnit, "Evaluate", evaluateName);
        if (i)
            optimizeCode += "\r\n";
        optimizeCode += optimizeUnit;
    }

    // Create the units code by replacing the defines, evaluate and optimize sections of the optimize code.
    code = m_optimizeCode;
    FireStarterCode::UpdateProgram(code, definesCode, DEFINES_CODE);
    FireStarterCode::UpdateProgram(code, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(code, optimizeCode, OPTIMIZE_CODE);
} // UnitCode

void FireStarterUnit::UnitGenerate(void)
{
    // Evolve each state.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        FireStarterState& state = m_states[i];
        state = m_bestState;
        if (!m_evolveGeneration)
            state.m_program.RandomProgram(m_seed);
        else
            state.m_program.RandomInstruction(m_seed);
        state.m_program.OptimizeRegisters(true);
        state.m_generation = m_evolveGeneration;
    }

    // Generate the unit code for the current generation
    std::string code;
    UnitCode(code);

    // Compile the unit code.
    CUDACompile::CompileProgram(m_unitsModule, code, "Unit");
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
        m_optimizeFunction[i] = CUDACompile::GetFunction(m_unitsModule, Format("Optimize%d", i).c_str());
} // UnitGenerate

void FireStarterUnit::OptimizeGenerate(bool compile)
{
    // Update the Evaluate funtion.
    std::string code;
    m_bestState.m_program.GenerateEvaluate(code);
    FireStarterCode::UpdateProgram(m_optimizeCode, code, EVALUATE_CODE);

    // Compile the new code.
    if (compile && CUDACompile::CompileProgram(m_optimizeModule, m_optimizeCode, "Optimize"))
        m_optimizeFunction[0] = CUDACompile::GetFunction(m_optimizeModule, "Optimize");
} // OptimizeGenerate

void FireStarterUnit::EvolveGenerations(unsigned int seed, unsigned int init)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = m_settings.m_evolvePopulation;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    FireStarterEvolutions* newEvolutions, * oldEvolutions;
    FireStarterResults* newResults, *oldResults;
    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        newEvolutions = g & 1 ? m_deviceEvolutions0 : m_deviceEvolutions1;
        oldEvolutions = g & 1 ? m_deviceEvolutions1 : m_deviceEvolutions0;

        FireStarterParameters parameters;
        parameters.population = m_settings.m_evolvePopulation;
        parameters.iterations = m_settings.m_evolveIterations;
        parameters.precision = m_settings.m_evolvePrecision;
        parameters.sampleMin = m_settings.m_sampleMin;
        parameters.sampleMax = m_settings.m_sampleMax;
        parameters.evolveFactor = m_settings.m_evolveFactor;
        parameters.evolveStartFactor = m_settings.m_evolveStartFactor;
        parameters.evolveStartResult = m_settings.m_evolveStartResult;
        parameters.evolveCandidates = m_settings.m_evolveCandidates;

        void* arr[] = { reinterpret_cast<void*>(&newEvolutions),
                        reinterpret_cast<void*>(&oldEvolutions),
                        reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&parameters),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&init) };

        checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitContext->Stream(),                         // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        seed++;
        init = 0;
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostEvolutions, newEvolutions, m_evolutionsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    float minResult = *m_hostResults->MaxResult(0);
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
        float curResult = *m_hostResults->MaxResult(i);
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterState& state = m_states[0];
    memcpy(state.Result(), m_hostResults->Result(minIndex), FireStarterResult::ResultSize(m_settings.m_instructions, m_settings.m_variations));
 
    // Find the best results.
    if (state.Result()->maxResult < m_bestState.Result()->maxResult) {
        m_bestState = state;
        m_bestState.m_program.LoadInstructions(m_hostEvolutions->Instructions(minIndex));
        m_bestState.m_program.OptimizeRegisters(false);
        m_bestState.OptimizeData();
    }
} // EvolveGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int index, unsigned int seed, unsigned int init)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (m_settings.m_evolvePopulation + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    FireStarterState& state = m_states[index];
    unsigned int dataSize = state.m_program.m_dataSize;
    FireStarterResults* newResults, *oldResults;

    FireStarterParameters parameters;
    parameters.population = m_settings.m_evolvePopulation;
    parameters.iterations = m_settings.m_evolveIterations;
    parameters.precision = m_settings.m_evolvePrecision;
    parameters.sampleMin = m_settings.m_sampleMin;
    parameters.sampleMax = m_settings.m_sampleMax;
    parameters.evolveFactor = m_settings.m_evolveFactor;
    parameters.evolveStartFactor = m_settings.m_evolveStartFactor;
    parameters.evolveStartResult = m_settings.m_evolveStartResult;
    parameters.evolveCandidates = m_settings.m_evolveCandidates;

    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&parameters),
                        reinterpret_cast<void*>(&seed),
                        reinterpret_cast<void*>(&init) };

        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction[index],
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitContext->Stream(),                         // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
        seed++;
        init = 0;
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));

    FireStarterResult* result = state.Result();
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        *result->MinResult(v) = *m_hostResults->MinResult(0, v);
    std::vector<unsigned int> minIndex;
    minIndex.resize(m_settings.m_variations, 0);
    for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            float curResult = *m_hostResults->MinResult(i, v);
            if (curResult < *result->MinResult(v)) {
                *result->MinResult(v) = curResult;
                minIndex[v] = i;
            }
        }
    }
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        *result->Data(v) = *m_hostResults->Data(minIndex[v], v);
    result->maxResult = *result->MinResult(0);
    for (unsigned int v = 1; v < m_settings.m_variations; v++)
        result->maxResult = fmaxf(result->maxResult, *result->MinResult(v));

    // Find the best results.
    if (result->maxResult < m_bestState.Result()->maxResult)
        m_bestState = state;
} // OptimizeGenerations

void FireStarterUnit::EvolveExecute(void)
{
    // Run the next generation on the GPU.
   // Evolve the program instructions.
    m_states[0] = m_bestState;
    m_states[0].m_generation = m_evolveGeneration;
    unsigned int seed = RANDOMHASH(RANDOMHASH(m_evolveGeneration) + m_seed);
    EvolveGenerations(m_seed, m_evolveGeneration == 0);
    m_evolveGeneration += m_settings.m_evolveGenerations;
} // EvolveExecute

void FireStarterUnit::UnitExecute(void)
{ 
    // Evolve, generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(m_evolveGeneration) + i) + m_seed);
        OptimizeGenerations(i, seed, 1);
    }
    m_evolveGeneration++;
} // UnitExecute

void FireStarterUnit::OptimizeExecute(void)
{
    // Run the next generation on the GPU.
    // Evolve the program data.
    m_states[0] = m_bestState;
    m_states[0].m_generation = m_evolveGeneration * m_settings.m_evolveIterations;
    unsigned int seed = RANDOMHASH(RANDOMHASH(m_evolveGeneration) + m_seed);
    OptimizeGenerations(0, seed, m_evolveGeneration == 0);
    m_evolveGeneration += m_settings.m_evolveGenerations;
} // OptimizeExecute

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
    if (m_evolveModule) {
        checkCUDAErrors(cuModuleUnload(m_evolveModule));
        m_evolveModule = nullptr;
    }
    if (m_optimizeModule) {
        checkCUDAErrors(cuModuleUnload(m_optimizeModule));
        m_optimizeModule = nullptr;
    }
    if (m_deviceResults) {
        checkCUDAErrors(cudaFree(m_deviceResults));
        m_deviceResults = nullptr;
        m_deviceResults0 = nullptr;
        m_deviceResults1 = nullptr;
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    if (m_deviceEvolutions) {
        checkCUDAErrors(cudaFree(m_deviceEvolutions));
        m_deviceEvolutions = nullptr;
        m_deviceEvolutions0 = nullptr;
        m_deviceEvolutions1 = nullptr;
    }
    if (m_hostEvolutions) {
        checkCUDAErrors(cudaFreeHost(m_hostEvolutions));
        m_hostEvolutions = nullptr;
    }
} // Deallocate

bool FireStarterUnit::Allocate(void)
{
    if (!m_unitContext)
        m_unitContext = new CUDAContext(m_unitIndex);

    Deallocate();

    m_resultsSize = FireStarterResults::ResultsSize(m_settings.m_evolvePopulation, m_settings.m_instructions, m_settings.m_variations);
    checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
    checkCUDAErrors(cudaMalloc(&m_deviceResults, m_resultsSize * 2));
    if (m_hostResults && m_deviceResults) {
        ClearResults();
        m_hostResults->InitResults(m_settings.m_evolvePopulation, m_settings.m_instructions, m_settings.m_variations, m_settings.m_evolveStartResult);
        m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
        m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
        checkCUDAErrors(cudaMemcpy(m_deviceResults0, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
        checkCUDAErrors(cudaMemcpy(m_deviceResults1, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice));
    }

    m_evolutionsSize = FireStarterEvolutions::EvolutionsSize(m_settings.m_evolvePopulation, m_settings.m_instructions);
    checkCUDAErrors(cudaMallocHost(&m_hostEvolutions, m_evolutionsSize));
    checkCUDAErrors(cudaMalloc(&m_deviceEvolutions, m_evolutionsSize * 2));
    if (m_hostEvolutions && m_deviceEvolutions) {
        ClearEvolutions();
        m_hostEvolutions->InitEvolutions(m_settings.m_evolvePopulation, m_settings.m_instructions);
        m_deviceEvolutions0 = (FireStarterEvolutions*)(m_deviceEvolutions);
        m_deviceEvolutions1 = (FireStarterEvolutions*)(m_deviceEvolutions + m_evolutionsSize);
        checkCUDAErrors(cudaMemcpy(m_deviceEvolutions0, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
        checkCUDAErrors(cudaMemcpy(m_deviceEvolutions1, m_hostEvolutions, m_evolutionsSize, cudaMemcpyHostToDevice));
    }

    return (m_deviceResults && m_hostResults && m_deviceEvolutions && m_hostEvolutions);
} // Allocate

unsigned int FireStarterUnit::Index(void)
{
    return m_unitIndex;
} // Index

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    m_bestState.Packetize(packet);
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++)
        m_states[i].Packetize(packet);
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
        m_settings = m_bestState.m_settings;
        m_allStates.resize(m_settings.m_evolveUnits * m_settings.m_evolveStates);
        m_states.resize(m_settings.m_evolveStates);
        m_optimizeFunction.resize(m_settings.m_evolveStates);
        m_seed = RANDOMHASH(RANDOMHASH(m_unitIndex) + 7263);
        if (LoadCode() && Allocate()) {
            switch (m_settings.m_evolveMode) {
                case FIRESTARTER_EVOLVE:
                    EvolveGenerate();
                    break;
                case FIRESTARTER_UNIT:
                    break;
                case FIRESTARTER_PROCESS:
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
        {
            if (m_client)
                UnitExecute();
            else {
                FireStarterPacket sendPacket(UNIT_EXECUTE);
                m_process->SendPacket(sendPacket);
                FireStarterPacket receivePacket;
                m_process->ReceivePacket(receivePacket, UNIT_EXECUTE);
            }
            break;
        }
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
            states[index++] = m_states[i];
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
        if (m_unitContext)
            delete m_unitContext;
    });
} // ~FireStarterUnit
