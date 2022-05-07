#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterUnit::ClearResults(void)
{
    if (m_deviceResults)
        checkCUDAErrors(cudaMemset(m_deviceResults, 0, m_resultsSize * 2));
    if (m_hostResults)
        memset(m_hostResults, 0, m_resultsSize * 2);
} // ClearResults

void FireStarterUnit::EvolveGenerate(void)
{
    // Compile the program
    if (!m_evolveFunction && CUDACompile::CompileProgram(m_evolveModule, m_evolveCode, "Evolve"))
        m_evolveFunction = CUDACompile::GetFunction(m_evolveModule, "Evolve");
} // EvolveGenerate

void FireStarterUnit::UnitGenerate(void)
{
    // Evolve each state.
    for (unsigned int i = 0; i < PROGRAM_STATES; i++) {
        FireStarterState& state = m_states[i];
        state = m_bestState;
        if (!m_evolveGeneration)
            state.m_program.RandomProgram(m_seed);
        else
            state.m_program.RandomInstruction(m_seed);
        state.m_program.OptimizeRegisters(true);
        state.m_program.SaveInstructions(state.m_result.instructions);
        state.m_generation = m_evolveGeneration;
    }

    // Update the Evaluate funtion.
    std::string optimize;
    FireStarterCode::ExtractProgram(m_optimizeCode, optimize, OPTIMIZE_CODE);
    std::string evaluateCode;
    std::string optimizeCode;
    for (unsigned int i = 0; i < PROGRAM_STATES; i++) {
        std::string evaluate;
        m_states[i].m_program.GenerateEvaluate(evaluate);
        std::string evaluateName = Format("Evaluate%d", i);
        FireStarterCode::ReplaceCode(evaluate, "Evaluate", evaluateName);
        if (i)
            evaluateCode += "\r\n";
        evaluateCode += evaluate;

        std::string optimizeUnit = optimize;
        std::string optimizeName = Format("Optimize%d", i);
        FireStarterCode::ReplaceCode(optimizeUnit, "Optimize", optimizeName);
        FireStarterCode::ReplaceCode(optimizeUnit, "Evaluate", evaluateName);
        if (i)
            optimizeCode += "\r\n";
        optimizeCode += optimizeUnit;
    }
    m_bestState = m_states[0];

    // Create the units code by replacing the evaluate and optimize sections of the optimize code.
    std::string unitsCode = m_optimizeCode;
    FireStarterCode::UpdateProgram(unitsCode, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(unitsCode, optimizeCode, OPTIMIZE_CODE);

    // Compile the new code.
    CUDACompile::CompileProgram(m_unitsModule, unitsCode);
    for (unsigned int i = 0; i < PROGRAM_STATES; i++)
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

void FireStarterUnit::EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int evolution)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        unsigned int generation = evolution + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&generation) };

        checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitContext->Stream(),                         // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    float minResult = m_hostResults0->results[0].maxResult;
    unsigned int minIndex = 0;
    for (unsigned int i = 1; i < PROGRAM_POPULATION; i++) {
        float curResult = m_hostResults0->results[i].maxResult;
        if (curResult < minResult) {
            minResult = curResult;
            minIndex = i;
        }
    }
    FireStarterState& state = m_states[0];
    state.m_bestResult = minResult;
    state.m_result = m_hostResults0->results[minIndex];

    // Find the best results.
    if (state.m_result.maxResult < m_bestState.m_result.maxResult) {
        m_bestState = state;
        m_bestState.m_program.LoadInstructions(m_bestState.m_result.instructions);
        m_bestState.m_program.OptimizeRegisters(false);
        m_bestState.m_program.SaveInstructions(m_bestState.m_result.instructions);
        m_bestState.OptimizeData();
    }
} // EvolveGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int index, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int evolution)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    FireStarterState& state = m_states[index];
    unsigned int dataSize = state.m_program.m_dataSize;

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        unsigned int generation = evolution + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&generation) };

        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction[index],
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitContext->Stream(),                         // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_unitContext->Stream()));
    checkCUDAErrors(cudaStreamSynchronize(m_unitContext->Stream()));

    FireStarterResult& result = state.m_result;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++)
        result.minResult[v] = m_hostResults0->results[0].minResult[v];
    unsigned int minIndex[PROGRAM_VARIATIONS] = { };
    for (unsigned int i = 1; i < PROGRAM_POPULATION; i++) {
        for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
            float curResult = m_hostResults0->results[i].minResult[v];
            if (curResult < result.minResult[v]) {
                result.minResult[v] = curResult;
                minIndex[v] = i;
            }
        }
    }
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++)
        result.data[v] = m_hostResults0->results[minIndex[v]].data[v];
    float minResult = result.maxResult = result.minResult[0];
    for (unsigned int v = 1; v < PROGRAM_VARIATIONS; v++) {
        minResult = fminf(minResult, result.minResult[v]);
        result.maxResult = fmaxf(result.maxResult, result.minResult[v]);
    }
    state.m_bestResult = minResult;

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
    EvolveGenerations(PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_evolveGeneration);
    m_evolveGeneration += PROGRAM_GENERATIONS;
} // EvolveExecute

