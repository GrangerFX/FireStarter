#pragma once
#include "CUDADefines.h"

#define PROGRAM_DATA MMA_ARRAY_SIZE * 3
#define PROGRAM_DATA_DEFAULT 0.0f
#define PROGRAM_INSTRUCTIONS 0
#define PROGRAM_ITERATIONS 16384
#define PROGRAM_BLOCK_SIZE 32
#define PROGRAM_BLOCK_THREADS 1
#define PROGRAM_POPULATION 256
#define SAMPLE_ITERATIONS 15
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_DEVOLVE_AGE 50

#define STAMP_SIZE MMA_ARRAY_SIZE * 3

typedef struct FireStarterData {
	union {
		half data[PROGRAM_DATA];
		struct { half a[MMA_ARRAY_SIZE], b[MMA_ARRAY_SIZE], c[MMA_ARRAY_SIZE]; } abc;
	};

	half& operator[](int i)
	{
		return data[i];
	} // operator[]

	// Stamp function
	void Evaluate(void)
	{
#ifdef X__CUDACC__
		// Declare the fragments
		nvcuda::wmma::fragment<nvcuda::wmma::matrix_a, MMA_SIZE, MMA_SIZE, MMA_SIZE, half, nvcuda::wmma::row_major> a_frag;
		nvcuda::wmma::fragment<nvcuda::wmma::matrix_b, MMA_SIZE, MMA_SIZE, MMA_SIZE, half, nvcuda::wmma::row_major> b_frag;
		nvcuda::wmma::fragment<nvcuda::wmma::accumulator, MMA_SIZE, MMA_SIZE, MMA_SIZE, half> acc_frag;

		// Load the inputs
		nvcuda::wmma::load_matrix_sync(a_frag, abc.a, MMA_SIZE);
		nvcuda::wmma::load_matrix_sync(b_frag, abc.b, MMA_SIZE);
		nvcuda::wmma::load_matrix_sync(acc_frag, abc.c, MMA_SIZE, nvcuda::wmma::mem_row_major);

		// Perform the matrix multiplication
		nvcuda::wmma::mma_sync(acc_frag, a_frag, b_frag, acc_frag);

		// Store the output
		nvcuda::wmma::store_matrix_sync(abc.a, acc_frag, MMA_SIZE, nvcuda::wmma::mem_row_major);
#else
		half d[MMA_ARRAY_SIZE];
		for (int i = 0; i < MMA_SIZE; i++) {
			for (int j = 0; j < MMA_SIZE; j++) {
				float temp = abc.c[i * MMA_SIZE + j];
				for (int k = 0; k < MMA_SIZE; k++)
					temp += (float)abc.a[i * MMA_SIZE + k] * (float)abc.b[k * MMA_SIZE + j];
				d[i * MMA_SIZE + j] = temp;
			}
		}
		memcpy(abc.a, d, sizeof(d));
#endif
	} // Evaluate

	half& Input(void)
	{
		return abc.a[0];
	} // Input

	half& Result(void)
	{
		return abc.a[MMA_ARRAY_SIZE - 1];
	} // Result
} FireStarterData;

typedef struct FireStarterResult {
	FireStarterData data;
	float result;
	unsigned int member;
} FireStarterResult;

typedef struct FireStarterResults {
	unsigned int numResults;
	float minResult;
	float curResult;
	float startResult;
	FireStarterData bestData;
	FireStarterResult results[1];
} FireStarterTensorResults;

typedef struct FireStarterState {
	FireStarterData data;
	float result;
} FireStarterState;

GPU_FUNCTION float Target(float n) {
	return sinf(n);
} // Target

GPU_FUNCTION float Target1(float n) {
	return sinf(n * 1.3f) + n * 0.1f;
} // Target1

GPU_FUNCTION float Evaluate(const FireStarterData &workStamp, float r)
{
	FireStarterData stamp(workStamp);
	stamp.Input() = stamp.Input() + half(r);
	stamp.Evaluate();
	r = stamp.Result();
	return isnan(r) ? 0.0f : r;
} // Evaluate

