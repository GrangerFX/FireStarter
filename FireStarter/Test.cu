#include <cuda.h>
#include <cuda_runtime.h>
#include "Test.h"

__global__ void TestGPU(unsigned char *pixels, const unsigned int width, const unsigned int height)
{
    unsigned int pixel = blockDim.x * blockIdx.x + threadIdx.x;
    TestFunction(pixels, width, height, pixel);
} // RaytraceGPU

extern "C" void RunTest(unsigned char *pixels, const unsigned int width, const unsigned int height)
{
    unsigned int size = width * height;
#if RUN_GPU
    unsigned int threadsPerBlock = 256;
    unsigned int blocksPerGrid = (size + threadsPerBlock - 1) / threadsPerBlock;
    TestGPU GPU_ENTRY(blocksPerGrid, threadsPerBlock)(pixels, width, height);
    cudaDeviceSynchronize();
    cudaError_t err = cudaGetLastError();
    if (err != cudaSuccess)
        exit(EXIT_FAILURE);
#else
#ifndef __CUDACC__
    for (unsigned int pixel = 0; pixel < size; pixel++)
        TestFunction(pixels, width, height, pixel);
#endif
#endif
} // RunTest
