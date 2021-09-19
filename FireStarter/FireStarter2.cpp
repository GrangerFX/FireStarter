#include "FireStarter2.h"
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

#define NVRTC_SAFE_CALL(Name, x)                                \
  do {                                                          \
    nvrtcResult result = x;                                     \
    if (result != NVRTC_SUCCESS) {                              \
      std::cerr << "\nerror: " << Name << " failed with error " \
                << nvrtcGetErrorString(result);                 \
      exit(1);                                                  \
    }                                                           \
  } while (0)

void FireStarter2::EraseFrameBuffer(FrameBuffer &buffer)
{
    memset(buffer.base, 0, buffer.width * buffer.height * sizeof(uchar4));
} // EraseFrameBuffer

void FireStarter2::CopyFrameBuffer(FrameBuffer &dstBuffer, FrameBuffer &srcBuffer)
{
    if ((srcBuffer.rowbytes == dstBuffer.rowbytes) && (srcBuffer.height = dstBuffer.height))
        memcpy(dstBuffer.base, srcBuffer.base, srcBuffer.rowbytes * srcBuffer.height);
} // CopyFrameBuffer

void FireStarter2::InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height)
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

void FireStarter2::FreeFrameBuffer(FrameBuffer &buffer)
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

bool FireStarter2::GetResults(FireStarter2Results* results)
{
    unsigned int index = 0;
    float result = results->results[0].result;
    for (unsigned int i = 1; i < FS2_PROGRAM_POPULATION; i++) {
        float curResult = results->results[i].result;
        if (curResult < result) {
            result = curResult;
            index = i;
        }
    }

    if (result < curState.result) {
        curState = results->results[index];
        if (result < bestState.result)
            return true;
    }
    return false;
} // GetResults

void FireStarter2::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarter2Results) + sizeof(FireStarter2Result) * (FS2_PROGRAM_POPULATION - 1);
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

    for (int i = 0; i < FS2_PROGRAM_DATA; i++) {
        curState.data.d[i][0] = 1.0f;
        for (int j = 1; j < FS2_PROGRAM_DATA; j++)
            curState.data.d[i][j] = 0.0f;
    }
    curState.result = FS2_START_RESULT;
    bestState = curState;

    for (unsigned int i = 0; i < FS2_PROGRAM_POPULATION; i++) {
        results0->results[i] = curState;
        results1->results[i] = curState;
    }
} // InitResults

void FireStarter2::FreeResults(void)
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

void FireStarter2::CompileProgram(const std::string& program)
{
    if (module) {
        checkCudaErrors(cuModuleUnload(module));
        module = NULL;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, program.c_str(), "FireStarter2", 0, NULL, NULL));
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
//  printf("Data initialization done.\n");

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

void FireStarter2::RunProgram(unsigned int population, unsigned int generations)
{
    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);
    unsigned int variation = FS2_VARIATION;

    for (unsigned int i = 0; i < generations; i++) {
        void* arr[] = {reinterpret_cast<void*>(&results0),
                       reinterpret_cast<void*>(&results1),
                       reinterpret_cast<void*>(&population),
                       reinterpret_cast<void*>(&generation),
                       reinterpret_cast<void*>(&variation)};

        CUfunction kernel_addr;
        checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireStarter2"));

        checkCudaErrors(cuLaunchKernel(kernel_addr,
            cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
            cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
            0, 0,                                               // shared mem, stream */
            &arr[0],                                            // arguments */
            0));
        generation++;
    }
} // RunProgram

void FireStarter2::DrawGraph(void)
{
    // Erase the frame buffer
    EraseFrameBuffer(theBuffer);

    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (theBuffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireShow"));

    unsigned int variation = FS2_VARIATION;
    void *arr[] = {reinterpret_cast<void*>(&bestState),
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

void FireStarter2::LoadProgram(void)
{
    std::ifstream file("FireStarter2.cu", std::ios::ate | std::ios::binary);
    if (file.is_open()) {
        // Found usable source file
        file.seekg(0, std::ios::end);
        sourceCode.reserve(file.tellg());
        file.seekg(0, std::ios::beg);
        sourceCode.assign((std::istreambuf_iterator< char >(file)), std::istreambuf_iterator< char >());
        file.close();
    }
} // LoadProgram

void FireStarter2::InitProgram(void)
{
    LoadProgram();
    CompileProgram(sourceCode);
} // InitProgram

void FireStarter2::UpdateProgram(const std::string& replacementCode)
{
    std::string updatedCode = sourceCode;
    std::string startString = FS2_REPLACMENT_START;
    size_t startPos = updatedCode.find(startString);
    if (startPos != std::string::npos) {
        std::string endString = FS2_REPLACMENT_END;
        size_t endPos = updatedCode.find(endString, startPos + startString.length());
        if (endPos != std::string::npos) {
            endPos += endString.length();
            updatedCode.replace(startPos, endPos - startPos, replacementCode);
            CompileProgram(updatedCode);
        }
    }
} // UpdateProgram

void FireStarter2::RenderImage(void* hwnd)
{
    if (bestState.result >= 1.0E-6f) {
        timer.Start();
        double time = 0;
        long long startGeneration = generation;
        
        do {
            // Run the next generation on the GPU.
            RunProgram(FS2_PROGRAM_POPULATION, FS2_PROGRAM_GENERATIONS);
            checkCudaErrors(cuCtxSynchronize());
            time = timer.Duration();
        } while (time < 0.2);

        // Find the best results for display only.
        bool update = GetResults(generation & 1 ? results0 : results1);
        if (update) {
            DrawGraph();
            bestState = curState;
            bestGeneration = generation;

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

        double averageTime = time / (double)(generation - startGeneration);
        sprintf_s(statusString, "FireStarter2: Generation=%lld  Age=%lld  Error=%f  Time=%.4f Seconds", generation, generation - bestGeneration, bestState.result, averageTime);
    }
} // RenderImage

void FireStarter2::Init(unsigned long width, unsigned long height)
{
    strcpy_s(statusString, "Initializing...");

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    generation = 0;
    bestGeneration = 0;
    InitProgram();

    std::string replacementCode =
        "    float power = n;\n"
        "    data.d[0][0] *= power;\n"
        "    for (int i = 1; i < FS2_PROGRAM_DATA; i++) {\n"
        "        power *= n;\n"
        "        float sum = data.d[i][i] * power;\n"
        "        for (int j = 0; j < i; j++)\n"
        "            sum += data.d[i][j] * data.d[j][0];\n"
        "        data.d[i][0] = sum;\n"
        "    }\n"
        "    float result = data.d[FS2_PROGRAM_DATA - 1][0];";
    UpdateProgram(replacementCode);

} // Init

FireStarter2::FireStarter2(void)
{
    // Timer ID
    statusString[0] = 0;
    results0 = NULL;
    results1 = NULL;
    module = NULL;
} // FireStarter2

FireStarter2::~FireStarter2(void)
{
    if (module)
        checkCudaErrors(cuModuleUnload(module));
    FreeFrameBuffer(theBuffer);
    FreeResults();
} // ~FireStarter2