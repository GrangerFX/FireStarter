#pragma once
#include "FireStarterState.h"

// Run date: 12/03/23 13:12:45 Pacific Standard Time
// Run duration = 39043.282001 seconds
// Run generation = 103
// Run evolution = 11
// Run max result = 0.00000007
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
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
    settings.m_patternOpcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
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
    data->d[0] = -3.462019f;
    data->d[1] = 0.320426f;
    data->d[2] = -0.028012f;
    data->d[3] = 0.006534f;
    data->d[4] = 17.622864f;
    data->d[5] = -25.783083f;
    data->d[6] = -13.519197f;
    data->d[7] = -4.248824f;
    data->d[8] = -0.116496f;
    data->d[9] = -2.384351f;
    data->d[10] = 1.630919f;
    data->d[11] = 0.465507f;
    data->d[12] = -1.411011f;
    data->d[13] = 0.570793f;
    data->d[14] = 1.039485f;
    data->d[15] = 21.116982f;
    data->d[16] = 0.300656f;
    data->d[17] = -0.464690f;
    data->d[18] = -0.000000f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.485121f;
    data->d[1] = -1.605537f;
    data->d[2] = -0.440852f;
    data->d[3] = -0.103944f;
    data->d[4] = -0.220772f;
    data->d[5] = 2.658615f;
    data->d[6] = 1.697650f;
    data->d[7] = -3.392877f;
    data->d[8] = -0.594900f;
    data->d[9] = -0.124461f;
    data->d[10] = -0.191725f;
    data->d[11] = -0.999569f;
    data->d[12] = 3.648894f;
    data->d[13] = -1.787573f;
    data->d[14] = -3.112919f;
    data->d[15] = -7.995162f;
    data->d[16] = 7.091228f;
    data->d[17] = -0.000009f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000007
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.443383f;
    data->d[1] = -1.174611f;
    data->d[2] = -0.313533f;
    data->d[3] = -1.344983f;
    data->d[4] = 0.282072f;
    data->d[5] = 0.298290f;
    data->d[6] = -0.284404f;
    data->d[7] = -0.842043f;
    data->d[8] = 1.532838f;
    data->d[9] = 4.292811f;
    data->d[10] = -2.454941f;
    data->d[11] = 1.037950f;
    data->d[12] = -0.760627f;
    data->d[13] = 0.084652f;
    data->d[14] = -0.677360f;
    data->d[15] = -0.572140f;
    data->d[16] = 9.702761f;
    data->d[17] = -0.000011f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 22);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 103;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_copy_index = 17;
    state.m_id = 46;
    state.m_copy_id = 4;
    state.m_test = 9;
    state.m_seed = 14155994237444951798;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
