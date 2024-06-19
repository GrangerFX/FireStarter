#pragma once
#include "FireStarterState.h"

// Run date: 06/19/24 11:32:33 Pacific Daylight Time
// Run duration = 1310.452159 seconds
// Run generation = 80
// Run evolution = 6
// Run max result = 0.00001466
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
// Run tests = 0
// Run streams = 1
// Run units = 1
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
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00000328
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.065233f;
    data->d[1] = -2.154119f;
    data->d[2] = -1.316993f;
    data->d[3] = -1.418478f;
    data->d[4] = -2.000837f;
    data->d[5] = -0.286693f;
    data->d[6] = -0.000895f;
    data->d[7] = 0.087765f;
    data->d[8] = -2.458643f;
    data->d[9] = 9.343068f;
    data->d[10] = 0.006168f;
    data->d[11] = -0.564309f;
    data->d[12] = -2.215017f;
    data->d[13] = -2.098915f;
    data->d[14] = 0.097122f;
    data->d[15] = 1.602913f;
    data->d[16] = -0.545813f;
    data->d[17] = 1.453478f;
    data->d[18] = 1.637814f;
    data->d[19] = -3.054224f;
    data->d[20] = 0.294882f;
    data->d[21] = -0.502393f;
    data->d[22] = 0.000423f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00001466
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.084393f;
    data->d[1] = -4.026033f;
    data->d[2] = 0.315125f;
    data->d[3] = 0.622612f;
    data->d[4] = 0.497712f;
    data->d[5] = -0.258521f;
    data->d[6] = 0.003755f;
    data->d[7] = -4.094462f;
    data->d[8] = 1.798695f;
    data->d[9] = 6.118326f;
    data->d[10] = -0.308140f;
    data->d[11] = -0.233891f;
    data->d[12] = -0.074928f;
    data->d[13] = -2.532006f;
    data->d[14] = 0.594988f;
    data->d[15] = -0.006116f;
    data->d[16] = -3.607760f;
    data->d[17] = 3.466686f;
    data->d[18] = 3.648506f;
    data->d[19] = 3.264558f;
    data->d[20] = -0.123289f;
    data->d[21] = 0.044518f;
    data->d[22] = 0.047613f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation1

// Variation: 2  result = 0.00001397
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.976579f;
    data->d[1] = 2.673606f;
    data->d[2] = 1.264664f;
    data->d[3] = -1.536052f;
    data->d[4] = -0.744944f;
    data->d[5] = 0.629597f;
    data->d[6] = 0.001884f;
    data->d[7] = 0.028100f;
    data->d[8] = -2.754459f;
    data->d[9] = 4.550634f;
    data->d[10] = 1.780870f;
    data->d[11] = 0.078504f;
    data->d[12] = -1.624280f;
    data->d[13] = -0.869479f;
    data->d[14] = 0.128955f;
    data->d[15] = -1.701943f;
    data->d[16] = -0.586012f;
    data->d[17] = -0.259783f;
    data->d[18] = 8.689738f;
    data->d[19] = -0.492505f;
    data->d[20] = -0.383409f;
    data->d[21] = -0.146694f;
    data->d[22] = -0.187993f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000015f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 80;
    state.m_evolution = 6;
    state.m_index = 3;
    state.m_copy_index = 22;
    state.m_id = 22;
    state.m_test = 0;
    state.m_seed = 1039127998485967849;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000021f;
    state.m_maxResult = 0.000015f;
    state.m_evolveWeight = 0.001402f;
    state.m_optimizeValid = true;
} // LoadState
