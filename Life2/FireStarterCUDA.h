#pragma once
#include "CUDADefines.h"

#define PROGRAM_DATA 8
#define PROGRAM_DATA_DEFAULT 1.0f
#define PROGRAM_INSTRUCTIONS 8
#define PROGRAM_ITERATIONS 16384
#define PROGRAM_BLOCK_SIZE 256
#define PROGRAM_BLOCK_THREADS 256
#define PROGRAM_POPULATION 262144
#define SAMPLE_ITERATIONS 15
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_DEVOLVE_AGE 50

#define DYANMIC_INSTRUCTIONS 0

typedef struct {
	int a, b, c, d;
} FireStarterInstruction;

typedef struct FireStarterData {
	float d[PROGRAM_DATA];
	
	GPU_FUNCTION float& operator[](int i)
	{
	    return d[i];
	} // operator[]
} FireStarterData;

typedef struct FireStarterInstructions {
	FireStarterInstruction p[PROGRAM_DATA];

	GPU_FUNCTION FireStarterInstruction& operator[](int i)
	{
		return p[i];
	} // operator[]
} FireStarterInstructions;

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
} FireStarterResults;

typedef struct FireStarterState {
	FireStarterInstructions instructions;
	FireStarterData data;
	float result;
} FireStarterState;

GPU_FUNCTION float Target(float n) {
	return sinf(n);
} // Target

GPU_FUNCTION float Target1(float n) {
	return sinf(n * 1.3f) + n * 0.1f;
} // Target1

GPU_FUNCTION float Evaluate(FireStarterInstructions instructions, const FireStarterData &workData, float r)
{
	FireStarterData data(workData);
	data[0] += r;
	for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
		const FireStarterInstruction &instruction = instructions[i];
		data[instruction.a] = data[instruction.b] + data[instruction.c] * data[instruction.d];
	}
	r = data[instructions[PROGRAM_INSTRUCTIONS - 1].a];
	return isnan(r) ? 0.0f : r;
} // Evaluate

#ifdef __CUDACC__
GPU_FUNCTION float Evaluate(const FireStarterData &workData, float r);
GPU_FUNCTION float BestEvaluate(const FireStarterData &workData, float r);
#else
GPU_FUNCTION float Evaluate(const FireStarterData &workData, float r)
{
	return 0.0f;
} // Evaluate

GPU_FUNCTION float BestEvaluate(const FireStarterData &workData, float r)
{
	return 0.0f;
} // BestEvaluate

GPU_FUNCTION unsigned int atomicInc(unsigned int *x, unsigned int flags)
{
	return (*x)++;	// Not thread safe but never used.
} // atomicInc
#endif

GPU_GLOBAL void FireExecute(FireStarterInstructions instructions, FireStarterResults *results, const unsigned int maxResults, const unsigned int population, const unsigned int generation, const unsigned int variation)
{
	unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
	if (member >= population)
	    return;
	unsigned int seed = RANDOM(RANDOM(member) + generation);
	FireStarterData data(results->bestData);
	float target[SAMPLE_ITERATIONS];
	for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
	    float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);
	    target[i] = variation ? Target1(theta) : Target(theta);
	}
	float result = results->startResult;
	unsigned int age = 0;
	unsigned int d = 0;
	float oldValue = data[d];
	for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
#if DYANMIC_INSTRUCTIONS
		float curResult = fabsf(Evaluate(instructions, data, 0.0f) - target[0]);
#else
		float curResult = fabsf(Evaluate(data, 0.0f) - target[0]);
#endif
	    for (int i = 1; i < SAMPLE_ITERATIONS; i++) {
	        float theta = i * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);
#if DYANMIC_INSTRUCTIONS
			float delta = fabsf(Evaluate(instructions, data, theta) - target[i]);
#else
	        float delta = fabsf(Evaluate(data, theta) - target[i]);
#endif
	        curResult = delta > curResult ? delta : curResult;
	    }
	    if (curResult < result) {
	        result = curResult;
	        age = 0;
	    } else {
	        data[d] = oldValue;
	        age++;
	    }
	    d = RANDOMSEED(seed) % PROGRAM_DATA;
	    oldValue = data[d];
	    data[d] += (RANDOMFACTOR(seed) * result * (1.0f + age * SMART_AGE_FACTOR) * SMART_RANDOM_FACTOR);
	}
	data[d] = oldValue;
	if (result < results->curResult) {
	    results->curResult = result;
	    unsigned int index = atomicInc(&results->numResults, 0xFFFFFFFF);
	    if (index < maxResults) {
	        results->results[index].data = data;
	        results->results[index].result = result;
	        results->results[index].member = member;
	    }
	}
} // FireExecute

GPU_GLOBAL void FireShow(FireStarterInstructions instructions, FireStarterInstructions bestInstructions, const FireStarterData data, const FireStarterData bestData, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)
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
#if DYANMIC_INSTRUCTIONS
		y = (unsigned int)(center + Evaluate(instructions, data, theta) * yScale);
#else
		y = (unsigned int)(center + Evaluate(data, theta) * yScale);
#endif
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.z = 255;
	        pixel.y = 128;
	    };
#if DYANMIC_INSTRUCTIONS
		y = (unsigned int)(center + Evaluate(bestInstructions, bestData, theta) * yScale);
#else
		y = (unsigned int)(center + BestEvaluate(bestData, theta) * yScale);
#endif
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = pixel.y = pixel.z = 255;
	    };
	}
} // FireShow

GPU_GLOBAL void FireShow1(FireStarterInstructions bestInstructions, const FireStarterData bestData, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight)
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
#if DYANMIC_INSTRUCTIONS
		y = (unsigned int)(center + Evaluate(bestInstructions, bestResults, theta) * yScale);
#else
		y = (unsigned int)(center + BestEvaluate(bestData, theta) * yScale);
#endif
	    if (y < bufferHeight) {
	        uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
	        pixel.x = pixel.y = pixel.z = 255;
	    };
	}
} // FireShow1