#pragma once

#ifdef __CUDACC__
#define GPU_FUNCTION __device__
#define GPU_GLOBAL extern "C" __global__
#define GPU_ENTRY(grid, block) <<<grid, block>>>
#define GPU_THREADFENCE() __threadfence()
#define GPU_SYNCTHREADS() __syncthreads
#else
#define CUDA_API_PER_THREAD_DEFAULT_STREAM
#include <cuda.h>
#include <cuda_runtime.h>
#include <math.h>
#define GPU_FUNCTION static inline
#define GPU_GLOBAL extern "C"
#define GPU_ENTRY(grid, block)
#define GPU_THREADFENCE()
#define GPU_SYNCTHREADS()
static uint3 blockIdx;
static dim3 blockDim;
static uint3 threadIdx;
#endif
