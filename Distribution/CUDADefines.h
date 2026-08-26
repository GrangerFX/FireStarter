#pragma once

#define WARP_THREADS 32
#define HALF_WARP_THREADS 16

#ifdef __CUDACC__

#define GPU_FUNCTION __device__
#define GPU_GLOBAL extern "C" __global__
#define GPU_ENTRY(grid, block) <<<grid, block>>>
#define GPU_THREADFENCE() __threadfence()
#define GPU_SYNCTHREADS() __syncthreads()
#define GPU_SYNCWARP() __syncwarp()
#define GPU_SHARED __shared__
#define nullptr 0

// Define a device-side integer initialized to 0 in global memory
__device__ int g_KillSwitchValue = 0;

// Initialize g_GPUKillSwitch to point to this safe default location
__device__ int* g_GPUKillSwitch = &g_KillSwitchValue;

// Macro to check the GPU kill switch and return if it's set
#define GPU_KILL_SWITCH (*(volatile int*)g_GPUKillSwitch != 0)

#else

#define CUDA_API_PER_THREAD_DEFAULT_STREAM
#include <cuda.h>
#include <vector_types.h>
#include <cmath>
#include <atomic>
#define GPU_FUNCTION static inline
#define GPU_GLOBAL inline
#define GPU_ENTRY(grid, block)
#define GPU_THREADFENCE()
#define GPU_SYNCTHREADS()
#define GPU_SYNCWARP()
#define GPU_SHARED
extern uint3 threadIdx;
extern uint3 blockIdx;
extern dim3 blockDim;
inline float __int_as_float(int x) { union int_float { int i; float f; } u; u.i = x; return u.f; }
inline int __float_as_int(float x) { union int_float { int i; float f; } u; u.f = x; return u.i; }
inline float __uint_as_float(unsigned int x) { union int_float { unsigned int i; float f; } u; u.i = x; return u.f; }
inline unsigned int __float_as_uint(float x) { union int_float { unsigned int i; float f; } u; u.f = x; return u.i; }

// Define a device-side integer initialized to 0 in global memory
static int g_KillSwitchValue = 0;

// Initialize g_GPUKillSwitch to point to this safe default location
static int* g_GPUKillSwitch = &g_KillSwitchValue;

// Macro to check the GPU kill switch and return if it's set
#define GPU_KILL_SWITCH (*(volatile int*)g_GPUKillSwitch != 0)

#endif

#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))
