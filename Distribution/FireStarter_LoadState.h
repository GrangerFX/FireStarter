#pragma once
#include "FireStarterState.h"

// Run date: 11/20/23 18:31:51 Pacific Standard Time
// Run duration = 36103.984441 seconds
// Run generation = 213
// Run evolution = 11
// Run result = 0.00000894
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

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

// Variation: 0  result = 0.00000548
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.239030f;
    data->d[1] = -2.570831f;
    data->d[2] = -0.267787f;
    data->d[3] = -1.086376f;
    data->d[4] = -0.680783f;
    data->d[5] = -0.012898f;
    data->d[6] = -2.292124f;
    data->d[7] = 1.695406f;
    data->d[8] = -0.280539f;
    data->d[9] = -0.756493f;
    data->d[10] = -1.040114f;
    data->d[11] = -0.226053f;
    data->d[12] = -1.638002f;
    data->d[13] = -2.069314f;
    data->d[14] = 1.721488f;
    data->d[15] = -1.833738f;
    data->d[16] = -2.278206f;
    data->d[17] = 0.564188f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation0

// Variation: 1  result = 0.00000894
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.237060f;
    data->d[1] = -2.027941f;
    data->d[2] = -0.214855f;
    data->d[3] = -0.921803f;
    data->d[4] = -1.009136f;
    data->d[5] = 1.105969f;
    data->d[6] = -0.008538f;
    data->d[7] = 7.944985f;
    data->d[8] = -1.199194f;
    data->d[9] = 4.014617f;
    data->d[10] = 0.594190f;
    data->d[11] = 1.972710f;
    data->d[12] = -0.313185f;
    data->d[13] = -4.693532f;
    data->d[14] = 0.387985f;
    data->d[15] = -1.942904f;
    data->d[16] = 1.120572f;
    data->d[17] = 2.124800f;
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

// Variation: 2  result = 0.00000751
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.570896f;
    data->d[1] = -1.274504f;
    data->d[2] = 0.573730f;
    data->d[3] = -0.879872f;
    data->d[4] = -0.313817f;
    data->d[5] = 0.017064f;
    data->d[6] = -7.900572f;
    data->d[7] = -0.487596f;
    data->d[8] = 0.385961f;
    data->d[9] = 0.575959f;
    data->d[10] = 1.636281f;
    data->d[11] = 0.142267f;
    data->d[12] = 1.547225f;
    data->d[13] = -3.487237f;
    data->d[14] = 2.724213f;
    data->d[15] = -1.452435f;
    data->d[16] = 2.603748f;
    data->d[17] = -2.318612f;
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
    *(result->MinResult()) = 0.000008f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 1, 28);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 1, 26);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 1, 5);
    instructions->SetOperation(30, 1, 14);
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
    state.m_generation = 213;
    state.m_evolution = 11;
    state.m_index = 47;
    state.m_id = 22;
    state.m_copy_id = 22;
    state.m_test = 5;
    state.m_seed = 7536482751116547262;
    state.m_maxResult = 0.000009f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
