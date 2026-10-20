#pragma once

#ifdef __CUDACC__
#define GPU_FUNCTION __device__ __inline__
#define GPU_GLOBAL extern "C" __global__
#define GPU_ENTRY(grid, block) <<<grid, block>>>
#define GPU_THREADFENCE() __threadfence()
#define GPU_SYNCTHREADS() __syncthreads()
#define GPU_SHARED __shared__
#define nullptr 0
#else
#define CUDA_API_PER_THREAD_DEFAULT_STREAM
#include <cuda.h>
#include <cuda_runtime.h>
#include <cmath>
#include <atomic>
#define GPU_FUNCTION static inline
#define GPU_GLOBAL inline // Note: Different in FireStarter.
#define GPU_ENTRY(grid, block)
#define GPU_THREADFENCE()
#define GPU_SYNCTHREADS()
#define GPU_SHARED
const uint3 blockIdx = { 0, 0, 0 };
const dim3 blockDim = { 1, 1, 1 };
const uint3 threadIdx = { 0, 0, 0 };
inline float __int_as_float(int x) { union int_float { int i; float f; } u; u.i = x; return u.f; }
inline int __float_as_int(float x) { union int_float { int i; float f; } u; u.f = x; return u.i; }
inline float __uint_as_float(unsigned int x) { union int_float { unsigned int i; float f; } u; u.i = x; return u.f; }
inline unsigned int __float_as_uint(float x) { union int_float { unsigned int i; float f; } u; u.f = x; return u.i; }
#endif
#include <mma.h>	// Defines half

// GPU configuration.
#define CUDA_WARP_SIZE 32

// MMA matrix size
#define MMA_SIZE 16
#define MMA_ARRAY_SIZE (MMA_SIZE * MMA_SIZE)

#ifndef ABS
#define ABS(n) ((n) < 0 ? -(n) : (n))
#endif

#ifndef MIN
#define MIN(a,b) ((a <= b) ? a : b)
#endif

#ifndef MAX
#define MAX(a,b) ((a >= b) ? a : b)
#endif

#ifndef MAX3
#define MAX3(a,b,c) ((a) >= (b) ? ((a) >= (c) ? a : c) : ((b) >= (c) ? b : c))
#endif

#ifndef MIN3
#define MIN3(a,b,c) ((a) <= (b) ? ((a) <= (c) ? a : c) : ((b) <= (c) ? b : c))
#endif

#ifndef CLAMP
#define CLAMP(n, min, max) ((n <= min) ? min : (n >= max) ? max : n)
#endif

#ifndef FLT_MAX
#define FLT_MAX          3.402823466e+38F        // max value
#endif

#ifndef FLT_MIN
#define FLT_MIN          1.175494351e-38F        // min normalized positive value
#endif

#ifndef PI
#define PI 3.14159265358979323846f
#endif

#ifndef PIFAC
#define PIFAC (PI / 180.0f)
#endif

GPU_FUNCTION int Max(int a, int b)
{
	return a > b ? a : b;
}

GPU_FUNCTION int Min(int a, int b)
{
	return a < b ? a : b;
}

GPU_FUNCTION long long Max(long long a, long long b)
{
	return a > b ? a : b;
}

GPU_FUNCTION long long Min(long long a, long long b)
{
	return a < b ? a : b;
}

GPU_FUNCTION unsigned int Max(unsigned int a, unsigned int b)
{
	return a > b ? a : b;
}

GPU_FUNCTION unsigned int Min(unsigned int a, unsigned int b)
{
	return a < b ? a : b;
}

GPU_FUNCTION unsigned long long Max(unsigned long long a, unsigned long long b)
{
	return a > b ? a : b;
}

GPU_FUNCTION unsigned long long Min(unsigned long long a, unsigned long long b)
{
	return a < b ? a : b;
}


/** lerp */
GPU_FUNCTION float lerp(const float a, const float b, const float t)
{
	return a + t * (b - a);
}

/** bilerp */
GPU_FUNCTION float bilerp(const float x00, const float x10, const float x01, const float x11,
	const float u, const float v)
{
	return lerp(lerp(x00, x10, u), lerp(x01, x11, u), v);
}

template <typename IntegerType>
GPU_FUNCTION IntegerType roundUp(IntegerType x, IntegerType y)
{
	return ((x + y - 1) / y) * y;
}

/** half3 -- currently missing from the CUDA SDK. **/
struct __device_builtin__ __align__(2) half3 { half x, y, z; };

GPU_FUNCTION half3 make_half3(half x, half y, half z) { half3 t; t.x = x; t.y = y; t.z = z; return t; }
GPU_FUNCTION half3 make_half3(half v) { half3 t; t.x = v; t.y = v; t.z = v; return t; }
GPU_FUNCTION half3 make_half3(float f0, float f1, float f2) { half3 t; t.x = __float2half(f0); t.y = __float2half(f1); t.z = __float2half(f2); return t; }

/** half4 -- currently missing from the CUDA SDK. **/
struct __device_builtin__ __align__(8) half4 { half x, y, z, w; };

GPU_FUNCTION half4 make_half4(half x, half y, half z, half w) { half4 t; t.x = x; t.y = y; t.z = z; t.w = w; return t; }
GPU_FUNCTION half4 make_half4(half v) { half4 t; t.x = v; t.y = v; t.z = v; t.w = v; return t; }
GPU_FUNCTION half4 make_half4(float f0, float f1, float f2, float f3) { half4 t; t.x = __float2half(f0); t.y = __float2half(f1); t.z = __float2half(f2); t.w = __float2half(f3); return t; }

/** clamp */
GPU_FUNCTION float clamp(const float f, const float a, const float b)
{
	return fmaxf(a, fminf(f, b));
}


/* float2 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION float2 make_float2(const float s)
{
	return make_float2(s, s);
}
GPU_FUNCTION float2 make_float2(const int2& a)
{
	return make_float2(float(a.x), float(a.y));
}
GPU_FUNCTION float2 make_float2(const uint2& a)
{
	return make_float2(float(a.x), float(a.y));
}
/** @} */

/** negate */
GPU_FUNCTION float2 operator-(const float2& a)
{
	return make_float2(-a.x, -a.y);
}

/** Min
* @{
*/
GPU_FUNCTION float2 fminf(const float2& a, const float2& b)
{
	return make_float2(fminf(a.x, b.x), fminf(a.y, b.y));
}
GPU_FUNCTION float fminf(const float2& a)
{
	return fminf(a.x, a.y);
}
/** @} */

/** Max
* @{
*/
GPU_FUNCTION float2 fmaxf(const float2& a, const float2& b)
{
	return make_float2(fmaxf(a.x, b.x), fmaxf(a.y, b.y));
}
GPU_FUNCTION float fmaxf(const float2& a)
{
	return fmaxf(a.x, a.y);
}
/** @} */

