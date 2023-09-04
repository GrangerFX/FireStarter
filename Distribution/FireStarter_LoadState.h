#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 10:15:11 Pacific Daylight Time
// Run duration = 608.717670 seconds
// Run generation = 79
// Run evolution = 25
// Run result = 0.00001276
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 2;
    settings.m_processes = 2;
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

// Variation: 0  result = 0.00001276
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.063288f;
    data->d[1] = -1.046082f;
    data->d[2] = -0.385418f;
    data->d[3] = -0.123130f;
    data->d[4] = 0.009000f;
    data->d[5] = 2.377015f;
    data->d[6] = -0.132237f;
    data->d[7] = -0.796856f;
    data->d[8] = 0.226098f;
    data->d[9] = -0.992788f;
    data->d[10] = -3.816035f;
    data->d[11] = -0.819506f;
    data->d[12] = 0.018806f;
    data->d[13] = 0.688728f;
    data->d[14] = 10.178209f;
    data->d[15] = -0.001025f;
    data->d[16] = 4.405298f;
    data->d[17] = -0.231717f;
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
} // LoadVariation0

// Variation: 1  result = 0.00001276
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.624320f;
    data->d[1] = -0.037861f;
    data->d[2] = -2.095379f;
    data->d[3] = -0.078132f;
    data->d[4] = -0.126225f;
    data->d[5] = 0.147215f;
    data->d[6] = 1.760322f;
    data->d[7] = 0.642933f;
    data->d[8] = 0.020589f;
    data->d[9] = -0.171886f;
    data->d[10] = -0.907866f;
    data->d[11] = -1.292917f;
    data->d[12] = 3.622340f;
    data->d[13] = 1.980963f;
    data->d[14] = -0.695140f;
    data->d[15] = 1.408612f;
    data->d[16] = -1.058137f;
    data->d[17] = -0.590621f;
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

// Variation: 2  result = 0.00000586
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.059708f;
    data->d[1] = -1.173401f;
    data->d[2] = -3.251245f;
    data->d[3] = -0.000243f;
    data->d[4] = 0.420700f;
    data->d[5] = 1.532278f;
    data->d[6] = -0.679805f;
    data->d[7] = 0.595692f;
    data->d[8] = -0.743093f;
    data->d[9] = -0.064326f;
    data->d[10] = 2.141403f;
    data->d[11] = -0.220061f;
    data->d[12] = -1.036091f;
    data->d[13] = -1.066618f;
    data->d[14] = -0.902251f;
    data->d[15] = 1.477415f;
    data->d[16] = 0.743392f;
    data->d[17] = -0.240817f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000013f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 5);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 79;
    state.m_evolution = 25;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 15258599109311858981;
} // LoadState
