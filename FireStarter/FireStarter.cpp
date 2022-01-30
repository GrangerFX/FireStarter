#include "FireStarter.h"
#include "FireStarterUtil.h"
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
#include "FireStarter_LoadState.h"
#endif
#include <iomanip>
#include <fstream>
#include <sstream>

void FireStarterProgram::RandomInstruction(unsigned int index, unsigned int& seed)
{
    FireStarterInstruction& instruction = m_instructions[index];
#if PROGRAM_RANDOM_INSTRUCTIONS
    instruction.opdata.operation = m_opcodes[RANDOMSEED(seed) % m_opcodes.size()];
#else
    instruction.opdata.operation = m_opcodes[index % m_opcodes.size()];
#endif
    instruction.opdata.data = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
} // RandomInstruction

void FireStarterProgram::OptimizeData(void)
{
    // Delete the unused registers and sort the remaining ones.
    m_registers.clear();
    m_registers.reserve(PROGRAM_MAX_DATA);
    int dataRegisters[PROGRAM_MAX_DATA];
    memset(dataRegisters, -1, sizeof(dataRegisters));
    for (unsigned int i = 0; i < m_instructions.size(); i++) {
        unsigned int dataIndex = m_instructions[i].opdata.data;
        int index = dataRegisters[dataIndex];
        if (index == -1)  {
            index = (int)m_registers.size();
            dataRegisters[dataIndex] = index;
            m_registers.push_back(FireStarterRegister(index, index, i, i));
        } else
            m_registers[index].instructionLast = i;
        m_instructions[i].opdata.data = index;
    }
    m_dataSize = (unsigned int)m_registers.size();

    // Optimize the registers based on the ones in use at an point in the code.
    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    m_maxRegisters = 0;
    for (unsigned int i = 0; i < m_instructions.size(); i++) {
        unsigned int index = m_instructions[i].opdata.data;
        FireStarterRegister& r = m_registers[index];
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
} // OptimizeData

void FireStarterProgram::InitProgram(unsigned int& seed)
{
    for (unsigned int i = 0; i < m_instructions.size(); i++)
        RandomInstruction(i, seed);
} // InitProgram

void FireStarterProgram::GenerateProgram(std::string &code, bool optimize)
{
    // Generate the replacement code and update the program.
    for (unsigned int i = 0; i < (unsigned int)m_instructions.size(); i++) {
        FireStarterInstruction& instruction = m_instructions[i];
        unsigned int d = instruction.Data();
        switch (instruction.Operation()) {
             case Operation_add:
                code += Format("    n += data.d[%u];\r\n", d);
                break;
            case Operation_multiply:
                code += Format("    n *= data.d[%u];\r\n", d);
                break;
            case Operation_abs:
                code += Format("    n = fabsf(n);\r\n");
                break;
            case Operation_mod:
                code += Format("    n = fmodf(n, data.d[%u]);\r\n", d);
                break;
        }
        if (!optimize || (i != m_registers[d].instructionLast))
            code += Format("    data.d[%u] = n;\r\n", d);
    }
} // GenerateProgram

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

    for (unsigned int i = 0; i < (unsigned int)m_instructions.size(); i++) {
        FireStarterInstruction& instruction = m_instructions[i];
        unsigned int d = instruction.Data();
        if (optimize) {
            float f = data.d[d];
            FireStarterRegister& dataRegister = m_registers[d];
            unsigned int r = dataRegister.registerIndex;

            switch (instruction.Operation()) {
                case Operation_add:
                    if (i == dataRegister.instructionFirst)
                        code += Format("    n += %.8ff;\r\n", f);
                    else
                        code += Format("    n += r%u;\r\n", r);
                    break;
                case Operation_multiply:
                    if (i == dataRegister.instructionFirst)
                        code += Format("    n *= %.8ff;\r\n", f);
                    else
                        code += Format("    n *= r%u;\r\n", r);
                    break;
                case Operation_abs:
                    code += Format("    n = fabsf(n);\r\n");
                    break;
                case Operation_mod:
                    if (i == dataRegister.instructionFirst)
                        code += Format("    n = fmodf(n, %.8ff);\r\n", f);
                    else
                        code += Format("    n = fmodf(n, r%u);\r\n", r);
                    break;
            }
            if (i < dataRegister.instructionLast)
                code += Format("    r%u = n;\r\n", r);
        } else {
            switch (instruction.Operation()) {
                case Operation_add:
                    code += Format("    n += d%u;\r\n", d);
                    break;
                case Operation_multiply:
                    code += Format("    n *= d%u;\r\n", d);
                    break;
                case Operation_abs:
                    code += Format("    n = fabsf(n);\r\n");
                    break;
                case Operation_mod:
                    code += Format("    n = fmodf(n, d%u);\r\n", d);
                    break;
            }
            if (i != m_registers[d].instructionLast)
                code += Format("    d%u = n;\r\n", d);
        }
    }
} // GenerateSolution

