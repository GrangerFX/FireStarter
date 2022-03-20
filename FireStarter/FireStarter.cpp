#include "FireStarter.h"
#include "FireStarterUtil.h"
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
#include "FireStarter_LoadState.h"
#endif
#include <iomanip>
#include <fstream>
#include <sstream>

void FireStarterProgram::OptimizeRegisters(void)
{
    // Delete the unused registers and sort the remaining ones.
    m_registers.clear();
    m_registers.reserve(PROGRAM_INSTRUCTIONS);
    int dataRegisters[PROGRAM_INSTRUCTIONS];
    memset(dataRegisters, -1, sizeof(dataRegisters));
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        unsigned int reg = m_instructions.Register(i);
        int index = dataRegisters[reg];
        if (index == -1)  {
            index = (int)m_registers.size();
            dataRegisters[reg] = index;
            m_registers.push_back(FireStarterRegister(index, index, i, i));
        } else
            m_registers[index].instructionLast = i;
        m_instructions.SetRegister(i, index);
    }
    m_dataSize = (unsigned int)m_registers.size();

    // Optimize the registers based on the ones in use at any point in the code.
    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    m_maxRegisters = 0;
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        unsigned int reg = m_instructions.Register(i);
        FireStarterRegister& r = m_registers[reg];
        if (r.instructionLast > r.instructionFirst)
            if (r.instructionFirst == i) {
                if (!freeRegisters.empty()) {
                    r.registerIndex = freeRegisters.back();
                    freeRegisters.pop_back();
                } else
                    r.registerIndex = numActiveRegisters;
                numActiveRegisters++;
                m_maxRegisters = max(m_maxRegisters, numActiveRegisters);
            } else if (r.instructionLast == i) {
                freeRegisters.push_back(r.registerIndex);
                numActiveRegisters--;
            }
    }
} // OptimizeRegisters

void FireStarterProgram::RandomProgram(unsigned int& seed)
{
    m_instructions.Randomize(seed);
    OptimizeRegisters();
} // RandomProgram

void FireStarterProgram::RandomInstruction(unsigned int& seed)
{
    unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
    m_instructions.SetRandom(index, seed);
} // RandomInstruction

void FireStarterProgram::LoadInstructions(FireStarterInstructions instructions)
{
    m_instructions = instructions;
} // LoadInstructions

void FireStarterProgram::SaveInstructions(FireStarterInstructions& instructions)
{
    instructions = m_instructions;
} // SaveInstructions

void FireStarterProgram::GenerateCode(std::string& code, unsigned int tabs, bool optimize)
{
    // Generate the evaluate function.
    std::string indent;
    for (unsigned int i = 0; i < tabs; i++)
        indent += "    ";
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        FireStarterOpcode op = m_instructions.Opcode(i);
        unsigned int reg = m_instructions.Register(i);
        switch (op) {
            case Operation_multiply:
                if (optimize && (i == m_registers[reg].instructionLast))
                    code += Format(indent + "n *= data.d[%u];\r\n", reg);
                else
                    code += Format(indent + "n = data.d[%u] *= n;\r\n", reg);
                break;
            case Operation_add:
                if (optimize && (i == m_registers[reg].instructionLast))
                    code += Format(indent + "n += data.d[%u];\r\n", reg);
                else
                    code += Format(indent + "n = data.d[%u] += n;\r\n", reg);
                break;
            case Operation_abs:
                code += Format(indent + "n = fabsf(n);\r\n");
                break;
        }
    }
} // GenerateCode

void FireStarterProgram::GenerateEvaluate(std::string& code, bool optimize)
{
    // Generate the evaluate function.
    code.clear();
    code += "inline float Evaluate(FireStarterData data, float n)\r\n";
    code += "{\r\n";
    GenerateCode(code, 1, optimize);
    code += "    return isfinite(n) ? n : 0.0f;\r\n";
    code += "} // Evaluate\r\n";
} // GenerateEvaluate

