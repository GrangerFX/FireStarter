#pragma once
#include "FireStarterState.h"

// Run date: 08/15/23 11:21:58 Pacific Daylight Time
// Run duration = 811.916256 seconds
// Run generation = 56
// Run evolution = 5
// Run result = 0.00000191
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

// Variation: 0  result = 0.00000083
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.232282f;
    data->d[2] = 0.017226f;
    data->d[3] = 77.426453f;
    data->d[4] = -2.481678f;
    data->d[5] = 2.306874f;
    data->d[6] = 0.937735f;
    data->d[7] = 0.910601f;
    data->d[8] = -0.519872f;
    data->d[9] = 1.872587f;
    data->d[10] = -0.710567f;
    data->d[11] = -1.139423f;
    data->d[12] = -4.300929f;
    data->d[13] = -2.934212f;
    data->d[14] = 0.126724f;
    data->d[15] = -3.180955f;
    data->d[16] = 1.329064f;
    data->d[17] = 1.848554f;
    data->d[18] = -1.848554f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000191
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.227711f;
    data->d[2] = 1.005857f;
    data->d[3] = -0.241428f;
    data->d[4] = 0.247697f;
    data->d[5] = 1.152818f;
    data->d[6] = -0.968154f;
    data->d[7] = 2.136180f;
    data->d[8] = -0.650507f;
    data->d[9] = -2.425542f;
    data->d[10] = -0.471419f;
    data->d[11] = -1.703892f;
    data->d[12] = -0.088502f;
    data->d[13] = 0.530231f;
    data->d[14] = 0.154652f;
    data->d[15] = -0.677908f;
    data->d[16] = -1.970640f;
    data->d[17] = -1.259810f;
    data->d[18] = 1.141678f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000126
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.825924f;
    data->d[2] = -0.248022f;
    data->d[3] = 0.004110f;
    data->d[4] = 24.369757f;
    data->d[5] = -1.136156f;
    data->d[6] = -0.858807f;
    data->d[7] = 0.621096f;
    data->d[8] = 2.713728f;
    data->d[9] = -1.025882f;
    data->d[10] = 0.316158f;
    data->d[11] = 1.591788f;
    data->d[12] = -3.699887f;
    data->d[13] = 1.803371f;
    data->d[14] = 0.339430f;
    data->d[15] = 0.881382f;
    data->d[16] = -1.433165f;
    data->d[17] = 1.034041f;
    data->d[18] = -0.510442f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 11);
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
    state.m_generation = 56;
    state.m_evolution = 5;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 17275396652106898743;
} // LoadState