#ifndef __CUDACC__
GPU_FUNCTION unsigned int atomicInc(unsigned int *x, unsigned int flags)
{
	return (*x)++;	// Not thread safe but never used.
} // atomicInc
#endif

GPU_GLOBAL void FireExecute(FireStarterResults *results, const unsigned int maxResults, const unsigned int population, const unsigned int generation, const unsigned int variation)
{
	unsigned int index = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int member = blockIdx.x;
	if (member >= population)
	    return;
	unsigned int seed = RANDOM(RANDOM(member) + generation);
	FireStarterData stamp(results->bestData);
	float target[SAMPLE_ITERATIONS];
	for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
	    float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);
	    target[i] = variation ? Target1(theta) : Target(theta);
	}
	float result = results->startResult;
	unsigned int age = 0;
	unsigned int d = 0;
	half oldValue = stamp.data[d];
	for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
		float curResult = fabsf(Evaluate(stamp, 0.0f) - target[0]);
	    for (int i = 1; i < SAMPLE_ITERATIONS; i++) {
	        float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);
	        float delta = fabsf(Evaluate(stamp, theta) - target[i]);
	        curResult = delta > curResult ? delta : curResult;
	    }
	    if (curResult < result) {
	        result = curResult;
	        age = 0;
	    } else {
			stamp.data[d] = oldValue;
	        age++;
	    }
	    d = RANDOMSEED(seed) % STAMP_SIZE;
		oldValue = stamp.data[d];
		stamp.data[d] = (float)stamp.data[d] + (RANDOMFACTOR(seed) * result * (1.0f + age * SMART_AGE_FACTOR) * SMART_RANDOM_FACTOR);
	}
	stamp.data[d] = oldValue;
	if (result < results->curResult) {
	    results->curResult = result;
	    unsigned int index = atomicInc(&results->numResults, 0xFFFFFFFF);
	    if (index < maxResults) {
	        results->results[index].data = stamp;
	        results->results[index].result = result;
	        results->results[index].member = member;
	    }
	}
} // FireExecute

GPU_GLOBAL void FireShow(const FireStarterData data, const FireStarterData bestData, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)
{
	unsigned int x = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int xScale = bufferHeight / 8;
	unsigned int yScale = bufferHeight / 16;
	if (x < bufferHeight) {
		unsigned int x0 = (bufferWidth / 2) - xScale;
		unsigned int x1 = (bufferWidth / 2) + xScale;
	    if (x0 >= 0) {
	        uchar4 &pixel(bufferPixels[x * bufferWidth + x0]);
	        pixel.x = 64;
	        pixel.y = 128;
	        pixel.z = 64;
	    };
	    if (x1 < bufferWidth) {
	        uchar4 &pixel(bufferPixels[x * bufferWidth + x1]);
	        pixel.x = 64;
	        pixel.y = 128;
	        pixel.z = 64;
	    };
	}
	if (x < bufferWidth) {
	    float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
	    float center = bufferHeight * 0.66f;
		unsigned int y = (unsigned int)(center + Target(theta) * yScale);
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = 255;
	        pixel.y = 128;
	    };
		y = (unsigned int)(center + Evaluate(data, theta) * yScale);
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.z = 255;
	        pixel.y = 128;
	    };
		y = (unsigned int)(center + Evaluate(bestData, theta) * yScale);
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = pixel.y = pixel.z = 255;
	    };
	}
} // FireShow

GPU_GLOBAL void FireShow1(const FireStarterData bestData, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)
{
	unsigned int x = blockDim.x * blockIdx.x + threadIdx.x;
	unsigned int xScale = bufferHeight / 8;
	unsigned int yScale = bufferHeight / 16;
	if (x < bufferWidth) {
	    float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
	    float center = bufferHeight * 0.33f;
		unsigned int y = (unsigned int)(center + Target1(theta) * yScale);
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = 255;
	        pixel.y = 128;
	    };
		y = (unsigned int)(center + Evaluate(bestData, theta) * yScale);
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = pixel.y = pixel.z = 255;
	    };
	}
} // FireShow1