void FireStarterProgram::GenerateSolution(std::string& code, FireStarterData& data, bool optimize)
{
    // Generate the replacement code and update the program.
    if (optimize) {
        code += "    float r0";
        for (unsigned int i = 1; i < m_maxRegisters; i++)
            code += Format(", r%u", i);
        code += ";\r\n";
    } else
        for (unsigned int i = 0; i < m_registers.size(); i++)
            code += Format("    float d%u = %.12ff;\r\n", i, data.d[m_registers[i].dataIndex]);
    code += "\r\n";

    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        FireStarterOpcode op = m_instructions.Opcode(i);
        unsigned int reg = m_instructions.Register(i);
        float f = data.d[reg];
        FireStarterRegister& dataRegister = m_registers[reg];
        unsigned int r = dataRegister.registerIndex;
        if (optimize) {
            switch (op) {
                case Operation_multiply:
                    if (i == dataRegister.instructionFirst)
                        if (i == dataRegister.instructionLast)
                            code += Format("    n *= %.8ff;\r\n", f);
                        else
                            code += Format("    r%u = n *= %.8ff;\r\n", r, f);
                    else if (i == dataRegister.instructionLast)
                        code += Format("    n *= r%u;\r\n", r);
                    else
                        code += Format("    n = r%u *= n;\r\n", r);
                    break;
                case Operation_add:
                    if (i == dataRegister.instructionFirst)
                        if (i == dataRegister.instructionLast)
                            code += Format("    n += %.8ff;\r\n", f);
                        else
                            code += Format("    r%u = n += %.8ff;\r\n", r, f);
                    else if (i == dataRegister.instructionLast)
                        code += Format("    n += r%u;\r\n", r);
                    else
                        code += Format("    n = r%u += n;\r\n", r);
                    break;
                case Operation_abs:
                    code += Format("    n = fabsf(n);\r\n");
                    break;
            }
        } else {
            switch (op) {
                case Operation_multiply:
                    if (i == dataRegister.instructionLast)
                        code += Format("    n *= d%u;\r\n", r);
                    else
                        code += Format("    n = d%u *= n;\r\n", r);
                    break;
                case Operation_add:
                    if (i == dataRegister.instructionLast)
                        code += Format("    n += d%u;\r\n", r);
                    else
                        code += Format("    n = d%u += n;\r\n", r);
                    break;
                case Operation_abs:
                    code += Format("    n = fabsf(n);\r\n");
                    break;
            }
        }
    }
} // GenerateSolution

void FireStarterProgram::SaveProgram(std::string& code, unsigned int species)
{
    if (species == 0xFFFFFFFF)
        code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    else
        code += Format("inline void LoadProgram%d(FireStarterProgram& program)\r\n", species);
    code += "{\r\n";

    unsigned int numInstructions = PROGRAM_INSTRUCTIONS;
    for (unsigned int i = 0; i < numInstructions; i++)
        code += Format("    program.m_instructions.SetOperation(%u, %u, %u);\r\n", i, m_instructions.Opcode(i), m_instructions.Register(i));

    code += Format("    program.m_opcodes.resize(%u);\r\n", PROGRAM_OPCODES);
    for (unsigned int i = 0; i < PROGRAM_OPCODES; i++)
        code += Format("    program.m_opcodes[%u] = (FireStarterOpcode)%u;\r\n", i, fireStarterOpcodes[i]);

    unsigned int numRegisters = (unsigned int)m_registers.size();
    code += Format("    program.m_registers.resize(%u);\r\n", numRegisters);
    for (unsigned int i = 0; i < numRegisters; i++)
        code += Format("    program.m_registers[%u] = {%u, %u, %u, %u};\r\n", i, m_registers[i].dataIndex, m_registers[i].registerIndex, m_registers[i].instructionFirst, m_registers[i].instructionLast);

    code += Format("    program.m_programMode = (FireStarterProgramMode)%u;\r\n", m_programMode);
    code += Format("    program.m_dataSize = %u;\r\n", m_dataSize);
    code += Format("    program.m_maxRegisters = %u;\r\n", m_maxRegisters);
    code += "\r\n";
    code += "    program.OptimizeRegisters();\r\n";
    if (species == 0xFFFFFFFF)
        code += "} // LoadProgram\r\n";
    else
        code += Format("} // LoadProgram%d\r\n", species);
    code += "\r\n";
} // SaveProgram