/** add
* @{
*/
GPU_FUNCTION float2 operator+(const float2& a, const float2& b)
{
	return make_float2(a.x + b.x, a.y + b.y);
}
GPU_FUNCTION float2 operator+(const float2& a, const float b)
{
	return make_float2(a.x + b, a.y + b);
}
GPU_FUNCTION float2 operator+(const float a, const float2& b)
{
	return make_float2(a + b.x, a + b.y);
}
GPU_FUNCTION void operator+=(float2& a, const float2& b)
{
	a.x += b.x; a.y += b.y;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION float2 operator-(const float2& a, const float2& b)
{
	return make_float2(a.x - b.x, a.y - b.y);
}
GPU_FUNCTION float2 operator-(const float2& a, const float b)
{
	return make_float2(a.x - b, a.y - b);
}
GPU_FUNCTION float2 operator-(const float a, const float2& b)
{
	return make_float2(a - b.x, a - b.y);
}
GPU_FUNCTION void operator-=(float2& a, const float2& b)
{
	a.x -= b.x; a.y -= b.y;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION float2 operator*(const float2& a, const float2& b)
{
	return make_float2(a.x * b.x, a.y * b.y);
}
GPU_FUNCTION float2 operator*(const float2& a, const float s)
{
	return make_float2(a.x * s, a.y * s);
}
GPU_FUNCTION float2 operator*(const float s, const float2& a)
{
	return make_float2(a.x * s, a.y * s);
}
GPU_FUNCTION void operator*=(float2& a, const float2& s)
{
	a.x *= s.x; a.y *= s.y;
}
GPU_FUNCTION void operator*=(float2& a, const float s)
{
	a.x *= s; a.y *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION float2 operator/(const float2& a, const float2& b)
{
	return make_float2(a.x / b.x, a.y / b.y);
}
GPU_FUNCTION float2 operator/(const float2& a, const float s)
{
	float inv = 1.0f / s;
	return a * inv;
}
GPU_FUNCTION float2 operator/(const float s, const float2& a)
{
	return make_float2(s / a.x, s / a.y);
}
GPU_FUNCTION void operator/=(float2& a, const float s)
{
	float inv = 1.0f / s;
	a *= inv;
}
/** @} */

/** lerp */
GPU_FUNCTION float2 lerp(const float2& a, const float2& b, const float t)
{
	return a + t * (b - a);
}

/** bilerp */
GPU_FUNCTION float2 bilerp(const float2& x00, const float2& x10, const float2& x01, const float2& x11,
	const float u, const float v)
{
	return lerp(lerp(x00, x10, u), lerp(x01, x11, u), v);
}

/** clamp
* @{
*/
GPU_FUNCTION float2 clamp(const float2& v, const float a, const float b)
{
	return make_float2(clamp(v.x, a, b), clamp(v.y, a, b));
}

GPU_FUNCTION float2 clamp(const float2& v, const float2& a, const float2& b)
{
	return make_float2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}
/** @} */

/** dot product */
GPU_FUNCTION float dot(const float2& a, const float2& b)
{
	return a.x * b.x + a.y * b.y;
}

/** length */
GPU_FUNCTION float length(const float2& v)
{
	return sqrtf(dot(v, v));
}

/** normalize */
GPU_FUNCTION float2 normalize(const float2& v)
{
	float invLen = 1.0f / sqrtf(dot(v, v));
	return v * invLen;
}

/** floor */
GPU_FUNCTION float2 floor(const float2& v)
{
	return make_float2(::floorf(v.x), ::floorf(v.y));
}

/** reflect */
GPU_FUNCTION float2 reflect(const float2& i, const float2& n)
{
	return i - 2.0f * n * dot(n, i);
}

/** Faceforward
* Returns N if dot(i, nref) > 0; else -N;
* Typical usage is N = faceforward(N, -ray.dir, N);
* Note that this is opposite of what faceforward does in Cg and GLSL */
GPU_FUNCTION float2 faceforward(const float2& n, const float2& i, const float2& nref)
{
	return n * copysignf(1.0f, dot(i, nref));
}

/** exp */
GPU_FUNCTION float2 expf(const float2& v)
{
	return make_float2(::expf(v.x), ::expf(v.y));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION float getByIndex(const float2& v, int i)
{
	return ((float*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(float2& v, int i, float x)
{
	((float*)(&v))[i] = x;
}


/* float3 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION float3 make_float3(const float s)
{
	return make_float3(s, s, s);
}
GPU_FUNCTION float3 make_float3(const float2& a)
{
	return make_float3(a.x, a.y, 0.0f);
}
GPU_FUNCTION float3 make_float3(const int3& a)
{
	return make_float3(float(a.x), float(a.y), float(a.z));
}
GPU_FUNCTION float3 make_float3(const uint3& a)
{
	return make_float3(float(a.x), float(a.y), float(a.z));
}
/** @} */

/** negate */
GPU_FUNCTION float3 operator-(const float3& a)
{
	return make_float3(-a.x, -a.y, -a.z);
}

/** Min
* @{
*/
GPU_FUNCTION float3 fminf(const float3& a, const float3& b)
{
	return make_float3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z));
}
GPU_FUNCTION float fminf(const float3& a)
{
	return fminf(fminf(a.x, a.y), a.z);
}
/** @} */

/** Max
* @{
*/
GPU_FUNCTION float3 fmaxf(const float3& a, const float3& b)
{
	return make_float3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z));
}
GPU_FUNCTION float fmaxf(const float3& a)
{
	return fmaxf(fmaxf(a.x, a.y), a.z);
}
/** @} */

/** add
* @{
*/
GPU_FUNCTION float3 operator+(const float3& a, const float3& b)
{
	return make_float3(a.x + b.x, a.y + b.y, a.z + b.z);
}
GPU_FUNCTION float3 operator+(const float3& a, const float b)
{
	return make_float3(a.x + b, a.y + b, a.z + b);
}
GPU_FUNCTION float3 operator+(const float a, const float3& b)
{
	return make_float3(a + b.x, a + b.y, a + b.z);
}
GPU_FUNCTION void operator+=(float3& a, const float3& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION float3 operator-(const float3& a, const float3& b)
{
	return make_float3(a.x - b.x, a.y - b.y, a.z - b.z);
}
GPU_FUNCTION float3 operator-(const float3& a, const float b)
{
	return make_float3(a.x - b, a.y - b, a.z - b);
}
GPU_FUNCTION float3 operator-(const float a, const float3& b)
{
	return make_float3(a - b.x, a - b.y, a - b.z);
}
GPU_FUNCTION void operator-=(float3& a, const float3& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION float3 operator*(const float3& a, const float3& b)
{
	return make_float3(a.x * b.x, a.y * b.y, a.z * b.z);
}
GPU_FUNCTION float3 operator*(const float3& a, const float s)
{
	return make_float3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION float3 operator*(const float s, const float3& a)
{
	return make_float3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION void operator*=(float3& a, const float3& s)
{
	a.x *= s.x; a.y *= s.y; a.z *= s.z;
}
GPU_FUNCTION void operator*=(float3& a, const float s)
{
	a.x *= s; a.y *= s; a.z *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION float3 operator/(const float3& a, const float3& b)
{
	return make_float3(a.x / b.x, a.y / b.y, a.z / b.z);
}
GPU_FUNCTION float3 operator/(const float3& a, const float s)
{
	float inv = 1.0f / s;
	return a * inv;
}
GPU_FUNCTION float3 operator/(const float s, const float3& a)
{
	return make_float3(s / a.x, s / a.y, s / a.z);
}
GPU_FUNCTION void operator/=(float3& a, const float s)
{
	float inv = 1.0f / s;
	a *= inv;
}
/** @} */

/** lerp */
GPU_FUNCTION float3 lerp(const float3& a, const float3& b, const float t)
{
	return a + t * (b - a);
}

/** bilerp */
GPU_FUNCTION float3 bilerp(const float3& x00, const float3& x10, const float3& x01, const float3& x11,
	const float u, const float v)
{
	return lerp(lerp(x00, x10, u), lerp(x01, x11, u), v);
}

/** clamp
* @{
*/
GPU_FUNCTION float3 clamp(const float3& v, const float a, const float b)
{
	return make_float3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

GPU_FUNCTION float3 clamp(const float3& v, const float3& a, const float3& b)
{
	return make_float3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
/** @} */

/** dot product */
GPU_FUNCTION float dot(const float3& a, const float3& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

/** cross product */
GPU_FUNCTION float3 cross(const float3& a, const float3& b)
{
	return make_float3(a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x);
}

/** length */
GPU_FUNCTION float length(const float3& v)
{
	return sqrtf(dot(v, v));
}

/** normalize */
GPU_FUNCTION float3 normalize(const float3& v)
{
	float invLen = 1.0f / sqrtf(dot(v, v));
	return v * invLen;
}

/** floor */
GPU_FUNCTION float3 floor(const float3& v)
{
	return make_float3(::floorf(v.x), ::floorf(v.y), ::floorf(v.z));
}

/** reflect */
GPU_FUNCTION float3 reflect(const float3& i, const float3& n)
{
	return i - 2.0f * n * dot(n, i);
}

/** Faceforward
* Returns N if dot(i, nref) > 0; else -N;
* Typical usage is N = faceforward(N, -ray.dir, N);
* Note that this is opposite of what faceforward does in Cg and GLSL */
GPU_FUNCTION float3 faceforward(const float3& n, const float3& i, const float3& nref)
{
	return n * copysignf(1.0f, dot(i, nref));
}

/** exp */
GPU_FUNCTION float3 expf(const float3& v)
{
	return make_float3(::expf(v.x), ::expf(v.y), ::expf(v.z));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION float getByIndex(const float3& v, int i)
{
	return ((float*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(float3& v, int i, float x)
{
	((float*)(&v))[i] = x;
}

/* float4 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION float4 make_float4(const float s)
{
	return make_float4(s, s, s, s);
}
GPU_FUNCTION float4 make_float4(const float3& a)
{
	return make_float4(a.x, a.y, a.z, 0.0f);
}
GPU_FUNCTION float4 make_float4(const int4& a)
{
	return make_float4(float(a.x), float(a.y), float(a.z), float(a.w));
}
GPU_FUNCTION float4 make_float4(const uint4& a)
{
	return make_float4(float(a.x), float(a.y), float(a.z), float(a.w));
}
/** @} */

/** negate */
GPU_FUNCTION float4 operator-(const float4& a)
{
	return make_float4(-a.x, -a.y, -a.z, -a.w);
}

/** Min
* @{
*/
GPU_FUNCTION float4 fminf(const float4& a, const float4& b)
{
	return make_float4(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z), fminf(a.w, b.w));
}
GPU_FUNCTION float fminf(const float4& a)
{
	return fminf(fminf(a.x, a.y), fminf(a.z, a.w));
}
/** @} */

/** Max
* @{
*/
GPU_FUNCTION float4 fmaxf(const float4& a, const float4& b)
{
	return make_float4(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z), fmaxf(a.w, b.w));
}
GPU_FUNCTION float fmaxf(const float4& a)
{
	return fmaxf(fmaxf(a.x, a.y), fmaxf(a.z, a.w));
}
/** @} */

/** add
* @{
*/
GPU_FUNCTION float4 operator+(const float4& a, const float4& b)
{
	return make_float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}
GPU_FUNCTION float4 operator+(const float4& a, const float b)
{
	return make_float4(a.x + b, a.y + b, a.z + b, a.w + b);
}
GPU_FUNCTION float4 operator+(const float a, const float4& b)
{
	return make_float4(a + b.x, a + b.y, a + b.z, a + b.w);
}
GPU_FUNCTION void operator+=(float4& a, const float4& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z; a.w += b.w;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION float4 operator-(const float4& a, const float4& b)
{
	return make_float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}
GPU_FUNCTION float4 operator-(const float4& a, const float b)
{
	return make_float4(a.x - b, a.y - b, a.z - b, a.w - b);
}
GPU_FUNCTION float4 operator-(const float a, const float4& b)
{
	return make_float4(a - b.x, a - b.y, a - b.z, a - b.w);
}
GPU_FUNCTION void operator-=(float4& a, const float4& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z; a.w -= b.w;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION float4 operator*(const float4& a, const float4& s)
{
	return make_float4(a.x * s.x, a.y * s.y, a.z * s.z, a.w * s.w);
}
GPU_FUNCTION float4 operator*(const float4& a, const float s)
{
	return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION float4 operator*(const float s, const float4& a)
{
	return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION void operator*=(float4& a, const float4& s)
{
	a.x *= s.x; a.y *= s.y; a.z *= s.z; a.w *= s.w;
}
GPU_FUNCTION void operator*=(float4& a, const float s)
{
	a.x *= s; a.y *= s; a.z *= s; a.w *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION float4 operator/(const float4& a, const float4& b)
{
	return make_float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}
GPU_FUNCTION float4 operator/(const float4& a, const float s)
{
	float inv = 1.0f / s;
	return a * inv;
}
GPU_FUNCTION float4 operator/(const float s, const float4& a)
{
	return make_float4(s / a.x, s / a.y, s / a.z, s / a.w);
}
GPU_FUNCTION void operator/=(float4& a, const float s)
{
	float inv = 1.0f / s;
	a *= inv;
}
/** @} */

/** lerp */
GPU_FUNCTION float4 lerp(const float4& a, const float4& b, const float t)
{
	return a + t * (b - a);
}

/** bilerp */
GPU_FUNCTION float4 bilerp(const float4& x00, const float4& x10, const float4& x01, const float4& x11,
	const float u, const float v)
{
	return lerp(lerp(x00, x10, u), lerp(x01, x11, u), v);
}

/** clamp
* @{
*/
GPU_FUNCTION float4 clamp(const float4& v, const float a, const float b)
{
	return make_float4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
}

GPU_FUNCTION float4 clamp(const float4& v, const float4& a, const float4& b)
{
	return make_float4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
}
/** @} */

/** dot product */
GPU_FUNCTION float dot(const float4& a, const float4& b)
{
	return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

/** length */
GPU_FUNCTION float length(const float4& r)
{
	return sqrtf(dot(r, r));
}

/** normalize */
GPU_FUNCTION float4 normalize(const float4& v)
{
	float invLen = 1.0f / sqrtf(dot(v, v));
	return v * invLen;
}

/** floor */
GPU_FUNCTION float4 floor(const float4& v)
{
	return make_float4(::floorf(v.x), ::floorf(v.y), ::floorf(v.z), ::floorf(v.w));
}

/** reflect */
GPU_FUNCTION float4 reflect(const float4& i, const float4& n)
{
	return i - 2.0f * n * dot(n, i);
}

/**
* Faceforward
* Returns N if dot(i, nref) > 0; else -N;
* Typical usage is N = faceforward(N, -ray.dir, N);
* Note that this is opposite of what faceforward does in Cg and GLSL
*/
GPU_FUNCTION float4 faceforward(const float4& n, const float4& i, const float4& nref)
{
	return n * copysignf(1.0f, dot(i, nref));
}

/** exp */
GPU_FUNCTION float4 expf(const float4& v)
{
	return make_float4(::expf(v.x), ::expf(v.y), ::expf(v.z), ::expf(v.w));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION float getByIndex(const float4& v, int i)
{
	return ((float*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(float4& v, int i, float x)
{
	((float*)(&v))[i] = x;
}


/* int functions */
/******************************************************************************/

/** clamp */
GPU_FUNCTION int clamp(const int f, const int a, const int b)
{
	return Max(a, Min(f, b));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION int getByIndex(const int1& v, int i)
{
	return ((int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(int1& v, int i, int x)
{
	((int*)(&v))[i] = x;
}


/* int2 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION int2 make_int2(const int s)
{
	return make_int2(s, s);
}
GPU_FUNCTION int2 make_int2(const float2& a)
{
	return make_int2(int(a.x), int(a.y));
}
/** @} */

/** negate */
GPU_FUNCTION int2 operator-(const int2& a)
{
	return make_int2(-a.x, -a.y);
}

/** Min */
GPU_FUNCTION int2 Min(const int2& a, const int2& b)
{
	return make_int2(Min(a.x, b.x), Min(a.y, b.y));
}

/** Max */
GPU_FUNCTION int2 Max(const int2& a, const int2& b)
{
	return make_int2(Max(a.x, b.x), Max(a.y, b.y));
}

/** add
* @{
*/
GPU_FUNCTION int2 operator+(const int2& a, const int2& b)
{
	return make_int2(a.x + b.x, a.y + b.y);
}
GPU_FUNCTION void operator+=(int2& a, const int2& b)
{
	a.x += b.x; a.y += b.y;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION int2 operator-(const int2& a, const int2& b)
{
	return make_int2(a.x - b.x, a.y - b.y);
}
GPU_FUNCTION int2 operator-(const int2& a, const int b)
{
	return make_int2(a.x - b, a.y - b);
}
GPU_FUNCTION void operator-=(int2& a, const int2& b)
{
	a.x -= b.x; a.y -= b.y;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION int2 operator*(const int2& a, const int2& b)
{
	return make_int2(a.x * b.x, a.y * b.y);
}
GPU_FUNCTION int2 operator*(const int2& a, const int s)
{
	return make_int2(a.x * s, a.y * s);
}
GPU_FUNCTION int2 operator*(const int s, const int2& a)
{
	return make_int2(a.x * s, a.y * s);
}
GPU_FUNCTION void operator*=(int2& a, const int s)
{
	a.x *= s; a.y *= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION int2 clamp(const int2& v, const int a, const int b)
{
	return make_int2(clamp(v.x, a, b), clamp(v.y, a, b));
}

GPU_FUNCTION int2 clamp(const int2& v, const int2& a, const int2& b)
{
	return make_int2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const int2& a, const int2& b)
{
	return a.x == b.x && a.y == b.y;
}

GPU_FUNCTION bool operator!=(const int2& a, const int2& b)
{
	return a.x != b.x || a.y != b.y;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION int getByIndex(const int2& v, int i)
{
	return ((int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(int2& v, int i, int x)
{
	((int*)(&v))[i] = x;
}


/* int3 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION int3 make_int3(const int s)
{
	return make_int3(s, s, s);
}
GPU_FUNCTION int3 make_int3(const float3& a)
{
	return make_int3(int(a.x), int(a.y), int(a.z));
}
/** @} */

/** negate */
GPU_FUNCTION int3 operator-(const int3& a)
{
	return make_int3(-a.x, -a.y, -a.z);
}

/** Min */
GPU_FUNCTION int3 Min(const int3& a, const int3& b)
{
	return make_int3(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z));
}

/** Max */
GPU_FUNCTION int3 Max(const int3& a, const int3& b)
{
	return make_int3(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z));
}

/** add
* @{
*/
GPU_FUNCTION int3 operator+(const int3& a, const int3& b)
{
	return make_int3(a.x + b.x, a.y + b.y, a.z + b.z);
}
GPU_FUNCTION void operator+=(int3& a, const int3& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION int3 operator-(const int3& a, const int3& b)
{
	return make_int3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GPU_FUNCTION void operator-=(int3& a, const int3& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION int3 operator*(const int3& a, const int3& b)
{
	return make_int3(a.x * b.x, a.y * b.y, a.z * b.z);
}
GPU_FUNCTION int3 operator*(const int3& a, const int s)
{
	return make_int3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION int3 operator*(const int s, const int3& a)
{
	return make_int3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION void operator*=(int3& a, const int s)
{
	a.x *= s; a.y *= s; a.z *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION int3 operator/(const int3& a, const int3& b)
{
	return make_int3(a.x / b.x, a.y / b.y, a.z / b.z);
}
GPU_FUNCTION int3 operator/(const int3& a, const int s)
{
	return make_int3(a.x / s, a.y / s, a.z / s);
}
GPU_FUNCTION int3 operator/(const int s, const int3& a)
{
	return make_int3(s / a.x, s / a.y, s / a.z);
}
GPU_FUNCTION void operator/=(int3& a, const int s)
{
	a.x /= s; a.y /= s; a.z /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION int3 clamp(const int3& v, const int a, const int b)
{
	return make_int3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

GPU_FUNCTION int3 clamp(const int3& v, const int3& a, const int3& b)
{
	return make_int3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const int3& a, const int3& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GPU_FUNCTION bool operator!=(const int3& a, const int3& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION int getByIndex(const int3& v, int i)
{
	return ((int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(int3& v, int i, int x)
{
	((int*)(&v))[i] = x;
}


/* int4 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION int4 make_int4(const int s)
{
	return make_int4(s, s, s, s);
}
GPU_FUNCTION int4 make_int4(const float4& a)
{
	return make_int4((int)a.x, (int)a.y, (int)a.z, (int)a.w);
}
/** @} */

/** negate */
GPU_FUNCTION int4 operator-(const int4& a)
{
	return make_int4(-a.x, -a.y, -a.z, -a.w);
}

/** Min */
GPU_FUNCTION int4 Min(const int4& a, const int4& b)
{
	return make_int4(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z), Min(a.w, b.w));
}

/** Max */
GPU_FUNCTION int4 Max(const int4& a, const int4& b)
{
	return make_int4(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z), Max(a.w, b.w));
}

/** add
* @{
*/
GPU_FUNCTION int4 operator+(const int4& a, const int4& b)
{
	return make_int4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}
GPU_FUNCTION void operator+=(int4& a, const int4& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z; a.w += b.w;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION int4 operator-(const int4& a, const int4& b)
{
	return make_int4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GPU_FUNCTION void operator-=(int4& a, const int4& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z; a.w -= b.w;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION int4 operator*(const int4& a, const int4& b)
{
	return make_int4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}
GPU_FUNCTION int4 operator*(const int4& a, const int s)
{
	return make_int4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION int4 operator*(const int s, const int4& a)
{
	return make_int4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION void operator*=(int4& a, const int s)
{
	a.x *= s; a.y *= s; a.z *= s; a.w *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION int4 operator/(const int4& a, const int4& b)
{
	return make_int4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}
GPU_FUNCTION int4 operator/(const int4& a, const int s)
{
	return make_int4(a.x / s, a.y / s, a.z / s, a.w / s);
}
GPU_FUNCTION int4 operator/(const int s, const int4& a)
{
	return make_int4(s / a.x, s / a.y, s / a.z, s / a.w);
}
GPU_FUNCTION void operator/=(int4& a, const int s)
{
	a.x /= s; a.y /= s; a.z /= s; a.w /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION int4 clamp(const int4& v, const int a, const int b)
{
	return make_int4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
}

GPU_FUNCTION int4 clamp(const int4& v, const int4& a, const int4& b)
{
	return make_int4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const int4& a, const int4& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GPU_FUNCTION bool operator!=(const int4& a, const int4& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION int getByIndex(const int4& v, int i)
{
	return ((int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(int4& v, int i, int x)
{
	((int*)(&v))[i] = x;
}


/* uint functions */
/******************************************************************************/

/** clamp */
GPU_FUNCTION unsigned int clamp(const unsigned int f, const unsigned int a, const unsigned int b)
{
	return Max(a, Min(f, b));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION unsigned int getByIndex(const uint1& v, unsigned int i)
{
	return ((unsigned int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(uint1& v, int i, unsigned int x)
{
	((unsigned int*)(&v))[i] = x;
}


/* uint2 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION uint2 make_uint2(const unsigned int s)
{
	return make_uint2(s, s);
}
GPU_FUNCTION uint2 make_uint2(const float2& a)
{
	return make_uint2((unsigned int)a.x, (unsigned int)a.y);
}
/** @} */

/** Min */
GPU_FUNCTION uint2 Min(const uint2& a, const uint2& b)
{
	return make_uint2(Min(a.x, b.x), Min(a.y, b.y));
}

/** Max */
GPU_FUNCTION uint2 Max(const uint2& a, const uint2& b)
{
	return make_uint2(Max(a.x, b.x), Max(a.y, b.y));
}

/** add
* @{
*/
GPU_FUNCTION uint2 operator+(const uint2& a, const uint2& b)
{
	return make_uint2(a.x + b.x, a.y + b.y);
}
GPU_FUNCTION void operator+=(uint2& a, const uint2& b)
{
	a.x += b.x; a.y += b.y;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION uint2 operator-(const uint2& a, const uint2& b)
{
	return make_uint2(a.x - b.x, a.y - b.y);
}
GPU_FUNCTION uint2 operator-(const uint2& a, const unsigned int b)
{
	return make_uint2(a.x - b, a.y - b);
}
GPU_FUNCTION void operator-=(uint2& a, const uint2& b)
{
	a.x -= b.x; a.y -= b.y;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION uint2 operator*(const uint2& a, const uint2& b)
{
	return make_uint2(a.x * b.x, a.y * b.y);
}
GPU_FUNCTION uint2 operator*(const uint2& a, const unsigned int s)
{
	return make_uint2(a.x * s, a.y * s);
}
GPU_FUNCTION uint2 operator*(const unsigned int s, const uint2& a)
{
	return make_uint2(a.x * s, a.y * s);
}
GPU_FUNCTION void operator*=(uint2& a, const unsigned int s)
{
	a.x *= s; a.y *= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION uint2 clamp(const uint2& v, const unsigned int a, const unsigned int b)
{
	return make_uint2(clamp(v.x, a, b), clamp(v.y, a, b));
}

GPU_FUNCTION uint2 clamp(const uint2& v, const uint2& a, const uint2& b)
{
	return make_uint2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const uint2& a, const uint2& b)
{
	return a.x == b.x && a.y == b.y;
}

GPU_FUNCTION bool operator!=(const uint2& a, const uint2& b)
{
	return a.x != b.x || a.y != b.y;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION unsigned int getByIndex(const uint2& v, unsigned int i)
{
	return ((unsigned int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(uint2& v, int i, unsigned int x)
{
	((unsigned int*)(&v))[i] = x;
}


/* uint3 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION uint3 make_uint3(const unsigned int s)
{
	return make_uint3(s, s, s);
}
GPU_FUNCTION uint3 make_uint3(const float3& a)
{
	return make_uint3((unsigned int)a.x, (unsigned int)a.y, (unsigned int)a.z);
}
/** @} */

/** Min */
GPU_FUNCTION uint3 Min(const uint3& a, const uint3& b)
{
	return make_uint3(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z));
}

/** Max */
GPU_FUNCTION uint3 Max(const uint3& a, const uint3& b)
{
	return make_uint3(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z));
}

/** add
* @{
*/
GPU_FUNCTION uint3 operator+(const uint3& a, const uint3& b)
{
	return make_uint3(a.x + b.x, a.y + b.y, a.z + b.z);
}
GPU_FUNCTION void operator+=(uint3& a, const uint3& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION uint3 operator-(const uint3& a, const uint3& b)
{
	return make_uint3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GPU_FUNCTION void operator-=(uint3& a, const uint3& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION uint3 operator*(const uint3& a, const uint3& b)
{
	return make_uint3(a.x * b.x, a.y * b.y, a.z * b.z);
}
GPU_FUNCTION uint3 operator*(const uint3& a, const unsigned int s)
{
	return make_uint3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION uint3 operator*(const unsigned int s, const uint3& a)
{
	return make_uint3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION void operator*=(uint3& a, const unsigned int s)
{
	a.x *= s; a.y *= s; a.z *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION uint3 operator/(const uint3& a, const uint3& b)
{
	return make_uint3(a.x / b.x, a.y / b.y, a.z / b.z);
}
GPU_FUNCTION uint3 operator/(const uint3& a, const unsigned int s)
{
	return make_uint3(a.x / s, a.y / s, a.z / s);
}
GPU_FUNCTION uint3 operator/(const unsigned int s, const uint3& a)
{
	return make_uint3(s / a.x, s / a.y, s / a.z);
}
GPU_FUNCTION void operator/=(uint3& a, const unsigned int s)
{
	a.x /= s; a.y /= s; a.z /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION uint3 clamp(const uint3& v, const unsigned int a, const unsigned int b)
{
	return make_uint3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

GPU_FUNCTION uint3 clamp(const uint3& v, const uint3& a, const uint3& b)
{
	return make_uint3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const uint3& a, const uint3& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GPU_FUNCTION bool operator!=(const uint3& a, const uint3& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION unsigned int getByIndex(const uint3& v, unsigned int i)
{
	return ((unsigned int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION void setByIndex(uint3& v, int i, unsigned int x)
{
	((unsigned int*)(&v))[i] = x;
}


/* uint4 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION uint4 make_uint4(const unsigned int s)
{
	return make_uint4(s, s, s, s);
}
GPU_FUNCTION uint4 make_uint4(const float4& a)
{
	return make_uint4((unsigned int)a.x, (unsigned int)a.y, (unsigned int)a.z, (unsigned int)a.w);
}
/** @} */

/** Min
* @{
*/
GPU_FUNCTION uint4 Min(const uint4& a, const uint4& b)
{
	return make_uint4(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z), Min(a.w, b.w));
}
/** @} */

/** Max
* @{
*/
GPU_FUNCTION uint4 Max(const uint4& a, const uint4& b)
{
	return make_uint4(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z), Max(a.w, b.w));
}
/** @} */

/** add
* @{
*/
GPU_FUNCTION uint4 operator+(const uint4& a, const uint4& b)
{
	return make_uint4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
}
GPU_FUNCTION void operator+=(uint4& a, const uint4& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z; a.w += b.w;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION uint4 operator-(const uint4& a, const uint4& b)
{
	return make_uint4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
}

GPU_FUNCTION void operator-=(uint4& a, const uint4& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z; a.w -= b.w;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION uint4 operator*(const uint4& a, const uint4& b)
{
	return make_uint4(a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w);
}
GPU_FUNCTION uint4 operator*(const uint4& a, const unsigned int s)
{
	return make_uint4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION uint4 operator*(const unsigned int s, const uint4& a)
{
	return make_uint4(a.x * s, a.y * s, a.z * s, a.w * s);
}
GPU_FUNCTION void operator*=(uint4& a, const unsigned int s)
{
	a.x *= s; a.y *= s; a.z *= s; a.w *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION uint4 operator/(const uint4& a, const uint4& b)
{
	return make_uint4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
}
GPU_FUNCTION uint4 operator/(const uint4& a, const unsigned int s)
{
	return make_uint4(a.x / s, a.y / s, a.z / s, a.w / s);
}
GPU_FUNCTION uint4 operator/(const unsigned int s, const uint4& a)
{
	return make_uint4(s / a.x, s / a.y, s / a.z, s / a.w);
}
GPU_FUNCTION void operator/=(uint4& a, const unsigned int s)
{
	a.x /= s; a.y /= s; a.z /= s; a.w /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION uint4 clamp(const uint4& v, const unsigned int a, const unsigned int b)
{
	return make_uint4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
}

GPU_FUNCTION uint4 clamp(const uint4& v, const uint4& a, const uint4& b)
{
	return make_uint4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const uint4& a, const uint4& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z && a.w == b.w;
}

GPU_FUNCTION bool operator!=(const uint4& a, const uint4& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z || a.w != b.w;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION unsigned int getByIndex(const uint4& v, unsigned int i)
{
	return ((unsigned int*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION void setByIndex(uint4& v, int i, unsigned int x)
{
	((unsigned int*)(&v))[i] = x;
}

/* long long functions */
/******************************************************************************/

/** clamp */
GPU_FUNCTION long long clamp(const long long f, const long long a, const long long b)
{
	return Max(a, Min(f, b));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION long long getByIndex(const longlong1& v, int i)
{
	return ((long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(longlong1& v, int i, long long x)
{
	((long long*)(&v))[i] = x;
}


/* longlong2 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION longlong2 make_longlong2(const long long s)
{
	return make_longlong2(s, s);
}
GPU_FUNCTION longlong2 make_longlong2(const float2& a)
{
	return make_longlong2(int(a.x), int(a.y));
}
/** @} */

/** negate */
GPU_FUNCTION longlong2 operator-(const longlong2& a)
{
	return make_longlong2(-a.x, -a.y);
}

/** Min */
GPU_FUNCTION longlong2 Min(const longlong2& a, const longlong2& b)
{
	return make_longlong2(Min(a.x, b.x), Min(a.y, b.y));
}

/** Max */
GPU_FUNCTION longlong2 Max(const longlong2& a, const longlong2& b)
{
	return make_longlong2(Max(a.x, b.x), Max(a.y, b.y));
}

/** add
* @{
*/
GPU_FUNCTION longlong2 operator+(const longlong2& a, const longlong2& b)
{
	return make_longlong2(a.x + b.x, a.y + b.y);
}
GPU_FUNCTION void operator+=(longlong2& a, const longlong2& b)
{
	a.x += b.x; a.y += b.y;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION longlong2 operator-(const longlong2& a, const longlong2& b)
{
	return make_longlong2(a.x - b.x, a.y - b.y);
}
GPU_FUNCTION longlong2 operator-(const longlong2& a, const long long b)
{
	return make_longlong2(a.x - b, a.y - b);
}
GPU_FUNCTION void operator-=(longlong2& a, const longlong2& b)
{
	a.x -= b.x; a.y -= b.y;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION longlong2 operator*(const longlong2& a, const longlong2& b)
{
	return make_longlong2(a.x * b.x, a.y * b.y);
}
GPU_FUNCTION longlong2 operator*(const longlong2& a, const long long s)
{
	return make_longlong2(a.x * s, a.y * s);
}
GPU_FUNCTION longlong2 operator*(const long long s, const longlong2& a)
{
	return make_longlong2(a.x * s, a.y * s);
}
GPU_FUNCTION void operator*=(longlong2& a, const long long s)
{
	a.x *= s; a.y *= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION longlong2 clamp(const longlong2& v, const long long a, const long long b)
{
	return make_longlong2(clamp(v.x, a, b), clamp(v.y, a, b));
}

GPU_FUNCTION longlong2 clamp(const longlong2& v, const longlong2& a, const longlong2& b)
{
	return make_longlong2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const longlong2& a, const longlong2& b)
{
	return a.x == b.x && a.y == b.y;
}

GPU_FUNCTION bool operator!=(const longlong2& a, const longlong2& b)
{
	return a.x != b.x || a.y != b.y;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION long long getByIndex(const longlong2& v, int i)
{
	return ((long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(longlong2& v, int i, long long x)
{
	((long long*)(&v))[i] = x;
}


/* longlong3 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION longlong3 make_longlong3(const long long s)
{
	return make_longlong3(s, s, s);
}
GPU_FUNCTION longlong3 make_longlong3(const float3& a)
{
	return make_longlong3((long long)a.x, (long long)a.y, (long long)a.z);
}
/** @} */

/** negate */
GPU_FUNCTION longlong3 operator-(const longlong3& a)
{
	return make_longlong3(-a.x, -a.y, -a.z);
}

/** Min */
GPU_FUNCTION longlong3 Min(const longlong3& a, const longlong3& b)
{
	return make_longlong3(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z));
}

/** Max */
GPU_FUNCTION longlong3 Max(const longlong3& a, const longlong3& b)
{
	return make_longlong3(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z));
}

/** add
* @{
*/
GPU_FUNCTION longlong3 operator+(const longlong3& a, const longlong3& b)
{
	return make_longlong3(a.x + b.x, a.y + b.y, a.z + b.z);
}
GPU_FUNCTION void operator+=(longlong3& a, const longlong3& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION longlong3 operator-(const longlong3& a, const longlong3& b)
{
	return make_longlong3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GPU_FUNCTION void operator-=(longlong3& a, const longlong3& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION longlong3 operator*(const longlong3& a, const longlong3& b)
{
	return make_longlong3(a.x * b.x, a.y * b.y, a.z * b.z);
}
GPU_FUNCTION longlong3 operator*(const longlong3& a, const long long s)
{
	return make_longlong3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION longlong3 operator*(const long long s, const longlong3& a)
{
	return make_longlong3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION void operator*=(longlong3& a, const long long s)
{
	a.x *= s; a.y *= s; a.z *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION longlong3 operator/(const longlong3& a, const longlong3& b)
{
	return make_longlong3(a.x / b.x, a.y / b.y, a.z / b.z);
}
GPU_FUNCTION longlong3 operator/(const longlong3& a, const long long s)
{
	return make_longlong3(a.x / s, a.y / s, a.z / s);
}
GPU_FUNCTION longlong3 operator/(const long long s, const longlong3& a)
{
	return make_longlong3(s / a.x, s / a.y, s / a.z);
}
GPU_FUNCTION void operator/=(longlong3& a, const long long s)
{
	a.x /= s; a.y /= s; a.z /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION longlong3 clamp(const longlong3& v, const long long a, const long long b)
{
	return make_longlong3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

GPU_FUNCTION longlong3 clamp(const longlong3& v, const longlong3& a, const longlong3& b)
{
	return make_longlong3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const longlong3& a, const longlong3& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GPU_FUNCTION bool operator!=(const longlong3& a, const longlong3& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION long long getByIndex(const longlong3& v, int i)
{
	return ((long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(longlong3& v, int i, int x)
{
	((long long*)(&v))[i] = x;
}




/* ulonglong functions */
/******************************************************************************/

/** clamp */
GPU_FUNCTION unsigned long long clamp(const unsigned long long f, const unsigned long long a, const unsigned long long b)
{
	return Max(a, Min(f, b));
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION unsigned long long getByIndex(const ulonglong1& v, unsigned int i)
{
	return ((unsigned long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(ulonglong1& v, int i, unsigned long long x)
{
	((unsigned long long*)(&v))[i] = x;
}


/* ulonglong2 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION ulonglong2 make_ulonglong2(const unsigned long long s)
{
	return make_ulonglong2(s, s);
}
GPU_FUNCTION ulonglong2 make_ulonglong2(const float2& a)
{
	return make_ulonglong2((unsigned long long)a.x, (unsigned long long)a.y);
}
/** @} */

/** Min */
GPU_FUNCTION ulonglong2 Min(const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(Min(a.x, b.x), Min(a.y, b.y));
}

/** Max */
GPU_FUNCTION ulonglong2 Max(const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(Max(a.x, b.x), Max(a.y, b.y));
}

/** add
* @{
*/
GPU_FUNCTION ulonglong2 operator+(const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(a.x + b.x, a.y + b.y);
}
GPU_FUNCTION void operator+=(ulonglong2& a, const ulonglong2& b)
{
	a.x += b.x; a.y += b.y;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION ulonglong2 operator-(const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(a.x - b.x, a.y - b.y);
}
GPU_FUNCTION ulonglong2 operator-(const ulonglong2& a, const unsigned long long b)
{
	return make_ulonglong2(a.x - b, a.y - b);
}
GPU_FUNCTION void operator-=(ulonglong2& a, const ulonglong2& b)
{
	a.x -= b.x; a.y -= b.y;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION ulonglong2 operator*(const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(a.x * b.x, a.y * b.y);
}
GPU_FUNCTION ulonglong2 operator*(const ulonglong2& a, const unsigned long long s)
{
	return make_ulonglong2(a.x * s, a.y * s);
}
GPU_FUNCTION ulonglong2 operator*(const unsigned long long s, const ulonglong2& a)
{
	return make_ulonglong2(a.x * s, a.y * s);
}
GPU_FUNCTION void operator*=(ulonglong2& a, const unsigned long long s)
{
	a.x *= s; a.y *= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION ulonglong2 clamp(const ulonglong2& v, const unsigned long long a, const unsigned long long b)
{
	return make_ulonglong2(clamp(v.x, a, b), clamp(v.y, a, b));
}

GPU_FUNCTION ulonglong2 clamp(const ulonglong2& v, const ulonglong2& a, const ulonglong2& b)
{
	return make_ulonglong2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const ulonglong2& a, const ulonglong2& b)
{
	return a.x == b.x && a.y == b.y;
}

GPU_FUNCTION bool operator!=(const ulonglong2& a, const ulonglong2& b)
{
	return a.x != b.x || a.y != b.y;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION unsigned long long getByIndex(const ulonglong2& v, unsigned int i)
{
	return ((unsigned long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory */
GPU_FUNCTION void setByIndex(ulonglong2& v, int i, unsigned long long x)
{
	((unsigned long long*)(&v))[i] = x;
}


/* ulonglong3 functions */
/******************************************************************************/

/** additional constructors
* @{
*/
GPU_FUNCTION ulonglong3 make_ulonglong3(const unsigned long long s)
{
	return make_ulonglong3(s, s, s);
}
GPU_FUNCTION ulonglong3 make_ulonglong3(const float3& a)
{
	return make_ulonglong3((unsigned long long)a.x, (unsigned long long)a.y, (unsigned long long)a.z);
}
/** @} */

/** Min */
GPU_FUNCTION ulonglong3 Min(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(Min(a.x, b.x), Min(a.y, b.y), Min(a.z, b.z));
}

/** Max */
GPU_FUNCTION ulonglong3 Max(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(Max(a.x, b.x), Max(a.y, b.y), Max(a.z, b.z));
}

/** add
* @{
*/
GPU_FUNCTION ulonglong3 operator+(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(a.x + b.x, a.y + b.y, a.z + b.z);
}
GPU_FUNCTION void operator+=(ulonglong3& a, const ulonglong3& b)
{
	a.x += b.x; a.y += b.y; a.z += b.z;
}
/** @} */

/** subtract
* @{
*/
GPU_FUNCTION ulonglong3 operator-(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(a.x - b.x, a.y - b.y, a.z - b.z);
}

GPU_FUNCTION void operator-=(ulonglong3& a, const ulonglong3& b)
{
	a.x -= b.x; a.y -= b.y; a.z -= b.z;
}
/** @} */

/** multiply
* @{
*/
GPU_FUNCTION ulonglong3 operator*(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(a.x * b.x, a.y * b.y, a.z * b.z);
}
GPU_FUNCTION ulonglong3 operator*(const ulonglong3& a, const unsigned long long s)
{
	return make_ulonglong3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION ulonglong3 operator*(const unsigned long long s, const ulonglong3& a)
{
	return make_ulonglong3(a.x * s, a.y * s, a.z * s);
}
GPU_FUNCTION void operator*=(ulonglong3& a, const unsigned long long s)
{
	a.x *= s; a.y *= s; a.z *= s;
}
/** @} */

/** divide
* @{
*/
GPU_FUNCTION ulonglong3 operator/(const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(a.x / b.x, a.y / b.y, a.z / b.z);
}
GPU_FUNCTION ulonglong3 operator/(const ulonglong3& a, const unsigned long long s)
{
	return make_ulonglong3(a.x / s, a.y / s, a.z / s);
}
GPU_FUNCTION ulonglong3 operator/(const unsigned long long s, const ulonglong3& a)
{
	return make_ulonglong3(s / a.x, s / a.y, s / a.z);
}
GPU_FUNCTION void operator/=(ulonglong3& a, const unsigned long long s)
{
	a.x /= s; a.y /= s; a.z /= s;
}
/** @} */

/** clamp
* @{
*/
GPU_FUNCTION ulonglong3 clamp(const ulonglong3& v, const unsigned long long a, const unsigned long long b)
{
	return make_ulonglong3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
}

GPU_FUNCTION ulonglong3 clamp(const ulonglong3& v, const ulonglong3& a, const ulonglong3& b)
{
	return make_ulonglong3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
}
/** @} */

/** equality
* @{
*/
GPU_FUNCTION bool operator==(const ulonglong3& a, const ulonglong3& b)
{
	return a.x == b.x && a.y == b.y && a.z == b.z;
}

GPU_FUNCTION bool operator!=(const ulonglong3& a, const ulonglong3& b)
{
	return a.x != b.x || a.y != b.y || a.z != b.z;
}
/** @} */

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION unsigned long long getByIndex(const ulonglong3& v, unsigned int i)
{
	return ((unsigned long long*)(&v))[i];
}

/** If used on the device, this could place the the 'v' in local memory
*/
GPU_FUNCTION void setByIndex(ulonglong3& v, int i, unsigned long long x)
{
	((unsigned long long*)(&v))[i] = x;
}



/** Narrowing functions
* @{
*/
GPU_FUNCTION int2 make_int2(const int3& v0) { return make_int2(v0.x, v0.y); }
GPU_FUNCTION int2 make_int2(const int4& v0) { return make_int2(v0.x, v0.y); }
GPU_FUNCTION int3 make_int3(const int4& v0) { return make_int3(v0.x, v0.y, v0.z); }
GPU_FUNCTION uint2 make_uint2(const uint3& v0) { return make_uint2(v0.x, v0.y); }
GPU_FUNCTION uint2 make_uint2(const uint4& v0) { return make_uint2(v0.x, v0.y); }
GPU_FUNCTION uint3 make_uint3(const uint4& v0) { return make_uint3(v0.x, v0.y, v0.z); }
GPU_FUNCTION longlong2 make_longlong2(const longlong3& v0) { return make_longlong2(v0.x, v0.y); }
GPU_FUNCTION ulonglong2 make_ulonglong2(const ulonglong3& v0) { return make_ulonglong2(v0.x, v0.y); }
GPU_FUNCTION float2 make_float2(const float3& v0) { return make_float2(v0.x, v0.y); }
GPU_FUNCTION float2 make_float2(const float4& v0) { return make_float2(v0.x, v0.y); }
GPU_FUNCTION float3 make_float3(const float4& v0) { return make_float3(v0.x, v0.y, v0.z); }
/** @} */

/** Assemble functions from smaller vectors
* @{
*/
GPU_FUNCTION int3 make_int3(const int v0, const int2& v1) { return make_int3(v0, v1.x, v1.y); }
GPU_FUNCTION int3 make_int3(const int2& v0, const int v1) { return make_int3(v0.x, v0.y, v1); }
GPU_FUNCTION int4 make_int4(const int v0, const int v1, const int2& v2) { return make_int4(v0, v1, v2.x, v2.y); }
GPU_FUNCTION int4 make_int4(const int v0, const int2& v1, const int v2) { return make_int4(v0, v1.x, v1.y, v2); }
GPU_FUNCTION int4 make_int4(const int2& v0, const int v1, const int v2) { return make_int4(v0.x, v0.y, v1, v2); }
GPU_FUNCTION int4 make_int4(const int v0, const int3& v1) { return make_int4(v0, v1.x, v1.y, v1.z); }
GPU_FUNCTION int4 make_int4(const int3& v0, const int v1) { return make_int4(v0.x, v0.y, v0.z, v1); }
GPU_FUNCTION int4 make_int4(const int2& v0, const int2& v1) { return make_int4(v0.x, v0.y, v1.x, v1.y); }
GPU_FUNCTION uint3 make_uint3(const unsigned int v0, const uint2& v1) { return make_uint3(v0, v1.x, v1.y); }
GPU_FUNCTION uint3 make_uint3(const uint2& v0, const unsigned int v1) { return make_uint3(v0.x, v0.y, v1); }
GPU_FUNCTION uint4 make_uint4(const unsigned int v0, const unsigned int v1, const uint2& v2) { return make_uint4(v0, v1, v2.x, v2.y); }
GPU_FUNCTION uint4 make_uint4(const unsigned int v0, const uint2& v1, const unsigned int v2) { return make_uint4(v0, v1.x, v1.y, v2); }
GPU_FUNCTION uint4 make_uint4(const uint2& v0, const unsigned int v1, const unsigned int v2) { return make_uint4(v0.x, v0.y, v1, v2); }
GPU_FUNCTION uint4 make_uint4(const unsigned int v0, const uint3& v1) { return make_uint4(v0, v1.x, v1.y, v1.z); }
GPU_FUNCTION uint4 make_uint4(const uint3& v0, const unsigned int v1) { return make_uint4(v0.x, v0.y, v0.z, v1); }
GPU_FUNCTION uint4 make_uint4(const uint2& v0, const uint2& v1) { return make_uint4(v0.x, v0.y, v1.x, v1.y); }
GPU_FUNCTION longlong3 make_longlong3(const long long v0, const longlong2& v1) { return make_longlong3(v0, v1.x, v1.y); }
GPU_FUNCTION longlong3 make_longlong3(const longlong2& v0, const long long v1) { return make_longlong3(v0.x, v0.y, v1); }
GPU_FUNCTION float3 make_float3(const float2& v0, const float v1) { return make_float3(v0.x, v0.y, v1); }
GPU_FUNCTION float3 make_float3(const float v0, const float2& v1) { return make_float3(v0, v1.x, v1.y); }
GPU_FUNCTION float4 make_float4(const float v0, const float v1, const float2& v2) { return make_float4(v0, v1, v2.x, v2.y); }
GPU_FUNCTION float4 make_float4(const float v0, const float2& v1, const float v2) { return make_float4(v0, v1.x, v1.y, v2); }
GPU_FUNCTION float4 make_float4(const float2& v0, const float v1, const float v2) { return make_float4(v0.x, v0.y, v1, v2); }
GPU_FUNCTION float4 make_float4(const float v0, const float3& v1) { return make_float4(v0, v1.x, v1.y, v1.z); }
GPU_FUNCTION float4 make_float4(const float3& v0, const float v1) { return make_float4(v0.x, v0.y, v0.z, v1); }
GPU_FUNCTION float4 make_float4(const float2& v0, const float2& v1) { return make_float4(v0.x, v0.y, v1.x, v1.y); }
/** @} */

#if 1

// Squares 64 bit random number generator
// From Bernard Widynski's paper
// Squares: A Fast Counter-Based RNG
// https://arxiv.org/pdf/2004.06278v7.pdf

// Some keys for Squares
#define SQUARES_SEED0 0xfbe3c695413b867fu
#define SQUARES_SEED1 0x85493e21f23649a5u
#define SQUARES_SEED2 0x1659c2f3245a7913u
#define SQUARES_SEED3 0xad68b9f54f2d85ebu
#define SQUARES_SEED4 0xfb618e598e31c459u
#define SQUARES_SEED5 0xcf1d894a9b24d3c5u
#define SQUARES_SEED6 0x53481b7dcb58e243u
#define SQUARES_SEED7 0x597a326dc738e19fu
#define SQUARES_SEED8 0x7658a391f85c321du
#define SQUARES_SEED9 0xcd64f372173e2f69u
#define SQUARES_SEED10 0x8a31de2767324ed5u
#define SQUARES_SEED11 0x47bf52ca94267d53u
#define SQUARES_SEED12 0xb5736d4981276bafu

#define SQUARES_SEED SQUARES_SEED0

GPU_FUNCTION unsigned long long Squares64(unsigned long long ctr, unsigned long long key = SQUARES_SEED)
{
	unsigned long long t, x, y, z;
	y = x = ctr * key; z = y + key;
	x = x * x + y; x = (x >> 32) | (x << 32);     /* round 1 */
	x = x * x + z; x = (x >> 32) | (x << 32);     /* round 2 */
	x = x * x + y; x = (x >> 32) | (x << 32);     /* round 3 */
	t = x = x * x + z; x = (x >> 32) | (x << 32); /* round 4 */
	return t ^ ((x * x + y) >> 32);               /* round 5 */
} // Squares64

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// https://gist.github.com/badboy/6267743?permalink_comment_id=1938983

#define HASH_SEED 0x27d4eb2d // a prime or an odd constant

GPU_FUNCTION unsigned int Hash(unsigned int hash)
{
	hash = (hash ^ 61) ^ (hash >> 16);
	hash += hash << 3;
	hash ^= hash >> 4;
	hash *= HASH_SEED;
	hash ^= hash >> 15;
	return hash;
} // Hash

#if 1
#define RANDOM(seed)       ((unsigned int)(Squares64(seed) >> 32))              // 32 bit psudeo random number generator based on a Squares64
#else
#define RANDOM(seed)       Hash(seed)                                           // 32 bit psudeo random number generator based on a cryptographic hash
#endif

#define RANDOMSEED(seed)   RANDOM(seed++)                                       // generate the next random number in the sequence
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) * (unsigned long long)(m)) >> 32) // yields a number between 0 and m - 1
#define RANDOMNUM(seed)    (RANDOMSEED(seed) * 2.328306436E-10f)                // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)         // yields a number between -1 and 1

#else
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

#define RANDOM(seed) Hash(seed)
#define RANDOMSEED(seed) RANDOM(seed++)
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
#endif