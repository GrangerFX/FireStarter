#pragma once
#include "FireStarterState.h"

// Run date: 09/17/23 10:22:43 Pacific Daylight Time
// Run duration = 629.596773 seconds
// Run generation = 10
// Run evolution = 9
// Run result = 0.00000012
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
// Run units = 4
// Run processes = 4
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
    settings.m_units = 4;
    settings.m_processes = 4;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.494688f;
    data->d[1] = -4.636281f;
    data->d[2] = -1.452603f;
    data->d[3] = -0.084625f;
    data->d[4] = 1.424365f;
    data->d[5] = -0.451922f;
    data->d[6] = -2.732818f;
    data->d[7] = -8.192192f;
    data->d[8] = 1.057536f;
    data->d[9] = -0.005492f;
    data->d[10] = 0.516554f;
    data->d[11] = 0.998289f;
    data->d[12] = -1.291922f;
    data->d[13] = -0.046783f;
    data->d[14] = -0.711821f;
    data->d[15] = 0.000000f;
    data->d[16] = 4.556566f;
    data->d[17] = -0.154115f;
    data->d[18] = 1.446358f;
    data->d[19] = -0.235433f;
    data->d[20] = 0.235433f;
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
    data->d[0] = -2.350903f;
    data->d[1] = -0.739757f;
    data->d[2] = 0.703195f;
    data->d[3] = 0.593190f;
    data->d[4] = -0.631867f;
    data->d[5] = 0.673889f;
    data->d[6] = 2.289960f;
    data->d[7] = -1.600602f;
    data->d[8] = -0.525389f;
    data->d[9] = -1.069447f;
    data->d[10] = -0.007338f;
    data->d[11] = 0.933919f;
    data->d[12] = -1.135475f;
    data->d[13] = 0.269994f;
    data->d[14] = 0.493396f;
    data->d[15] = 0.000000f;
    data->d[16] = 3.252956f;
    data->d[17] = -0.383492f;
    data->d[18] = 1.738179f;
    data->d[19] = -0.224798f;
    data->d[20] = 0.106666f;
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
    data->d[0] = -1.291884f;
    data->d[1] = -1.326110f;
    data->d[2] = 0.534133f;
    data->d[3] = -2.661781f;
    data->d[4] = 2.022019f;
    data->d[5] = -0.168630f;
    data->d[6] = -0.239802f;
    data->d[7] = 0.025551f;
    data->d[8] = 0.662466f;
    data->d[9] = 0.642357f;
    data->d[10] = 1.276804f;
    data->d[11] = 0.478807f;
    data->d[12] = -1.931654f;
    data->d[13] = -0.771134f;
    data->d[14] = 0.001599f;
    data->d[15] = -0.000000f;
    data->d[16] = -1.680414f;
    data->d[17] = -0.118012f;
    data->d[18] = 3.465205f;
    data->d[19] = 0.697358f;
    data->d[20] = -0.173759f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 21);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 10;
    state.m_evolution = 9;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 59;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 7904080449247690926;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
