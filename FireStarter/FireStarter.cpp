#include "FireStarter.h"
#include "FireStarterUtil.h"
#if FIRESTARTER_MODE == FIRESTARTER_DEBUG
#include "FireShow_Best.cu"
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
#include "FireStarter_LoadState.h"
#endif
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
#include "FireStarter_Solution.h"
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
    instruction.opdata.dataA = RANDOMSEED(seed) % PROGRAM_DATA;
    if ((m_programMode == Program_multiply_add) || (m_programMode != Program_multiply_add_store)) {
        instruction.opdata.dataB = RANDOMSEED(seed) % PROGRAM_DATA;
        instruction.opdata.dataC = RANDOMSEED(seed) % PROGRAM_DATA;
        instruction.opdata.dataD = RANDOMSEED(seed) % PROGRAM_DATA;
    }
} // RandomInstruction

void FireStarterProgram::EvolveInstruction(unsigned int index, unsigned int& seed)
{
    FireStarterInstruction& instruction = m_instructions[index];
    instruction.opdata.dataA = RANDOMSEED(seed) % PROGRAM_DATA;
    if ((m_programMode == Program_multiply_add) || (m_programMode == Program_multiply_add_store)) {
        instruction.opdata.dataB = RANDOMSEED(seed) % PROGRAM_DATA;
        instruction.opdata.dataC = RANDOMSEED(seed) % PROGRAM_DATA;
        instruction.opdata.dataD = RANDOMSEED(seed) % PROGRAM_DATA;
    }
} // EvolveInstruction

void FireStarterProgram::OptimizeData(void)
{
    if ((m_programMode != Program_multiply_add) && (m_programMode != Program_multiply_add_store)) {
        m_registers.clear();
        m_registers.reserve(PROGRAM_DATA);
        for (unsigned int i = 0; i < m_instructions.size(); i++) {
            unsigned char data = m_instructions[i].opdata.dataA;
            int index = -1;
            for (unsigned int j = 0; j < m_registers.size(); j++)
                if (m_registers[j].dataIndex == data) {
                    m_registers[j].instructionLast = i;
                    index = j;
                    break;
                }
            if (index == -1)  {
                index = (int)m_registers.size();
                m_registers.push_back(FireStarterRegister(index, i, i));
            }
            m_instructions[i].opdata.dataA = index;
        }
        m_dataSize = (unsigned int)m_registers.size();
    }
} // OptimizeData

void FireStarterProgram::InitProgram(unsigned int& seed)
{
    for (unsigned int i = 0; i < m_instructions.size(); i++)
        RandomInstruction(i, seed);
    OptimizeData();
} // InitProgram

void FireStarterProgram::GenerateProgram(std::string &code, bool optimize)
{
    // Generate the replacement code and update the program.
    for (unsigned int i = 0; i < (unsigned int)m_instructions.size(); i++) {
        FireStarterInstruction& instruction = m_instructions[i];
        switch (instruction.Operation()) {
            case Operation_multiply_add_store:
                code += Format("    n = data.d[%u] = data.d[%u] * data.d[%u] + data.d[%u];\r\n", instruction.DataA(), instruction.DataB(), instruction.DataC(), instruction.DataD());
                break;
            case Operation_multiply_add:
                code += Format("    n = data.d[%u] = data.d[%u] * data.d[%u] + data.d[%u];\r\n", instruction.DataA(), instruction.DataA(), instruction.DataB(), instruction.DataC());
                break;
            case Operation_add:
                if (optimize && (i == m_registers[instruction.DataA()].instructionLast))
                    code += Format("    n += data.d[%u];\r\n", instruction.DataA());
                else
                    code += Format("    n = data.d[%u] += n;\r\n", instruction.DataA());
                break;
            case Operation_multiply:
                if (optimize && (i == m_registers[instruction.DataA()].instructionLast))
                    code += Format("    n *= data.d[%u];\r\n", instruction.DataA());
                else
                    code += Format("    n = data.d[%u] *= n;\r\n", instruction.DataA());
                break;
            case Operation_load:
                code += Format("    n = data.d[%u];\r\n", instruction.DataA());
                break;
            case Operation_store:
                code += Format("    data.d[%u] = n;\r\n", instruction.DataA());
                break;
        }
    }
} // GenerateProgram

