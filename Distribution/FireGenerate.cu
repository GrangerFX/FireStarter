#include "FireStarterInstructions.h"

// Generate the evaluate function code.
GPU_GLOBAL void FireGenerateEvolve(char* buffer, size_t size, unsigned int tabs, FireStarterInstructions* instructions, size_t numInstructions, unsigned int evolveInstruction)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0) {
        size_t length = 0;
        GenerateEvolveCode(buffer, size, length, tabs, instructions, numInstructions, evolveInstruction);
        if (!size)
            *(size_t*)buffer = length;
    }
} // FireGenerateEvolve

// Generate the evaluate function code.
GPU_GLOBAL void FireGenerateEvaluate(char* buffer, size_t size, unsigned int tabs, FireStarterInstructions* instructions, size_t numInstructions, FireStarterRegisters* registers, size_t numRegisters)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0) {
        size_t length = 0;
        GenerateEvaluateCode(buffer, size, length, tabs, instructions, numInstructions, registers, numRegisters);
        if (!size)
            *(size_t*)buffer = length;
    }
} // FireGenerateEvaluate

// Generate the solution function code.
GPU_GLOBAL void FireGenerateSolution(char* buffer, size_t size, unsigned int tabs, FireStarterInstructions* instructions, size_t numInstructions, FireStarterRegisters* registers, size_t numRegisters, FireStarterData* data, int optimize = 1)
{
    const unsigned int thread = threadIdx.x;
    if (thread == 0) {
        size_t length = 0;
        if (optimize)
            GenerateSolutionCode(buffer, size, length, tabs, instructions, numInstructions, registers, numRegisters, data);
        else {
            GenerateDataCode(buffer, size, length, tabs, numRegisters, data);
            GenerateEvaluateCode(buffer, size, length, tabs, instructions, numInstructions, registers, numRegisters);
        }
        if (!size)
            *(size_t*)buffer = length;
    }
} // FireGenerateSolution