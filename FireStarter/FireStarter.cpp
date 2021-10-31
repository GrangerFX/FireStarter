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
    if (!results0) {
        cudaError_t err = cudaMallocManaged(&results0, resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate old results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }
    if (!results1) {
        cudaError_t err = cudaMallocManaged(&results1, resultsSize);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate new results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }

    // Initialize the evolving program instructions.
    unsigned int seed = RANDOMHASH((unsigned int)generation);
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        curState.program.instructions[i].opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
        curState.program.instructions[i].data = RANDOMSEED(seed) % PROGRAM_DATA;
    }

    // Initialize the evolving program data values.
    for (unsigned int i = 0; i < PROGRAM_DATA; i++) {
        curState.result0.data.d[i] = 1.0f;
        curState.result1.data.d[i] = 1.0f;
    }
    curState.result0.result = START_RESULT;
    curState.result1.result = START_RESULT;
    curState.maxResult = START_RESULT;
    bestState = curState;
    states.push_back(curState);

    for (unsigned int i = 0; i < PROGRAM_POPULATION; i++) {
        results0->results[i] = curState.result0;
        results1->results[i] = curState.result1;
    }
} // InitResults

void FireStarter::FreeResults(void)
{
    if (results0) {
        cudaError_t err = cudaFree(results0);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free old results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        results0 = NULL;
    }
    if (results1) {
        cudaError_t err = cudaFree(results1);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free new results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        results1 = NULL;
    }
} // FreeResults

void FireStarter::CompileProgram(const std::string& program)
{
    if (module) {
        checkCudaErrors(cuModuleUnload(module));
        module = NULL;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, program.c_str(), "FireStarter", 0, NULL, NULL));
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

    checkCudaErrors(cuModuleLoadDataEx(&module, ptx, 0, 0, 0));
    free(ptx);
    ptx = NULL;
} // CompileProgram

