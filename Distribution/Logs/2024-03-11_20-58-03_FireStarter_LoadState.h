#pragma once
#include "FireStarterState.h"

// Run date: 03/11/24 20:58:03 Pacific Daylight Time
// Run duration = 32198.187414 seconds
// Run generation = 193
// Run evolution = 16
// Run max result = 0.00000203
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.138722f;
    data->d[2] = -1.822374f;
    data->d[3] = -0.067432f;
    data->d[4] = -0.594289f;
    data->d[5] = 5.253851f;
    data->d[6] = 0.635709f;
    data->d[7] = 1.951925f;
    data->d[8] = 0.332460f;
    data->d[9] = 2.180070f;
    data->d[10] = 0.696894f;
    data->d[11] = -10.275040f;
    data->d[12] = 1.594338f;
    data->d[13] = -0.868815f;
    data->d[14] = 2.402510f;
    data->d[15] = 3.615224f;
    data->d[16] = -207.096497f;
    data->d[17] = -0.000000f;
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

// Variation: 1  result = 0.00000203
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090653f;
    data->d[1] = 0.193265f;
    data->d[2] = -3.982174f;
    data->d[3] = -1.199118f;
    data->d[4] = -0.077295f;
    data->d[5] = 1.048582f;
    data->d[6] = -1.846606f;
    data->d[7] = 1.255359f;
    data->d[8] = 0.207923f;
    data->d[9] = -4.055910f;
    data->d[10] = -0.614455f;
    data->d[11] = -2.362934f;
    data->d[12] = 3.138402f;
    data->d[13] = -2.315782f;
    data->d[14] = 3.746158f;
    data->d[15] = -0.000252f;
    data->d[16] = 6.578731f;
    data->d[17] = -0.017956f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000143
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.452762f;
    data->d[2] = -1.085726f;
    data->d[3] = -1.968636f;
    data->d[4] = 0.519930f;
    data->d[5] = -0.101272f;
    data->d[6] = -2.014411f;
    data->d[7] = -0.887799f;
    data->d[8] = -0.252858f;
    data->d[9] = -1.087338f;
    data->d[10] = 1.661514f;
    data->d[11] = 1.209172f;
    data->d[12] = 0.364227f;
    data->d[13] = -1.842707f;
    data->d[14] = -63.738125f;
    data->d[15] = -0.000000f;
    data->d[16] = -4.806767f;
    data->d[17] = -0.108930f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 1, 9);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 26);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 193;
    state.m_evolution = 16;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 9;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 14;
    state.m_seed = 12803817114377369978;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 193.000000f;
    state.m_optimizeValid = true;
} // LoadState
