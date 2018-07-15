#include <cuda.h>
#include <cuda_runtime.h>

#ifdef __CUDACC__
#define GPU_ENTRY(grid, block) <<<grid, block>>>
#else
// This is not used but keeps the preprocessor happy.
#define GPU_ENTRY(grid, block)
static uint3 blockIdx;
static dim3 blockDim;
static uint3 threadIdx;
#endif

__global__ void RaytraceGPU(unsigned char *pixels, const unsigned int width, const unsigned int height)
{
    unsigned int pixel = blockDim.x * blockIdx.x + threadIdx.x;
    unsigned int y = pixel / width;
    if (y < height) {
        unsigned int x = pixel % width;
        pixel *= 4;
        pixels[pixel + 0] = x & 255;
        pixels[pixel + 1] = y & 255;
        pixels[pixel + 2] = (x ^ y) & 255;
        pixels[pixel + 3] = 255;
    }
} // RaytraceGPU

extern "C" void RunRaytraceGPU(unsigned char *pixels, const unsigned int width, const unsigned int height)
{
    unsigned int size = width * height;
    unsigned int threadsPerBlock = 256;
    unsigned int blocksPerGrid = (size + threadsPerBlock - 1) / threadsPerBlock;
    RaytraceGPU GPU_ENTRY(blocksPerGrid, threadsPerBlock)(pixels, width, height);
    cudaError_t err = cudaGetLastError();
    if (err != cudaSuccess)
        exit(EXIT_FAILURE);
} // RunRaytraceGPU
