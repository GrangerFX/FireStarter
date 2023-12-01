#pragma once
#include "FireStarterState.h"

// Run date: 11/30/23 20:50:31 Pacific Standard Time
// Run duration = 36264.152540 seconds
// Run generation = 38
// Run evolution = 10
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
    settings.m_patternOpcodes = 4;

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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.471042f;
    data->d[2] = 1.857463f;
    data->d[3] = -0.145295f;
    data->d[4] = -0.118857f;
    data->d[5] = 0.487317f;
    data->d[6] = -6.267384f;
    data->d[7] = 0.014051f;
    data->d[8] = -12.078951f;
    data->d[9] = 0.442356f;
    data->d[10] = -1.460729f;
    data->d[11] = 4.075992f;
    data->d[12] = -1.862494f;
    data->d[13] = -1.414335f;
    data->d[14] = 0.091420f;
    data->d[15] = -0.000000f;
    data->d[16] = 0.097764f;
    data->d[17] = 0.562399f;
    data->d[18] = 3.192888f;
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
    data->d[1] = 0.061445f;
    data->d[2] = -4.443023f;
    data->d[3] = -0.634767f;
    data->d[4] = -0.232457f;
    data->d[5] = -0.123599f;
    data->d[6] = 2.672212f;
    data->d[7] = 0.006063f;
    data->d[8] = -5.964296f;
    data->d[9] = -0.898777f;
    data->d[10] = 1.211518f;
    data->d[11] = -2.373229f;
    data->d[12] = -0.161253f;
    data->d[13] = -4.459987f;
    data->d[14] = 9.820792f;
    data->d[15] = -0.077907f;
    data->d[16] = -2.356444f;
    data->d[17] = -0.449159f;
    data->d[18] = 1.432617f;
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
    data->d[1] = 0.803586f;
    data->d[2] = -1.199712f;
    data->d[3] = -0.633556f;
    data->d[4] = -1.885095f;
    data->d[5] = 0.112206f;
    data->d[6] = -0.302505f;
    data->d[7] = 0.000325f;
    data->d[8] = -13.560868f;
    data->d[9] = -2.288737f;
    data->d[10] = 0.199742f;
    data->d[11] = -0.186195f;
    data->d[12] = 1.981849f;
    data->d[13] = 0.504880f;
    data->d[14] = 0.419580f;
    data->d[15] = -57.047176f;
    data->d[16] = 0.942591f;
    data->d[17] = 0.181984f;
    data->d[18] = -0.053507f;
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
    instructions->SetOperation(0, 1, 22);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 24);
    instructions->SetOperation(31, 0, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 38;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 2;
    state.m_id = 26;
    state.m_copy_id = 24;
    state.m_test = 12;
    state.m_seed = 12273254351549831672;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
