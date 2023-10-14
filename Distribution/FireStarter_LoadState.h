#pragma once
#include "FireStarterState.h"

// Run date: 10/14/23 10:23:12 Pacific Daylight Time
// Run duration = 17093.087541 seconds
// Run generation = 65
// Run evolution = 8
// Run result = 0.00000063
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
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.494638f;
    data->d[1] = 0.101679f;
    data->d[2] = 0.632868f;
    data->d[3] = 0.504313f;
    data->d[4] = -1.623497f;
    data->d[5] = 0.746577f;
    data->d[6] = 2.899896f;
    data->d[7] = -2.595847f;
    data->d[8] = 1.294801f;
    data->d[9] = 0.154922f;
    data->d[10] = -1.665147f;
    data->d[11] = -1.519468f;
    data->d[12] = -0.800357f;
    data->d[13] = 0.068972f;
    data->d[14] = 2.059705f;
    data->d[15] = 0.297202f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.041284f;
    data->d[1] = -0.321926f;
    data->d[2] = 0.716220f;
    data->d[3] = -0.742031f;
    data->d[4] = -0.726528f;
    data->d[5] = 1.442022f;
    data->d[6] = 4.335120f;
    data->d[7] = 1.194620f;
    data->d[8] = -0.876023f;
    data->d[9] = -0.714287f;
    data->d[10] = -1.678793f;
    data->d[11] = 0.607853f;
    data->d[12] = 2.743428f;
    data->d[13] = 0.241351f;
    data->d[14] = 1.879627f;
    data->d[15] = -0.204078f;
    data->d[16] = -0.118132f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000063
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.244968f;
    data->d[1] = -1.426591f;
    data->d[2] = -1.983272f;
    data->d[3] = 1.814509f;
    data->d[4] = -1.376528f;
    data->d[5] = 0.330634f;
    data->d[6] = 0.577215f;
    data->d[7] = 0.832555f;
    data->d[8] = -0.583181f;
    data->d[9] = -0.064486f;
    data->d[10] = -1.097417f;
    data->d[11] = -2.239588f;
    data->d[12] = 3.573097f;
    data->d[13] = 0.392486f;
    data->d[14] = -1.590924f;
    data->d[15] = 0.064712f;
    data->d[16] = 0.523599f;
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
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 65;
    state.m_evolution = 8;
    state.m_age = 6;
    state.m_index = 48;
    state.m_id = 30;
    state.m_copy_id = 6;
    state.m_test = 15;
    state.m_seed = 4035586215459200536;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
