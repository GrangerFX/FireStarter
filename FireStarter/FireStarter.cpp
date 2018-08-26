#include "FireStarter.h"
#include "Test.h"
#include "PrintF.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>

// CUDA runtime
// CUDA utilities and system includes
#include <cuda.h>
#include <cuda_runtime.h>
#include <nvrtc.h>
#include <helper_cuda.h>
#include <nvrtc_helper.h>

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// http://www.concentric.net/~Ttwang/tech/inthash.htm
inline unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#define RANDOMHASH(seed) Hash(seed)
#define RANDOMSEED(seed) RANDOMHASH(seed++)
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5

std::string Format(const char *format, ...)
{
    char str[1024];
    va_list argptr;
    va_start(argptr, format);
    int ret = vsnprintf(str, sizeof(str), format, argptr);
    va_end(argptr);
    return std::string(str);
} // Format

std::string Format(const std::string formatString, ...)
{
    return Format(formatString.c_str());
} // Format

void FireStarter::InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height)
{
	buffer.width = width;
	buffer.height = height;
	buffer.rowbytes = width * 4;
    buffer.base = NULL;

    cudaError_t err = cudaMallocManaged(&buffer.base, BUFFER_WIDTH * BUFFER_HEIGHT * sizeof(uchar4));
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

void FireStarter::GetResults(void)
{
    checkCudaErrors(cudaMemcpy(hostResults, deviceResults, sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1), cudaMemcpyDeviceToHost));
    unsigned int numResults = min(hostResults->numResults, MAX_RESULTS);
    unsigned int index = 0;
    float error = hostResults->results[0].error;
    for (unsigned int i = 1; i < numResults; i++) {
        if (hostResults->results[i].error < error) {
            error = hostResults->results[i].error;
            index = i;
        }
    }
    hostResults->results[0] = hostResults->results[index];
    hostResults->minError = curError = error;
} // GetResults

void FireStarter::ResetResults(void)
{
    hostResults->numResults = 0;
    checkCudaErrors(cudaMemcpy(deviceResults, hostResults, sizeof(unsigned int) + sizeof(float), cudaMemcpyHostToDevice));
} // ResetResults

void FireStarter::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
    if (!hostResults)
        hostResults = (FireStarterResults*)malloc(resultsSize);
    memset(hostResults, 0, resultsSize);
    hostResults->minError = 1.0E+10f;
    cudaError_t err = cudaMallocManaged(&deviceResults, resultsSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate results (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    checkCudaErrors(cudaMemcpy(deviceResults, hostResults, resultsSize, cudaMemcpyHostToDevice));
} // InitResults

void FireStarter::FreeResults(void)
{
    if (hostResults) {
        free(hostResults);
        hostResults = NULL;
    }
    if (deviceResults) {
        cudaError_t err = cudaFree(deviceResults);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        deviceResults = NULL;
    }
} // FreeResults

void FireStarter::CompileAndRun(const char *source, unsigned int population, unsigned int maxResults, FireStarterResults *results)
{
    // Reset the results
//    ResetResults(theResults);

    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, source, "FireStarter", 0, NULL, NULL));
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

    CUmodule module;
    checkCudaErrors(cuModuleLoadDataEx(&module, ptx, 0, 0, 0));
    free(ptx);
    ptx = NULL;

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireStarterGPU"));

    // Launch the kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
//  printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void *arr[] = {reinterpret_cast<void *>(&population),
                   reinterpret_cast<void *>(&maxResults),
                   reinterpret_cast<void *>(&results)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
    checkCudaErrors(cuModuleUnload(module));
} // CompileAndRun

