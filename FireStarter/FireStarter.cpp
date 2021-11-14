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
    unsigned int operation = curState.program.instructions[index];
    unsigned int opcode = FireStarterOpcode(RANDOMSEED(seed) % PROGRAM_OPCODES);
    unsigned int data = RANDOMSEED(seed) % PROGRAM_DATA;
    curState.program.instructions[index] = data * PROGRAM_OPCODES + opcode;
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
    if (!program) {
        cudaError_t err = cudaMallocManaged(&program, sizeof(FireStarterProgram));
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to allocate program (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
    }

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
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        RandomInstruction(i, seed);

    // Initialize the evolving program data values.
    for (unsigned int i = 0; i < PROGRAM_DATA; i++) {
        curState.result0.data.d[i] = 1.0f;
        curState.result1.data.d[i] = 1.0f;
    }
    curState.result0.result = START_RESULT;
    curState.result1.result = START_RESULT;
    curState.maxResult = START_RESULT;
    curState.devolve = 0;
    bestState = curState;
    states.push_back(curState);

    for (unsigned int i = 0; i < PROGRAM_POPULATION; i++) {
        results0->results[i] = curState.result0;
        results1->results[i] = curState.result1;
    }
} // InitResults

void FireStarter::FreeResults(void)
{
    if (program) {
        cudaError_t err = cudaFree(program);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free program (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        program = NULL;
    }
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

    checkCudaErrors(cuModuleLoadDataEx(&module, ptx, 0, 0, 0));
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
        void* arr[] = {reinterpret_cast<void*>(&program),
                       reinterpret_cast<void*>(&results0),
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
        dataGeneration++;
    }
    checkCudaErrors(cuCtxSynchronize());
    GetResults(dataGeneration & 1 ? results1 : results0, result);
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

    void *arr[] = {reinterpret_cast<void*>(&program),
                   reinterpret_cast<void*>(variation ? &bestState.result1 : &bestState.result0),
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
        lastGeneration = generation;
        curState.maxResult = maxResult;
        curState.devolve = 0;
#if EVOLVE
        states.push_back(curState);
#endif
        if (curState.maxResult < bestState.maxResult) {
            bestGeneration = generation;
            bestState = curState;
            bestCode = updatedCode;
            UpdateData(bestCode, bestState.result0, DATA0_CODE);
            UpdateData(bestCode, bestState.result1, DATA1_CODE);
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

void FireStarter::UpdateProgram(std::string &code, const std::string& replacementCode, std::string startString)
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

void FireStarter::UpdateOperations(std::string& code)
{
    std::string replacementOperations;
    replacementOperations += "    switch (operation) {\r\n";
    for (unsigned int data = 0; data < PROGRAM_DATA; data++)
        for (unsigned int opcode = 0; opcode < PROGRAM_OPCODES; opcode++) {
            unsigned int operation = data * PROGRAM_OPCODES + opcode;
            switch (opcode) {
                case Operation_add:
                    replacementOperations += Format("        case %d: return data.d[%d] += n;\r\n", operation, data);
                    break;
                case Operation_multiply:
                    replacementOperations += Format("        case %d: return data.d[%d] *= n;\r\n", operation, data);
                    break;
#if PROGRAM_LOAD_STORE
                case Operation_load:
                    replacementOperations += Format("        case %d: return data.d[%d];\r\n", operation, data);
                    break;
                case Operation_store:
                    replacementOperations += Format("        case %d: return data.d[%d] = n;\r\n", operation, data);
                    break;
#endif
            }
        }
    replacementOperations += "    }\r\n";
    UpdateProgram(code, replacementOperations, OPERATIONS_CODE);
} // UpdateOperations

void FireStarter::UpdateData(std::string& code, const FireStarterResult& result, std::string startString)
{
    std::string replacementData;
    for (unsigned int i = 0; i < PROGRAM_DATA; i++)
        replacementData += Format("    data.d[%d] = %f;\r\n", i, result.data.d[i]);
    replacementData += Format("    return %f;\r\n", result.result);
    UpdateProgram(code, replacementData, startString);
} // UpdateData

void FireStarter::DevolveProgram(void)
{
    unsigned long long lastAge = generation - lastGeneration;
    unsigned int state = (unsigned int)states.size() - 1;
    if (lastAge > SMART_DEVOLVE_AGE) {
        // Devolve to an earlier state if too many generations have elapsed without improvement.
        // This prevents dead-end evolution.
        unsigned int devolve = 1;
        while (state && (++states[state].devolve >= devolve)) {
            states.pop_back();
            state--;
            devolve++;
        }
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

    // Make random changes to the program instructions.
    unsigned int seed = RANDOMHASH((unsigned int)(generation * 2));
    curState.program.generation = generation;
    while (numChanges--) {
        unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
        RandomInstruction(index, seed);
    }
    
    // Generate the replacement code and update the program.
    std::string replacementCode;
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        unsigned int operation = curState.program.instructions[i];
        unsigned int opcode = operation % PROGRAM_OPCODES;
        unsigned int data = operation / PROGRAM_OPCODES;

        switch (opcode) {
        case Operation_add:
            replacementCode += Format("    n = data.d[%d] += n;\r\n", data);
            break;
        case Operation_multiply:
            replacementCode += Format("    n = data.d[%d] *= n;\r\n", data);
            break;
#if PROGRAM_LOAD_STORE
        case Operation_load:
            replacementCode += Format("    n = data.d[%d];\r\n", data);
            break;
        case Operation_store:
            replacementCode += Format("    data.d[%d] = n;\r\n", data);
            break;
#endif
        }
    }
    *program = curState.program;

    updatedCode = sourceCode;
    UpdateProgram(updatedCode, replacementCode, EVALUATE_EVOLVE ? EVALUATE_CODE : EVOLVE_CODE);
    CompileProgram(updatedCode);
} // EvolveProgram

void FireStarter::InitProgram(void)
{
    LoadProgram();
    UpdateOperations(sourceCode);
    CompileProgram(sourceCode);
} // InitProgram

void FireStarter::RenderImage(void* hwnd)
{
    double time = 0.0;
    timer.Start();

    // Evolve the program instructions.
    long long startGeneration = generation;
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
    unsigned long long generation0 = generation;
#endif
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, varaition0, curState.result0);
    RunProgram(PROGRAM_POPULATION, PROGRAM_GENERATIONS, generation0, varaition1, curState.result1);
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
    generation++;

    // Update the status.
    double averageTime = time / (double)(generation - startGeneration);
    sprintf_s(statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error0=%f  Error1=%f  Time=%.4f Seconds", generation, states.size(), generation - bestState.program.generation, bestState.result0.result, bestState.result1.result, averageTime);
} // RenderImage

void FireStarter::Init(unsigned long width, unsigned long height)
{
    strcpy_s(statusString, "Initializing...");

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    generation = lastGeneration = bestGeneration =0;
    bestState.program.generation = 0;
    InitProgram();
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    statusString[0] = 0;
    program = NULL;
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