void FireStarterProgram::SaveProgram(std::string& code)
{
    code += "inline void LoadProgram(FireStarterProgram& program)\r\n";
    code += "{\r\n";

    unsigned int numOpcodes = (unsigned int)m_opcodes.size();
    code += Format("    program.m_opcodes.resize(%u);\r\n", numOpcodes);
    for (unsigned int i = 0; i < numOpcodes; i++)
        code += Format("    program.m_opcodes[%u] = (FireStarterOpcode)%u;\r\n", i, m_opcodes[i]);

    unsigned int numInstructions = (unsigned int)m_instructions.size();
    code += Format("    program.m_instructions.resize(%u);\r\n", numInstructions);
    for (unsigned int i = 0; i < numInstructions; i++)
        code += Format("    program.m_instructions[%u].opcode = %u;\r\n", i, m_instructions[i].opcode);

    code += Format("    program.m_programMode = (FireStarterProgramMode)%u;\r\n", m_programMode);
    code += Format("    program.m_dataSize = %u;\r\n", m_dataSize);
    code += "} // LoadProgram\r\n";
    code += "\r\n";
} // SaveProgram

float FireStarterProgram::EmulateProgram(FireStarterData& data, float n)
{
    for (unsigned int i = 0; i < (unsigned int)m_instructions.size(); i++) {
        FireStarterInstruction& instruction = m_instructions[i];
        float& f = data.d[instruction.Data()];

        switch (instruction.Operation()) {
            case Operation_add:
                n += f;
                break;
            case Operation_multiply:
                n *= f;
                break;
            case Operation_abs:
                n = fabsf(n);
                break;
            case Operation_mod:
                n = fmodf(n, f);
                break;
        }
        f = n;
    }
    return n;
} // EmulateProgram

FireStarterProgram::FireStarterProgram(void)
{
    m_programMode = PROGRAM_MODE;
    m_dataSize = PROGRAM_INSTRUCTIONS;
    switch (m_programMode) {
        case Program_multiply_add:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            break;
        case Program_multiply_add_abs:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_abs);
//            m_opcodes.push_back(Operation_mod);
            break;
    }
    m_instructions.resize(PROGRAM_INSTRUCTIONS);
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        m_instructions[i] = 0;
} // FireStarterProgram

void FireStarterState::SaveState(std::string& code)
{
    code += "#include \"FireStarter.h\"\r\n";
    code += "\r\n";
    m_program.SaveProgram(code);
    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "\r\n";
    for (unsigned int t = 0; t < TARGET_VARIATIONS; t++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            code += Format("    state.m_result[%d].data.d[%u] = %ff;\r\n", t, i, m_result[t].data.d[i]);
        code += Format("    state.m_result[%d].result = %ff;\r\n", t, m_result[t].result);
        code += "\r\n";
    }
    code += Format("    state.m_processingTime = %f;\r\n", m_processingTime);
    code += Format("    state.m_maxResult = %ff;\r\n", m_maxResult);
    code += "} // LoadState\r\n";
} // SaveState

void FireStarterState::SaveSolution(std::string& code)
{
    for (unsigned int t = 0; t < TARGET_VARIATIONS; t++) {
        code += Format("// Solution%d precision = %f\r\n", t, m_result[t].result);
        code += Format("inline float Solution%d(float n)\r\n", t);
        code += "{\r\n";
        m_program.GenerateSolution(code, m_result[t].data);
        code += "    return n;\r\n";
        code += Format("} // Solution%d\r\n", t);
        code += "\r\n";
    }
} // SaveSolution

void FireStarterState::SortResults(void)
{
    // Sort the variations largest first. This increases the chance that the generation can fail early.
    for (int t = 0; t < TARGET_VARIATIONS; t++)
        m_order[t] = t;
    for (int t = 0; t < TARGET_VARIATIONS; t++) {
        int maxIndex = t;
        float max = m_result[m_order[t]].result;
        for (int i = t + 1; i < TARGET_VARIATIONS; i++) {
            float result = m_result[m_order[i]].result;
            if (result > max) {
                max = result;
                maxIndex = i;
            }
        }
        int swap = m_order[maxIndex];
        m_order[maxIndex] = m_order[t];
        m_order[t] = swap;
    }
} // SortResults