void FireStarterProgram::GenerateSolution(std::string& code, FireStarterData& data, bool optimize)
{
    // Generate the replacement code and update the program.
    for (unsigned int i = 0; i < (unsigned int)m_instructions.size(); i++) {
        FireStarterInstruction& instruction = m_instructions[i];
        switch (instruction.Operation()) {
            case Operation_multiply_add_store:
                code += Format("    n = d%u = d%u * d%u + d%u;\r\n", instruction.DataA(), instruction.DataB(), instruction.DataC(), instruction.DataD());
                break;
            case Operation_multiply_add:
                code += Format("    n = d%u = d%u * d%u + d%u;\r\n", instruction.DataA(), instruction.DataA(), instruction.DataB(), instruction.DataC());
                break;
            case Operation_add:
                if (optimize) {
                    unsigned int r = instruction.DataA();
                    if (i == m_registers[r].instructionFirst)
                        if (i == m_registers[r].instructionLast)
                            code += Format("    n += %ff;\r\n", data.d[r]);
                        else {
                            code += Format("    n += %ff;\r\n", data.d[r]);
                            code += Format("    float d%u = n;\r\n", r, data.d[r]);
                        }
                    else if (i == m_registers[r].instructionLast)
                        code += Format("    n += d%u;\r\n", r);
                    else {
                        code += Format("    n += d%u;\r\n", r);
                        code += Format("    d%u = n;\r\n", r);
                    }
                } else
                    code += Format("    n = d%u += n;\r\n", instruction.DataA());
                break;
            case Operation_multiply:
                if (optimize) {
                    unsigned int r = instruction.DataA();
                    if (i == m_registers[r].instructionFirst)
                        if (i == m_registers[r].instructionLast)
                            code += Format("    n *= %ff;\r\n", data.d[r]);
                        else {
                            code += Format("    n *= %ff;\r\n", data.d[r]);
                            code += Format("    float d%u = n;\r\n", r, data.d[r]);
                        }
                    else if (i == m_registers[r].instructionLast)
                        code += Format("    n *= d%u;\r\n", r);
                    else {
                        code += Format("    n *= d%u;\r\n", r);
                        code += Format("    d%u = n;\r\n", r);
                    }
                } else
                    code += Format("    n = d%u *= n;\r\n", instruction.DataA());
                break;
            case Operation_load:
                code += Format("    n = d%u;\r\n", instruction.DataA());
                break;
            case Operation_store:
                code += Format("    d%u = n;\r\n", instruction.DataA());
                break;
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

FireStarterProgram::FireStarterProgram(void)
{
    m_programMode = PROGRAM_MODE;
    m_dataSize = PROGRAM_DATA;
    switch (m_programMode) {
        case Program_accumulate:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            break;
        case Program_accumulate_load:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_load);
            break;
        case Program_accumulate_store:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_store);
            break;
        case Program_accumulate_load_store:
            m_opcodes.push_back(Operation_multiply);
            m_opcodes.push_back(Operation_add);
            m_opcodes.push_back(Operation_load);
            m_opcodes.push_back(Operation_store);
            break;
        case Program_multiply_add:
            m_opcodes.push_back(Operation_multiply_add);
            break;
        case Program_multiply_add_store:
            m_opcodes.push_back(Operation_multiply_add_store);
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
    for (unsigned int i = 0; i < PROGRAM_DATA; i++)
        code += Format("    state.m_result0.data.d[%u] = %ff;\r\n", i, m_result0.data.d[i]);
    code += Format("    state.m_result0.result = %ff;\r\n", m_result0.result);
    code += "\r\n";
    for (unsigned int i = 0; i < PROGRAM_DATA; i++)
        code += Format("    state.m_result1.data.d[%d] = %ff;\r\n", i, m_result1.data.d[i]);
    code += Format("    state.m_result1.result = %ff;\r\n", m_result1.result);
    code += "\r\n";
    code += Format("    state.m_processingTime = %f;\r\n", m_processingTime);
    code += Format("    state.m_maxResult = %ff;\r\n", m_maxResult);
    code += "} // LoadState\r\n";
} // SaveState

void FireStarterState::SaveSolution(std::string& code)
{
    code += Format("// Solution0 precision = %f\r\n", m_result0.result);
    code += "inline float Solution0(float n)\r\n";
    code += "{\r\n";
    m_program.GenerateSolution(code, m_result0.data, true);
    code += "    return n;\r\n";
    code += "} // Solution0\r\n";
    code += "\r\n";
    code += Format("// Solution1 precision = %f\r\n", m_result1.result);
    code += "inline float Solution1(float n)\r\n";
    code += "{\r\n";
    m_program.GenerateSolution(code, m_result1.data, true);
    code += "    return n;\r\n";
    code += "} // Solution1\r\n";
} // SaveSolution

FireStarterState::FireStarterState(void)
{
    // Initialize the evolving program data values.
    for (unsigned int i = 0; i < PROGRAM_DATA; i++) {
        m_result0.data.d[i] = 1.0f;
        m_result1.data.d[i] = 1.0f;
    }
    m_result0.result = START_RESULT;
    m_result1.result = START_RESULT;
    m_processingTime = 0.0;
    m_maxResult = START_RESULT;
} // FireStarterState

void FireStarterUnit::GetResults(FireStarterResults* results, FireStarterResult& bestResult)
{
    unsigned int index = 0;
    float result = results->results[0].result;
    for (unsigned int i = 1; i < PROGRAM_POPULATION; i++) {
        float curResult = results->results[i].result;
        if (curResult < result) {
            result = curResult;
            index = i;
        }
    }
    bestResult = results->results[index];
} // GetResults

void FireStarterUnit::CopyResultsDeviceToHost(void)
{
    checkCUDAErrors(cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, m_fireStarterStream));
    checkCUDAErrors(cudaStreamSynchronize(m_fireStarterStream));
} // CopyResultsDeviceToHost

void FireStarterUnit::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (PROGRAM_POPULATION - 1);
    m_resultsSize = resultsSize * 2;
    if (!m_deviceResults) {
        checkCUDAErrors(cudaMalloc(&m_deviceResults, m_resultsSize));
        checkCUDAErrors(cudaMemset(m_deviceResults, 0, m_resultsSize));
    }
    if (!m_hostResults) {
        checkCUDAErrors(cudaMallocHost(&m_hostResults, m_resultsSize));
        memset(m_hostResults, 0, m_resultsSize);
    }
    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + resultsSize);
    m_hostResults0 = (FireStarterResults*)(m_hostResults);
    m_hostResults1 = (FireStarterResults*)(m_hostResults + resultsSize);