void FireStarter::RunProgram(unsigned int population, unsigned int generations, unsigned int variation, FireStarterResult &result)
{
    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    for (unsigned int dataGeneration = 0; dataGeneration < generations; dataGeneration++) {
        void* arr[] = {reinterpret_cast<void*>(&results0),
                       reinterpret_cast<void*>(&results1),
                       reinterpret_cast<void*>(&population),
                       reinterpret_cast<void*>(&dataGeneration),
                       reinterpret_cast<void*>(&generation),
                       reinterpret_cast<void*>(&variation)};

        CUfunction kernel_addr;
        checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireStarter"));

        checkCudaErrors(cuLaunchKernel(kernel_addr,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, 0,                                               // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
    }
    checkCudaErrors(cuCtxSynchronize());
    GetResults(generations & 1 ? results1 : results0, result);
} // RunProgram

void FireStarter::DrawGraph(unsigned int variation)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (theBuffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireShow"));

    void *arr[] = {reinterpret_cast<void*>(variation ? &bestState.result1 : &bestState.result0),
                   reinterpret_cast<void*>(&theBuffer.base),
                   reinterpret_cast<void*>(&theBuffer.width),
                   reinterpret_cast<void*>(&theBuffer.height),
                   reinterpret_cast<void*>(&variation)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // DrawGraph

void FireStarter::LoadProgram(void)
{
#if EVOLVE
    std::ifstream file("FireStarter.cu", std::ios::ate | std::ios::binary);
#else
    std::ifstream file("FireStarter_Best.cu", std::ios::ate | std::ios::binary);
#endif
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        sourceCode.reserve(file.tellg());
        file.seekg(0, std::ios::beg);
        sourceCode.assign((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
        updatedCode = sourceCode;
        bestCode = sourceCode;
    }
} // LoadProgram

bool FireStarter::SaveProgram(void)
{
    float maxResult = MAX(curState.result0.result, curState.result1.result);
    if (maxResult < curState.maxResult) {
        curState.maxResult = maxResult;
#if EVOLVE
        states.push_back(curState);
#endif
        lastGeneration = generation;
        if (curState.maxResult < bestState.maxResult) {
            bestState = curState;
            bestCode = updatedCode;
#if EVOLVE
            std::ofstream file("FireStarter_Best.cu", std::ios::out | std::ios::binary);
            if (file.is_open()) {
                file << bestCode;
                file.close();
            }
#endif
            return true;
        }
    }
    return false;
} // SaveProgram

void FireStarter::InitProgram(void)
{
    LoadProgram();
#if EVOLVE
    EvolveProgram();
#endif
    CompileProgram(sourceCode);
} // InitProgram

void FireStarter::UpdateProgram(const std::string& replacementCode, std::string startString)
{
    updatedCode = sourceCode;
    size_t startPos = updatedCode.find(startString);
    if (startPos != std::string::npos) {
        size_t endPos = updatedCode.find(END_CODE, startPos);
        if (endPos != std::string::npos)
            startPos += startString.length() + 1;
        else
            endPos = startPos + startString.length() + 1;
        updatedCode.replace(startPos, endPos - startPos, replacementCode);
        CompileProgram(updatedCode);
    }
} // UpdateProgram

void FireStarter::DevolveProgram(void)
{
    unsigned long long lastAge = generation - lastGeneration;
    unsigned int state = (unsigned int)states.size() - 1;

    // Devolve to an earlier state if too many generations have elapsed without improvement.
    // This prevents dead-end evolution.
    if (state && (lastAge > SMART_DEVOLVE_AGE)) {
        states.pop_back();
        state--;
        lastGeneration = generation;
    }
    curState = states[state];
} // DevolveProgram

void FireStarter::EvolveProgram(void)
{
    // Determine how many changes to make to the instructions.
    unsigned long long lastAge = generation - lastGeneration;
    unsigned int numChanges = 1;
    if (lastAge > SMART_EVOLVE_AGE)
        numChanges++;
    if (lastAge > SMART_EVOLVE_AGE * SMART_EVOLVE_AGE)
        numChanges++;

    // Make random changes to the program instructions.
    unsigned int seed = RANDOMHASH((unsigned int)generation);
    curState.program.generation = generation;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
        curState.program.instructions[index].opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
        curState.program.instructions[index].data = RANDOMSEED(seed) % PROGRAM_DATA;
    }
    
    // Generate the replacement code and update the program.
    std::string replacementCode;
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        switch (curState.program.instructions[i].opcode) {
            case Operation_add:
                replacementCode += Format("    n = data.d[%d] += n;\n", curState.program.instructions[i].data);
                break;
            case Operation_multiply:
                replacementCode += Format("    n = data.d[%d] *= n;\n", curState.program.instructions[i].data);
                break;
#if PROGRAM_LOAD_STORE
            case Operation_load:
                replacementCode += Format("    n = data.d[%d];\n", curState.program.instructions[i].data);
                break;
            case Operation_store:
                replacementCode += Format("    data.d[%d] = n;\n", curState.program.instructions[i].data);
                break;
#endif
        }
    UpdateProgram(replacementCode, EVALUATE_EVOLVE ? EVALUATE_CODE : EVOLVE_CODE);
} // EvolveProgram

void FireStarter::RenderImage(void* hwnd)
{
    double time = 0.0;
    timer.Start();

    // Evolve the program instructions.
    long long startGeneration = generation++;
#if EVOLVE
    DevolveProgram();
    EvolveProgram();
#endif
        
    // Run the next generation on the GPU.
    unsigned int varaition0 = 0;
#if EVOLVE
    unsigned int varaition1 = 1;
#else
    unsigned int varaition1 = 2;
#endif
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, varaition0, curState.result0);
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, varaition1, curState.result1);
    bool update = SaveProgram();
    time = timer.Duration();

    // Find the best results for display only.
    if (update) {
        // Erase the frame buffer
        EraseFrameBuffer(theBuffer);
        DrawGraph(varaition0);
        DrawGraph(varaition1);

        unsigned char buffer[4096];
        BITMAPINFO* bm = (BITMAPINFO*)buffer;
        bm->bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
        bm->bmiHeader.biHeight = -(int)theBuffer.height;
        bm->bmiHeader.biPlanes = 1;
        bm->bmiHeader.biCompression = BI_RGB;
        bm->bmiHeader.biSizeImage = 0;
        bm->bmiHeader.biXPelsPerMeter = 0;
        bm->bmiHeader.biYPelsPerMeter = 0;
        bm->bmiHeader.biClrUsed = 0;
        bm->bmiHeader.biClrImportant = 0;
        bm->bmiHeader.biWidth = theBuffer.width;
        bm->bmiHeader.biBitCount = 32;

        HDC hdc = GetDC((HWND)hwnd);
        if (hdc) {
            SetDIBitsToDevice(hdc, 0, 0, theBuffer.width, theBuffer.height, 0, 0, 0, theBuffer.height, (CONST VOID*)theBuffer.base, bm, DIB_RGB_COLORS);
            GdiFlush();
        }
    }

    // Update the status.
    double averageTime = time / (double)(generation - startGeneration);
    sprintf_s(statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error=%f  Time=%.4f Seconds", generation, states.size(), generation - bestState.program.generation, bestState.maxResult, averageTime);
} // RenderImage

void FireStarter::Init(unsigned long width, unsigned long height)
{
    strcpy_s(statusString, "Initializing...");

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    generation = 0;
    bestState.program.generation = 0;
    InitProgram();
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    statusString[0] = 0;
    results0 = NULL;
    results1 = NULL;
    module = NULL;
} // FireStarter

FireStarter::~FireStarter(void)
{
    if (module)
        checkCudaErrors(cuModuleUnload(module));
    FreeFrameBuffer(theBuffer);
    FreeResults();
} // ~FireStarter