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
#include <cmath>
#include <atomic>
#define GPU_FUNCTION static inline
#define GPU_GLOBAL extern "C"
#define GPU_ENTRY(grid, block)
#define GPU_THREADFENCE()
#define GPU_SYNCTHREADS()
static uint3 blockIdx;
static dim3 blockDim;
static uint3 threadIdx;
inline float __int_as_float(int x) { union int_float { int i; float f; } u; u.i = x; return u.f; }
inline int __float_as_int(float x) { union int_float { int i; float f; } u; u.f = x; return u.i; }
inline float __uint_as_float(unsigned int x) { union int_float { unsigned int i; float f; } u; u.i = x; return u.f; }
inline unsigned int __float_as_uint(float x) { union int_float { unsigned int i; float f; } u; u.f = x; return u.i; }
// Note: Not thead safe! Code is to simply allow the cuda code to compile on the host.
inline int atomicMin(int* addr, int x) { int old = *addr; if (x < old) *addr = old; return old; }
inline int atomicMax(int* addr, int x) { int old = *addr; if (x > old) *addr = old; return old; }
inline unsigned int atomicMin(unsigned int* addr, unsigned int x) { unsigned int old = *addr; if (x < old) *addr = old; return old; }
inline unsigned int atomicMax(unsigned int* addr, unsigned int x) { unsigned int old = *addr; if (x > old) *addr = old; return old; }
#endif

// Reference: https://stackoverflow.com/questions/17399119/how-do-i-use-atomicmax-on-floating-point-values-in-cuda
inline float atomicMin(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMin((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMax((unsigned int*)addr, __float_as_uint(value)));
} // atomicMin

inline float atomicMax(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMax((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMin((unsigned int*)addr, __float_as_uint(value)));
} // atomicMax