FireStarterState::FireStarterState(void)
{
    // Initialize the evolving program data values.
    for (unsigned int t = 0; t < TARGET_VARIATIONS; t++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            m_result[t].data.d[i] = 1.0f;
        m_result[t].result = START_RESULT;
        m_order[t] = t;
    }
    m_processingTime = 0.0;
    m_maxResult = START_RESULT;
} // FireStarterState

void FireStarterUnit::GenerateProgram(void)
{
    // Optimize the program data and registers.
    m_curState.m_program.OptimizeData();

    // Generate the replacement code.
    m_evaluateCode.clear();
    m_curState.m_program.GenerateProgram(m_evaluateCode);

    // Update and compile the program.
    std::string updatedCode = m_fireStarterCode;
    FireStarter::UpdateProgram(updatedCode, m_evaluateCode, EVALUATE_CODE);
    m_fireStarterFunction = FireStarter::CompileProgram(updatedCode, m_fireStarterModule, "FireStarter");

    // Increment the unit generation counter.
    m_unitGeneration++;
} // GenerateProgram

void FireStarterUnit::EvolveProgram(void)
{
    // Determine how many changes to make to the instructions.
    unsigned int numChanges = 1;// RANDOMSEED(m_seed) % PROGRAM_INSTRUCTIONS;

    // Make random changes to the program instructions.
    m_curState = m_bestState;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(m_seed) % PROGRAM_INSTRUCTIONS;
        m_curState.m_program.RandomInstruction(index, m_seed);
    }
    GenerateProgram();
} // EvolveProgram

void FireStarterUnit::RandomProgram(void)
{
    m_curState.m_program.InitProgram(m_seed);
    GenerateProgram();
} // RandomProgram

void FireStarterUnit::GetResults(FireStarterResult& result)
{
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults0, m_deviceResults0, m_resultsSize, cudaMemcpyDeviceToHost, m_fireStarterStream));
    checkCUDAErrors(cudaStreamSynchronize(m_fireStarterStream));
    unsigned int index = 0;
    float minResult = m_hostResults0->results[0].result;
    for (unsigned int i = 1; i < PROGRAM_POPULATION; i++) {
        float curResult = m_hostResults0->results[i].result;
        if (curResult < minResult) {
            minResult = curResult;
            index = i;
        }
    }
    result = m_hostResults0->results[index];
} // GetResults

void FireStarterUnit::InitResults(void)
{
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

#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    LoadProgram(m_curState.m_program);
    GenerateProgram();
#else
    m_curState.m_program.InitProgram(m_seed);
#endif
    m_bestState = m_curState;
} // InitResults

void FireStarterUnit::FreeResults(void)
{
    if (m_deviceResults) {
        checkCUDAErrors(cudaFree(m_deviceResults));
        m_deviceResults = nullptr;
    }
    if (m_hostResults) {
        checkCUDAErrors(cudaFreeHost(m_hostResults));
        m_hostResults = nullptr;
    }
    m_deviceResults0 = m_deviceResults1 = nullptr;
    m_hostResults0 = m_hostResults1 = nullptr;
} // FreeResults