void FireStarter::RandomProgram(void)
{
    unsigned int seed = (unsigned int)generation;
    seed = RANDOMHASH(seed) + 1;
    printf("seed=%d\n", seed);
    if (generation == 0) {
        for (int i = 0; i < PROGRAM_DATA; i++) {
           printf("i=%d  seed=%d\n", i, seed);
           bestData[i] = RANDOMFACTOR(seed);
        }
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
            ProgramInstruction &instruction = bestInstructions[i];
            instruction.instruction = (Instruction)(RANDOMSEED(seed) % NumInstructions);
            instruction.d = RANDOMSEED(seed) % PROGRAM_DATA;
        }
    } else {
        if (curError < minError) {
            minError = curError;
            bestData = curData;
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                bestInstructions[i] = curInstructions[i];
        } else {
            curData = bestData;
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                curInstructions[i] = bestInstructions[i];
        }
        switch (RANDOMSEED(seed) % 3) {
            case 0:
                {
                    unsigned int seedA = seed;
                    unsigned int seedB = seed;
                    unsigned int index = RANDOMSEED(seedA) % PROGRAM_INSTRUCTIONS;
                    unsigned int instruction = RANDOMSEED(seedB) % NumInstructions;
                    curInstructions[index].instruction = (Instruction)(instruction);
                    seed += 2;
                    printf("Generation=%d  Index=%d  Instruction=%d  Seed=%d\n", generation, index, curInstructions[index].instruction, seed);
                }
                break;
            case 1:
                {
                    unsigned int seedA = seed;
                    unsigned int seedB = seed;
                    unsigned int index = RANDOMSEED(seedA) % PROGRAM_INSTRUCTIONS;
                    unsigned int d = RANDOMSEED(seedB) % PROGRAM_DATA;
                    curInstructions[index].d = d;
                    seed += 2;
                    printf("Generation=%d  Index=%d  Source=%d  Seed=%d\n", generation, index, curInstructions[index].d, seed);
                }
                break;
            default:
                {
                    unsigned int seedA = seed;
                    unsigned int seedB = seed;
                    unsigned int index = RANDOMSEED(seedA) % PROGRAM_DATA;
                    float data = RANDOMFACTOR(seedB) * 0.1f;
                    curData[index] += data;
                    seed += 2;
                    printf("Generation=%d  Index=%d  Data=%f  Seed=%d\n", generation, index, curData[index], seed);
                }
                break;
        }
    }
    generation++;
} // RandomProgram

