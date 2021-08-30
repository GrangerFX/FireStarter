#include "FireStarter2.h"
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

bool FireStarter2::GetResults(void)
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

    results->bestResult = results->results[index];
    if (result < curState.result) {
        curState = results->bestResult;
        lastGeneration = generation;
        if (result < bestState.result)
            return true;
    }
    return false;
} // GetResults

void FireStarter2::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarter2Results) + sizeof(FireStarter2Result) * (FS2_PROGRAM_POPULATION - 1);
    cudaError_t err = cudaMallocManaged(&results, resultsSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate results (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(results, 0, resultsSize);
} // InitResults

void FireStarter2::FreeResults(void)
{
    if (results) {
        cudaError_t err = cudaFree(results);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        results = NULL;
    }
 } // FreeResults

void FireStarter2::CompileProgram(const char *source)
{
    if (module) {
        checkCudaErrors(cuModuleUnload(module));
        module = NULL;
    }

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, source, "FireStarter2", 0, NULL, NULL));
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

void FireStarter2::RunProgram(unsigned int population)
{
    results->bestResult = curState;

    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    unsigned int variation = FS2_VARIATION;
    void *arr[] = {reinterpret_cast<void*>(&results),
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

    checkCudaErrors(cuCtxSynchronize());
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
    void *arr[] = {reinterpret_cast<void*>(&results),
                   reinterpret_cast<void*>(&bestState),
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

void FireStarter2::InitProgram(void)
{
    unsigned int seed = 0;
    seed = RANDOMHASH(seed) + 1;
    for (int i = 0; i < FS2_PROGRAM_DATA; i++) {
        curState.data.d[i][0] = 1.0f;
        for (int j = 1; j < FS2_PROGRAM_DATA; j++)
            curState.data.d[i][j] = 0.0f;
    }
    curState.result = FS2_START_RESULT;

    for (unsigned int i = 1; i < FS2_PROGRAM_POPULATION; i++) {
        results->results[i].result = curState.result;
        results->results[i].data = curState.data;
     }

    std::string code;
    MakeProgram(code);
    CompileProgram(code.c_str());
} // InitProgram

void FireStarter2::MakeProgram(std::string& src)
{
    src += Format("#define PROGRAM_DATA %d\n", FS2_PROGRAM_DATA);
    src += Format("#define PROGRAM_ITERATIONS %d\n", FS2_PROGRAM_ITERATIONS);
    src += Format("#define SAMPLE_ITERATIONS %d\n", FS2_SAMPLE_ITERATIONS);
    src += Format("#define SMART_RANDOM_FACTOR %gf\n", FS2_SMART_RANDOM_FACTOR);
    src += Format("#define FS2_START_RESULT %f\n", FS2_START_RESULT);
    src += "\n"
        "__device__ unsigned int Hash(unsigned int hash)\n"
        "{\n"
        "    hash = (hash ^ 61) ^ (hash >> 16);\n"
        "    hash += hash << 3;\n"
        "    hash ^= hash >> 4;\n"
        "    hash *= 0x27d4eb2d; // a prime or an odd constant\n"
        "    hash ^= hash >> 15;\n"
        "    return hash;\n"
        "} // Hash\n"
        "\n"
        "#define RANDOMHASH(seed) Hash(seed)\n"
        "#define RANDOMSEED(seed) RANDOMHASH(seed++)\n"
        "#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits\n"
        "#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1\n"
        "#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1\n"
        "#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5\n"
        "\n"
        "typedef struct {\n"
        "    float d[PROGRAM_DATA][PROGRAM_DATA];\n"
        "} FireStarter2Data;\n"
        "\n"
        "typedef struct {\n"
        "    FireStarter2Data data;\n"
        "    float result;\n"
        "} FireStarter2Result;\n"
        "\n"
        "typedef struct {\n"
        "    FireStarter2Result bestResult;\n"
        "    FireStarter2Result results[1];\n"
        "} FireStarter2Results;\n"
        "\n"
        "__device__ float Target(float n) {\n"
        "   return sinf(n);\n"
        "} // Target\n"
        "\n"
        "__device__ float Target1(float n) {\n"
        "   return sinf(n * 1.3f) + n * 0.1f;\n"
        "} // Target1\n"
        "\n"
        "__device__ float Evaluate(const FireStarter2Data &workData, float n)\n"
        "{\n"
        "    FireStarter2Data data(workData);\n"
        "    float power = n;\n"
        "    data.d[0][0] *= power;\n"
        "    for (int i = 1; i < PROGRAM_DATA; i++) {\n"
        "        power *= n;\n"
        "        float sum = data.d[i][i] * power;\n"
        "        for (int j = 0; j < i; j++)\n"
        "            sum += data.d[i][j] * data.d[j][0];\n"
        "        data.d[i][0] = sum;\n"
        "    }\n"
        "    float result = data.d[PROGRAM_DATA - 1][0];\n"
        "    return isnan(result) ? 0.0f : result;\n"
        "} // Evaluate\n"
        "\n"
        "extern \"C\" __global__ void FireStarter2(FireStarter2Results *results, const unsigned int population, const unsigned int generation, const unsigned int variation)\n"
        "{\n"
        "    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;\n"
        "    if (member >= population)\n"
        "        return;\n"
        "    unsigned int seed = RANDOMHASH(RANDOMHASH(generation) + member);\n"
        "    float target[SAMPLE_ITERATIONS];\n"
        "    float theta[SAMPLE_ITERATIONS];\n"
        "    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {\n"
        "        theta[i] = i * ((2.0f * 3.14159265f) / (SAMPLE_ITERATIONS - 1));\n"
        "        target[i] = variation ? Target1(theta[i]) : Target(theta[i]);\n"
        "    }\n"
        "    FireStarter2Data data(results->results[member].data);\n"
        "    float startResult = results->results[member].result;\n"
        "    float result = startResult;\n"
        "    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {\n"
        "        unsigned int di = RANDOMSEED(seed) % PROGRAM_DATA;\n"
        "        unsigned int dj = RANDOMSEED(seed) % (di + 1);\n"
        "        float oldData = data.d[di][dj];\n"
        "        data.d[di][dj] = oldData + (RANDOMFACTOR(seed) * result * SMART_RANDOM_FACTOR);\n"
        "        float curResult = 0.0f;\n"
        "        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {\n"
        "            float delta = fabsf(Evaluate(data, theta[i]) - target[i]);\n"
        "            curResult = delta > curResult ? delta : curResult;\n"
        "        }\n"
        "        if (curResult < result)\n"
        "            result = curResult;\n"
        "        else\n"
        "            data.d[di][dj] = oldData;\n"
        "    }\n"
        "    if (result < startResult) {\n"
        "        results->results[member].data = data;\n"
        "        results->results[member].result = result;\n"
        "    } else {\n"
        "        results->results[member].data = results->bestResult.data;"
        "        results->results[member].result = FS2_START_RESULT;"
        "    }\n"
        "} // FireStarter2\n"
        "\n"
        "extern \"C\" __global__ void FireShow(const FireStarter2Results *results, const FireStarter2Result bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)\n"
        "{\n"
        "    int x = blockDim.x * blockIdx.x + threadIdx.x;\n"
        "    int xScale = bufferHeight / 8;\n"
        "    int yScale = bufferHeight / 16;\n"
        "    if (x < bufferHeight) {\n"
        "        int x0 = (bufferWidth / 2) - xScale;\n"
        "        int x1 = (bufferWidth / 2) + xScale;\n"
        "        if (x0 >= 0) {\n"
        "            uchar4 &pixel(bufferPixels[x * bufferWidth + x0]);\n"
        "            pixel.x = 64;\n"
        "            pixel.y = 128;\n"
        "            pixel.z = 64;\n"
        "        };\n"
        "        if (x1 < bufferWidth) {\n"
        "            uchar4 &pixel(bufferPixels[x * bufferWidth + x1]);\n"
        "            pixel.x = 64;\n"
        "            pixel.y = 128;\n"
        "            pixel.z = 64;\n"
        "        };\n"
        "    }\n"
        "    if (x < bufferWidth) {\n"
        "        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;\n"
        "        float center = bufferHeight * 0.66f;\n"
        "        float target = variation ? Target1(theta) : Target(theta);\n"
        "        int y = (int)(center + target * yScale);\n"
        "        if ((y >= 0) && (y < bufferHeight)) {\n"
        "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
        "            pixel.x = 255;\n"
        "            pixel.y = 128;\n"
        "        };\n"
        "        y = (int)(center + Evaluate(results->bestResult.data, theta) * yScale);\n"
        "        if ((y >= 0) && (y < bufferHeight)) {\n"
        "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
        "            pixel.z = 255;\n"
        "            pixel.y = 128;\n"
        "        };\n"
        "        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);\n"
        "        if ((y >= 0) && (y < bufferHeight)) {\n"
        "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
        "            pixel.x = pixel.y = pixel.z = 255;\n"
        "        };\n"
        "    }\n"
        "} // FireShow\n";
} // MakeProgram

void FireStarter2::RenderImage(HWND hwnd)
{
    timer.Start();
    bool update = false;
    if (bestState.result >= 1.0E-6f) {
        generation++;
        RunProgram(FS2_PROGRAM_POPULATION);
        update = GetResults();
    }

    if (update) {
        DrawGraph();
        if (update) {
            bestState = curState;
            bestGeneration = generation;
        }

        unsigned char buffer[4096];
        BITMAPINFO*	bm = (BITMAPINFO*)buffer;
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

        HDC hdc = GetDC(hwnd);
        if (hdc) {
	        SetDIBitsToDevice(hdc, 0, 0, theBuffer.width, theBuffer.height, 0, 0, 0, theBuffer.height, (CONST VOID *)theBuffer.base, bm, DIB_RGB_COLORS);
	        GdiFlush();
        }
    }

    double time = timer.Duration();
    sprintf_s(statusString, "FireStarter2: Generation=%lld  Age=%lld  Error=%f  Best Age %lld  Best=%f  Time=%.4f Seconds", generation, generation - lastGeneration, curState.result, generation - bestGeneration, bestState.result, time);
#if 0
    if (update) {
        printf("// %s\n", statusString);
        printf("// generation=%d  data: ", generation);
        for (int i = 0; i < PROGRAM_DATA; i++)
            printf("%f ", curState.data[i]);
        printf("\n");
        printf("%s\n\n", code.c_str());
    }
#endif
} // RenderImage

void FireStarter2::Init(unsigned long width, unsigned long height)
{
    strcpy_s(statusString, "Initializing...");

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    generation = 0;
    lastGeneration = 0;
    bestGeneration = 0;
    InitProgram();
    bestState = curState;
} // Init

FireStarter2::FireStarter2(void)
{
    // Timer ID
    statusString[0] = 0;
    results = NULL;
    module = NULL;
} // FireStarter2

FireStarter2::~FireStarter2(void)
{
    if (module)
        checkCudaErrors(cuModuleUnload(module));
    FreeFrameBuffer(theBuffer);
    FreeResults();
} // ~FireStarter2