float FireStarterProgram::EmulateProgram(FireStarterData& data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        float& f = data.d[m_instructions.Register(i)];

        switch (m_instructions.Opcode(i)) {
            case Operation_multiply:
                n = f *= n;
                break;
            case Operation_add:
                n = f += n;
                break;
            case Operation_abs:
                n = fabsf(n);
                break;
        }
    }
    return n;
} // EmulateProgram

FireStarterProgram::FireStarterProgram(void)
{
    m_programMode = PROGRAM_MODE;
    m_dataSize = PROGRAM_INSTRUCTIONS;
    m_maxRegisters = PROGRAM_INSTRUCTIONS;
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        m_instructions.SetOperation(i);
    m_opcodes.resize(PROGRAM_OPCODES);
    for (unsigned int i = 0; i < PROGRAM_OPCODES; i++)
        m_opcodes[i] = fireStarterOpcodes[i];
} // FireStarterProgram

void FireStarterState::SaveState(std::string& code)
{
    code += "#include \"FireStarter.h\"\r\n";
    code += "\r\n";
    m_program.SaveProgram(code);
    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            code += Format("    state.m_result.data[%d].d[%u] = %ff;\r\n", v, i, m_result.data[v].d[i]);
        code += Format("    state.m_result.minResult[%d] = %ff;\r\n", v, m_result.minResult[v]);
        code += "\r\n";
    }
    code += Format("    state.m_result.maxResult = %ff;\r\n", m_result.maxResult);
    code += Format("    state.m_result.test = %u;\r\n", m_result.test);
    code += "\r\n";
    code += Format("    state.m_bestResult = %ff;\r\n", m_bestResult);
    code += "\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    state.m_result.instructions = state.m_program.m_instructions;\r\n";
    code += "    state.OptimizeData();\r\n";
    code += "} // LoadState\r\n";
} // SaveState

void FireStarterState::SaveSolution(std::string& code)
{
    code += Format("// Precision = %f\r\n", m_result.maxResult);
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        code += "\r\n";
        code += Format("// Solution%d precision = %f\r\n", v, m_result.minResult[v]);
        code += Format("inline float Solution%d(float n)\r\n", v);
        code += "{\r\n";
        m_program.GenerateSolution(code, m_result.data[v]);
        code += "    return n;\r\n";
        code += Format("} // Solution%d\r\n", v);
    }
} // SaveSolution

void FireStarterState::OptimizeData(void)
{
    // Optimize the use of data registers.
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        FireStarterData& data = m_result.data[v];
        FireStarterData optimizedData(data);
        for (unsigned int i = 0; i < m_program.m_dataSize; i++)
            optimizedData.d[i] = data.d[m_program.m_registers[i].dataIndex];
        for (unsigned int i = m_program.m_dataSize; i < PROGRAM_INSTRUCTIONS; i++)
            optimizedData.d[i] = 0.0f;
        m_result.data[v] = optimizedData;
    }
} // OptimizeData

FireStarterState::FireStarterState(void)
{
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            m_result.data[v].d[i] = 1.0f;
        m_result.minResult[v] = START_RESULT;
    }
    m_result.maxResult = START_RESULT;
    m_bestResult = START_RESULT;
} // FireStarterState


void FireStarterUnit::GenerateEvolve(void)
{
    // Compile the program
    m_evolveFunction = FireStarter::CompileProgram(m_evolveCode, m_evolveModule, "Evolve");
} // GenerateEvolve

void FireStarterUnit::GenerateUnits(void)
{
    // Update the Evaluate funtion.
    std::string code;
#if PROGRAM_STATES > 1
    for (unsigned int i = 0; i < PROGRAM_STATES; i++) {
        if (i)
            code += "\r\n";
        code += Format("inline float Evaluate%d(FireStarterData data, float n)\r\n", i);
        code += "{\r\n";
        m_states[i].m_program.GenerateCode(code, 2);
        code += "    return isfinite(n) ? n : 0.0f;\r\n";
        code += "} // Evaluate\r\n";
    }
    FireStarter::UpdateProgram(m_unitsCode, code, EVALUATE_CODE);

    code.clear();
    code += "    switch (version) {\r\n";
    for (unsigned int i = 0; i < PROGRAM_STATES; i++) {
        code += Format("    case %d:\r\n", i);
        code += Format("        evaluate = Evaluate%d;\r\n", i);
        code += "        break;\r\n";
    }
    code += "    }\r\n";
    FireStarter::UpdateProgram(m_unitsCode, code, SELECT_CODE);
#else
    m_states[0].m_program.GenerateEvaluate(code);
    FireStarter::UpdateProgram(m_unitsCode, code, EVALUATE_CODE);
#endif

    // Compile the new code.
    m_unitsFunction = FireStarter::CompileProgram(m_unitsCode, m_unitsModule, "Units");
} // GenerateUnits

