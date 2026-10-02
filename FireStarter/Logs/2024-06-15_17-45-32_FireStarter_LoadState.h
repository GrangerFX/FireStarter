#pragma once
#include "FireStarterState.h"

// Run date: 06/15/24 17:45:32 Pacific Daylight Time
// Run duration = 25.131190 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00127017
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00065428
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.754437f;
    data->d[1] = 0.243296f;
    data->d[2] = 1.674816f;
    data->d[3] = -0.464969f;
    data->d[4] = 0.957496f;
    data->d[5] = 1.354826f;
    data->d[6] = -0.809627f;
    data->d[7] = -1.296429f;
    data->d[8] = 2.206148f;
    data->d[9] = -1.930052f;
    data->d[10] = 3.561603f;
    data->d[11] = -0.157589f;
    data->d[12] = 1.418847f;
    data->d[13] = -0.095255f;
    data->d[14] = -0.881179f;
    data->d[15] = -4.268456f;
    data->d[16] = -3.892031f;
    data->d[17] = -0.633820f;
    data->d[18] = 1.420928f;
    data->d[19] = 0.319121f;
    data->d[20] = -4.544244f;
    data->d[21] = -1.000417f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000654f;
} // LoadVariation0

// Variation: 1  result = 0.00019947
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.458781f;
    data->d[1] = -1.383888f;
    data->d[2] = -1.175956f;
    data->d[3] = 1.820646f;
    data->d[4] = 0.056037f;
    data->d[5] = 1.673776f;
    data->d[6] = -0.294086f;
    data->d[7] = 0.992650f;
    data->d[8] = -0.227135f;
    data->d[9] = 0.173432f;
    data->d[10] = 0.212728f;
    data->d[11] = 0.769288f;
    data->d[12] = -2.560618f;
    data->d[13] = 2.802365f;
    data->d[14] = 0.170692f;
    data->d[15] = -0.139953f;
    data->d[16] = 1.230139f;
    data->d[17] = 5.300412f;
    data->d[18] = -2.502699f;
    data->d[19] = 9.246434f;
    data->d[20] = 1.994029f;
    data->d[21] = -0.170282f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000199f;
} // LoadVariation1

// Variation: 2  result = 0.00127017
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.429498f;
    data->d[1] = 0.218638f;
    data->d[2] = 1.148424f;
    data->d[3] = 0.852280f;
    data->d[4] = 1.070170f;
    data->d[5] = -1.116493f;
    data->d[6] = -1.114231f;
    data->d[7] = 1.008961f;
    data->d[8] = 1.027247f;
    data->d[9] = 1.260542f;
    data->d[10] = 0.032225f;
    data->d[11] = -0.386682f;
    data->d[12] = -0.408672f;
    data->d[13] = -3.512583f;
    data->d[14] = 0.405253f;
    data->d[15] = 0.070261f;
    data->d[16] = -0.340568f;
    data->d[17] = -0.247925f;
    data->d[18] = -0.494595f;
    data->d[19] = -7.767920f;
    data->d[20] = -8.170762f;
    data->d[21] = 1.276404f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.001270f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001270f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 9;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 1778510222216246659;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.001270f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
