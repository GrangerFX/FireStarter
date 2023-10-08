#pragma once
#include "FireStarterState.h"

// Run date: 10/07/23 19:45:13 Pacific Daylight Time
// Run duration = 1112.630685 seconds
// Run generation = 39
// Run evolution = 6
// Run result = 0.00000083
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
// Run seeds = 64
// Run tests = 1
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.825552f;
    data->d[2] = -0.430194f;
    data->d[3] = -0.898384f;
    data->d[4] = -1.552986f;
    data->d[5] = 3.798514f;
    data->d[6] = 5.255845f;
    data->d[7] = -0.417147f;
    data->d[8] = 1.627160f;
    data->d[9] = -0.016517f;
    data->d[10] = 1.539806f;
    data->d[11] = -0.008539f;
    data->d[12] = -1.159764f;
    data->d[13] = 1.647412f;
    data->d[14] = -0.007326f;
    data->d[15] = 0.897482f;
    data->d[16] = -0.534756f;
    data->d[17] = -0.047160f;
    data->d[18] = -0.147673f;
    data->d[19] = -0.000000f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.411863f;
    data->d[2] = -1.558141f;
    data->d[3] = 0.068758f;
    data->d[4] = -0.705025f;
    data->d[5] = -0.116832f;
    data->d[6] = -0.403272f;
    data->d[7] = 0.646075f;
    data->d[8] = 0.339287f;
    data->d[9] = 1.363918f;
    data->d[10] = 0.243973f;
    data->d[11] = 1.992880f;
    data->d[12] = -1.236952f;
    data->d[13] = 1.286191f;
    data->d[14] = -1.173731f;
    data->d[15] = 1.123939f;
    data->d[16] = -0.911630f;
    data->d[17] = 13.294289f;
    data->d[18] = -3.814193f;
    data->d[19] = 0.002330f;
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

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.250456f;
    data->d[2] = 1.280779f;
    data->d[3] = 2.441085f;
    data->d[4] = 0.055760f;
    data->d[5] = -0.623354f;
    data->d[6] = 0.610518f;
    data->d[7] = 0.235618f;
    data->d[8] = -2.696866f;
    data->d[9] = -0.120147f;
    data->d[10] = 5.946685f;
    data->d[11] = -4.661314f;
    data->d[12] = 0.003750f;
    data->d[13] = 4.693025f;
    data->d[14] = 1.527101f;
    data->d[15] = 1.473270f;
    data->d[16] = -14.773439f;
    data->d[17] = -50.772465f;
    data->d[18] = -0.121536f;
    data->d[19] = 0.084853f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 39;
    state.m_evolution = 6;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 1;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 16199499028575031518;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
} // LoadState
