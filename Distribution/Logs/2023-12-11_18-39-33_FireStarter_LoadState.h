#pragma once
#include "FireStarterState.h"

// Run date: 12/11/23 18:39:33 Pacific Standard Time
// Run duration = 1279.992847 seconds
// Run generation = 17
// Run evolution = 4
// Run max result = 0.00001419
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001419
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.373081f;
    data->d[1] = 0.727095f;
    data->d[2] = -0.000014f;
    data->d[3] = 1.490283f;
    data->d[4] = -0.806868f;
    data->d[5] = 0.550667f;
    data->d[6] = 0.013405f;
    data->d[7] = -0.953258f;
    data->d[8] = 2.077731f;
    data->d[9] = -1.117998f;
    data->d[10] = 1.883503f;
    data->d[11] = -1.793420f;
    data->d[12] = 0.023136f;
    data->d[13] = -0.340730f;
    data->d[14] = -0.153700f;
    data->d[15] = 0.546349f;
    data->d[16] = 1.886925f;
    data->d[17] = 0.122129f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00000942
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.026179f;
    data->d[1] = 1.201479f;
    data->d[2] = -1.436315f;
    data->d[3] = 2.498686f;
    data->d[4] = -0.384401f;
    data->d[5] = -3.064922f;
    data->d[6] = -0.253465f;
    data->d[7] = 2.225119f;
    data->d[8] = -0.837971f;
    data->d[9] = 3.527601f;
    data->d[10] = 0.073191f;
    data->d[11] = -0.587274f;
    data->d[12] = -1.621362f;
    data->d[13] = -0.311311f;
    data->d[14] = -0.365019f;
    data->d[15] = 0.357623f;
    data->d[16] = -3.660092f;
    data->d[17] = 0.422284f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000009f;
} // LoadVariation1

// Variation: 2  result = 0.00001293
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.252211f;
    data->d[1] = 3.053903f;
    data->d[2] = -0.000007f;
    data->d[3] = -0.386058f;
    data->d[4] = 0.487703f;
    data->d[5] = -2.386360f;
    data->d[6] = 1.022892f;
    data->d[7] = 0.044084f;
    data->d[8] = -1.632289f;
    data->d[9] = 1.550112f;
    data->d[10] = 2.149030f;
    data->d[11] = 0.513184f;
    data->d[12] = 0.467338f;
    data->d[13] = 1.066789f;
    data->d[14] = 0.144961f;
    data->d[15] = -0.292413f;
    data->d[16] = 5.965823f;
    data->d[17] = -0.001651f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000013f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 4;
    state.m_index = 31;
    state.m_copy_index = 17;
    state.m_id = 39;
    state.m_copy_id = 11;
    state.m_test = 15;
    state.m_seed = 12408571493687526801;
    state.m_maxResult = 0.000014f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
