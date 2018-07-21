#include "FireStarter.h"
#include "Test.h"
#include "PrintF.h"

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
GPU_FUNCTION unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#if 1
#define RANDOMSEED(seed) Hash(seed++)
#else
#define RANDOMSEED(seed) ((seed) = (unsigned int)((int)(seed) * 1103515245 + 12345))	// pick a new random seed
#endif
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5

const char *program =
"   extern \"C\" __global__ void RaytraceGPU(unsigned char *pixels, const unsigned int width, const unsigned int height)    \n"
"   {                                                                                                                       \n"
"       unsigned int pixel = blockDim.x * blockIdx.x + threadIdx.x;                                                         \n"
"       unsigned int y = pixel / width;                                                                                     \n"
"       if (y < height) {                                                                                                   \n"
"           unsigned int x = pixel % width;                                                                                 \n"
"           pixel *= 4;                                                                                                     \n"
"           pixels[pixel + 0] = x & 255;                                                                                    \n"
"           pixels[pixel + 1] = y & 255;                                                                                    \n"
"           pixels[pixel + 2] = (x ^ y) & 255;                                                                              \n"
"           pixels[pixel + 3] = 255;                                                                                        \n"
"       }                                                                                                                   \n"
"   } // RaytraceGPU                                                                                                        \n";

FireStarter::FireStarter(void)
{
    // Timer ID
    haveDoubles = false;
    numSMs = 0;                     // number of multiprocessors

    statusString[0] = 0;
} // FireStarter

void FireStarter::InitFrameBuffer(FrameBuffer &buffer, unsigned long width, unsigned long height)
{
	buffer.width = width;
	buffer.height = height;
	buffer.rowbytes = width * 4;
    buffer.base = NULL;

    cudaError_t err = cudaMallocManaged(&buffer.base, BUFFER_WIDTH * BUFFER_HEIGHT * 4);
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

void FireStarter::CompileAndRun(const char *source, unsigned char *buffer, unsigned int width, unsigned int height)
{
    // Compile CUDA program (from compileFileToPTX() in nvrtc_helper.h)
    nvrtcProgram prog;
    NVRTC_SAFE_CALL("nvrtcCreateProgram", nvrtcCreateProgram(&prog, program, "FireStarter", 0, NULL, NULL));
    nvrtcResult res = nvrtcCompileProgram(prog, 0, NULL);
    NVRTC_SAFE_CALL("nvrtcCompileProgram", res);

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
    printf("Data initialization done.\n");

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
    checkCudaErrors(cuModuleGetFunction(&kernel_addr, module, "RaytraceGPU"));

    // Launch the kernel
    int threadsPerBlock = 256;
    int blocksPerGrid = (width * height + threadsPerBlock - 1) / threadsPerBlock;
    printf("CUDA kernel launch with %d blocks of %d threads\n", blocksPerGrid, threadsPerBlock);
    dim3 cudaBlockSize(threadsPerBlock, 1, 1);
    dim3 cudaGridSize(blocksPerGrid, 1, 1);

    void *arr[] = {reinterpret_cast<void *>(&buffer),
                    reinterpret_cast<void *>(&width),
                    reinterpret_cast<void *>(&height)};

    checkCudaErrors(cuLaunchKernel(kernel_addr,
        cudaGridSize.x, cudaGridSize.y, cudaGridSize.z,     // grid dim */
        cudaBlockSize.x, cudaBlockSize.y, cudaBlockSize.z,  // block dim */
        0, 0,                                               // shared mem, stream */
        &arr[0],                                            // arguments */
        0));

    checkCudaErrors(cuCtxSynchronize());
    checkCudaErrors(cuModuleUnload(module));
} // CompileAndRun

void FireStarter::RenderImage(void)
{
    timer.Start();

    if (RUN_GPU) {
#if 1
        CompileAndRun(program, theBuffer.base, BUFFER_WIDTH, BUFFER_HEIGHT);
#else
        RunTest(theBuffer.base, RAYTRACE_WIDTH, RAYTRACE_HEIGHT);
#endif
    } else
        RunTest(theBuffer.base, BUFFER_WIDTH, BUFFER_HEIGHT);
    double time = timer.Duration();
    sprintf_s(statusString, "Time=%.2f Seconds\n", time * 0.001);
} // RenderImage

void FireStarter::Draw(HWND hwnd)
{
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
        printf(statusString);
	    GdiFlush();
    }
} // Draw

void FireStarter::InitData(int argc, char **argv)
{
    // check for hardware double precision support
    int dev = 0;
    dev = findCudaDevice(argc, (const char **)argv);

    cudaDeviceProp deviceProp;
    checkCudaErrors(cudaGetDeviceProperties(&deviceProp, dev));
    int version = deviceProp.major*10 + deviceProp.minor;

    if (version < 11) {
        printf("GPU compute capability is too low (1.0), program is waived\n");
        exit(EXIT_WAIVED);
    }

    haveDoubles = (version >= 13);
    numSMs = deviceProp.multiProcessorCount;

    InitFrameBuffer(theBuffer, BUFFER_WIDTH, BUFFER_HEIGHT);
} // InitData