void FireStarter::MakeProgram(void)
{
    RandomProgram();
    program =  "";
    program += Format("#define PROGRAM_ITERATIONS %d\n", PROGRAM_ITERATIONS);
    program += Format("#define SAMPLE_ITERATIONS %d\n", SAMPLE_ITERATIONS);
    program += "\n"
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
               "\n";
    program += Format("#define PROGRAM_DATA %d\n", PROGRAM_DATA);
    program += "\n"
               "typedef struct FireStarterData {\n"
               "    float d[PROGRAM_DATA];\n"
               "\n"
               "    __device__ float& operator[](int i)\n"
               "    {\n"
               "        return d[i];\n"
               "    } // operator[]\n"
               "} FireStarterData;\n"
               "\n"
               "typedef struct FireStarterResult {\n"
               "    FireStarterData data;\n"
               "    float error;\n"
               "} FireStarterResult;\n"
               "\n"
               "typedef struct FireStarterResults {\n"
               "    unsigned int numResults;\n"
               "    float minError;\n"
               "    FireStarterResult results[1];\n"
               "} FireStarterResults;\n"
               "\n"
               "__device__ float Evaluate(FireStarterData &data, float r)\n"
               "{\n";

    for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        const ProgramInstruction &instruction = curInstructions[i];
        switch (instruction.instruction) {
            case Instruction_noop:
                break;
            case Instruction_store:
                program += Format("    data[%d] = r;\n", instruction.d);
                break;
            case Instruction_square:
                program += Format("    r *= r;\n");
                break;
            case Instruction_add:
                program += Format("    r += data[%d];\n", instruction.d);
                break;
            case Instruction_subtract:
                program += Format("    r -= data[%d];\n", instruction.d);
                break;
            case Instruction_multiply:
                program += Format("    r *= data[%d];\n", instruction.d);
                break;
            case Instruction_divide:
                program += Format("    r /= data[%d];\n", instruction.d);
                break;
            case Instruction_max:
                program += Format("    r = r >= data[%d] ? r : data[%d];\n", instruction.d, instruction.d);
                break;
            case Instruction_min:
                program += Format("    r = r <= data[%d] ? r : data[%d];\n", instruction.d, instruction.d);
                break;
        }
    }
    program += "    return r;\n"
               "}\n"
               "\n"
               "extern \"C\" __global__ void FireStarterGPU(const unsigned int population, const unsigned int maxResults, FireStarterResults *results)\n"
               "{\n"
               "    unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;\n"
               "    if (index < population) {\n"
               "        unsigned int seed = RANDOMHASH(index);\n";
    program += Format("        FireStarterData data = {%f", curData[0]);
    for (int i = 1; i < PROGRAM_DATA; i++)
        program += Format(", %f", curData[i]);
    program += "};\n"
               "        float minError = 1.0E+10f;\n"
               "        unsigned int d = 0;\n"
               "        float oldValue = data[d];\n"
               "        for (int p = 0; p < PROGRAM_ITERATIONS; p++) {\n"
               "            float error = 0.0f;\n"
               "            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {\n"
               "                float theta = i * 3.14159265f / SAMPLE_ITERATIONS;\n"
               "                error += fabsf(Evaluate(data, theta) - sinf(theta));\n"
               "            }\n"
               "            error /= SAMPLE_ITERATIONS;\n"
               "            if (error < minError)\n"
               "                minError = error;\n"
               "            else\n"
               "                data[d] = oldValue;\n"
               "            d = RANDOMSEED(seed) & (PROGRAM_DATA - 1);\n"
               "            oldValue = data[d];\n"
               "            data[d] += RANDOMFACTOR(seed) * minError * 0.1f;\n"
               "        }\n"
               "        if (minError < results->minError) {\n"
               "            unsigned int index = __uAtomicInc(&results->numResults, 0xFFFFFFFF);\n"
               "            if (index < maxResults) {\n"
               "                results->minError = minError;\n"
               "                results->results[index].data = data;\n"
               "                results->results[index].error = minError;\n"
               "            }\n"
               "        }\n"
               "    }\n"
               "} // FireStarterGPU\n";
} // MakeProgram

void FireStarter::RenderImage(HWND hwnd)
{
    MakeProgram();
    timer.Start();
    bool update;
    if (!RUN_GPU || RUN_TEST) {
        RunTest(theBuffer.base, BUFFER_WIDTH, BUFFER_HEIGHT);
        update = true;
    } else {
        CompileAndRun(program.c_str(), PROGRAM_POPULATION, MAX_RESULTS, deviceResults);
        GetResults();
        update = curError < minError;
    }
    double time = timer.Duration();
    sprintf_s(statusString, "FireStarter: Generation=%lld  error=%f  Time=%.4f Seconds", generation, curError, time * 0.001);

    if (update) {
        printf("//%s\n", statusString);
        printf("%s\n", program.c_str());

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
} // RenderImage

void FireStarter::Init(void)
{
    strcpy_s(statusString, "Initializing...");

    // check for hardware double precision support
    int dev = 0;
    dev = findCudaDevice(0, NULL);

    cudaDeviceProp deviceProp;
    checkCudaErrors(cudaGetDeviceProperties(&deviceProp, dev));
    int version = deviceProp.major*10 + deviceProp.minor;

    if (version < 11) {
        printf("GPU compute capability is too low (%d), program is waived\n", version);
        exit(EXIT_WAIVED);
    }

    haveDoubles = (version >= 13);
    numSMs = deviceProp.multiProcessorCount;

    InitFrameBuffer(theBuffer, BUFFER_WIDTH, BUFFER_HEIGHT);
    InitResults();

    generation = 0;
    RandomProgram();
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    haveDoubles = false;
    numSMs = 0;                     // number of multiprocessors
    statusString[0] = 0;
    minError = curError = 1.0E+10f;
    hostResults = NULL;
    deviceResults = NULL;
    Init();
} // FireStarter

FireStarter::~FireStarter(void)
{
    FreeFrameBuffer(theBuffer);
    FreeResults();
} // ~FireStarter