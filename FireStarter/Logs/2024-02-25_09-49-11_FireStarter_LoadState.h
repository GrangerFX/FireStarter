#pragma once
#include "FireStarterState.h"

// Run date: 02/25/24 09:49:11 Pacific Standard Time
// Run duration = 1262.570113 seconds
// Run generation = 104
// Run evolution = 13
// Run max result = 0.00003035
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
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

// Variation: 0  result = 0.00000161
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.148424f;
    data->d[1] = 1.793343f;
    data->d[2] = 0.000000f;
    data->d[3] = -7.604117f;
    data->d[4] = 0.813084f;
    data->d[5] = -0.624248f;
    data->d[6] = 0.822480f;
    data->d[7] = -0.266827f;
    data->d[8] = -1.189363f;
    data->d[9] = -0.015937f;
    data->d[10] = 0.388292f;
    data->d[11] = -1.337480f;
    data->d[12] = 2.020587f;
    data->d[13] = -1.318019f;
    data->d[14] = 0.316447f;
    data->d[15] = 3.144194f;
    data->d[16] = 0.390563f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000453
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.067641f;
    data->d[1] = 0.802345f;
    data->d[2] = 9.087486f;
    data->d[3] = -0.140088f;
    data->d[4] = 14.926485f;
    data->d[5] = 4.180998f;
    data->d[6] = -0.010565f;
    data->d[7] = -0.748910f;
    data->d[8] = -0.184636f;
    data->d[9] = 0.742819f;
    data->d[10] = -0.331418f;
    data->d[11] = 0.693578f;
    data->d[12] = -1.109569f;
    data->d[13] = -2.742621f;
    data->d[14] = -0.569239f;
    data->d[15] = -1.804669f;
    data->d[16] = -0.121366f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00003035
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.096613f;
    data->d[1] = -1.571783f;
    data->d[2] = -12.479790f;
    data->d[3] = 0.013410f;
    data->d[4] = -0.044013f;
    data->d[5] = -2.680432f;
    data->d[6] = 0.151900f;
    data->d[7] = -0.003682f;
    data->d[8] = 1.591929f;
    data->d[9] = -0.698523f;
    data->d[10] = -1.601612f;
    data->d[11] = 0.727430f;
    data->d[12] = -1.420096f;
    data->d[13] = 1.758275f;
    data->d[14] = -0.428632f;
    data->d[15] = 0.703486f;
    data->d[16] = -0.228553f;
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
    *(result->MinResult()) = 0.000030f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000030f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 1, 27);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 27);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 20);
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
    state.m_generation = 104;
    state.m_evolution = 13;
    state.m_children0 = 104;
    state.m_children1 = 5;
    state.m_index = 0;
    state.m_copy_index = 12;
    state.m_id = 0;
    state.m_test = 8;
    state.m_seed = 17258820248703816326;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000102f;
    state.m_maxResult = 0.000030f;
    state.m_evolveWeight = 0.000231f;
    state.m_optimizeValid = true;
} // LoadState
