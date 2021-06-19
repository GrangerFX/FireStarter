#pragma once
#include <cuda.h>
#include <cuda_runtime.h>

#define PROGRAM_DATA 8
#define PROGRAM_ITERATIONS 16384
#define PROGRAM_POPULATION 262144
#define SAMPLE_ITERATIONS 15
#define MAX_RESULTS 16384
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 50
#define START_RESULT 10.0f
#define RESET_DATA 1

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
