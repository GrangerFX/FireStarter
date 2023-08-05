#pragma once
#include "FireStarterState.h"

// Run date: 08/05/23 12:54:06 Pacific Daylight Time
// Run duration = 1248.443207 seconds
// Run generation = 75
// Run evolution = 0
// Run result = 0.00000024
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
// Run tests = 0
// Run units = 8
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
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

// Variation: 0  result = 10.00000000
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000000f;
    data->d[1] = 0.000000f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.000000f;
    data->d[5] = 0.000000f;
    data->d[6] = 0.000000f;
    data->d[7] = 0.000000f;
    data->d[8] = 0.000000f;
    data->d[9] = 0.000000f;
    data->d[10] = 0.000000f;
    data->d[11] = 0.000000f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
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
    *(result->MinResult()) = 10.000000f;
} // LoadVariation0

// Variation: 1  result = 10.00000000
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000000f;
    data->d[1] = 0.000000f;
    data->d[2] = 0.000000f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.000000f;
    data->d[5] = 0.000000f;
    data->d[6] = 0.000000f;
    data->d[7] = 0.000000f;
    data->d[8] = 0.000000f;
    data->d[9] = 0.000000f;
    data->d[10] = 0.000000f;
    data->d[11] = 0.000000f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
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
    *(result->MinResult()) = 10.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.137572f;
    data->d[1] = -1.480422f;
    data->d[2] = 0.425561f;
    data->d[3] = 2.600929f;
    data->d[4] = -4.035333f;
    data->d[5] = 0.157392f;
    data->d[6] = -0.000924f;
    data->d[7] = 7.084354f;
    data->d[8] = -0.706147f;
    data->d[9] = -0.065927f;
    data->d[10] = 0.287525f;
    data->d[11] = 1.801042f;
    data->d[12] = -6.272970f;
    data->d[13] = 0.710422f;
    data->d[14] = 0.982899f;
    data->d[15] = -0.691266f;
    data->d[16] = 0.415013f;
    data->d[17] = 1.026413f;
    data->d[18] = 0.261799f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 1, 25);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 1, 4);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 17);
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
    state.m_generation = 75;
    state.m_evolution = 0;
    state.m_index = 53;
    state.m_test = 0;
    state.m_seed = 14151830041897612424;
} // LoadState
