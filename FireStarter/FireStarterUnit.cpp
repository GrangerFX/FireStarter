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

void FireStarterUnit::EvolveGenerate(void)
{
    // Compile the program
    if (!m_evolveFunction && CUDACompile::CompileProgram(m_evolveModule, m_evolveCode, "Evolve"))
        m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolve");
} // EvolveGenerate

void FireStarterUnit::UnitGenerate(void)
{
    std::string optimize;
    FireStarterCode::ExtractProgram(m_optimizeCode, optimize, OPTIMIZE_CODE);
    std::string evaluateCode;
    std::string optimizeCode;

    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        // Evolve each state.
        FireStarterState& state = m_states[i];
        state = m_bestState;
        if (!m_evolveGeneration)
            state.m_program.RandomProgram(m_seed);
        else
            state.m_program.RandomInstruction(m_seed);
        state.m_program.OptimizeRegisters(true);
        state.m_program.SaveInstructions(state.m_result.instructions);
        state.m_generation = m_evolveGeneration;
 
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

    // Create the units code by replacing the evaluate and optimize sections of the optimize code.
    std::string unitsCode = m_optimizeCode;
    FireStarterCode::UpdateProgram(unitsCode, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(unitsCode, optimizeCode, OPTIMIZE_CODE);

    // Compile the new code.
    CUDACompile::CompileProgram(m_unitsModule, unitsCode);
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

void FireStarterUnit::EvolveGenerations(unsigned int evolution)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = m_settings.m_evolvePopulation;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    FireStarterResults* newResults, * oldResults;
    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        unsigned int generation = evolution + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&m_settings.m_evolvePopulation),
                        reinterpret_cast<void*>(&m_settings.m_evolveIterations),
                        reinterpret_cast<void*>(&generation) };

        checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitContext->Stream(),                         // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, newResults, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    float minResult = m_hostResults->results[0].maxResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
        float curResult = m_hostResults->results[i].maxResult;
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterState& state = m_states[0];
    state.m_result = m_hostResults->results[minIndex];

    // Find the best results.
    if (state.m_result.maxResult < m_bestState.m_result.maxResult) {
        m_bestState = state;
        m_bestState.m_program.LoadInstructions(m_bestState.m_result.instructions);
        m_bestState.m_program.OptimizeRegisters(false);
        m_bestState.m_program.SaveInstructions(m_bestState.m_result.instructions);
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

    for (unsigned int g = 0; g < m_settings.m_evolveGenerations; g++) {
        newResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        oldResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&m_settings.m_evolvePopulation),
                        reinterpret_cast<void*>(&m_settings.m_evolveIterations),
                        reinterpret_cast<void*>(&m_settings.m_evolvePrecision),
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

    FireStarterResult& result = state.m_result;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++)
        result.minResult[v] = m_hostResults->results[0].minResult[v];
    unsigned int minIndex[PROGRAM_VARIATIONS] = { };
    for (unsigned int i = 1; i < m_settings.m_evolvePopulation; i++) {
        for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
            float curResult = m_hostResults->results[i].minResult[v];
            if (curResult < result.minResult[v]) {
                result.minResult[v] = curResult;
                minIndex[v] = i;
            }
        }
    }
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++)
        result.data[v] = m_hostResults->results[minIndex[v]].data[v];
    result.maxResult = result.minResult[0];
    for (unsigned int v = 1; v < PROGRAM_VARIATIONS; v++)
        result.maxResult = fmaxf(result.maxResult, result.minResult[v]);

    // Find the best results.
    if (result.maxResult < m_bestState.m_result.maxResult)
        m_bestState = state;
} // OptimizeGenerations

void FireStarterUnit::EvolveExecute(void)
{
    // Run the next generation on the GPU.
   // Evolve the program instructions.
    m_states[0] = m_bestState;
    m_states[0].m_generation = m_evolveGeneration;
    EvolveGenerations(m_evolveGeneration);
    m_evolveGeneration += m_settings.m_evolveGenerations;
} // EvolveExecute

void FireStarterUnit::UnitExecute(void)
{ 
    // Generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    for (unsigned int i = 0; i < m_settings.m_evolveStates; i++) {
        unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(m_evolveGeneration) + i) + m_seed);
        OptimizeGenerations(i, seed, 1);
    }
    m_evolveGeneration += m_settings.m_evolveGenerations;
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
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
} // Deallocate

bool FireStarterUnit::Allocate(void)
{
    if (m_unitContext)
        Deallocate();
    else
        m_unitContext = new CUDAContext(m_unitIndex);
    m_resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (m_settings.m_evolvePopulation - 1);
    if (!m_deviceResults)
        checkCUDAErrors(cudaMalloc(&m_deviceResults, m_resultsSize * 2));
    if (!m_hostResults)
        checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
    return (m_deviceResults && m_hostResults);
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
    DispatchSync([this, &packet] {
        for (unsigned int i = 0; i < m_settings.m_evolveUnits * m_settings.m_evolveStates; i++)
            m_allStates[i].Packetize(packet);
    });
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
                        FireStarterState sendState(state);
                        sendState.Packetize(sendPacket);
                        m_process->SendPacket(sendPacket);
                        FireStarterPacket receivePacket;
                        m_process->ReceivePacket(receivePacket, UNIT_INIT);
                        break;
                    }
                case FIRESTARTER_OPTIMIZE:
                    OptimizeGenerate();
                    break;
            }
            ClearResults();
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
        float unitBestResult = m_bestState.m_result.maxResult;
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
        float unitBestResult = m_bestState.m_result.maxResult;
        for (unsigned int i = 0; i < m_settings.m_evolveUnits * m_settings.m_evolveStates; i++) {
            m_allStates[i] = states[i];
            if (m_allStates[i].m_result.maxResult < unitBestResult) {
                m_bestState = m_allStates[i];
                unitBestResult = m_bestState.m_result.maxResult;
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

void FireStarterUnit::ClientCommand(void)
{
    FireStarterPacket receivePacket;
    m_process->ReceivePacket(receivePacket);
    const std::string& command = receivePacket.Command();
    if (command == UNIT_INIT) {
        FireStarterPacket sendPacket(UNIT_INIT);
        m_process->SendPacket(sendPacket);

        bool result = true;
        unsigned int unitIndex = 0;
        result = result && receivePacket.Packetize(&unitIndex, sizeof(unitIndex));
        FireStarterState receiveState;
        result = result && receiveState.Packetize(receivePacket);
        if (result)
            InitUnit(unitIndex, receiveState);
    } else if (command == UNIT_EXECUTE) {
        FireStarterPacket sendPacket(UNIT_EXECUTE);
        m_process->SendPacket(sendPacket);

        Execute();
    } else if (command == UNIT_UPDATE) {
        FireStarterPacket sendPacket(UNIT_UPDATE);
        DispatchSync([this, &sendPacket] { Packetize(sendPacket); });
        m_process->SendPacket(sendPacket);
    } else if (command == UNIT_SYNC) {
        FireStarterPacket sendPacket(UNIT_SYNC);
        m_process->SendPacket(sendPacket);

        DispatchSync([this, &receivePacket] { PacketizeAllStates(receivePacket); });
    }
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
