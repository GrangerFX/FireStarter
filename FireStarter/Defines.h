#pragma once
#include <cuda.h>
#include <cuda_runtime.h>

#define RUN_GPU 1
#define RUN_TEST 0

#define BUFFER_WIDTH 640
#define BUFFER_HEIGHT 480

#ifdef __CUDACC__
#define GPU_FUNCTION __device__
#define GPU_ENTRY(grid, block) <<<grid, block>>>
#else
#include <math.h>
#define GPU_FUNCTION static inline
#define GPU_ENTRY(grid, block)
static uint3 blockIdx;
static dim3 blockDim;
static uint3 threadIdx;
#endif
