#include "FireStarter.h"
#include "FireStarterUtil.h"
#include "HashRandom.h"
#include "PrintF.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>

// CUDA runtime
// CUDA utilities and system includes
#include <cuda_runtime.h>
#include <helper_functions.h>
#include <helper_cuda_drvapi.h>
#include <nvrtc.h>

#define NVRTC_SAFE_CALL(Name, x) \
do { \
    nvrtcResult result = x; \
    if (result != NVRTC_SUCCESS) { \
        std::cerr << "\nerror: " << Name << " failed with error " << nvrtcGetErrorString(result); \
        exit(1); \
    } \
} while (0)

void FireStarter::EraseFrameBuffer(FrameBuffer &buffer)
{
    memset(buffer.base, 0, buffer.width * buffer.height * sizeof(uchar4));
} // EraseFrameBuffer

void FireStarter::CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer)
{
    if ((srcBuffer.rowbytes == dstBuffer.rowbytes) && (srcBuffer.height = dstBuffer.height))
        memcpy(dstBuffer.base, srcBuffer.base, srcBuffer.rowbytes * srcBuffer.height);
} // CopyFrameBuffer

void FireStarter::InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height)
{
	buffer.width = width;
	buffer.height = height;
	buffer.rowbytes = width * 4;
    buffer.base = NULL;

    cudaError_t err = cudaMallocManaged(&buffer.base, buffer.width * buffer.height * sizeof(uchar4));
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate pixels (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
} // InitBuffer

void FireStarter::FreeFrameBuffer(FrameBuffer &buffer)
{
    if (buffer.base) {
        cudaError_t err = cudaFree(buffer.base);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free frame buffer (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    buffer.width = 0;
    buffer.height = 0;
    buffer.rowbytes = 0;
    buffer.base = NULL;
} // FreeFrameBuffer

void FireStarter::RandomInstruction(unsigned int index, unsigned int &seed)
{
    unsigned int operation = m_curState.program.instructions[index];
    unsigned int opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
    unsigned int data = RANDOMSEED(seed) % PROGRAM_DATA;
    m_curState.program.instructions[index] = data * PROGRAM_OPCODES + opcode;
 } // RandomInstruction

void FireStarter::GetResults(FireStarterResults* results, FireStarterResult& bestResult)
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

void FireStarter::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (PROGRAM_POPULATION - 1);
    if (!m_results0) {
        cudaError_t err = cudaMallocManaged(&m_results0, resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate old results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    if (!m_results1) {
        cudaError_t err = cudaMallocManaged(&m_results1, resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate new results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }

    // Initialize the evolving program instructions.
    unsigned int seed = RANDOMHASH((unsigned int)m_generation);
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        RandomInstruction(i, seed);

    // Initialize the evolving program data values.
    for (unsigned int i = 0; i < PROGRAM_DATA; i++) {
        m_curState.result0.data.d[i] = 1.0f;
        m_curState.result1.data.d[i] = 1.0f;
    }
    m_curState.result0.result = START_RESULT;
    m_curState.result1.result = START_RESULT;
    m_curState.maxResult = START_RESULT;
    m_curState.devolve = 0;
    m_bestState = m_curState;
    m_states.push_back(m_curState);

    for (unsigned int i = 0; i < PROGRAM_POPULATION; i++) {
        m_results0->results[i] = m_curState.result0;
        m_results1->results[i] = m_curState.result1;
    }
} // InitResults

void FireStarter::FreeResults(void)
{
    if (m_results0) {
        cudaError_t err = cudaFree(m_results0);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free old results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        m_results0 = NULL;
    }
    if (m_results1) {
        cudaError_t err = cudaFree(m_results1);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free new results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        m_results1 = NULL;
    }
} // FreeResults

void FireStarter::CompileProgram(const std::string& program)
{
    if (m_module) {
        checkCudaErrors(cuModuleUnload(m_module));
        m_module = NULL;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, code, "FireStarter", 0, NULL, NULL));
    nvrtcResult res = nvrtcCompileProgram(prog, 0, NULL);
    if (res != 0) {
        // Output the compile log.
        size_t logSize;
        NVRTC_SAFE_CALL("nvrtcGetProgramLogSize", nvrtcGetProgramLogSize(prog, &logSize));
        char *log = reinterpret_cast<char *>(malloc(sizeof(char) * logSize + 1));
        NVRTC_SAFE_CALL("nvrtcGetProgramLog", nvrtcGetProgramLog(prog, log));
        log[logSize] = '\x0';
        if (strlen(log) >= 2) {
            std::cerr << "\n compilation log ---\n";
            std::cerr << log;
            std::cerr << "\n end log ---\n";
        }
        free(log);
        NVRTC_SAFE_CALL("nvrtcCompileProgram", res);
    }

    // Fetch PTX
    char *ptx;
    size_t ptxSize;
    NVRTC_SAFE_CALL("nvrtcGetPTXSize", nvrtcGetPTXSize(prog, &ptxSize));
    ptx = reinterpret_cast<char *>(malloc(sizeof(char) * ptxSize));
    NVRTC_SAFE_CALL("nvrtcGetPTX", nvrtcGetPTX(prog, ptx));
    NVRTC_SAFE_CALL("nvrtcDestroyProgram", nvrtcDestroyProgram(&prog));

    checkCudaErrors(cuModuleLoadDataEx(&m_module, ptx, 0, 0, 0));
    free(ptx);
    ptx = NULL;
} // CompileProgram

void FireStarter::RunProgram(unsigned int population, unsigned int generations, unsigned long long generation0, unsigned int variation, FireStarterResult &result)
{
    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long dataGeneration = generation0;

    for (unsigned int g = 0; g < generations; g++) {
        void* arr[] = {reinterpret_cast<void*>(&m_results0),
                       reinterpret_cast<void*>(&m_results1),
                       reinterpret_cast<void*>(&population),
                       reinterpret_cast<void*>(&dataGeneration),
                       reinterpret_cast<void*>(&m_generation),
                       reinterpret_cast<void*>(&variation)};

        CUfunction kernel_addr;
        checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_module, "FireStarter"));

        checkCudaErrors(cuLaunchKernel(kernel_addr,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, 0,                                               // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        dataGeneration++;
    }
    checkCudaErrors(cuCtxSynchronize());
    GetResults(dataGeneration & 1 ? m_results1 : m_results0, result);
} // RunProgram

void FireStarter::DrawGraph(unsigned int variation)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (m_buffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_module, "FireShow"));

    void *arr[] = {reinterpret_cast<void*>(variation ? &m_bestState.result1 : &m_bestState.result0),
                   reinterpret_cast<void*>(&m_buffer.base),
                   reinterpret_cast<void*>(&m_buffer.width),
                   reinterpret_cast<void*>(&m_buffer.height),
                   reinterpret_cast<void*>(&variation)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // DrawGraph

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

bool FireStarter::LoadProgram(void)
{
#if EVOLVE
    if (!LoadCode("FireStarter.cu", m_fireStarterCode) || !LoadCode("FireShow.cu", m_fireShowCode))
        return false;
#else
    if (!LoadCode("FireStarter_Best.cu", m_fireStarterCode) || !LoadCode("FireShow_Best.cu", m_fireShowCode))
        return false;
    CompileProgram(m_fireShowCode);
#endif
    m_updatedCode = m_fireStarterCode;
    m_bestShowCode = m_fireShowCode;
    return true;
} // LoadProgram

void FireStarter::SaveProgram(void)
{
    m_bestShowCode = m_fireShowCode;
    UpdateProgram(m_bestShowCode, m_evaluateCode, EVALUATE_CODE);
    UpdateData(m_bestShowCode, m_bestState.result0, DATA0_CODE);
    UpdateData(m_bestShowCode, m_bestState.result1, DATA1_CODE);
#if EVOLVE
    SaveCode("FireShow_Best.cu", m_bestShowCode);
    SaveCode("FireStarter_Best.cu", m_updatedCode);
#endif
    CompileProgram(m_bestShowCode);
} // SaveProgram

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
        replacementData += Format("    data.d[%d] = %f;\r\n", i, result.data.d[i]);
    replacementData += Format("    return %f;\r\n", result.result);
    UpdateProgram(code, replacementData, startString);
} // UpdateData

bool FireStarter::EvaluateProgram(void)
{
    float maxResult = MAX(m_curState.result0.result, m_curState.result1.result);
    if (maxResult < m_curState.maxResult) {
        m_lastGeneration = m_generation;
        m_curState.maxResult = maxResult;
        m_curState.devolve = 0;
        m_states.push_back(m_curState);
        if (m_curState.maxResult < m_bestState.maxResult) {
            m_bestGeneration = m_generation;
            m_bestState = m_curState;
            m_bestShowCode = m_fireShowCode;
#if EVOLVE
            UpdateData(m_bestShowCode, m_bestState.result0, DATA0_CODE);
            UpdateData(m_bestShowCode, m_bestState.result1, DATA1_CODE);
            UpdateProgram(m_bestShowCode, m_evaluateCode, EVALUATE_CODE);
            CompileProgram(m_bestShowCode);
            SaveCode("FireStarter_Best.cu", m_updatedCode);
            SaveCode("FireShow_Best.cu", m_bestShowCode);
#endif
            return true;
        }
    }
    return false;
} // EvaluateProgram

void FireStarter::DevolveProgram(void)
{
    unsigned long long lastAge = m_generation - m_lastGeneration;
    unsigned int state = (unsigned int)m_states.size() - 1;
    if (lastAge > SMART_DEVOLVE_AGE) {
        // Devolve to an earlier state if too many generations have elapsed without improvement.
        // This prevents dead-end evolution.
        unsigned int devolve = 1;
        while (state && (++m_states[state].devolve >= devolve)) {
            m_states.pop_back();
            state--;
            devolve++;
        }
        m_lastGeneration = m_generation;
    }
    m_curState = m_states[state];
} // DevolveProgram

void FireStarter::EvolveProgram(void)
{
    // Determine how many changes to make to the instructions.
    unsigned long long lastAge = m_generation - m_lastGeneration;
    unsigned int numChanges = 1;
    if (lastAge > SMART_EVOLVE_AGE)
        numChanges++;

    // Make random changes to the program instructions.
    unsigned int seed = RANDOMHASH((unsigned int)(m_generation * 2));
    m_curState.program.generation = m_generation;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
        RandomInstruction(index, seed);
    }
    
    // Generate the replacement code and update the program.
    m_evaluateCode.clear();
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        unsigned int operation = m_curState.program.instructions[i];
        unsigned int opcode = operation % PROGRAM_OPCODES;
        unsigned int data = operation / PROGRAM_OPCODES;

        switch (opcode) {
        case Operation_add:
            m_evaluateCode += Format("    n = data.d[%d] += n;\r\n", data);
            break;
        case Operation_multiply:
            m_evaluateCode += Format("    n = data.d[%d] *= n;\r\n", data);
            break;
#if PROGRAM_LOAD_STORE
        case Operation_load:
            m_evaluateCode += Format("    n = data.d[%d];\r\n", data);
            break;
        case Operation_store:
            m_evaluateCode += Format("    data.d[%d] = n;\r\n", data);
            break;
#endif
        }
    }

    m_updatedCode = m_fireStarterCode;
    UpdateProgram(m_updatedCode, m_evaluateCode, EVALUATE_CODE);
    CompileProgram(m_updatedCode);
} // EvolveProgram

void FireStarter::RenderImage(void* hwnd)
{
    double time = 0.0;
    m_timer.Start();

    // Evolve the program instructions.
    long long startGeneration = m_generation;
#if EVOLVE
    DevolveProgram();
    EvolveProgram();
#endif
        
    // Run the next generation on the GPU.
    unsigned int varaition0 = 0;
#if EVOLVE
    unsigned int varaition1 = 1;
    unsigned int generation0 = 0;
#else
    unsigned int varaition1 = 2;
    unsigned long long generation0 = m_generation;
#endif
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, varaition0, m_curState.result0);
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, varaition1, m_curState.result1);
    time = m_timer.Duration();

    // Find the best results for display only.
    if (EvaluateProgram()) {
        // Erase the frame buffer
        EraseFrameBuffer(m_buffer);
        DrawGraph(varaition0);
        DrawGraph(varaition1);

        unsigned char buffer[4096];
        BITMAPINFO* bm = (BITMAPINFO*)buffer;
        bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bm->bmiHeader.biHeight = -(int)m_buffer.height;
        bm->bmiHeader.biPlanes = 1;
        bm->bmiHeader.biCompression = BI_RGB;
        bm->bmiHeader.biSizeImage = 0;
        bm->bmiHeader.biXPelsPerMeter = 0;
        bm->bmiHeader.biYPelsPerMeter = 0;
        bm->bmiHeader.biClrUsed = 0;
        bm->bmiHeader.biClrImportant = 0;
        bm->bmiHeader.biWidth = m_buffer.width;
        bm->bmiHeader.biBitCount = 32;

        HDC hdc = GetDC((HWND)hwnd);
        if (hdc) {
            SetDIBitsToDevice(hdc, 0, 0, m_buffer.width, m_buffer.height, 0, 0, 0, m_buffer.height, (CONST VOID*)m_buffer.base, bm, DIB_RGB_COLORS);
            GdiFlush();
        }
    }
    m_generation++;

    // Update the status.
    double averageTime = time / (double)(m_generation - startGeneration);
    sprintf_s(m_statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error0=%f  Error1=%f  Time=%.4f Seconds", m_generation, m_states.size(), m_generation - m_bestState.program.generation, m_bestState.result0.result, m_bestState.result1.result, averageTime);
} // RenderImage

bool FireStarter::Init(unsigned long width, unsigned long height)
{
    strcpy_s(m_statusString, "Initializing...");

    InitFrameBuffer(m_buffer, width, height);
    InitResults();
    m_generation = m_lastGeneration = m_bestGeneration =0;
    m_bestState.program.generation = 0;
    return LoadProgram();
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    m_statusString[0] = 0;
    m_results0 = NULL;
    m_results1 = NULL;
    m_module = NULL;
} // FireStarter

FireStarter::~FireStarter(void)
{
    if (m_module)
        checkCudaErrors(cuModuleUnload(m_module));
    FreeFrameBuffer(m_buffer);
    FreeResults();
} // ~FireStarter