#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    LoadProgram(m_curState.m_program);
    m_curState.m_program.OptimizeData();
    m_curState.m_program.GenerateProgram(m_evaluateCode, true);
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

void FireStarterUnit::RunProgram(unsigned int variation, FireStarterResult &result)
{
    // Launch the calculation kernel
    unsigned int programPopulation = PROGRAM_POPULATION;
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE) || (FIRESTARTER_MODE == FIRESTARTER_TEST)
    m_programGeneration = 0;
#endif
    int threadsPerBlock = 256;
    int blocksPerGrid = (programPopulation + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned int failCount = 0;
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
    unsigned int failMax = 2;
#elif FIRESTARTER_MODE == FIRESTARTER_DEBUG
    unsigned int failMax = 1;
#else
    unsigned int failMax = 0;
#endif
    do {
        float lastResult = result.result;
        for (unsigned int g = 0; g < PROGRAM_GENERATIONS; g++) {
            void* arr[] = {reinterpret_cast<void*>(&m_deviceResults0),
                           reinterpret_cast<void*>(&m_deviceResults1),
                           reinterpret_cast<void*>(&m_curState.m_program.m_dataSize),
                           reinterpret_cast<void*>(&programPopulation),
                           reinterpret_cast<void*>(&m_programGeneration),
                           reinterpret_cast<void*>(&variation)};

            CUfunction kernel_addr;
            checkCUDAErrors(cuModuleGetFunction(&kernel_addr, m_fireStarterModule, "FireStarter"));

            checkCUDAErrors(cuLaunchKernel(kernel_addr,
                cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
                cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
                0, m_fireStarterStream,                             // shared mem, stream */
                &arr[0],                                            // arguments */
                0));
            m_programGeneration++;
        }
        CopyResultsDeviceToHost();
        GetResults(m_hostResults0, result);
        if (result.result >= lastResult)
            failCount++;
    } while ((failCount < failMax) && !m_quit);
} // RunProgram