void FireStarterUnit::RunGenerations(unsigned int population, unsigned int iterations, unsigned int generations, unsigned long long generation, unsigned int variation, FireStarterResult& result)
{
    // Launch the calculation kernel
    unsigned int threadsPerBlock = 256;
    unsigned int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    float lastResult = result.result;

    for (unsigned int g = 0; g < generations; g++) {
        FireStarterResults* newResults = g & 1 ? m_deviceResults1 : m_deviceResults0;
        FireStarterResults* oldResults = g & 1 ? m_deviceResults0 : m_deviceResults1;
        void* arr[] = { reinterpret_cast<void*>(&newResults),
                        reinterpret_cast<void*>(&oldResults),
                        reinterpret_cast<void*>(&m_curState.m_program.m_dataSize),
                        reinterpret_cast<void*>(&population),
                        reinterpret_cast<void*>(&iterations),
                        reinterpret_cast<void*>(&generation),
                        reinterpret_cast<void*>(&variation) };

        checkCUDAErrors(cuLaunchKernel(m_fireStarterFunction,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_fireStarterStream,                             // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        generation++;
    }
    GetResults(result);
} // RunGenerations

void FireStarterUnit::RunVariations(unsigned int iterations)
{
    // Run each varaition for the current generaiton from worst to best.
    float bestResult = m_bestState.m_maxResult;
    float maxResult = 0.0f;
    for (int t = 0; t < TARGET_VARIATIONS; t++) {
        unsigned int variation = m_curState.m_order[t];
        RunGenerations(PROGRAM_POPULATION, iterations, PROGRAM_GENERATIONS, m_programGeneration, variation, m_curState.m_result[variation]);
        float result = m_curState.m_result[variation].result;
        if (result >= bestResult) // If the results were worse than the previous generation, fail immediately.
            return;
        maxResult = max(maxResult, result);
    }
    m_curState.m_maxResult = maxResult;
    m_curState.SortResults();    // Sort the results worst first. This allows the generation to fail early.
    m_bestState = m_curState;
    m_bestEvaluateCode = m_evaluateCode;
} // RunVariations

void FireStarterUnit::ExecuteProgram(void)
{
    m_timer.Start();

    // Run the next generation on the GPU.
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    // Evolve the program instructions.
    EvolveProgram();
    RunVariations(EVOLVE_ITERATIONS);
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    RunVariations(OPTIMIZE_ITERATIONS);
    m_programGeneration += PROGRAM_GENERATIONS;
#endif

    m_curState.m_processingTime = m_timer.Duration();
} // ExecuteProgram

float FireStarterUnit::UpdateProgram(std::string* &bestEvaluateCode, FireStarterState* &bestState, unsigned long long* &generation)
{
    bestEvaluateCode = &m_bestEvaluateCode;
    bestState = &m_bestState;
    generation = &m_unitGeneration;
    return m_bestState.m_maxResult;
} // Update

void FireStarterUnit::InitUnit(void)
{
    checkCUDAErrors(cuCtxCreate(&m_fireStarterContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireStarterStream));
    InitResults();
} // InitUnit

void FireStarterUnit::FinishUnit(void)
{
    if (m_fireStarterModule) {
        checkCUDAErrors(cuModuleUnload(m_fireStarterModule));
        m_fireStarterModule = nullptr;
    }
    m_fireStarterFunction = nullptr;
    FreeResults();
    if (m_fireStarterContext) {
        checkCUDAErrors(cuCtxDestroy(m_fireStarterContext));
        m_fireStarterContext = nullptr;
    }
} // FinishUnit

FireStarterUnit::FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& fireStarterCode)
{
    m_unitIndex = unitIndex;
    m_seed = RANDOMHASH(RANDOMHASH(m_unitIndex) + 7263);
    m_device = device;
    m_fireStarterCode = fireStarterCode;
    m_fireStarterContext = nullptr;
    m_deviceResults = nullptr;
    m_deviceResults0 = nullptr;
    m_deviceResults1 = nullptr;
    m_hostResults = nullptr;
    m_hostResults0 = nullptr;
    m_hostResults1 = nullptr;
    m_fireStarterModule = nullptr;
    m_fireStarterFunction = nullptr;
    m_programGeneration = 0;
    m_unitGeneration = 0;
    m_quit = false;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
} // ~FireStarterUnit

CUfunction FireStarter::CompileProgram(const std::string& program, CUmodule& cuda_module, const char *functionName)
{
    if (cuda_module) {
        checkCUDAErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    checkNVRTCErrors(nvrtcCreateProgram(&prog, code, functionName, 0, nullptr, nullptr));

    std::vector<const char*> options;
    options.push_back("-default-device");
    nvrtcResult res = nvrtcCompileProgram(prog, (int)options.size(), options.data());
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
    ptx = reinterpret_cast<char*>(malloc(sizeof(char) * ptxSize));
    checkNVRTCErrors(nvrtcGetPTX(prog, ptx));
    checkNVRTCErrors(nvrtcDestroyProgram(&prog));

    checkCUDAErrors(cuModuleLoadDataEx(&cuda_module, ptx, 0, 0, 0));
    free(ptx);
    ptx = nullptr;
    CUfunction function = nullptr;
    checkCUDAErrors(cuModuleGetFunction(&function, cuda_module, functionName));
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

void FireStarter::BuildData(std::string& code, unsigned int variation, const FireStarterResult& result, unsigned int dataSize)
{
    std::string replacementData;
    code += Format("GPU_FUNCTION float InitData%d(FireStarterData &data)\r\n", variation);
    code += "{\r\n";
    for (unsigned int i = 0; i < dataSize; i++)
        code += Format("    data.d[%d] = %ff;\r\n", i, result.data.d[i]);
    code += Format("    return %f;\r\n", result.result);
    code += Format("} // InitData%d\r\n", variation);
    code += "\r\n";
} // BuildData

bool FireStarter::LoadTargetCode(void)
{
    if (!FireStarter::LoadCode("FireStarterTarget.h", m_targetCode))
        return false;
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireStarterCode(void)
{
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    if (!FireStarter::LoadCode("FireStarter.cu", m_fireStarterCode))
        return false;
#else
    if (!FireStarter::LoadCode("FireStarter_Best.cu", m_fireStarterCode))
        return false;
#endif
    return true;
} // LoadFireStarterCode

void FireStarter::SaveFireStarterCode(void)
{
    m_bestFireStarterCode = m_fireStarterCode;
    FireStarter::UpdateProgram(m_bestFireStarterCode, m_bestEvaluateCode, EVALUATE_CODE);
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    FireStarter::SaveCode("FireStarter_Best.cu", m_bestFireStarterCode);
#endif
} // SaveFireStarterCode

bool FireStarter::LoadFireShowCode(void)
{
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    if (!LoadCode("FireShow.cu", m_fireShowCode))
        return false;
#else
    if (!LoadCode("FireShow_Best.cu", m_fireShowCode))
        return false;
#endif
    return true;
} // LoadFireShowCode

void FireStarter::SaveFireShowCode(void)
{
    m_bestFireShowCode = m_fireShowCode;
    std::string dataCode;
    for (unsigned int t = 0; t < TARGET_VARIATIONS; t++)
        BuildData(dataCode, t, m_bestEvaluateState.m_result[t], m_bestEvaluateState.m_program.m_dataSize);
    UpdateProgram(m_bestFireShowCode, dataCode, DATA_CODE);
    UpdateProgram(m_bestFireShowCode, m_bestEvaluateCode, EVALUATE_CODE);
    FireStarter::SaveCode("FireShow_Best.cu", m_bestFireShowCode);
} // SaveFireShowCode

void FireStarter::SaveBestState(void)
{
    std::string bestStateCode;
    m_bestEvaluateState.SaveState(bestStateCode);
    FireStarter::SaveCode("FireStarter_LoadState.h", bestStateCode);
} // SaveBestState

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
    solutionCode += Format("// Run iterations = %d\r\n", SAMPLE_ITERATIONS);
    solutionCode += Format("// Run generations = %d\r\n", PROGRAM_GENERATIONS);
    solutionCode += "\r\n";
    solutionCode += Format("#define SOLUTION_MIN %f\r\n", SAMPLE_MIN);
    solutionCode += Format("#define SOLUTION_MAX %f\r\n", SAMPLE_MAX);
    solutionCode += "\r\n";
    solutionCode += m_targetCode;
    solutionCode += "\r\n";
    m_bestEvaluateState.SaveSolution(solutionCode);
    FireStarter::SaveCode("FireStarter_Solution.h", solutionCode);
} // SaveSolution

void FireStarter::DrawGraph(unsigned int variation)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void* arr[] = { reinterpret_cast<void*>(&m_bestEvaluateState.m_result[variation]),
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
} // DrawGraph

void FireStarter::RenderImage(void)
{
    unsigned char buffer[4096];
    BITMAPINFO* bm = (BITMAPINFO*)buffer;
    bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bm->bmiHeader.biHeight = -(int)m_buffer.m_height;
    bm->bmiHeader.biPlanes = 1;
    bm->bmiHeader.biCompression = BI_RGB;
    bm->bmiHeader.biSizeImage = 0;
    bm->bmiHeader.biXPelsPerMeter = 0;
    bm->bmiHeader.biYPelsPerMeter = 0;
    bm->bmiHeader.biClrUsed = 0;
    bm->bmiHeader.biClrImportant = 0;
    bm->bmiHeader.biWidth = m_buffer.m_width;
    bm->bmiHeader.biBitCount = 32;

    HDC hdc = GetDC((HWND)m_window);
    if (hdc) {
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
        SetDIBitsToDevice(hdc, 0, 0, m_buffer.m_width, m_buffer.m_height, 0, 0, 0, m_buffer.m_height, m_buffer.GetHost(), bm, DIB_RGB_COLORS);
#else
        SetDIBitsToDevice(hdc, 0, 0, m_buffer.m_width, m_buffer.m_height, 0, 0, 0, m_buffer.m_height, m_buffer.GetDevice(), bm, DIB_RGB_COLORS);
#endif
        GdiFlush();
    }
} // RenderImage

void FireStarter::RenderStatus(void)
{
    // Update the status.
    sprintf_s(m_statusString, "FireStarter: Generation=%lld  Age=%lld  Best=%f  Worst=%f  Time=%.4f Seconds  Run Time=%.4f Seconds", m_generation, m_generation - m_bestGeneration, m_bestResult, m_worstResult, m_controlTime, m_runTimer.Duration());
} // RenderStatus

void FireStarter::ControlThread(void)
{
    checkCUDAErrors(cuInit(0));
    checkCUDAErrors(cuDeviceGet(&m_device, 0));
    checkCUDAErrors(cuCtxCreate(&m_fireShowContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireShowStream));
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    unsigned int unit_count = PROGRAM_UNITS;
    if (!unit_count)
        unit_count = std::thread::hardware_concurrency(); // Returns logical core count not physical core count.
    if (!unit_count)   // May return zero on some systems.
        unit_count = 1;
#else
    unsigned int unit_count = 1;
#endif
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Create and initialize a unit for each processor thread.

    for (unsigned int i = 0; i < unit_count; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, m_device, m_fireStarterCode);
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
                unit->ExecuteProgram();
            });

        // Syncronously update the best data for all the units.
        m_worstResult = 0.0f;
        for (FireStarterUnit* unit : m_units) {
            unit->DispatchSync([this, unit] {
                std::string* unitBestEvaluateCode = nullptr;
                FireStarterState* unitBestEvaluateState = nullptr;
                unsigned long long* unitGeneration = nullptr;
                float result = unit->UpdateProgram(unitBestEvaluateCode, unitBestEvaluateState, unitGeneration);
                if (result < m_bestResult) {
                    m_bestResult = result;
                    m_bestEvaluateCode = *unitBestEvaluateCode;
                    m_bestEvaluateState = *unitBestEvaluateState;
                    m_bestGeneration = m_generation;
                    m_controlUpdate = true;
                } else if (result > m_worstResult)
                    m_worstResult = result;
            });
        }
        m_controlTime = m_controlTimer.Duration();
        m_generation++;

#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
        // Note: This code can run in the control thread because the unit threads are all idle at this point.
        for (FireStarterUnit* unit : m_units) {
            std::string* unitBestEvaluateCode = nullptr;
            FireStarterState* unitBestEvaluateState = nullptr;
            unsigned long long* unitGeneration = nullptr;
            float unitResult = unit->UpdateProgram(unitBestEvaluateCode, unitBestEvaluateState, unitGeneration);
            if (unitResult > m_bestResult) {
                FireStarterUnit* randomUnit;
                do {
                    randomUnit = m_units[RANDOMSEED(m_seed) % m_units.size()];
                } while (randomUnit == unit);
                std::string* randomEvaluateCode = nullptr;
                FireStarterState* randomEvaluateState = nullptr;
                unsigned long long* randomGeneration = nullptr;
                float randomResult = randomUnit->UpdateProgram(randomEvaluateCode, randomEvaluateState, randomGeneration);
                if (randomResult < unitResult) {
                    *unitBestEvaluateCode = *randomEvaluateCode;
                    *unitBestEvaluateState = *randomEvaluateState;
                    *unitGeneration = *randomGeneration;
                }
            }
        }
#endif

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate && !m_quitControlThread) {
            SaveFireStarterCode();
            SaveFireShowCode();
            m_fireShowFunction = CompileProgram(m_bestFireShowCode, m_fireShowModule, "FireShow");
            SaveBestState();
            SaveSolution();
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
            for (unsigned int t = 0; t < TARGET_VARIATIONS; t++)
                DrawGraph(t);
            m_controlUpdate = false;
            GetMainThread()->DispatchAsync([this] {
                RenderImage();
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
            case 1:
                solution = Solution1(theta);
                break;
            case 2:
                solution = Solution2(theta);
                break;
            case 3:
                solution = Solution3(theta);
                break;
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

bool FireStarter::Init(void* window, unsigned long width, unsigned long height)
{
    m_window = window;
    m_width = width;
    m_height = height;
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();
    std::string statusString = "FireStarter:";
    for (unsigned int t = 0; t < TARGET_VARIATIONS; t++) {
        float error = DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, t);
        statusString += Format(" Solution %d = %f", t, error);
    }
    RenderImage();
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
    m_worstResult = 0.0f;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter