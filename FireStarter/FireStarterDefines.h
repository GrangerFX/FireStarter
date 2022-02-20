#pragma once
#include "CUDADefines.h"
#include "HashRandom.h"

#define PROGRAM_INSTRUCTIONS 32
#define TARGET_VARIATIONS 4
#define EVOLVE_THREADS 32    // Number of threads per evolution member. Same as the number of threads in a warp.

#define SAMPLE_MIN 0.0f
#define SAMPLE_MAX (2.0f * 3.14159265f)
#define SAMPLE_ITERATIONS 15
#define EVOLUTION_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f