void FireStarterUnit::GenerateProgram(void)
{
    // Generate the replacement code.
    m_evaluateCode.clear();
    m_curState.m_program.GenerateProgram(m_evaluateCode, true);

    // Update and compile the program.
    std::string updatedCode = m_fireStarterCode;
    FireStarter::UpdateProgram(updatedCode, m_evaluateCode, EVALUATE_CODE);
    FireStarter::CompileProgram(updatedCode, m_fireStarterModule);

    // Increment the unit generation counter.
    m_unitGeneration++;
} // GenerateProgram

void FireStarterUnit::EvolveProgram(void)
{
    // Determine how many changes to make to the instructions.
    unsigned int numChanges = RANDOMSEED(m_seed) % PROGRAM_INSTRUCTIONS;
//    if (m_unitGeneration > SMART_EVOLVE_AGE)
//        numChanges++;

    // Make random changes to the program instructions.
    m_curState = m_bestState;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(m_seed) % PROGRAM_INSTRUCTIONS;
        m_curState.m_program.EvolveInstruction(index, m_seed);
    }
    m_curState.m_program.OptimizeData();
    GenerateProgram();
} // EvolveProgram

void FireStarterUnit::RandomProgram(void)
{
    m_curState.m_program.InitProgram(m_seed);
    GenerateProgram();
} // RandomProgram

void FireStarterUnit::EvaluateProgram(void)
{
    m_curState.m_maxResult = max(m_curState.m_result0.result, m_curState.m_result1.result);
    if (m_curState.m_maxResult < m_bestState.m_maxResult) {
        m_bestState = m_curState;
        m_bestEvaluateCode = m_evaluateCode;
        m_unitGeneration = 0;
    }
} // EvaluateProgram

void FireStarterUnit::ExecuteProgram(void)
{
    m_timer.Start();

    // Evolve the program instructions.
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE)
    EvolveProgram();
#endif
#if FIRESTARTER_MODE == FIRESTARTER_OPTIMIZE
    FireStarter::CompileProgram(m_fireStarterCode, m_fireStarterModule);
#endif
#if (FIRESTARTER_MODE == FIRESTARTER_TEST)
    RandomProgram();
#endif

    // Run the next generation on the GPU.
    RunProgram(VARIATION0, m_curState.m_result0);
    RunProgram(VARIATION1, m_curState.m_result1);
    m_curState.m_processingTime = m_timer.Duration();
    EvaluateProgram();
 } // ExecuteProgram

float FireStarterUnit::UpdateProgram(std::string* &bestEvaluateCode, FireStarterState* &bestState, unsigned long long* &generation)
{
    bestEvaluateCode = &m_bestEvaluateCode;
    bestState = &m_bestState;
    generation = &m_unitGeneration;
    return max(m_bestState.m_result0.result, m_bestState.m_result1.result);
} // Update

