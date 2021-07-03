#include "FireStarter.h"
#include "PrintF.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdio.h>

// CUDA runtime
// CUDA utilities and system includes
#include <cuda_runtime.h>
#include <helper_functions.h>
#include <nvrtc.h>
#include <helper_cuda_drvapi.h>

#define NVRTC_SAFE_CALL(Name, x)                                \
  do {                                                          \
    nvrtcResult result = x;                                     \
    if (result != NVRTC_SUCCESS) {                              \
      std::cerr << "\nerror: " << Name << " failed with error " \
                << nvrtcGetErrorString(result);                 \
      exit(1);                                                  \
    }                                                           \
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

bool FireStarter::GetResults(void)
{
    if (results->numResults) {
        unsigned int numResults = results->numResults;
        if (numResults > MAX_RESULTS)
            numResults = MAX_RESULTS;
        unsigned int index = 0;
        float result = results->results[0].result;
        unsigned int member = results->results[0].member;
        for (unsigned int i = 1; i < numResults; i++) {
            float curResult = results->results[i].result;
            unsigned int curMember = results->results[i].member;
            if ((curResult < result) || ((curResult == result) && (curMember < member))) {
                result = curResult;
                member = curMember;
                index = i;
            }
        }

        results->bestData = results->results[index].data;
        results->curResult = result;
        if (result < curState->result) {
            curState->data = results->bestData;
            curState->result = result;
            lastGeneration = generation;
            states.push_back(*curState);
            if (result < bestState.result)
                return true;
        }
    }
    return false;
} // GetResults

bool FireStarter::GetResults1(void)
{
    if (results1->numResults) {
        unsigned int numResults = results1->numResults;
        if (numResults > MAX_RESULTS)
            numResults = MAX_RESULTS;
        unsigned int index = 0;
        float result = results1->results[0].result;
        unsigned int member = results1->results[0].member;
        for (unsigned int i = 1; i < numResults; i++) {
            float curResult = results1->results[i].result;
            unsigned int curMember = results1->results[i].member;
            if ((curResult < result) || ((curResult == result) && (curMember < member))) {
                result = curResult;
                member = curMember;
                index = i;
            }
        }

        results1->bestData = results1->results[index].data;
        results1->curResult = result;
     }
    return false;
} // GetResults1

void FireStarter::InitResults(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
    cudaError_t err = cudaMallocManaged(&results, resultsSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate results (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(results, 0, resultsSize);
} // InitResults

void FireStarter::InitResults1(void)
{
    unsigned int resultsSize = sizeof(FireStarterResults) + sizeof(FireStarterResult) * (MAX_RESULTS - 1);
    cudaError_t err = cudaMallocManaged(&results1, resultsSize);
    if (err != cudaSuccess) {
        fprintf(stderr, "Failed to allocate results1 (error code %s)!\n", cudaGetErrorString(err));
        exit(EXIT_FAILURE);
    }
    cudaMemset(results1, 0, resultsSize);
} // InitResults1

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
 } // FreeResults

void FireStarter::FreeResults1(void)
{
    if (results1) {
        cudaError_t err = cudaFree(results1);
        if (err != cudaSuccess) {
            fprintf(stderr, "Failed to free results1 (error code %s)!\n", cudaGetErrorString(err));
            exit(EXIT_FAILURE);
        }
        results1 = NULL;
    }
} // FreeResults1

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
#if RESET_DATA
    for (int i = 0; i < PROGRAM_DATA; i++)
        results->bestData.d[i] = 1.0f;
#else
    results->bestData = curState->data;
#endif
    results->minResult = curState->result;
    results->curResult = results->startResult = START_RESULT;
    results->numResults = 0;

    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    unsigned int variation = 0;
    void *arr[] = {reinterpret_cast<void*>(&curState),
                   reinterpret_cast<void*>(&results),
                   reinterpret_cast<void*>(&maxResults),
                   reinterpret_cast<void*>(&population),
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

    checkCudaErrors(cuCtxSynchronize());
} // RunProgram

void FireStarter::RunProgram1(unsigned int population, unsigned int maxResults)
{
    for (int i = 0; i < PROGRAM_DATA; i++)
        results1->bestData.d[i] = 1.0f;
    results1->minResult = results1->curResult;
    results1->curResult = results1->startResult = START_RESULT;
    results1->numResults = 0;

    // Launch the calculation kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (population + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    unsigned int variation = 1;
    void *arr[] = {reinterpret_cast<void*>(&curState),
                   reinterpret_cast<void*>(&results1),
                   reinterpret_cast<void*>(&maxResults),
                   reinterpret_cast<void*>(&population),
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

    checkCudaErrors(cuCtxSynchronize());
} // RunProgram1

void FireStarter::DrawGraph(void)
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

    void *arr[] = {reinterpret_cast<void*>(&results),
                   reinterpret_cast<void*>(&bestState.data),
                   reinterpret_cast<void*>(&theBuffer.base),
                   reinterpret_cast<void*>(&theBuffer.width),
                   reinterpret_cast<void*>(&theBuffer.height)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // DrawGraph

void FireStarter::DrawGraph1(void)
{
    // Launch the display kernel
    int threadsPerBlock = 32;
    int blocksPerGrid = (theBuffer.width + threadsPerBlock - 1) / threadsPerBlock;
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    CUfunction kernel_addr;
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "FireShow1"));

    void *arr[] = {reinterpret_cast<void*>(&results1),
                   reinterpret_cast<void*>(&theBuffer.base),
                   reinterpret_cast<void*>(&theBuffer.width),
                   reinterpret_cast<void*>(&theBuffer.height)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
} // DrawGraph1

void FireStarter::RandomProgram(void)
{
    unsigned int seed = (unsigned int)generation;
    seed = RANDOMHASH(seed) + 1;
    if (!states.size()) {
        cudaError_t err = cudaMallocManaged(&curState, sizeof(FireStarterState));
        for (int i = 0; i < PROGRAM_DATA; i++)
           curState->data.d[i] = 0.0f;
#if PROGRAM_FIXED
        curState->instructions[0].a = 1;
        curState->instructions[0].b = 0;
        curState->instructions[0].c = 2;
        curState->instructions[1].a = 1;
        curState->instructions[1].b = 2;
        curState->instructions[1].c = 3;
        curState->instructions[2].a = 0;
        curState->instructions[2].b = 1;
        curState->instructions[2].c = 0;
        curState->instructions[3].a = 5;
        curState->instructions[3].b = 2;
        curState->instructions[3].c = 0;
        curState->instructions[4].a = 1;
        curState->instructions[4].b = 3;
        curState->instructions[4].c = 3;
        curState->instructions[5].a = 2;
        curState->instructions[5].b = 2;
        curState->instructions[5].c = 4;
#else
        for (int i = 0; i < PROGRAM_DATA; i++) {
            curState->instructions.d[i].a = RANDOMSEED(seed) % PROGRAM_DATA;
            curState->instructions.d[i].b = RANDOMSEED(seed) % PROGRAM_DATA;
            curState->instructions.d[i].c = RANDOMSEED(seed) % PROGRAM_DATA;
        }
#endif
        curState->result = START_RESULT;
        states.push_back(*curState);
    } else {
        int state = (unsigned int)states.size() - 1;
        int numChanges = 1;
        long long bestAge = generation - bestGeneration;
        long long lastAge = generation - lastGeneration;
        if (state && (lastAge > SMART_DEVOLVE_AGE)) {
            states.pop_back();
            state--;
            lastGeneration = generation;
        }
        *curState = states[state];
#if DATA_FIXED
        for (int i = 0; i < PROGRAM_DATA; i++)
            curState->data[i] = 1.0f;
#endif
#if !PROGRAM_FIXED
        if (lastAge > SMART_EVOLVE_AGE)
            numChanges++;
        if (lastAge > SMART_EVOLVE_AGE * SMART_EVOLVE_AGE)
            numChanges++;
        while (numChanges--) {
            unsigned int i = RANDOMSEED(seed) % PROGRAM_DATA;
            unsigned int j = RANDOMSEED(seed) % 3;
            switch (j) {
                case 0:
                    curState->instructions.d[i].a = RANDOMSEED(seed) % PROGRAM_DATA;
                    break;
                case 1:
                    curState->instructions.d[i].b = RANDOMSEED(seed) % PROGRAM_DATA;
                    break;
                case 2:
                    curState->instructions.d[i].c = RANDOMSEED(seed) % PROGRAM_DATA;
                    break;
            }
        }
#endif
    }
    generation++;
} // RandomProgram

void FireStarter::MakeProgram(std::string& src)
{
    src += Format("#define PROGRAM_DATA %d\n", PROGRAM_DATA);
    src += Format("#define PROGRAM_ITERATIONS %d\n", PROGRAM_ITERATIONS);
    src += Format("#define SAMPLE_ITERATIONS %d\n", SAMPLE_ITERATIONS);
    src += Format("#define SMART_RANDOM_FACTOR %gf\n", SMART_RANDOM_FACTOR);
    src += Format("#define SMART_AGE_FACTOR %gf\n", SMART_AGE_FACTOR);
    src += Format("#define SMART_DEVOLVE_AGE %d\n", SMART_DEVOLVE_AGE);
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
           "    float d[PROGRAM_DATA];\n"
           "} FireStarterData;\n"
           "\n"
           "typedef struct {\n"
           "    int a, b, c;\n"
           "} FireStarterInstruction;\n"
           "\n"
           "typedef struct {\n"
           "    FireStarterInstruction d[PROGRAM_DATA];\n"
           "} FireStarterInstructions;\n"
           "\n"
           "typedef struct {\n"
           "    FireStarterInstructions instructions;\n"
           "    FireStarterData data;\n"
           "    float result;\n"
           "} FireStarterState;\n"
           "\n"
           "typedef struct {\n"
           "    FireStarterData data;\n"
           "    float result;\n"
           "    unsigned int member;\n"
           "} FireStarterResult;\n"
           "\n"
           "typedef struct {\n"
           "    unsigned int numResults;\n"
           "    float minResult;\n"
           "    float curResult;\n"
           "    float startResult;\n"
           "    FireStarterData bestData;\n"
           "    FireStarterResult results[1];\n"
           "} FireStarterResults;\n"
           "\n"
           "__device__ float Target(float n) {\n"
           "   return sinf(n);\n"
           "} // Target\n"
           "\n"
           "__device__ float Target1(float n) {\n"
           "   return sinf(n * 1.3f) + n * 0.1f;\n"
           "} // Target1\n"
           "\n"
           "__device__ float EvaluateInstructions(const FireStarterInstructions &instructions, const FireStarterData &curData, float r)\n"
           "{\n"
           "    __shared__ FireStarterData data;\n"
           "    data = curData;\n"
           "    data.d[0] = r;\n"
           "    for (int i = 0; i < PROGRAM_DATA; i++)\n"
           "        data.d[i] = data.d[instructions.d[i].a] + data.d[instructions.d[i].b] * data.d[instructions.d[i].c];\n"
           "    r = data.d[PROGRAM_DATA - 1];\n"
           "    return isnan(r) ? 0.0f : r;\n"
           "} // EvaluateInstructions\n"
           "\n"
           "extern \"C\" __global__ void FireStarter(const FireStarterState *state, FireStarterResults *results, const unsigned int maxResults, const unsigned int population, const unsigned int generation, const unsigned int variation)\n"
           "{\n"
           "    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;\n"
           "    if (member >= population)\n"
           "        return;\n"
           "    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);\n"
#if 0
           "    const FireStarterInstructions instructions = {\n";
    for (int i = 0; i < PROGRAM_DATA; i++)
        src += Format("        %d, %d, %d,\n", curState->instructions.d[i].a, curState->instructions.d[i].b, curState->instructions.d[i].c);
    src += "    };\n"
#else
           "    const FireStarterInstructions instructions(state->instructions);\n"
#endif
           "    FireStarterData curData;\n"
           "    curData = results->bestData;\n"
           "    float target[SAMPLE_ITERATIONS];\n"
           "    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {\n"
           "        float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);\n"
           "        target[i] = variation ? Target1(theta) : Target(theta);\n"
           "    }\n"
           "    float result = results->startResult;\n"
           "    unsigned int age = 0;\n"
           "    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {\n"
           "        unsigned int d = RANDOMSEED(seed) % PROGRAM_DATA;\n"
           "        float oldValue = curData.d[d];\n"
           "        curData.d[d] = oldValue + (RANDOMFACTOR(seed) * result * (1.0f + age * SMART_AGE_FACTOR) * SMART_RANDOM_FACTOR);\n"
           "        float curResult = 0.0f;\n"
           "        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {\n"
           "            float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);\n"
           "            float delta = fabsf(EvaluateInstructions(instructions, curData, theta) - target[i]);\n"
           "            curResult = delta > curResult ? delta : curResult;\n"
           "        }\n"
           "        if (curResult < result) {\n"
           "            result = curResult;\n"
           "            age = 0;\n"
           "        } else {\n"
           "            curData.d[d] = oldValue;\n"
           "            age++;\n"
           "        }\n"
           "    }\n"
           "    if (result < results->curResult) {\n"
           "        results->curResult = result;\n"
           "        unsigned int index = __uAtomicInc(&results->numResults, 0xFFFFFFFF);\n"
           "        if (index < maxResults) {\n"
           "            results->results[index].data = curData;\n"
           "            results->results[index].result = result;\n"
           "            results->results[index].member = member;\n"
           "        }\n"
           "    }\n"
           "} // FireStarter\n"
           "\n"
           "extern \"C\" __global__ void FireShow(const FireStarterResults *results, const FireStarterData bestData, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)\n"
           "{\n"
           "    const FireStarterInstructions instructions = {\n";
    for (int i = 0; i < PROGRAM_DATA; i++)
        src += Format("        %d, %d, %d,\n", curState->instructions.d[i].a, curState->instructions.d[i].b, curState->instructions.d[i].c);
    src += "    };\n"
           "    const FireStarterInstructions bestInstructions = {\n";
    for (int i = 0; i < PROGRAM_DATA; i++)
        src += Format("        %d, %d, %d,\n", bestState.instructions.d[i].a, bestState.instructions.d[i].b, bestState.instructions.d[i].c);
    src += "    };\n"
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
           "        int y = (int)(center + Target(theta) * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.x = 255;\n"
           "            pixel.y = 128;\n"
           "        };\n"
           "        y = (int)(center + EvaluateInstructions(instructions, results->bestData, theta) * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.z = 255;\n"
           "            pixel.y = 128;\n"
           "        };\n"
           "        y = (int)(center + EvaluateInstructions(bestInstructions, bestData, theta) * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.x = pixel.y = pixel.z = 255;\n"
           "        };\n"
           "    }\n"
           "} // FireShow\n"
           "\n"
           "extern \"C\" __global__ void FireShow1(const FireStarterResults *results, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)\n"
           "{\n"
           "    const FireStarterInstructions bestInstructions = {\n";
    for (int i = 0; i < PROGRAM_DATA; i++)
        src += Format("        %d, %d, %d,\n", bestState.instructions.d[i].a, bestState.instructions.d[i].b, bestState.instructions.d[i].c);
    src += "    };\n"
           "    int x = blockDim.x * blockIdx.x + threadIdx.x;\n"
           "    int xScale = bufferHeight / 8;\n"
           "    int yScale = bufferHeight / 16;\n"
           "    if (x < bufferWidth) {\n"
           "        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;\n"
           "        float center = bufferHeight * 0.33f;\n"
           "        int y = (int)(center + Target1(theta) * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.x = 255;\n"
           "            pixel.y = 128;\n"
           "        };\n"
           "        y = (int)(center + EvaluateInstructions(bestInstructions, results->bestData, theta) * yScale);\n"
           "        if ((y >= 0) && (y < bufferHeight)) {\n"
           "            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);\n"
           "            pixel.x = pixel.y = pixel.z = 255;\n"
           "        };\n"
           "    }\n"
           "} // FireShow1\n";
} // MakeProgram

void FireStarter::RenderImage(HWND hwnd)
{
    timer.Start();
    bool update = false;
    if (bestState.result >= 1.0E-6f) {
        RandomProgram();
        std::string code;
        MakeProgram(code);
        CompileProgram(code.c_str());
        RunProgram(PROGRAM_POPULATION, MAX_RESULTS);
        update = GetResults();
    }

    if (results->numResults) {
        DrawGraph();
        DrawGraph1();
        if (update) {
            RunProgram1(PROGRAM_POPULATION, MAX_RESULTS);
            GetResults1();
            bestState = *curState;
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
    sprintf_s(statusString, "FireStarter: Generation=%lld  States=%lld  Age=%lld  Error=%f  Best Age %lld  Best=%f  Time=%.4f Seconds", generation, states.size(), generation - lastGeneration, curState->result, generation - bestGeneration, bestState.result, time);
#if 0
    if (update) {
        printf("// %s\n", statusString);
        printf("// generation=%d  data: ", generation);
        for (int i = 0; i < PROGRAM_DATA; i++)
            printf("%f ", curState->data[i]);
        printf("\n");
        printf("%s\n\n", code.c_str());
    }
#endif
} // RenderImage

void FireStarter::Init(unsigned long width, unsigned long height)
{
    strcpy_s(statusString, "Initializing...");

    InitFrameBuffer(theBuffer, width, height);
    InitResults();
    InitResults1();
    generation = 0;
    lastGeneration = 0;
    bestGeneration = 0;
    RandomProgram();
    bestState = *curState;
} // Init

FireStarter::FireStarter(void)
{
    // Timer ID
    statusString[0] = 0;
    results = NULL;
    results1 = NULL;
    module = NULL;
} // FireStarter

FireStarter::~FireStarter(void)
{
    if (module)
        checkCudaErrors(cuModuleUnload(module));
    FreeFrameBuffer(theBuffer);
    FreeResults();
    FreeResults1();
} // ~FireStarter