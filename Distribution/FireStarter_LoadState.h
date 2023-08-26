#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 09:51:23 Pacific Daylight Time
// Run duration = 36.770091 seconds
// Run generation = 20
// Run evolution = 8
// Run result = 0.00004119
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_TEST;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 0;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002916
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.442028f;
    data->d[1] = 0.626474f;
    data->d[2] = 1.038172f;
    data->d[3] = -0.266316f;
    data->d[4] = 0.911142f;
    data->d[5] = 2.918964f;
    data->d[6] = -1.067188f;
    data->d[7] = -0.999918f;
    data->d[8] = 1.444413f;
    data->d[9] = -6.448584f;
    data->d[10] = 1.597934f;
    data->d[11] = 0.727341f;
    data->d[12] = 0.593601f;
    data->d[13] = -3.301516f;
    data->d[14] = -0.689813f;
    data->d[15] = 0.848301f;
    data->d[16] = -0.000083f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000029f;
} // LoadVariation0

// Variation: 1  result = 0.00001287
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.451259f;
    data->d[1] = 0.369293f;
    data->d[2] = 0.278245f;
    data->d[3] = 1.783864f;
    data->d[4] = -1.404955f;
    data->d[5] = -1.186776f;
    data->d[6] = 0.711315f;
    data->d[7] = -1.061984f;
    data->d[8] = 0.028916f;
    data->d[9] = 4.576313f;
    data->d[10] = 1.480780f;
    data->d[11] = -0.444154f;
    data->d[12] = 1.363340f;
    data->d[13] = -3.147132f;
    data->d[14] = -0.601445f;
    data->d[15] = -0.753309f;
    data->d[16] = -0.118134f;
    data->d[17] = 0.000000f;
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
} // LoadVariation1

// Variation: 2  result = 0.00004119
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.273321f;
    data->d[1] = 0.456143f;
    data->d[2] = -1.646820f;
    data->d[3] = 1.978526f;
    data->d[4] = 0.461122f;
    data->d[5] = -1.056125f;
    data->d[6] = -0.863928f;
    data->d[7] = -0.408761f;
    data->d[8] = -6.975824f;
    data->d[9] = 0.031291f;
    data->d[10] = -2.418748f;
    data->d[11] = -0.889700f;
    data->d[12] = -0.634813f;
    data->d[13] = -1.393290f;
    data->d[14] = 0.231945f;
    data->d[15] = -0.848851f;
    data->d[16] = 0.523596f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000041f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000041f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 20;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16237112685628958466;
} // LoadState