void FireStarterUnit::InitProgram(void)
{
    checkCUDAErrors(cuCtxCreate(&m_fireStarterContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireStarterStream));
    InitResults();
} // InitProgram

void FireStarterUnit::FinishProgram(void)
{
    if (m_fireStarterModule) {
        checkCUDAErrors(cuModuleUnload(m_fireStarterModule));
        m_fireStarterModule = nullptr;
    }
    FreeResults();
    if (m_fireStarterContext) {
        checkCUDAErrors(cuCtxDestroy(m_fireStarterContext));
        m_fireStarterContext = nullptr;
    }
} // FinishProgram

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
    m_programGeneration = 0;
    m_unitGeneration = 0;
    m_quit = false;
} // FireStarterUnit

FireStarterUnit::~FireStarterUnit(void)
{
} // ~FireStarterUnit

void FireStarter::CompileProgram(const std::string& program, CUmodule& cuda_module)
{
    if (cuda_module) {
        checkCUDAErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    checkNVRTCErrors(nvrtcCreateProgram(&prog, code, "FireStarter", 0, nullptr, nullptr));

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

void FireStarter::UpdateData(std::string& code, const FireStarterResult& result, std::string startString)
{
    std::string replacementData;
    for (unsigned int i = 0; i < PROGRAM_DATA; i++)
        replacementData += Format("    data.d[%d] = %ff;\r\n", i, result.data.d[i]);
    replacementData += Format("    return %f;\r\n", result.result);
    UpdateProgram(code, replacementData, startString);
} // UpdateData

bool FireStarter::LoadTargetCode(void)
{
    if (!FireStarter::LoadCode("FireStarter_Target.h", m_targetCode))
        return false;
    return true;
} // LoadTargetCode

bool FireStarter::LoadFireStarterCode(void)
{
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE) || (FIRESTARTER_MODE == FIRESTARTER_TEST)
    if (!FireStarter::LoadCode("FireStarter.cu", m_fireStarterCode))
        return false;
#else
    if (!FireStarter::LoadCode("FireStarter_Best.cu", m_fireStarterCode))
        return false;
#endif
    UpdateProgram(m_fireStarterCode, m_targetCode, TARGET_CODE);
    return true;
} // LoadFireStarterCode

void FireStarter::SaveFireStarterCode(void)
{
    m_bestFireStarterCode = m_fireStarterCode;
    FireStarter::UpdateProgram(m_bestFireStarterCode, m_bestEvaluateCode, EVALUATE_CODE);
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE) || (FIRESTARTER_MODE == FIRESTARTER_TEST)
    FireStarter::SaveCode("FireStarter_Best.cu", m_bestFireStarterCode);
#endif
} // SaveFireStarterCode

bool FireStarter::LoadFireShowCode(void)
{
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE) || (FIRESTARTER_MODE == FIRESTARTER_TEST)
    if (!LoadCode("FireShow.cu", m_fireShowCode))
        return false;
#else
    if (!LoadCode("FireShow_Best.cu", m_fireShowCode))
        return false;
#endif
    UpdateProgram(m_fireShowCode, m_targetCode, TARGET_CODE);
    return true;
} // LoadFireShowCode

