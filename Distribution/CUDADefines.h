#pragma once

#define WARP_THREADS 32
#define HALF_WARP_THREADS 16

#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#define MAX(a, b) ((a) >= (b) ? (a) : (b))

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
// Note: The actual pointer must be set in the host application.
__device__ int* g_GPUKillSwitch = &g_KillSwitchValue;

// FILE SCOPE: Visible to all functions in this NVRTC translation unit.
// Hardware still instantiates this per thread-block!
__shared__ bool g_s_GPUKillSwitch;

// Check the GPU kill switch and return true if it's set
inline bool GPUKillSwitch(void)
{
    return *(volatile int*)g_GPUKillSwitch != 0;
} // GPUKillSwitch

// If the counter anded with the mask is zer0, then set the shared kill switch to the global kill switch value.
// Return the current shared kill switch value.
inline bool SetSharedKillSwitch(unsigned int counter = 0, unsigned int mask = 0)
{
    if ((counter & mask) == mask) {
        if ((threadIdx.x == 0) && (threadIdx.y == 0) && (threadIdx.z == 0))
            g_s_GPUKillSwitch = GPUKillSwitch();
        __syncthreads();
    }
    return g_s_GPUKillSwitch;
} // SetSharedKillSwitch

inline bool CheckSharedKillSwitch(void)
{
    return g_s_GPUKillSwitch;
} // CheckSharedKillSwitch

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

// Check the GPU kill switch and return true if it's set
inline bool GPUKillSwitch(void)
{
    return *(volatile int*)g_GPUKillSwitch != 0;
} // GPUKillSwitch

// In the CPU simulation, we don't have shared memory, so we just return the global kill switch value.
inline bool SetSharedKillSwitch(unsigned int counter = 0, unsigned int mask = 0)
{
    return GPUKillSwitch();
} // SetSharedKillSwitch

// In the CPU simulation, we don't have shared memory, so we just return the global kill switch value.
inline bool CheckSharedKillSwitch(void)
{
    return GPUKillSwitch();
} // CheckSharedKillSwitch

#endif