void FireStarterUnit::GenerateOptimize(void)
{
    // Update the Evaluate funtion.
    std::string code;
    m_states[0].m_program.GenerateEvaluate(code);
    FireStarter::UpdateProgram(m_optimizeCode, code, EVALUATE_CODE);

    // Compile the new code.
    m_optimizeFunction = FireStarter::CompileProgram(m_optimizeCode, m_optimizeModule, "Optimize");
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
                        reinterpret_cast<void*>(&version),
                        reinterpret_cast<void*>(&dataSize),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&curGeneration) };

        checkCUDAErrors(cuLaunchKernel(m_unitsFunction,
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
    EvolveGenerations(PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_programGeneration);
    m_programGeneration += PROGRAM_GENERATIONS;
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
        UnitsGenerations(i, PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_programGeneration);
    printf("<<<ExecuteUnits: UnitsGenerations %f\n", m_timer.Duration() - startTime);
} // ExecuteUnits

void FireStarterUnit::ExecuteOptimize(void)
{
    // Run the next generation on the GPU.
    // Evolve the program data.
    m_states[0] = m_bestState;
    OptimizeGenerations(PROGRAM_POPULATION, PROGRAM_ITERATIONS, PROGRAM_GENERATIONS, m_programGeneration);
    m_programGeneration += PROGRAM_GENERATIONS;
 } // ExecuteOptimize

void FireStarterUnit::Execute(void)
{
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    ExecuteEvolve();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_UNITS
    ExecuteUnits();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    ExecuteOptimize();
#endif
} // Execute

void FireStarterUnit::UpdateProgram(FireStarterState* &bestState, unsigned int* &generation)
{
    bestState = &m_bestState;
    generation = &m_programGeneration;
} // Update

void FireStarterUnit::UpdateCode(std::string& code)
{
#if FIRESTARTER_MODE == FIRESTARTER_UNITS
    code = m_evolveCode;
#endif
#if FIRESTARTER_MODE == FIRESTARTER_UNITS
    code = m_unitsCode;
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    code = m_optimizeCode;
#endif
} // UpdateCode

void FireStarterUnit::InitUnit(void)
{
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

#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    GenerateEvolve();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_UNITS
    for (unsigned int i = 0; i < PROGRAM_STATES; i++)
        m_states[i].m_program.RandomProgram(m_seed);
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    LoadState(m_states[0]);
    GenerateOptimize();
#endif
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

FireStarterUnit::FireStarterUnit(unsigned int unitIndex, CUdevice device, FireStarter *fireStarter)
{
    m_fireStarter = fireStarter;
    m_unitIndex = unitIndex;
    m_seed = RANDOMHASH(RANDOMHASH(m_unitIndex) + 7263);
    m_unitDevice = device;
    m_unitContext = nullptr;
    m_evolveCode = m_fireStarter->m_evolveCode;
    m_unitsCode = m_fireStarter->m_unitsCode;
    m_optimizeCode = m_fireStarter->m_optimizeCode;
    m_deviceResults = nullptr;
    m_hostResults = nullptr;
    m_deviceResults0 = nullptr;
    m_deviceResults0 = nullptr;
    m_hostResults0 = nullptr;
    m_hostResults1 = nullptr;
    m_evolveModule = nullptr;
    m_unitsModule = nullptr;
    m_evolveFunction = nullptr;
    m_unitsFunction = nullptr;
    m_optimizeModule = nullptr;
    m_optimizeFunction = nullptr;
    m_programGeneration = 0;
    m_quit = false;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
} // ~FireStarterUnit

CUfunction FireStarter::CompileProgram(const std::string& program, CUmodule& cuda_module, const char *functionName)
{
    SimpleTimer timer;

    if (cuda_module) {
        checkCUDAErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }

    printf("\n>>>CompileProgram: %s\n", functionName);
    printf(">>>cuModuleUnload: %f\n", timer.Duration());

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    checkNVRTCErrors(nvrtcCreateProgram(&prog, code, functionName, 0, nullptr, nullptr));
    printf(">>>nvrtcCreateProgram: %f\n", timer.Duration());

    std::vector<const char*> options;
    options.push_back("-default-device");   // Allows use of inline functions without specifying them as __device__
 //   options.push_back("-G");              // Generate debug info
 //   options.push_back("-lineinfo");       // Generate line information

    static std::string computeDevice;
    if (!computeDevice.length()) {
        int computeCapabilityMajor = 0;
        int computeCapabilityMinor = 0;
        CUdevice device = 0;
        checkCUDAErrors(cuDeviceGet(&device, 0)); // Use the first CUDA device for now.
        checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMajor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, device));
        checkCUDAErrors(cuDeviceGetAttribute(&computeCapabilityMinor, CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, device));
        computeDevice = Format("-arch=compute_%d%d", computeCapabilityMajor, computeCapabilityMinor);
    }
    options.push_back(computeDevice.c_str());

    nvrtcResult res = nvrtcCompileProgram(prog, (int)options.size(), options.data());
    printf(">>>nvrtcCompileProgram: %f\n", timer.Duration());
    if (res != 0) {
        // Output the compile log.
        size_t logSize;
        checkNVRTCErrors(nvrtcGetProgramLogSize(prog, &logSize));
        if (logSize) {
            char* log = reinterpret_cast<char*>(malloc(logSize + 1));
            checkNVRTCErrors(nvrtcGetProgramLog(prog, log));
            log[logSize] = '\x0';
            printf("compilation log ---\n%s\nend log---\n", log);
            free(log);
        }
        checkNVRTCErrors(res);
    }

    // Fetch PTX
    char* ptx;
    size_t ptxSize;
    checkNVRTCErrors(nvrtcGetPTXSize(prog, &ptxSize));
    printf(">>>nvrtcGetPTXSize: %f\n", timer.Duration());
    ptx = reinterpret_cast<char*>(malloc(sizeof(char) * ptxSize));
    checkNVRTCErrors(nvrtcGetPTX(prog, ptx));
    printf(">>>nvrtcGetPTX: %f\n", timer.Duration());
    checkNVRTCErrors(nvrtcDestroyProgram(&prog));
    printf(">>>nvrtcDestroyProgram: %f\n", timer.Duration());

    checkCUDAErrors(cuModuleLoadDataEx(&cuda_module, ptx, 0, 0, 0));
    printf(">>>cuModuleLoadDataEx: %f\n", timer.Duration());
    free(ptx);
    ptx = nullptr;
    CUfunction function = nullptr;
    checkCUDAErrors(cuModuleGetFunction(&function, cuda_module, functionName));
    printf(">>>cuModuleGetFunction: %f\n", timer.Duration());
    printf("\n");
    return function;
} // CompileProgram

