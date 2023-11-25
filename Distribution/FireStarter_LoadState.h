#pragma once
#include "FireStarterState.h"

// Run date: 11/24/23 13:08:10 Pacific Standard Time
// Run duration = 72938.487104 seconds
// Run generation = 1
// Run evolution = 2
// Run result = 0.00015375
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00014339
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.166233f;
    data->d[1] = -0.364985f;
    data->d[2] = -0.011462f;
    data->d[3] = 2.319418f;
    data->d[4] = -0.480052f;
    data->d[5] = 0.485269f;
    data->d[6] = 2.162769f;
    data->d[7] = -0.367787f;
    data->d[8] = -0.607493f;
    data->d[9] = -0.100526f;
    data->d[10] = -0.770981f;
    data->d[11] = -0.148811f;
    data->d[12] = 0.027355f;
    data->d[13] = -0.560717f;
    data->d[14] = 0.223863f;
    data->d[15] = 0.209274f;
    data->d[16] = -65721.679688f;
    data->d[17] = -4.500813f;
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
    *(result->MinResult()) = 0.000143f;
} // LoadVariation0

// Variation: 1  result = 0.00011635
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.435353f;
    data->d[1] = -0.390215f;
    data->d[2] = -0.063191f;
    data->d[3] = -0.115276f;
    data->d[4] = -0.000128f;
    data->d[5] = 0.092534f;
    data->d[6] = 0.015874f;
    data->d[7] = 0.136768f;
    data->d[8] = -0.097561f;
    data->d[9] = -4.233898f;
    data->d[10] = 29517.173828f;
    data->d[11] = -1.955446f;
    data->d[12] = 0.290140f;
    data->d[13] = 0.512185f;
    data->d[14] = 0.796990f;
    data->d[15] = -0.188968f;
    data->d[16] = 0.070634f;
    data->d[17] = -0.520652f;
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
    *(result->MinResult()) = 0.000116f;
} // LoadVariation1

// Variation: 2  result = 0.00015375
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.455124f;
    data->d[1] = -0.410315f;
    data->d[2] = 0.183688f;
    data->d[3] = 0.109621f;
    data->d[4] = 1.360918f;
    data->d[5] = -0.132939f;
    data->d[6] = -0.198627f;
    data->d[7] = -0.530546f;
    data->d[8] = 0.407164f;
    data->d[9] = -0.596497f;
    data->d[10] = 1.835154f;
    data->d[11] = 0.124618f;
    data->d[12] = 1.840108f;
    data->d[13] = -0.255659f;
    data->d[14] = 47184.328125f;
    data->d[15] = -5.294342f;
    data->d[16] = 1.731068f;
    data->d[17] = 2.362413f;
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
    *(result->MinResult()) = 0.000154f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000154f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 21);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1;
    state.m_evolution = 2;
    state.m_index = 19;
    state.m_id = 1;
    state.m_copy_id = 32;
    state.m_test = 15;
    state.m_seed = 9113548588292669493;
    state.m_maxResult = 0.000154f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
