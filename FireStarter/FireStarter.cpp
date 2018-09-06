#include "FireStarter.h"
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

bool FireStarter::GetResults(void)
{
    if (results->numResults) {
        unsigned int numResults = results->numResults;
        if (numResults > MAX_RESULTS)
            numResults = MAX_RESULTS;
        unsigned int index = 0;
        float error = results->results[0].error;
        unsigned int member = results->results[0].member;
        for (unsigned int i = 1; i < numResults; i++) {
            float curError = results->results[i].error;
            unsigned int curMember = results->results[i].member;
            if ((curError < error) || ((curError == error) && (curMember < member))) {
                error = curError;
                member = curMember;
                index = i;
            }
        }

        results->bestData = results->results[index].data;
        results->curError = error;
        if (error < curState.error) {
            curState.data = results->bestData;
            curState.error = error;
            lastGeneration = generation;
            states.push_back(curState);
            if (error < bestState.error) {
                bestState = curState;
                bestGeneration = generation;
                return true;
            }
        }
    }
    return false;
} // GetResults

void FireStarter::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
    cudaError_t err = cudaMallocManaged(&results, resultsSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate results (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(results, 0, resultsSize);

    unsigned int valuesSize = theBuffer.width * sizeof(float);
    err = cudaMallocManaged(&lastValues, valuesSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate lastValues (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(lastValues, 0, valuesSize);

    err = cudaMallocManaged(&bestValues, valuesSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate bestValues (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(bestValues, 0, valuesSize);
} // InitResults

void FireStarter::FreeResults(void)
{
    if (results) {
        cudaError_t err = cudaFree(results);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free results (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        results = NULL;
    }
    if (lastValues) {
        cudaError_t err = cudaFree(lastValues);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free lastValues (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        lastValues = NULL;
   }
    if (bestValues) {
        cudaError_t err = cudaFree(bestValues);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free bestValues (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        bestValues = NULL;
   }
} // FreeResults

void FireStarter::CompileProgram(const char *source)
{
    if (module) {
        checkCudaErrors(cuModuleUnload(module));
        module = NULL;
    }

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

    checkCudaErrors(cuModuleLoadDataEx(&module, ptx, 0, 0, 0));
    free(ptx);
    ptx = NULL;
} // CompileProgram

void FireStarter::RunProgram(unsigned int population, unsigned int maxResults)
{
    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void *arr[] = {reinterpret_cast<void *>(&results),
                   reinterpret_cast<void *>(&maxResults),
                   reinterpret_cast<void *>(&population),
                   reinterpret_cast<void *>(&generation)};

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireStarterGPU"));

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // RunProgram

void FireStarter::DrawGraph(bool update)
{
    // Erase the frame buffer
    EraseFrameBuffer(theBuffer);

    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (theBuffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void *arr[] = {reinterpret_cast<void *>(&results),
                   reinterpret_cast<void *>(update ? &bestValues : &lastValues),
                   reinterpret_cast<void *>(&bestValues),
                   reinterpret_cast<void *>(&theBuffer.base),
                   reinterpret_cast<void *>(&theBuffer.width),
                   reinterpret_cast<void *>(&theBuffer.height)};

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireShowGPU"));

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // DrawGraph

void FireStarter::RandomProgram(void)
{
    unsigned int seed = (unsigned int)generation;
    seed = RANDOMHASH(seed) + 1;
    if (!states.size()) {
        for (int i = 0; i < PROGRAM_DATA; i++)
           curState.data[i] = RANDOMFACTOR(seed);
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
            curState.instructions[i].instruction = (Instruction)(RANDOMSEED(seed) % NumInstructions);
            curState.instructions[i].d = RANDOMSEED(seed) % PROGRAM_DATA;
        }
        curState.error = START_ERROR;
        states.push_back(curState);
    } else {
        int state = (unsigned int)states.size() - 1;
        int numChanges = 1;
        long long bestAge = generation - bestGeneration;
        long long lastAge = generation - lastGeneration;
        if (lastAge > SMART_EVOLVE_AGE)
            numChanges++;
        if (lastAge > SMART_EVOLVE_AGE * SMART_EVOLVE_AGE)
            numChanges++;
        if (state && (lastAge > SMART_DEVOLVE_AGE)) {
            states.pop_back();
            state--;
            lastGeneration = generation;
        }
        curState = states[state];
        while (numChanges--) {
            unsigned int index = RANDOMSEED(seed) % PROGRAM_INSTRUCTIONS;
            curState.instructions[index].instruction = (Instruction)(RANDOMSEED(seed) % NumInstructions);
            curState.instructions[index].d = RANDOMSEED(seed) % PROGRAM_DATA;
        }
    }
//  memset(results, 0, sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1));
    results->bestData = curState.data;
    results->minError = curState.error;
    results->curError = results->startError = START_ERROR;
    results->numResults = 0;
    generation++;
} // RandomProgram

void FireStarter::MakeProgram(std::string &src)
{
    src += Format("#define PROGRAM_DATA %d\n", PROGRAM_DATA);
    src += Format("#define PROGRAM_ITERATIONS %d\n", PROGRAM_ITERATIONS);
    src += Format("#define SAMPLE_ITERATIONS %d\n", SAMPLE_ITERATIONS);
    src += Format("#define SMART_RANDOM_FACTOR %gf\n", SMART_RANDOM_FACTOR);
    src += Format("#define SMART_AGE_FACTOR %gf\n", SMART_AGE_FACTOR);
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
           "    unsigned int member;\n"
           "} FireStarterResult;\n"
           "\n"
           "typedef struct FireStarterResults {\n"
           "    unsigned int numResults;\n"
           "    float minError;\n"
           "    float curError;\n"
           "    float startError;\n"
           "    FireStarterData bestData;\n"
           "    FireStarterResult results[1];\n"
           "} FireStarterResults;\n"
           "\n"
           "__device__ float Target(float n) {\n"
           "   return sinf(n);\n"
           "}\n"
           "\n"
           "__device__ float Evaluate(const FireStarterData &workData, float r)\n"
           "{\n"
           "    FireStarterData data(workData);\n";

    for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        const ProgramInstruction &instruction = curState.instructions[i];
        switch (instruction.instruction) {
            case Instruction_store:
                src += Format("    data[%d] = r;\n", instruction.d);
                break;
            case Instruction_fetch:
                src += Format("    r = data[%d];\n", instruction.d);
                break;
            case Instruction_square:
                src += Format("    r *= r;\n");
                break;
            case Instruction_add:
                src += Format("    r += data[%d];\n", instruction.d);
                break;
            case Instruction_subtract:
                src += Format("    r -= data[%d];\n", instruction.d);
                break;
            case Instruction_multiply:
                src += Format("    r *= data[%d];\n", instruction.d);
                break;
            case Instruction_divide:
                src += Format("    r /= data[%d];\n", instruction.d);
                break;
            case Instruction_max:
                src += Format("    r = r >= data[%d] ? r : data[%d];\n", instruction.d, instruction.d);
                break;
            case Instruction_min:
                src += Format("    r = r <= data[%d] ? r : data[%d];\n", instruction.d, instruction.d);
                break;
        }
    }
    src += "    return isnan(r) ? 0.0f : r;\n"
           "} // Evaluate\n"
           "\n"
           "extern \"C\" __global__ void FireStarterGPU(FireStarterResults *results, const unsigned int maxResults, const unsigned int population, const unsigned int generation)\n"
           "{\n"
           "    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;\n"
           "    if (member >= population)\n"
           "        return;\n"
           "    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);\n"
           "    FireStarterData data(results->bestData);\n"
           "    float error = results->startError;\n"
           "    unsigned int age = 0;\n"
           "    unsigned int d = 0;\n"
           "    float oldValue = data[d];\n"
           "    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {\n"
           "        float curError = fabsf(Evaluate(data, 0.0f) - Target(0.0f));\n"
           "        for (int i = 1; i < SAMPLE_ITERATIONS; i++) {\n"
           "            float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);\n"
           "            float delta = fabsf(Evaluate(data, theta) - Target(theta));\n"
           "            curError = delta > curError ? delta : curError;\n"
           "        }\n"
           "        if (curError < error) {\n"
           "            error = curError;\n"
           "            age = 0;\n"
           "        } else {\n"
           "            data[d] = oldValue;\n"
           "            age++;\n"
           "        }\n"
           "        d = RANDOMSEED(seed) % PROGRAM_DATA;\n"
           "        oldValue = data[d];\n"
           "        data[d] += (RANDOMFACTOR(seed) * error * (1.0f + age * SMART_AGE_FACTOR) * SMART_RANDOM_FACTOR);\n"
           "    }\n"
           "    data[d] = oldValue;\n"
           "    if (error < results->curError) {\n"
           "        results->curError = error;\n"
           "        unsigned int index = __uAtomicInc(&results->numResults, 0xFFFFFFFF);\n"
           "        if (index < maxResults) {\n"
           "            results->results[index].data = data;\n"
           "            results->results[index].error = error;\n"
           "            results->results[index].member = member;\n"
           "        }\n"
           "    }\n"
           "} // FireStarterGPU\n"
           "\n"
           "extern \"C\" __global__ void FireShowGPU(FireStarterResults *results, float *lastValues, float *bestValues, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)\n"
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
           "        float n = Target(theta);\n"
           "        int y = (int)(bufferHeight * 0.5 + n * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.x = 255;\n"
           "            pixel.y = 128;\n"
           "        };\n"
           "        float m = lastValues[x] = Evaluate(results->bestData, theta);\n"
           "        y = (int)(bufferHeight * 0.5 + m * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.z = 255;\n"
           "            pixel.y = 128;\n"
           "       };\n"
           "       float o = bestValues[x];\n"
           "       y = (int)(bufferHeight * 0.5 + o * yScale);\n"
           "       if ((y >= 0) && (y < bufferHeight)) {\n"
           "           uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "           pixel.x = pixel.y = pixel.z = 255;\n"
           "       };\n"
           "   }\n"
           "} // FireShowGPU\n";
} // MakeProgram

void FireStarter::RenderImage(HWND hwnd)
{
    if (bestState.error < 1.0E-6f)
        return;
    timer.Start();
    RandomProgram();
    std::string code;
    MakeProgram(code);
    CompileProgram(code.c_str());
    RunProgram(PROGRAM_POPULATION, MAX_RESULTS);
    bool update = GetResults();

    if (results->numResults) {
        DrawGraph(update);

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
    sprintf_s(statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error=%f  Best Age %lld  Best=%f  Time=%.4f Seconds", generation, states.size(), generation - lastGeneration, curState.error, generation - bestGeneration, bestState.error, time);
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

void FireStarter::Init(unsigned long width, unsigned long height)
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

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    generation = 0;
    lastGeneration = 0;
    bestGeneration = 0;
    RandomProgram();
    bestState = curState;
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    statusString[0] = 0;
    results = NULL;
    lastValues = NULL;
    bestValues = NULL;
    module = NULL;
} // FireStarter

FireStarter::~FireStarter(void)
{
    if (module)
        checkCudaErrors(cuModuleUnload(module));
    FreeFrameBuffer(theBuffer);
    FreeResults();
} // ~FireStarter