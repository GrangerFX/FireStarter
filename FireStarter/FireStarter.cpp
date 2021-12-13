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

void FireStarterUnit::EraseFrameBuffer(FrameBuffer &buffer)
{
    memset(buffer.hostBase, 0, buffer.width * buffer.height * sizeof(uchar4));
    cudaMemset(buffer.deviceBase, 0, buffer.width * buffer.height * sizeof(uchar4));
} // EraseFrameBuffer

void FireStarterUnit::InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height)
{
	buffer.width = width;
	buffer.height = height;
	buffer.rowbytes = width * 4;
    buffer.hostBase = nullptr;
    buffer.deviceBase = nullptr;

    size_t bufferSize = buffer.width * buffer.height * sizeof(uchar4);
#if 0
    cudaError_t err = cudaMallocManaged(&buffer.hostBase, bufferSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate pixels (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    buffer.deviceBase = buffer.hostBase;
#else
    cudaError_t err = cudaMalloc(&buffer.deviceBase, bufferSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate device pixels (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    err = cudaMallocHost(&buffer.hostBase, bufferSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate host pixels (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
#endif
} // InitBuffer

void FireStarterUnit::FreeFrameBuffer(FrameBuffer &buffer)
{
    if (buffer.hostBase) {
        cudaError_t err = cudaFreeHost(buffer.hostBase);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free host frame buffer (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    if (buffer.deviceBase) {
        cudaError_t err = cudaFree(buffer.deviceBase);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free device frame buffer (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    buffer.width = 0;
    buffer.height = 0;
    buffer.rowbytes = 0;
    buffer.deviceBase = nullptr;
} // FreeFrameBuffer

void* FireStarterUnit::GetFrameBuffer(FrameBuffer& buffer)
{
#if 1
    cudaError_t err = cudaMemcpy(buffer.hostBase, buffer.deviceBase, buffer.width * buffer.height * sizeof(uchar4), cudaMemcpyDeviceToHost);
    if (err != cudaSuccess) {
        fprintf(stderr, "Could not copy buffer from device to host (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
#endif
    return buffer.hostBase;
} // GetFrameBuffer

void FireStarterUnit::RandomInstruction(unsigned int index, unsigned int &seed)
{
    unsigned int operation = m_curState.program.instructions[index];
    unsigned int opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
    unsigned int data = RANDOMSEED(seed) % PROGRAM_DATA;
    m_curState.program.instructions[index] = data * PROGRAM_OPCODES + opcode;
 } // RandomInstruction

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

void FireStarterUnit::CopyResultsHostToDevice(void)
{
    cudaError_t err = cudaMemcpy(m_deviceResults, m_hostResults, m_resultsSize, cudaMemcpyHostToDevice);
    if (err != cudaSuccess) {
        fprintf(stderr, "Could not copy results from host to device (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
} // CopyResultsHostToDevice

void FireStarterUnit::CopyResultsDeviceToHost(void)
{
    cudaError_t err = cudaMemcpy(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost);
    if (err != cudaSuccess) {
        fprintf(stderr, "Could not copy results from device to host (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
} // CopyResultsDeviceToHost

void FireStarterUnit::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (PROGRAM_POPULATION - 1);
    m_resultsSize = resultsSize * 2;
    if (!m_deviceResults) {
        cudaError_t err = cudaMalloc(&m_deviceResults, m_resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate device results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        err = cudaMemset(m_deviceResults, 0, m_resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to memset device results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    if (!m_hostResults) {
        cudaError_t err = cudaMallocHost(&m_hostResults, m_resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate device results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        memset(m_hostResults, 0, m_resultsSize);
    }
    m_deviceResults0 = (FireStarterResults*)(m_deviceResults);
    m_deviceResults1 = (FireStarterResults*)(m_deviceResults + resultsSize);
    m_hostResults0 = (FireStarterResults*)(m_hostResults);
    m_hostResults1 = (FireStarterResults*)(m_hostResults + resultsSize);

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
} // InitResults

void FireStarterUnit::FreeResults(void)
{
    if (m_deviceResults) {
        cudaError_t err = cudaFree(m_deviceResults);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free device results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        m_deviceResults = nullptr;
    }
    if (m_hostResults) {
        cudaError_t err = cudaFreeHost(m_hostResults);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free host results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        m_hostResults = nullptr;
    }
    m_deviceResults0 = m_deviceResults1 = nullptr;
    m_hostResults0 = m_hostResults1 = nullptr;
} // FreeResults

void FireStarterUnit::CompileProgram(const std::string& program, CUmodule& cuda_module)
{
    if (cuda_module) {
        checkCudaErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    const char* code = program.c_str();
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, code, "FireStarter", 0, nullptr, nullptr));
    nvrtcResult res = nvrtcCompileProgram(prog, 0, nullptr);
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

    checkCudaErrors(cuModuleLoadDataEx(&cuda_module, ptx, 0, 0, 0));
    free(ptx);
    ptx = nullptr;
} // CompileProgram

void FireStarterUnit::RunProgram(unsigned int population, unsigned int generations, unsigned long long generation0, unsigned int variation, FireStarterResult &result)
{
    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned long long dataGeneration = generation0;

    for (unsigned int g = 0; g < generations; g++) {
        void* arr[] = {reinterpret_cast<void*>(&m_deviceResults0),
                       reinterpret_cast<void*>(&m_deviceResults1),
                       reinterpret_cast<void*>(&population),
                       reinterpret_cast<void*>(&dataGeneration),
                       reinterpret_cast<void*>(&m_generation),
                       reinterpret_cast<void*>(&variation)};

        CUfunction kernel_addr;
        checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_fireStarterModule, "FireStarter"));

        checkCudaErrors(cuLaunchKernel(kernel_addr,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, 0,                                               // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        dataGeneration++;
    }
    checkCudaErrors(cuCtxSynchronize());
    CopyResultsDeviceToHost();
    GetResults(dataGeneration & 1 ? m_hostResults1 : m_hostResults0, result);
} // RunProgram

void FireStarterUnit::DrawGraph(unsigned int variation)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (m_buffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_fireShowModule, "FireShow"));

    void *arr[] = {reinterpret_cast<void*>(variation ? &m_bestState.result1 : &m_bestState.result0),
                   reinterpret_cast<void*>(&m_buffer.deviceBase),
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

bool FireStarterUnit::LoadCode(const std::string& filePath, std::string& code)
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

void FireStarterUnit::SaveCode(const std::string& filePath, const std::string& code)
{
    std::ofstream file(filePath.c_str(), std::ios::out | std::ios::binary);
    if (file.is_open()) {
        file << code;
        file.close();
    }
} // SaveCode

void FireStarterUnit::ReplaceCode(std::string& code, const std::string& search, const std::string& replace)
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

bool FireStarterUnit::LoadProgram(void)
{
#if EVOLVE
    if (!LoadCode("FireStarter.cu", m_fireStarterCode) || !LoadCode("FireShow.cu", m_fireShowCode))
        return false;
#else
    if (!LoadCode("FireStarter_Best.cu", m_fireStarterCode) || !LoadCode("FireShow_Best.cu", m_fireShowCode))
        return false;
    CompileProgram(m_fireShowCode);
#endif
    return true;
} // LoadProgram

void FireStarterUnit::SaveProgram(const std::string& evaluateCode)
{
#if EVOLVE
    std::string bestFireStarterCode = m_fireStarterCode;
    UpdateProgram(bestFireStarterCode, evaluateCode, EVALUATE_CODE);
    SaveCode("FireStarter_Best.cu", bestFireStarterCode);

    std::string bestFireShowCode = m_fireShowCode;
    UpdateData(bestFireShowCode, m_bestState.result0, DATA0_CODE);
    UpdateData(bestFireShowCode, m_bestState.result1, DATA1_CODE);
    UpdateProgram(bestFireShowCode, evaluateCode, EVALUATE_CODE);
    SaveCode("FireShow_Best.cu", bestFireShowCode);
    CompileProgram(bestFireShowCode, m_fireShowModule);
#endif
} // SaveProgram

void FireStarterUnit::UpdateProgram(std::string& code, const std::string& replacementCode, std::string startString)
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

void FireStarterUnit::UpdateData(std::string& code, const FireStarterResult& result, std::string startString)
{
    std::string replacementData;
    for (unsigned int i = 0; i < PROGRAM_DATA; i++)
        replacementData += Format("    data.d[%d] = %f;\r\n", i, result.data.d[i]);
    replacementData += Format("    return %f;\r\n", result.result);
    UpdateProgram(code, replacementData, startString);
} // UpdateData

void FireStarterUnit::DevolveProgram(void)
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

void FireStarterUnit::EvolveProgram(void)
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

    std::string updatedCode = m_fireStarterCode;
    UpdateProgram(updatedCode, m_evaluateCode, EVALUATE_CODE);
    CompileProgram(updatedCode, m_fireStarterModule);
} // EvolveProgram

void FireStarterUnit::EvaluateProgram(void)
{
    float maxResult = MAX(m_curState.result0.result, m_curState.result1.result);
    if (maxResult < m_curState.maxResult) {
        m_lastGeneration = m_generation;
        m_curState.maxResult = maxResult;
        m_curState.devolve = 0;
        m_states.push_back(m_curState);
        if (m_curState.maxResult < m_bestState.maxResult) {
            m_mutex.lock();
            m_bestGeneration = m_generation;
            m_bestState = m_curState;
            m_bestEvaluateCode = m_evaluateCode;
            m_update = true;
            m_mutex.unlock();
        }
    }
} // EvaluateProgram

void FireStarterUnit::ProcessThread(void)
{
    checkCudaErrors(cuCtxCreate(&m_fireStarterContext, CU_CTX_SCHED_BLOCKING_SYNC, m_device));
    InitResults();
    while (!m_quitThread) {
        m_timer.Start();

        // Evolve the program instructions.
#if EVOLVE
        DevolveProgram();
        EvolveProgram();
#endif

        // Run the next generation on the GPU.
#if EVOLVE
        unsigned int generation0 = 0;
#else
        unsigned long long generation0 = m_generation;
#endif
        RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, m_variation0, m_curState.result0);
        RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, m_variation1, m_curState.result1);
        m_processingTime = m_timer.Duration();
        EvaluateProgram();
        m_generation++;
    }
    if (m_fireStarterModule) {
        checkCudaErrors(cuModuleUnload(m_fireStarterModule));
        m_fireStarterModule = nullptr;
    }
    FreeResults();
    if (m_fireStarterContext) {
        checkCudaErrors(cuCtxDestroy(m_fireStarterContext));
        m_fireStarterContext = nullptr;
    }
} // ProcessThread

void FireStarterUnit::StopThread(void)
{
    m_quitThread = true;
    m_thread.join();
} // StopThread

void FireStarterUnit::RenderImage(void* hwnd)
{
    if (m_update) {
        m_mutex.lock();
        std::string evaluateCode = m_bestEvaluateCode;
        m_update = false;
        m_mutex.unlock();
        SaveProgram(evaluateCode);
        if (m_fireShowModule) {
            // Erase the frame buffer
            EraseFrameBuffer(m_buffer);
            DrawGraph(m_variation0);
            DrawGraph(m_variation1);

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
                SetDIBitsToDevice(hdc, 0, 0, m_buffer.width, m_buffer.height, 0, 0, 0, m_buffer.height, GetFrameBuffer(m_buffer), bm, DIB_RGB_COLORS);
                GdiFlush();
            }
        }
    }
} // RenderImage

bool FireStarterUnit::Init(unsigned long width, unsigned long height)
{
    checkCudaErrors(cuInit(0));
    checkCudaErrors(cuDeviceGet(&m_device, 0));
    checkCudaErrors(cuCtxCreate(&m_fireShowContext, CU_CTX_SCHED_BLOCKING_SYNC, m_device));
    InitFrameBuffer(m_buffer, width, height);
    EraseFrameBuffer(m_buffer);
    m_generation = m_lastGeneration = m_bestGeneration =0;
    m_bestState.program.generation = 0;
    if (!LoadProgram())
        return false;
    m_thread = std::thread([this] { ProcessThread(); });
    return true;
} // Init

FireStarterUnit::FireStarterUnit(void)
{
    // Timer ID
    m_device = 0;
    m_fireStarterContext = nullptr;
    m_fireShowContext = nullptr;
    m_deviceResults0 = nullptr;
    m_deviceResults1 = nullptr;
    m_hostResults0 = nullptr;
    m_hostResults1 = nullptr;
    m_fireStarterModule = nullptr;
    m_fireShowModule = nullptr;
    m_variation0 = 0;
#if EVOLVE
    m_variation1 = 1;
#else
    m_variation1 = 2;
#endif
    m_quitThread = false;
} // FireStarter

FireStarterUnit::~FireStarterUnit(void)
{
    StopThread();
    if (m_fireShowModule)
        checkCudaErrors(cuModuleUnload(m_fireShowModule));
    if (m_fireShowContext)
        checkCudaErrors(cuCtxDestroy(m_fireShowContext));
    FreeFrameBuffer(m_buffer);
} // ~FireStarterUnit

bool FireStarter::Init(unsigned long width, unsigned long height)
{
    return m_unit.Init(width, height);
} // Init

void FireStarter::RenderImage(void* hwnd)
{
    // Render the image if there was an update.
    m_unit.RenderImage(hwnd);
} // RenderImage

const char* FireStarter::RenderStatus(void)
{
    // Update the status.
    sprintf_s(m_statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error0=%f  Error1=%f  Time=%.4f Seconds", m_unit.m_generation, m_unit.m_states.size(), m_unit.m_generation - m_unit.m_bestState.program.generation, m_unit.m_bestState.result0.result, m_unit.m_bestState.result1.result, m_unit.m_processingTime);
    return m_statusString;
} // RenderStatus

FireStarter::FireStarter(void)
{
    m_statusString[0] = 0;
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter