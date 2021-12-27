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

void FrameBuffer::Erase(void)
{
    if (m_size)
        cudaMemset(m_deviceBase, 0, m_width * m_height * sizeof(uchar4));
} // EraseFrameBuffer

const unsigned char* FrameBuffer::Get(void)
{
    if (m_size) {
        cudaError_t err = cudaMemcpy(m_hostBase, m_deviceBase, m_size, cudaMemcpyDeviceToHost);
        if (err != cudaSuccess) {
            fprintf(stderr, "Could not copy buffer from device to host (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    return m_hostBase;
} // GetFrameBuffer

void FrameBuffer::Resize(unsigned long width, unsigned long height)
{
    if ((m_width != width) || (m_height != height)) {
        if (m_hostBase) {
            cudaError_t err = cudaFreeHost(m_hostBase);
            if (err != cudaSuccess) {
                fprintf(stderr, "Failed to free host frame buffer (error code %s)!\n", cudaGetErrorString(err));
                exit(EXIT_FAILURE);
            }
            m_hostBase = nullptr;
        }
        if (m_deviceBase) {
            cudaError_t err = cudaFree(m_deviceBase);
            if (err != cudaSuccess) {
                fprintf(stderr, "Failed to free device frame buffer (error code %s)!\n", cudaGetErrorString(err));
                exit(EXIT_FAILURE);
            }
            m_deviceBase = nullptr;
        }
        m_width = width;
        m_height = height;
        m_rowbytes = width * sizeof(uchar4);
        m_size = m_width * m_height * sizeof(uchar4);

        if (m_size) {
            cudaError_t err = cudaMalloc(&m_deviceBase, m_size);
            if (err != cudaSuccess) {
                fprintf(stderr, "Failed to allocate device pixels (error code %s)!\n", cudaGetErrorString(err));
                exit(EXIT_FAILURE);
            }
            err = cudaMallocHost(&m_hostBase, m_size);
            if (err != cudaSuccess) {
                fprintf(stderr, "Failed to allocate host pixels (error code %s)!\n", cudaGetErrorString(err));
                exit(EXIT_FAILURE);
            }
            memset(m_hostBase, 0, m_width * m_height * sizeof(uchar4));
        }
    }
} // Resize

FrameBuffer::FrameBuffer(void)
{
    m_hostBase = nullptr;
    m_deviceBase = nullptr;
    m_width = 0;
    m_height = 0;
    m_rowbytes = 0;
    m_size = 0;
} // FrameBuffer

FrameBuffer::~FrameBuffer(void)
{
    Resize(0, 0);
} // ~FrameBuffer

void FireStarterProgram::RandomInstruction(unsigned int index, unsigned int& seed)
{
    unsigned int operation = m_instructions[index];
    unsigned int opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
    unsigned int data = RANDOMSEED(seed) % PROGRAM_DATA;
    m_instructions[index] = data * PROGRAM_OPCODES + opcode;
} // RandomInstruction

void FireStarterProgram::RandomProgram(unsigned int seed)
{
    seed = RANDOMHASH(RANDOMHASH(seed) + (unsigned int)m_generation);
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        RandomInstruction(i, seed);
} // RandomProgram

FireStarterProgram::FireStarterProgram(void)
{
    m_generation = 0;
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        m_instructions[i] = 0;
} // FireStarterProgram

void FireStarterState::Init(void)
{
    m_program.RandomProgram(RANDOMHASH(m_unitIndex));
} // Init

FireStarterState::FireStarterState(int unitIndex)
{
    m_unitIndex = unitIndex;

    // Initialize the evolving program data values.
    for (unsigned int i = 0; i < PROGRAM_DATA; i++) {
        m_result0.data.d[i] = 1.0f;
        m_result1.data.d[i] = 1.0f;
    }
    m_result0.result = START_RESULT;
    m_result1.result = START_RESULT;
    m_processingTime = 0.0;
    m_maxResult = START_RESULT;
    m_devolve = 0;
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
    cudaError_t err = cudaMemcpyAsync(m_hostResults, m_deviceResults, m_resultsSize, cudaMemcpyDeviceToHost, m_fireStarterStream);
    if (err != cudaSuccess) {
        fprintf(stderr, "Could not copy results from device to host (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    checkCUDAErrors(cudaStreamSynchronize(m_fireStarterStream));
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

    m_curState.Init();
    m_states.push_back(m_curState);
    m_bestEvaluateState = m_curState;
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

void FireStarterUnit::RunProgram(unsigned int variation, FireStarterResult &result)
{

    // Launch the calculation kernel
    unsigned int programPopulation = PROGRAM_POPULATION;
#if EVOLVE
    unsigned int programGeneration = 0;
#else
    unsigned int programGeneration = (unsigned int)(m_generation * PROGRAM_GENERATIONS);
#endif
    int threadsPerBlock = 256;
    int blocksPerGrid = (programPopulation + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
 
    for (unsigned int g = 0; g < PROGRAM_GENERATIONS; g++) {
        void* arr[] = {reinterpret_cast<void*>(&m_deviceResults0),
                       reinterpret_cast<void*>(&m_deviceResults1),
                       reinterpret_cast<void*>(&programPopulation),
                       reinterpret_cast<void*>(&programGeneration),
                       reinterpret_cast<void*>(&variation)};

        CUfunction kernel_addr;
        checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_fireStarterModule, "FireStarter"));

        checkCudaErrors(cuLaunchKernel(kernel_addr,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, m_fireStarterStream,                             // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        programGeneration++;
    }
    CopyResultsDeviceToHost();
    GetResults(m_hostResults0, result);
} // RunProgram

void FireStarterUnit::DevolveProgram(void)
{
    unsigned long long lastAge = m_generation - m_lastGeneration;
    unsigned int state = (unsigned int)m_states.size() - 1;
    if (lastAge > SMART_DEVOLVE_AGE) {
        // Devolve to an earlier state if too many generations have elapsed without improvement.
        // This prevents dead-end evolution.
        unsigned int devolve = 1;
        while (state && (++m_states[state].m_devolve >= devolve)) {
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
    m_curState.m_program.m_generation = m_generation;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
        m_curState.m_program.RandomInstruction(index, seed);
    }
    
    // Generate the replacement code and update the program.
    m_evaluateCode.clear();
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        unsigned int operation = m_curState.m_program.m_instructions[i];
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
    FireStarter::UpdateProgram(updatedCode, m_evaluateCode, EVALUATE_CODE);
    FireStarter::CompileProgram(updatedCode, m_fireStarterModule);
} // EvolveProgram

void FireStarterUnit::EvaluateProgram(void)
{
    float maxResult = MAX(m_curState.m_result0.result, m_curState.m_result1.result);
    if (maxResult < m_curState.m_maxResult) {
        m_lastGeneration = m_generation;
        m_curState.m_maxResult = maxResult;
        m_curState.m_devolve = 0;
        m_states.push_back(m_curState);
        if (m_curState.m_maxResult < m_bestEvaluateState.m_maxResult) {
            m_mutex.lock();
            m_bestGeneration = m_generation;
            m_bestEvaluateState = m_curState;
            m_bestEvaluateCode = m_evaluateCode;
            m_update = true;
            m_mutex.unlock();
        }
    }
} // EvaluateProgram

void FireStarterUnit::ExecuteProgram(void)
{
    m_timer.Start();

    // Evolve the program instructions.
#if EVOLVE
    DevolveProgram();
    EvolveProgram();
#endif

    // Run the next generation on the GPU.
    RunProgram(VARIATION0, m_curState.m_result0);
    RunProgram(VARIATION1, m_curState.m_result1);
    m_curState.m_processingTime = m_timer.Duration();
    EvaluateProgram();
    m_generation++;
 } // ExecuteProgram

bool FireStarterUnit::UpdateProgram(std::string &bestEvaluateCode, FireStarterState &bestEvaluateState)
{
    if (m_update) {
        m_mutex.lock();
        bestEvaluateCode = m_bestEvaluateCode;
        bestEvaluateState = m_bestEvaluateState;
        m_update = false;
        m_mutex.unlock();
        return true;
    }
    return false;
} // Update

void FireStarterUnit::InitProgram(void)
{
    checkCudaErrors(cuCtxCreate(&m_fireStarterContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireStarterStream));
    InitResults();
} // InitProgram

void FireStarterUnit::FinishProgram(void)
{
    if (m_fireStarterModule) {
        checkCudaErrors(cuModuleUnload(m_fireStarterModule));
        m_fireStarterModule = nullptr;
    }
    FreeResults();
    if (m_fireStarterContext) {
        checkCudaErrors(cuCtxDestroy(m_fireStarterContext));
        m_fireStarterContext = nullptr;
    }
} // FinishProgram

FireStarterUnit::FireStarterUnit(unsigned int unitIndex, CUdevice device, const std::string& fireStarterCode) : SerialThread(), m_curState(unitIndex), m_bestEvaluateState(unitIndex)
{
    m_unitIndex = unitIndex;
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
    m_generation = 0;
    m_lastGeneration = 0;
    m_bestGeneration = 0;
} // FireStarter

FireStarterUnit::~FireStarterUnit(void)
{
} // ~FireStarterUnit

void FireStarter::CompileProgram(const std::string& program, CUmodule& cuda_module)
{
    if (cuda_module) {
        checkCudaErrors(cuModuleUnload(cuda_module));
        cuda_module = nullptr;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    long long compile = 0;
    printf("Start Compile: %lld\n", ++compile);

    nvrtcProgram prog;
    const char* code = program.c_str();
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, code, "FireStarter", 0, nullptr, nullptr));
    nvrtcResult res = nvrtcCompileProgram(prog, 0, nullptr);
    if (res != 0) {
        // Output the compile log.
        size_t logSize;
        NVRTC_SAFE_CALL("nvrtcGetProgramLogSize", nvrtcGetProgramLogSize(prog, &logSize));
        char* log = reinterpret_cast<char*>(malloc(sizeof(char) * logSize + 1));
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
    char* ptx;
    size_t ptxSize;
    NVRTC_SAFE_CALL("nvrtcGetPTXSize", nvrtcGetPTXSize(prog, &ptxSize));
    ptx = reinterpret_cast<char*>(malloc(sizeof(char) * ptxSize));
    NVRTC_SAFE_CALL("nvrtcGetPTX", nvrtcGetPTX(prog, ptx));
    NVRTC_SAFE_CALL("nvrtcDestroyProgram", nvrtcDestroyProgram(&prog));

    checkCudaErrors(cuModuleLoadDataEx(&cuda_module, ptx, 0, 0, 0));
    free(ptx);
    ptx = nullptr;

    printf("Finish Compile: %lld\n", compile);
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
        replacementData += Format("    data.d[%d] = %f;\r\n", i, result.data.d[i]);
    replacementData += Format("    return %f;\r\n", result.result);
    UpdateProgram(code, replacementData, startString);
} // UpdateData

bool FireStarter::LoadFireStarterCode(void)
{
#if EVOLVE
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
#if EVOLVE
    m_bestFireStarterCode = m_fireStarterCode;
    FireStarter::UpdateProgram(m_bestFireStarterCode, m_bestEvaluateCode, EVALUATE_CODE);
    FireStarter::SaveCode("FireStarter_Best.cu", m_bestFireStarterCode);
#endif
} // SaveFireStarterCode

bool FireStarter::LoadFireShowCode(void)
{
#if EVOLVE
    if (!LoadCode("FireShow.cu", m_fireShowCode))
        return false;
#else
    if (!LoadCode("FireShow_Best.cu", m_fireShowCode))
        return false;
    CompileProgram(m_fireShowCode);
#endif
    return true;
} // LoadFireShowCode

void FireStarter::SaveFireShowCode(void)
{
#if EVOLVE
    m_bestFireShowCode = m_fireShowCode;
    UpdateData(m_bestFireShowCode, m_bestEvaluateState.m_result0, DATA0_CODE);
    UpdateData(m_bestFireShowCode, m_bestEvaluateState.m_result1, DATA1_CODE);
    UpdateProgram(m_bestFireShowCode, m_bestEvaluateCode, EVALUATE_CODE);
    FireStarter::SaveCode("FireShow_Best.cu", m_bestFireShowCode);
#endif
} // SaveFireShowCode

void FireStarter::DrawGraph(unsigned int variation)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (m_buffer.m_width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, m_fireShowModule, "FireShow"));

    void* arr[] = { reinterpret_cast<void*>(variation ? &m_bestEvaluateState.m_result1 : &m_bestEvaluateState.m_result0),
                    reinterpret_cast<void*>(&m_buffer.m_deviceBase),
                    reinterpret_cast<void*>(&m_buffer.m_width),
                    reinterpret_cast<void*>(&m_buffer.m_height),
                    reinterpret_cast<void*>(&variation) };

    checkCudaErrors(cuLaunchKernel(kernel_addr,
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
        SetDIBitsToDevice(hdc, 0, 0, m_buffer.m_width, m_buffer.m_height, 0, 0, 0, m_buffer.m_height, m_buffer.Get(), bm, DIB_RGB_COLORS);
        GdiFlush();
    }
} // RenderImage

void FireStarter::RenderStatus(void)
{
    // Update the status.
    sprintf_s(m_statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error0=%f  Error1=%f  Time=%.4f Seconds", m_bestGeneration, m_bestStates, m_bestGeneration - m_bestEvaluateState.m_program.m_generation, m_bestEvaluateState.m_result0.result, m_bestEvaluateState.m_result1.result, m_controlTime);
} // RenderStatus

void FireStarter::ControlThread(void)
{
    checkCudaErrors(cuInit(0));
    checkCudaErrors(cuDeviceGet(&m_device, 0));
    checkCudaErrors(cuCtxCreate(&m_fireShowContext, CU_CTX_SCHED_AUTO, m_device));
    checkCUDAErrors(cudaStreamCreate(&m_fireShowStream));
    unsigned int processor_count = std::thread::hardware_concurrency() / 2; // Returns logical core count not physical core count.
    if (!processor_count)   // May return zero on some systems.
        processor_count = 1;
    m_buffer.Resize(m_width, m_height);
    m_buffer.Erase();

    // Create and initialize a unit for each processor thread.
    for (unsigned int i = 0; i < processor_count; i++) {
        FireStarterUnit* unit = new FireStarterUnit(i, m_device, m_fireStarterCode);
        m_units.push_back(unit);
    }
    for (FireStarterUnit* unit : m_units)
        unit->DispatchAsync([this, unit] { unit->InitProgram(); });

    // Loop until the the host program is quit.
    while (!m_quitControlThread) {
        // Asyncronously execute a generation for all the units.
        m_controlTimer.Start();
        for (FireStarterUnit* unit : m_units)
            unit->DispatchAsync([unit] { unit->ExecuteProgram(); });

        // Syncronously update the best data for all the units.
        for (FireStarterUnit* unit : m_units) {
            unit->DispatchSync([this, unit] {
                std::string unitBestEvaluateCode;
                FireStarterState unitBestEvaluateState;
                if (unit->UpdateProgram(unitBestEvaluateCode, unitBestEvaluateState)) {
                    float result = MAX(unitBestEvaluateState.m_result0.result, unitBestEvaluateState.m_result1.result);
                    if (result < m_bestResult) {
                        m_bestResult = result;
                        m_bestStates = unit->m_states.size();
                        m_bestGeneration = unit->m_generation;
                        m_bestEvaluateCode = unitBestEvaluateCode;
                        m_bestEvaluateState = unitBestEvaluateState;
                        m_controlUpdate = true;
                    }
                }
            });
        }
        m_controlTime = m_controlTimer.Duration();

        // Update the best code on disk and compile a new FireShow.
        if (m_controlUpdate) {
            SaveFireStarterCode();
            SaveFireShowCode();
            CompileProgram(m_bestFireShowCode, m_fireShowModule);
        }

        // Update the render status after every pass.
        RenderStatus();
        GetMainThread()->DispatchAsync([this] { SetWindowText((HWND)m_window, m_statusString); });

        // Render the buffer if the best data was updated and the previous buffer was displayed.
        if (m_fireShowModule && !m_bufferUpdate) {
            if (!m_bufferUpdate)
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
    for (FireStarterUnit* unit : m_units)
        unit->DispatchAsync([unit] { unit->FinishProgram(); });
    for (FireStarterUnit* unit : m_units)
        delete unit;
    m_units.clear();

    // Unload the fire show code and destroy the CUDA context.
    if (m_fireShowModule)
        checkCudaErrors(cuModuleUnload(m_fireShowModule));
    if (m_fireShowContext)
        checkCudaErrors(cuCtxDestroy(m_fireShowContext));
} // ControlThread

bool FireStarter::Init(void* window, unsigned long width, unsigned long height)
{
    m_window = window;
    m_width = width;
    m_height = height;
    if (LoadFireStarterCode() && LoadFireShowCode()) {
        DispatchAsync([this] { ControlThread(); });
        return true;
    }
    return false;
} // Init

void FireStarter::Quit(void)
{
    m_quitControlThread = true;
    Terminate();
} // Quit

FireStarter::FireStarter(void)
{
    m_fireShowContext = nullptr;
    m_fireShowModule = nullptr;
    m_statusString[0] = 0;
    m_bestGeneration = 0;
    m_bestStates = 0;
    m_bestResult = START_RESULT;
    m_controlTime = 0.0;
    m_controlUpdate = false;
    m_bufferUpdate = false;
} // FireStarter

FireStarter::~FireStarter(void)
{
} // ~FireStarter