void FireStarter::SaveFireShowCode(void)
{
    m_bestFireShowCode = m_fireShowCode;
    UpdateData(m_bestFireShowCode, m_bestEvaluateState.m_result0, DATA0_CODE);
    UpdateData(m_bestFireShowCode, m_bestEvaluateState.m_result1, DATA1_CODE);
    UpdateProgram(m_bestFireShowCode, m_bestEvaluateCode, EVALUATE_CODE);
#if (FIRESTARTER_MODE != FIRESTARTER_DEBUG)
    FireStarter::SaveCode("FireShow_Best.cu", m_bestFireShowCode);
#endif
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

    CUfunction kernel_addr;
    checkCUDAErrors(cuModuleGetFunction(&kernel_addr, m_fireShowModule, "FireShow"));

    void* arr[] = { reinterpret_cast<void*>(variation ? &m_bestEvaluateState.m_result1 : &m_bestEvaluateState.m_result0),
                    reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                    reinterpret_cast<void*>(&m_buffer.m_width),
                    reinterpret_cast<void*>(&m_buffer.m_height),
                    reinterpret_cast<void*>(&variation) };

    checkCUDAErrors(cuLaunchKernel(kernel_addr,
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
    sprintf_s(m_statusString, "FireStarter: Generation=%lld  Age=%lld  Best=%f  Worst=%f  Time=%.4f Seconds", m_generation, m_bestGeneration, m_bestResult, m_worstResult, m_controlTime);
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
        unit_count = std::thread::hardware_concurrency() / 2; // Returns logical core count not physical core count.
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
            unit->InitProgram();
        });

    // Loop until the the host program is quit.
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
            if (!m_quitControlThread) {
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
                    }
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
                    else {
                        FireStarterUnit* randomUnit = m_units[RANDOMSEED(m_seed) % m_units.size()];
                        std::string* randomEvaluateCode = nullptr;
                        FireStarterState* randomEvaluateState = nullptr;
                        unsigned long long* randomGeneration = nullptr;
                        randomUnit->UpdateProgram(randomEvaluateCode, randomEvaluateState, randomGeneration);
                        if (randomEvaluateState->m_maxResult < unitBestEvaluateState->m_maxResult) {
                            *unitBestEvaluateCode = *randomEvaluateCode;
                            *unitBestEvaluateState = *randomEvaluateState;
                            *unitGeneration = *randomGeneration;
                        }
                    }
#endif
                    if (result > m_worstResult)
                        m_worstResult = result;
                });
            } else
                break;
        }
        m_controlTime = m_controlTimer.Duration();
        m_generation++;

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate && !m_quitControlThread) {
            SaveFireStarterCode();
            SaveFireShowCode();
            CompileProgram(m_bestFireShowCode, m_fireShowModule);
#if (FIRESTARTER_MODE != FIRESTARTER_DEBUG)
            SaveBestState();
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
            DrawGraph(VARIATION0);
            DrawGraph(VARIATION1);
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
        unit->DispatchAsync([unit] { unit->FinishProgram(); });
    }
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();

    // Free the frame buffer memory.
    m_buffer.Resize(0, 0);

    // Unload the fire show code and destroy the CUDA context.
    if (m_fireShowModule)
        checkCUDAErrors(cuModuleUnload(m_fireShowModule));
    if (m_fireShowContext)
        checkCUDAErrors(cuCtxDestroy(m_fireShowContext));
} // ControlThread

void FireStarter::DrawSolution(uchar4* bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, unsigned int variation)
{
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
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        float solution = 0.0f;
        switch (variation) {
            case 0:
                solution = Solution0(theta);
                break;
            default:
                solution = Solution1(theta);
                break;
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
} // DrawSolution

bool FireStarter::Init(void* window, unsigned long width, unsigned long height)
{
    m_window = window;
    m_width = width;
    m_height = height;
#if FIRESTARTER_MODE == FIRESTARTER_SOLUTION
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();
    DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, VARIATION0);
    DrawSolution((uchar4*)m_buffer.m_hostBase, m_buffer.m_width, m_buffer.m_height, VARIATION1);
    RenderImage();
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
    m_statusString[0] = 0;
    m_generation = 0;
    m_bestGeneration = 0;
    m_bestResult = START_RESULT;
    m_worstResult = 0.0f;
    m_controlTime = 0.0;
    m_seed = RANDOMHASH(123);
    m_controlUpdate = false;
    m_bufferUpdate = false;
#if FIRESTARTER_MODE == FIRESTARTER_DEBUG
    FireStarterData data0, data1;
    InitData0(data0);
    InitData1(data1);
    float result0 = Evaluate(data0, 0.5f);
    float result1 = Evaluate(data1, 0.5f);
    float foo = 1.0f;
#endif
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter