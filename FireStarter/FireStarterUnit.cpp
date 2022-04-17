#include "FireStarterUnit.h"
#include "FireStarterCode.h"
#include "CUDACompile.h"

void FireStarterUnit::GenerateEvolve(void)
{
    // Compile the program
    m_evolveFunction = CUDACompile::CompileProgram(m_evolveCode, m_evolveModule, "Evolve");
} // GenerateEvolve

void FireStarterUnit::GenerateUnits(void)
{
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

    // Create the units code by replacing the evaluate and optimize sections of the optimize code.
    m_unitsCode = m_optimizeCode;
    FireStarterCode::UpdateProgram(m_unitsCode, evaluateCode, EVALUATE_CODE);
    FireStarterCode::UpdateProgram(m_unitsCode, optimizeCode, OPTIMIZE_CODE);

    // Compile the new code.
    CUDACompile::CompileProgram(m_unitsCode, m_unitsModule);
    for (unsigned int i = 0; i < PROGRAM_STATES; i++)
        m_unitFunction[i] = CUDACompile::GetFunction(m_unitsModule, Format("Optimize%d", i).c_str());
} // GenerateUnits

void FireStarterUnit::GenerateOptimize(void)
{
    // Update the Evaluate funtion.
    std::string code;
    m_states[0].m_program.GenerateEvaluate(code);
    FireStarterCode::UpdateProgram(m_optimizeCode, code, EVALUATE_CODE);

    // Compile the new code.
    m_optimizeFunction = CUDACompile::CompileProgram(m_optimizeCode, m_optimizeModule, "Optimize");
} // GenerateOptimize

void FireStarterUnit::EvolveGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = population;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        unsigned int curGeneration = generation + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&curGeneration) };

        checkCUDAErrors(cuLaunchKernel(m_evolveFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitStream,                                    // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_unitStream));
    checkCUDAErrors(cudaStreamSynchronize(m_unitStream));
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
    }
} // EvolveGenerations

void FireStarterUnit::UnitsGenerations(unsigned int version, unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation)
{
    // Launch the calculation kernel
    double startTime = m_timer.Duration();
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    FireStarterState& state = m_states[version];
    unsigned int dataSize = state.m_program.m_dataSize;

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        unsigned int curGeneration = generation + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&curGeneration) };

        checkCUDAErrors(cuLaunchKernel(m_unitFunction[version],
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitStream,                                    // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaStreamSynchronize(m_unitStream));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_unitStream));
    checkCUDAErrors(cudaStreamSynchronize(m_unitStream));
    printf("<<<UnitsGenerations cudaStreamSynchronize: %f\n", m_timer.Duration() - startTime);

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
    printf("<<<UnitsGenerations: %f\n", m_timer.Duration() - startTime);
} // UnitsGenerations

void FireStarterUnit::OptimizeGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned int generation)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = BLOCK_THREADS;  // Same as the threads per CUDA core.
    unsigned int blocksPerGrid = (population + (threadsPerBlock - 1)) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    FireStarterState& state = m_states[0];
    unsigned int dataSize = state.m_program.m_dataSize;

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        unsigned int curGeneration = generation + g;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&curGeneration) };

        checkCUDAErrors(cuLaunchKernel(m_optimizeFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_unitStream,                                    // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        checkCUDAErrors(cudaStreamSynchronize(m_unitStream));
    }

    // Get the best result.
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_unitStream));
    checkCUDAErrors(cudaStreamSynchronize(m_unitStream));
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

void FireStarterUnit::ExecuteEvolve(void)
{
    // Run the next generation on the GPU.
   // Evolve the program instructions.
    m_states[0] = m_bestState;
    EvolveGenerations(PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_evolveGeneration);
    m_evolveGeneration += PROGRAM_GENERATIONS;
} // ExecuteEvolve

void FireStarterUnit::ExecuteUnits(void)
{
    // Run the next generation on the GPU.
    // Evolve the program instructions.
    double startTime = m_timer.Duration();
    for (unsigned int i = 0; i < PROGRAM_STATES; i++) {
        FireStarterState& state = m_states[i];
        state = m_bestState;
        state.m_program.RandomInstruction(m_seed);
        state.m_program.OptimizeRegisters();
        state.m_program.SaveInstructions(state.m_result.instructions);
    }

    // Compile the program.
    GenerateUnits();
    printf("<<<ExecuteUnits: GenerateUnits %f\n", m_timer.Duration() - startTime);

    // Evolve the program data.
    for (unsigned int i = 0; i < PROGRAM_STATES; i++)
        UnitsGenerations(i, PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_evolveGeneration);
    printf("<<<ExecuteUnits: UnitsGenerations %f\n", m_timer.Duration() - startTime);
} // ExecuteUnits

