#pragma once
#include "FireStarterState.h"

// Run date: 12/09/23 12:48:00 Pacific Standard Time
// Run duration = 10515.275841 seconds
// Run generation = 25
// Run evolution = 9
// Run max result = 0.00000012
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.182424f;
    data->d[2] = 0.041696f;
    data->d[3] = -0.304076f;
    data->d[4] = -1.389612f;
    data->d[5] = -1.288408f;
    data->d[6] = 0.916661f;
    data->d[7] = -1.409478f;
    data->d[8] = 1.067988f;
    data->d[9] = 1.522528f;
    data->d[10] = -1.178590f;
    data->d[11] = -0.010746f;
    data->d[12] = -0.214100f;
    data->d[13] = 0.135505f;
    data->d[14] = 0.001615f;
    data->d[15] = 37.440689f;
    data->d[16] = 2.257085f;
    data->d[17] = 0.028932f;
    data->d[18] = -0.028932f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.413876f;
    data->d[2] = 1.283355f;
    data->d[3] = -0.723658f;
    data->d[4] = -1.617107f;
    data->d[5] = -1.044528f;
    data->d[6] = 1.864055f;
    data->d[7] = -1.549115f;
    data->d[8] = -0.048534f;
    data->d[9] = -1.335091f;
    data->d[10] = -0.100359f;
    data->d[11] = -0.705037f;
    data->d[12] = -0.363609f;
    data->d[13] = -2.446358f;
    data->d[14] = -1.340979f;
    data->d[15] = -1.004279f;
    data->d[16] = 1.736459f;
    data->d[17] = -0.934415f;
    data->d[18] = 0.816284f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 1.130700f;
    data->d[2] = -0.248273f;
    data->d[3] = 0.794999f;
    data->d[4] = -0.160328f;
    data->d[5] = -1.222156f;
    data->d[6] = 0.804801f;
    data->d[7] = -1.141832f;
    data->d[8] = -0.441930f;
    data->d[9] = -1.279114f;
    data->d[10] = 0.669294f;
    data->d[11] = -2.208345f;
    data->d[12] = 0.481249f;
    data->d[13] = -0.052918f;
    data->d[14] = 0.690917f;
    data->d[15] = -2.854585f;
    data->d[16] = 1.296540f;
    data->d[17] = 0.093399f;
    data->d[18] = 0.430199f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 0, 1);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 1, 25);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 25;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_copy_index = 6;
    state.m_id = 16;
    state.m_copy_id = 19;
    state.m_test = 6;
    state.m_seed = 7931095945501378681;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