void FireStarterUnit::UnitExecute(void)
{ 
    // Generate and compile the program.
    UnitGenerate();

    // Evolve the program data.
    for (unsigned int i = 0; i < PROGRAM_STATES; i++)
        OptimizeGenerations(i, PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, 0);
    m_evolveGeneration++;
} // UnitExecute

void FireStarterUnit::OptimizeExecute(void)
{
    // Run the next generation on the GPU.
    // Evolve the program data.
    m_states[0] = m_bestState;
    m_states[0].m_generation = m_evolveGeneration * PROGRAM_GENERATIONS;
    OptimizeGenerations(0, PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_evolveGeneration);
    m_evolveGeneration += PROGRAM_GENERATIONS;
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
    m_resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (PROGRAM_POPULATION - 1);
    if (!m_deviceResults)
        checkCUDAErrors(cudaMalloc(&m_deviceResults, m_resultsSize * 2));
    if (!m_hostResults)
        checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize * 2));
    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
    m_hostResults0 = (FireStarterResults*)(m_hostResults);
    m_hostResults1 = (FireStarterResults*)(m_hostResults + m_resultsSize);
    return (m_deviceResults && m_hostResults);
} // Allocate

void FireStarterUnit::Packetize(FireStarterPacket& packet)
{
    DispatchSync([this, &packet] {
        m_bestState.Packetize(packet);
        for (unsigned int i = 0; i < PROGRAM_STATES; i++)
            m_states[i].Packetize(packet);
        packet.Packetize(&m_evolveMode, sizeof(m_evolveMode));
        packet.Packetize(&m_evolveGeneration, sizeof(m_evolveGeneration));
        packet.Packetize(&m_unitIndex, sizeof(m_unitIndex));
        packet.Packetize(&m_seed, sizeof(m_seed));
        });
} // Packetize

void FireStarterUnit::InitUnit(unsigned int evolveMode, unsigned int unitIndex, FireStarterState* state)
{
    DispatchAsync([this, evolveMode, unitIndex, state] {
        m_evolveMode = evolveMode;
        m_unitIndex = unitIndex;
        m_seed = RANDOMHASH(RANDOMHASH(m_unitIndex) + 7263);
        if (state)
            m_bestState = *state;
        if (LoadCode() && Allocate()) {
            switch (m_evolveMode) {
                case FIRESTARTER_EVOLVE:
                    EvolveGenerate();
                    break;
                case FIRESTARTER_UNIT:
                    break;
                case FIRESTARTER_PROCESS:
                {
                    FireStarterPacket sendPacket(UNIT_INIT);
                    sendPacket.Packetize(&m_unitIndex, sizeof(m_unitIndex));
                    state->Packetize(sendPacket);
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
        switch (m_evolveMode) {
        case FIRESTARTER_EVOLVE:
            EvolveExecute();
            break;
        case FIRESTARTER_UNIT:
            UnitExecute();
            break;
        case FIRESTARTER_PROCESS:
        {
            FireStarterPacket sendPacket(UNIT_EXECUTE);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            m_process->ReceivePacket(receivePacket, UNIT_EXECUTE);
            break;
        }
        case FIRESTARTER_OPTIMIZE:
            OptimizeExecute();
            break;
        }
    });
} // Execute

bool FireStarterUnit::Update(FireStarterState& bestState, std::string& bestCode, float& bestResult)
{
    bool result = false;
    DispatchSync([this, &bestState, &bestCode, &bestResult, &result] {
        if (m_evolveMode == FIRESTARTER_PROCESS) {
            FireStarterPacket sendPacket(UNIT_UPDATE);
            m_process->SendPacket(sendPacket);
            FireStarterPacket receivePacket;
            if (m_process->ReceivePacket(receivePacket, UNIT_UPDATE)) {
                if (m_bestState.Packetize(receivePacket)) {
                    receivePacket.Packetize(m_optimizeCode);
                    float unitBestResult = m_bestState.m_result.maxResult;
                    if (unitBestResult < bestResult) {
                        bestResult = unitBestResult;
                        bestState = m_bestState;
                        bestCode = m_optimizeCode;
                        result = true;
                    }
                }
            }
        } else {
            float unitBestResult = m_bestState.m_result.maxResult;
            if (unitBestResult < bestResult) {
                bestResult = unitBestResult;
                bestState = m_bestState;
                switch (m_evolveMode) {
                    case FIRESTARTER_EVOLVE:
                        bestCode = m_evolveCode;
                        break;
                    case FIRESTARTER_UNIT:
                        OptimizeGenerate(false);    // Generate but don't compile the code.
                        bestCode = m_optimizeCode;
                        break;
                    case FIRESTARTER_OPTIMIZE:
                        bestCode = m_optimizeCode;
                        break;
                }
                result = true;
            }
        }
    });
    return result;
} // Update

FireStarterUnit::FireStarterUnit(FireStarterProcess* process)
{
    m_process = process;
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
