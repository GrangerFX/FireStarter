#pragma once
#include "FireStarterState.h"

// Run date: 02/25/24 19:00:29 Pacific Standard Time
// Run duration = 19579.176801 seconds
// Run generation = 89
// Run evolution = 12
// Run max result = 0.00002730
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
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

// Variation: 0  result = 0.00001866
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.357859f;
    data->d[1] = 1.123909f;
    data->d[2] = -0.340581f;
    data->d[3] = -0.999613f;
    data->d[4] = 1.999433f;
    data->d[5] = 0.066238f;
    data->d[6] = -0.296557f;
    data->d[7] = -5.723970f;
    data->d[8] = -0.753127f;
    data->d[9] = 2.973157f;
    data->d[10] = 49.972481f;
    data->d[11] = 1.166865f;
    data->d[12] = -2.855586f;
    data->d[13] = -0.455612f;
    data->d[14] = 0.419201f;
    data->d[15] = 1.059694f;
    data->d[16] = -0.000896f;
    data->d[17] = 3.412788f;
    data->d[18] = 0.635404f;
    data->d[19] = -0.630012f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000019f;
} // LoadVariation0

// Variation: 1  result = 0.00002730
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.509259f;
    data->d[1] = -0.747844f;
    data->d[2] = -0.136625f;
    data->d[3] = 0.940060f;
    data->d[4] = -1.854684f;
    data->d[5] = 1.222922f;
    data->d[6] = -2.964591f;
    data->d[7] = -0.040613f;
    data->d[8] = -1.614704f;
    data->d[9] = 0.075385f;
    data->d[10] = -0.166148f;
    data->d[11] = -0.206981f;
    data->d[12] = 1441.370361f;
    data->d[13] = 0.290597f;
    data->d[14] = -1.422374f;
    data->d[15] = -0.489895f;
    data->d[16] = 1.184095f;
    data->d[17] = 1.120096f;
    data->d[18] = -1.660426f;
    data->d[19] = 1.609433f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000027f;
} // LoadVariation1

// Variation: 2  result = 0.00002170
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.136909f;
    data->d[1] = -0.671333f;
    data->d[2] = -0.482985f;
    data->d[3] = 0.365162f;
    data->d[4] = -1.025333f;
    data->d[5] = -1.224475f;
    data->d[6] = 0.605197f;
    data->d[7] = 1.701504f;
    data->d[8] = 0.438576f;
    data->d[9] = 1.993231f;
    data->d[10] = -3.526635f;
    data->d[11] = -400.581207f;
    data->d[12] = -1.279076f;
    data->d[13] = -0.007367f;
    data->d[14] = -1.121602f;
    data->d[15] = 2.295626f;
    data->d[16] = 0.064260f;
    data->d[17] = 6.755410f;
    data->d[18] = 0.249053f;
    data->d[19] = 0.073983f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000022f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000027f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 21);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 89;
    state.m_evolution = 12;
    state.m_children0 = 89;
    state.m_children1 = 4;
    state.m_index = 0;
    state.m_copy_index = 14;
    state.m_id = 0;
    state.m_test = 172;
    state.m_seed = 3461483421914254607;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000057f;
    state.m_maxResult = 0.000027f;
    state.m_evolveWeight = 0.000172f;
    state.m_optimizeValid = true;
} // LoadState
