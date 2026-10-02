#pragma once
#include "FireStarterState.h"

// Run date: 03/23/24 16:24:03 Pacific Daylight Time
// Run duration = 19986.814576 seconds
// Run generation = 120
// Run evolution = 6
// Run max result = 0.00000044
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
    settings.m_evolveSeed = 1;
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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.160813f;
    data->d[2] = -0.255237f;
    data->d[3] = 0.710653f;
    data->d[4] = -1.443561f;
    data->d[5] = 2.097253f;
    data->d[6] = -0.019711f;
    data->d[7] = 16.222683f;
    data->d[8] = 0.281236f;
    data->d[9] = -1.239529f;
    data->d[10] = 0.550957f;
    data->d[11] = -1.029167f;
    data->d[12] = 2.248414f;
    data->d[13] = 3.869587f;
    data->d[14] = -6.181986f;
    data->d[15] = 0.001063f;
    data->d[16] = 2.488937f;
    data->d[17] = -1.839247f;
    data->d[18] = -0.649690f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -0.311214f;
    data->d[2] = -2.553941f;
    data->d[3] = 1.982078f;
    data->d[4] = 0.257643f;
    data->d[5] = 3.983745f;
    data->d[6] = -0.004590f;
    data->d[7] = -3.639617f;
    data->d[8] = -0.687298f;
    data->d[9] = -0.321897f;
    data->d[10] = -0.580844f;
    data->d[11] = 0.552878f;
    data->d[12] = 1.604469f;
    data->d[13] = -0.117166f;
    data->d[14] = 0.421095f;
    data->d[15] = 1.003090f;
    data->d[16] = -0.012174f;
    data->d[17] = 0.177256f;
    data->d[18] = -0.283213f;
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

// Variation: 2  result = 0.00000044
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.565497f;
    data->d[2] = -1.593580f;
    data->d[3] = -0.740559f;
    data->d[4] = 1.550937f;
    data->d[5] = -0.588044f;
    data->d[6] = 0.530907f;
    data->d[7] = -0.031802f;
    data->d[8] = -0.386405f;
    data->d[9] = -1.687531f;
    data->d[10] = -0.261090f;
    data->d[11] = 0.096846f;
    data->d[12] = -0.319181f;
    data->d[13] = 1.454517f;
    data->d[14] = 1.086805f;
    data->d[15] = 2.081506f;
    data->d[16] = -3.681338f;
    data->d[17] = 4.281095f;
    data->d[18] = -0.076158f;
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
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 26);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 22);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 120;
    state.m_evolution = 6;
    state.m_index = 5;
    state.m_copy_index = 108;
    state.m_id = 108;
    state.m_test = 15;
    state.m_seed = 2098564334990731620;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000043f;
    state.m_optimizeValid = true;
} // LoadState
