#pragma once
#include "FireStarterState.h"

// Run date: 02/12/24 16:34:09 Pacific Standard Time
// Run duration = 16577.839195 seconds
// Run generation = 57
// Run evolution = 8
// Run max result = 0.00007463
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 64;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002375
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.462982f;
    data->d[1] = -1.419127f;
    data->d[2] = -0.938847f;
    data->d[3] = 2.767617f;
    data->d[4] = -0.157740f;
    data->d[5] = 1.164008f;
    data->d[6] = 1.737970f;
    data->d[7] = -0.791614f;
    data->d[8] = 1.284369f;
    data->d[9] = 1.201875f;
    data->d[10] = 1.126580f;
    data->d[11] = -0.296705f;
    data->d[12] = -4.991582f;
    data->d[13] = 0.014221f;
    data->d[14] = -0.613808f;
    data->d[15] = -0.150602f;
    data->d[16] = 1.866019f;
    data->d[17] = -0.687802f;
    data->d[18] = -1.292347f;
    data->d[19] = -2.253634f;
    data->d[20] = 0.818913f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000024f;
} // LoadVariation0

// Variation: 1  result = 0.00001836
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.172173f;
    data->d[1] = 1.569940f;
    data->d[2] = 1.056462f;
    data->d[3] = -1.755245f;
    data->d[4] = -0.999396f;
    data->d[5] = -1.905925f;
    data->d[6] = -0.599996f;
    data->d[7] = 38.894756f;
    data->d[8] = 5.673035f;
    data->d[9] = -0.458904f;
    data->d[10] = -0.007169f;
    data->d[11] = 0.149423f;
    data->d[12] = -0.070353f;
    data->d[13] = 4.997734f;
    data->d[14] = -0.819833f;
    data->d[15] = 2.734250f;
    data->d[16] = -3.365811f;
    data->d[17] = -0.949818f;
    data->d[18] = 2.086632f;
    data->d[19] = 1.098854f;
    data->d[20] = 0.254362f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00007463
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.843455f;
    data->d[1] = 1.472332f;
    data->d[2] = 0.707974f;
    data->d[3] = 1.245701f;
    data->d[4] = -0.707931f;
    data->d[5] = -1.455245f;
    data->d[6] = -1.800198f;
    data->d[7] = -0.400112f;
    data->d[8] = -0.663227f;
    data->d[9] = -1.058882f;
    data->d[10] = -1.728159f;
    data->d[11] = 0.751436f;
    data->d[12] = -2.503122f;
    data->d[13] = 0.006222f;
    data->d[14] = 4.228466f;
    data->d[15] = -0.786630f;
    data->d[16] = -0.153370f;
    data->d[17] = -0.163640f;
    data->d[18] = 0.147402f;
    data->d[19] = 2.190823f;
    data->d[20] = 1.038613f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000075f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000075f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 57;
    state.m_evolution = 8;
    state.m_children0 = 56;
    state.m_children1 = 1;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 5217465744921716345;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000137f;
    state.m_maxResult = 0.000075f;
    state.m_evolveWeight = 0.000305f;
    state.m_optimizeValid = true;
} // LoadState