void FireStarterUnit::ExecuteOptimize(void)
{
    // Run the next generation on the GPU.
    // Evolve the program data.
    m_states[0] = m_bestState;
    OptimizeGenerations(PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_evolveGeneration);
    m_evolveGeneration += PROGRAM_GENERATIONS;
} // ExecuteOptimize

void FireStarterUnit::Execute(void)
{
    switch (m_evolveMode) {
    case FIRESTARTER_EVOLVE:
        ExecuteEvolve();
        break;
    case FIRESTARTER_UNITS:
        ExecuteUnits();
        break;
    case FIRESTARTER_OPTIMIZE:
        ExecuteOptimize();
        break;
    }
} // Execute

void FireStarterUnit::UpdateProgram(FireStarterState*& bestState, unsigned int*& generation)
{
    bestState = &m_bestState;
    generation = &m_evolveGeneration;
} // Update

void FireStarterUnit::UpdateCode(std::string& code)
{
    switch (m_evolveMode) {
    case FIRESTARTER_EVOLVE:
        code = m_evolveCode;
        break;
    case FIRESTARTER_UNITS:
        code = m_unitsCode;
        break;
    case FIRESTARTER_OPTIMIZE:
        code = m_optimizeCode;
        break;
    }
} // UpdateCode

void FireStarterUnit::InitUnit(unsigned int evolveMode)
{
    m_evolveMode = evolveMode;
    checkCUDAErrors(cuCtxCreate(&m_unitContext, CU_CTX_SCHED_AUTO, m_unitDevice));
    checkCUDAErrors(cudaStreamCreate(&m_unitStream));
    m_resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (PROGRAM_POPULATION - 1);
    size_t totalSize = m_resultsSize * 2;
    if (!m_deviceResults) {
        checkCUDAErrors(cudaMalloc(&m_deviceResults, totalSize));
        checkCUDAErrors(cudaMemset(m_deviceResults, 0, totalSize));
    }
    if (!m_hostResults) {
        checkCUDAErrors(cudaMallocHost(&m_hostResults, totalSize));
        memset(m_hostResults, 0, totalSize);
    }
    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + m_resultsSize);
    m_hostResults0 = (FireStarterResults*)(m_hostResults);
    m_hostResults1 = (FireStarterResults*)(m_hostResults + m_resultsSize);

    switch (m_evolveMode) {
    case FIRESTARTER_EVOLVE:
        GenerateEvolve();
        break;
    case FIRESTARTER_UNITS:
        for (unsigned int i = 0; i < PROGRAM_STATES; i++)
            m_states[i].m_program.RandomProgram(m_seed);
        break;
    case FIRESTARTER_OPTIMIZE:
        LoadState(m_states[0]);
        GenerateOptimize();
        break;
    }
    m_bestState = m_states[0];
} // InitUnit

void FireStarterUnit::FinishUnit(void)
{
    if (m_evolveModule) {
        checkCUDAErrors(cuModuleUnload(m_evolveModule));
        m_evolveModule = nullptr;
    }
    if (m_optimizeModule) {
        checkCUDAErrors(cuModuleUnload(m_optimizeModule));
        m_evolveModule = nullptr;
    }
    m_evolveFunction = nullptr;
    m_optimizeFunction = nullptr;
    if (m_deviceResults) {
        checkCUDAErrors(cudaFree(m_deviceResults));
        m_deviceResults = nullptr;
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    if (m_deviceResults) {
        checkCUDAErrors(cudaFree(m_deviceResults));
        m_deviceResults = nullptr;
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    m_deviceResults0 = nullptr;
    m_deviceResults1 = nullptr;
    m_hostResults0 = nullptr;
    m_hostResults1 = nullptr;
    if (m_unitContext) {
        checkCUDAErrors(cuCtxDestroy(m_unitContext));
        m_unitContext = nullptr;
    }
} // FinishUnit

FireStarterUnit::FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string &evolveCode, const std::string &optimizeCode)
{
    m_unitIndex = unitIndex;
    m_seed = RANDOMHASH(RANDOMHASH(m_unitIndex) + 7263);
    m_unitDevice = device;
    m_unitContext = nullptr;
    m_evolveCode = evolveCode;
    m_unitsCode = optimizeCode;
    m_optimizeCode = optimizeCode;
    m_deviceResults = nullptr;
    m_hostResults = nullptr;
    m_deviceResults0 = nullptr;
    m_deviceResults0 = nullptr;
    m_hostResults0 = nullptr;
    m_hostResults1 = nullptr;
    m_evolveModule = nullptr;
    m_unitsModule = nullptr;
    m_evolveFunction = nullptr;
    memset(m_unitFunction, 0, sizeof(m_unitFunction));
    m_optimizeModule = nullptr;
    m_optimizeFunction = nullptr;
    m_evolveMode = 0;
    m_evolveGeneration = 0;
    m_quit = false;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
} // ~FireStarterUnit