bool FireStarter::LoadCode(const std::string& filePath, std::string& code)
{
    std::ifstream file(filePath.c_str(), std::ios::ate | std::ios::binary);
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        code.reserve(code.length() + file.tellg());
        file.seekg(0, std::ios::beg);
        code.append((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
        return true;
    }
    return false;
} // LoadCode

void FireStarter::SaveCode(const std::string& filePath, const std::string& code)
{
    std::ofstream file(filePath.c_str(), std::ios::out | std::ios::binary);
    if (file.is_open()) {
        file << code;
        file.close();
    }
} // SaveCode

void FireStarter::ReplaceCode(std::string& code, const std::string& search, const std::string& replace)
{
    // Get the first occurrence
    size_t pos = code.find(search);

    // Repeat till end is reached
    while (pos != std::string::npos) {
        // Replace this occurrence of Sub String
        code.replace(pos, search.size(), replace);
        // Get the next occurrence from the current position
        pos = code.find(search, pos + replace.size());
    }
} // ReplaceCode

void FireStarter::UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString)
{
    size_t startPos = code.find(startString);
    if (startPos != std::string::npos) {
        size_t startStringLength = startString.length();
        if (code[startPos + startStringLength] == '\r')
            startStringLength++;
        if (code[startPos + startStringLength] == '\n')
            startStringLength++;
        size_t endPos = code.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startStringLength;
        else
            endPos = startPos + startStringLength;
        code.replace(startPos, endPos - startPos, replacementCode);
    }
} // UpdateProgram

void FireStarter::BuildData(std::string& code)
{
    std::string replacementData;
    code += "inline void InitData(const unsigned int variation, FireStarterData &data)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        code += Format("    if (variation == %d) {\r\n", v);
        for (unsigned int i = 0; i < m_bestEvaluateState.m_program.m_dataSize; i++)
            code += Format("        data.d[%d] = %ff;\r\n", i, m_bestEvaluateState.m_result.data[v].d[i]);
        for (unsigned int i = m_bestEvaluateState.m_program.m_dataSize; i < PROGRAM_INSTRUCTIONS; i++)
            code += Format("        data.d[%d] = 0.0f;\r\n", i);
        code += "    }\r\n";
    }
    code += "} // InitData\r\n";
} // BuildData

bool FireStarter::LoadTargetCode(void)
{
    if (!FireStarter::LoadCode("FireStarterTarget.h", m_targetCode))
        return false;
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireStarterCode(void)
{
    if (!FireStarter::LoadCode("Evolve.cu", m_evolveCode))
        return false;
    if (!FireStarter::LoadCode("Units.cu", m_unitsCode))
        return false;
    if (!FireStarter::LoadCode("Optimize.cu", m_optimizeCode))
        return false;
    return true;
} // LoadFireStarterCode

bool FireStarter::LoadFireShowCode(void)
{
    if (!LoadCode("FireShow.cu", m_fireShowCode))
        return false;
    return true;
} // LoadFireShowCode

void FireStarter::SaveBestState(void)
{
    std::string bestStateCode;
    m_bestEvaluateState.SaveState(bestStateCode);
    FireStarter::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

void FireStarter::SaveBestCode(void)
{
    FireStarter::SaveCode("FireStarter_BestCode.h", m_bestCode);
} // SaveBestCode

void FireStarter::SaveSolution(void)
{
    time_t currentTime = time(nullptr);
    tm localTime;
    std::stringstream sstream;
    localtime_s(&localTime, &currentTime);
    sstream << std::put_time(&localTime, "%c %Z");

    std::string solutionCode;
    solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    solutionCode += Format("// Run date: %s\r\n", sstream.str().c_str());
    solutionCode += Format("// Run duration = %f seconds\r\n", m_controlTime);
    solutionCode += Format("// Run count = %d\r\n", m_generation);
    solutionCode += Format("// Run units = %d\r\n", (unsigned int)m_units.size());
    solutionCode += Format("// Run population = %d\r\n", PROGRAM_POPULATION);
    solutionCode += Format("// Run iterations = %d\r\n", PROGRAM_ITERATIONS);
    solutionCode += Format("// Run generations = %d\r\n", PROGRAM_GENERATIONS);
    solutionCode += Format("// Run samples = %d\r\n", SAMPLE_ITERATIONS);
    solutionCode += "\r\n";
    solutionCode += Format("#define SOLUTION_MIN %f\r\n", SAMPLE_MIN);
    solutionCode += Format("#define SOLUTION_MAX %f\r\n", SAMPLE_MAX);
    solutionCode += "\r\n";
    solutionCode += Format("#define PROGRAM_VARIATIONS %d\r\n", PROGRAM_VARIATIONS);
    solutionCode += "\r\n";
    solutionCode += m_targetCode;
    solutionCode += "\r\n";
    m_bestEvaluateState.SaveSolution(solutionCode);
    FireStarter::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarter::FireShow(void)
{
    for (unsigned int variation = 0; variation < PROGRAM_VARIATIONS; variation++) {
        // Launch the display kernel
        int threadsPerBlock = BLOCK_THREADS;
        int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
        dim3 cudaBlockSize(threadsPerBlock, 1, 1);
        dim3 cudaGridSize(blocksPerGrid, 1, 1);

        void* arr[] = { reinterpret_cast<void*>(&m_bestEvaluateState.m_result),
                        reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                        reinterpret_cast<void*>(&m_buffer.m_width),
                        reinterpret_cast<void*>(&m_buffer.m_height),
                        reinterpret_cast<void*>(&variation) };

        checkCUDAErrors(cuLaunchKernel(m_fireShowFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_fireShowStream,                                // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }
    checkCUDAErrors(cudaStreamSynchronize(m_fireShowStream));
} // FireShow

void FireStarter::RenderImage(unsigned int width, unsigned int height, const unsigned char *pixels)
{
    unsigned char buffer[4096];
    BITMAPINFO* bm = (BITMAPINFO*)buffer;
    bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bm->bmiHeader.biHeight = -(int)height;
    bm->bmiHeader.biPlanes = 1;
    bm->bmiHeader.biCompression = BI_RGB;
    bm->bmiHeader.biSizeImage = 0;
    bm->bmiHeader.biXPelsPerMeter = 0;
    bm->bmiHeader.biYPelsPerMeter = 0;
    bm->bmiHeader.biClrUsed = 0;
    bm->bmiHeader.biClrImportant = 0;
    bm->bmiHeader.biWidth = width;
    bm->bmiHeader.biBitCount = 32;

    HDC hdc = GetDC((HWND)m_window);
    if (hdc) {
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
        SetDIBitsToDevice(hdc, 0, 0, width, height, 0, 0, 0, height, pixels, bm, DIB_RGB_COLORS);
#else
        SetDIBitsToDevice(hdc, 0, 0, width, height, 0, 0, 0, height, pixels, bm, DIB_RGB_COLORS);
#endif
        GdiFlush();
    }
} // RenderImage

void FireStarter::RenderStatus(void)
{
    // Update the status.
    sprintf_s(m_statusString, "FireStarter: Generation=%u  Age=%u  Best=%f  Worst=%f  Time=%.4f Seconds  Run Time=%.4f Seconds", m_generation, m_generation - m_bestGeneration, m_bestResult, m_worstResult, m_controlTime, m_runTimer.Duration());
} // RenderStatus

void FireStarter::ControlThread(void)
{
    checkCUDAErrors(cuInit(0));
    checkCUDAErrors(cuDeviceGet(&m_device, 0)); // Use the first CUDA device for now.
    checkCUDAErrors(cuCtxCreate(&m_fireShowContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireShowStream));
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Compile fireShow.
    m_fireShowFunction = CompileProgram(m_fireShowCode, m_fireShowModule, "FireShow");

    // Create and initialize a unit for each processor thread.
    unsigned int unit_count = PROGRAM_UNITS;
    if (!unit_count)
        unit_count = std::thread::hardware_concurrency(); // Returns logical core count not physical core count.
    if (!unit_count)   // May return zero on some systems.
        unit_count = 1;
    for (unsigned int i = 0; i < unit_count; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, m_device, this);
        m_units.push_back(unit);
    }
    for (FireStarterUnit* unit : m_units)
        unit->DispatchAsync([this, unit] {
            unit->InitUnit();
        });

    // Loop until the the host program is quit.
    m_runTimer.Start();
    while (!m_quitControlThread) {
        // Asyncronously execute a generation for all the units.
        m_controlTimer.Start();
        for (FireStarterUnit* unit : m_units)
            unit->DispatchAsync([unit] {
                unit->Execute();
            });

        // Syncronously update the best data for all the units.
        for (FireStarterUnit* unit : m_units) {
            unit->DispatchSync([this, unit] {
                FireStarterState* unitBestEvaluateState = nullptr;
                unsigned int* unitGeneration = nullptr;
                unit->UpdateProgram(unitBestEvaluateState, unitGeneration);
                float result = unitBestEvaluateState->m_result.maxResult;
                if (result < m_bestResult) {
                    unit->UpdateCode(m_bestCode);
                    m_bestResult = result;
                    m_bestEvaluateState = *unitBestEvaluateState;
                    m_bestGeneration = m_generation;
                    m_controlUpdate = true;
                }
            });
        }
        m_controlTime = m_controlTimer.Duration();
        m_generation++;

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate && !m_quitControlThread) {
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
            SaveBestState();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_UNITS
            SaveBestState();
            SaveBestCode();
            SaveSolution();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
            SaveBestCode();
            SaveSolution();
#endif
        }

        // Update the render status after every pass.
        if (!m_quitControlThread) {
            RenderStatus();
            GetMainThread()->DispatchAsync([this] { SetWindowText((HWND)m_window, m_statusString); });
        }

        // Render the buffer if the best data was updated and the previous buffer was displayed.
        if (m_fireShowModule && !m_bufferUpdate && !m_quitControlThread) {
            // Erase the frame buffer
            m_buffer.Erase();

            // Draw the graphs for both variations.
            FireShow();
            m_controlUpdate = false;
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
            const unsigned char* bufferPixels = m_buffer.GetHost();
#else
            const unsigned char* bufferPixels = m_buffer.GetDevice();
#endif

            GetMainThread()->DispatchAsync([this, bufferPixels] {
                RenderImage(m_buffer.m_width, m_buffer.m_height, bufferPixels);
                m_bufferUpdate = false;
            });
        }
    }

    // Finish processing and terminate each unit.
    for (FireStarterUnit* unit : m_units) {
        unit->m_quit = true;    // This allows the program loop to exit faster.
        unit->DispatchAsync([unit] { unit->FinishUnit(); });
    }
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();

    // Free the frame buffer memory.
    m_buffer.Resize(0, 0);

    // Unload the fire show code and destroy the CUDA context.
    if (m_fireShowModule)
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
    m_fireShowFunction = nullptr;
    if (m_fireShowContext)
        checkCUDAErrors(cuCtxDestroy(m_fireShowContext));
} // ControlThread

float FireStarter::DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation)
{
    float maxError = 0.0f;
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    for (unsigned int y = 0; y < bufferHeight; y++) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < (int)bufferWidth) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    for (unsigned int x = 0; x < bufferWidth; x++) {
        float theta = TARGET_PI * ((x - bufferWidth * 0.5f)  / xScale + 1.0f);
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        float solution = 0.0f;
        switch (variation) {
            case 0:
                solution = Solution0(theta);
                break;
#if PROGRAM_VARIATIONS > 1
            case 1:
                solution = Solution1(theta);
                break;
#endif
#if PROGRAM_VARIATIONS > 2
            case 2:
                solution = Solution2(theta);
                break;
#endif
#if PROGRAM_VARIATIONS > 3
            case 3:
                solution = Solution3(theta);
                break;
#endif
        }
        if ((theta >= SOLUTION_MIN) && (theta <= SOLUTION_MAX)) {
            float error = fabsf(solution - target);
            maxError = max(maxError, error);
        }
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < (int)bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + solution * yScale);
        if ((y >= 0) && (y < (int)bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
#endif
    return maxError;
} // DrawSolution

bool FireStarter::Init(void* window, unsigned int width, unsigned int height)
{
    m_window = window;
    m_width = width;
    m_height = height;
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();
    std::string statusString = "FireStarter:";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        float error = DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, v);
        statusString += Format(" Solution %d = %f", v, error);
    }
    RenderImage(width, height, m_buffer.m_hostBase);
    SetWindowText((HWND)m_window, statusString.c_str());
    return true;
#else
    if (LoadTargetCode() && LoadFireStarterCode() && LoadFireShowCode()) {
        DispatchAsync([this] { ControlThread(); });
        return true;
    }
    return false;
#endif
} // Init

void FireStarter::Quit(void)
{
    m_quitControlThread = true;
    DispatchSync([]{}); // This will wait for ControlThread() to exit.
} // Quit

FireStarter::FireStarter(void)
{
    m_fireShowContext = nullptr;
    m_fireShowModule = nullptr;
    m_fireShowFunction = nullptr;
    m_statusString[0] = 0;
    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = START_RESULT;
    m_worstResult = START_RESULT;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter