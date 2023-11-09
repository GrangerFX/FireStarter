#pragma once
#include "FireStarterState.h"

// Run date: 11/09/23 08:55:09 Pacific Standard Time
// Run duration = 1299.240129 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000072
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
// Run tests = 1
// Run seeds = 64
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.247003f;
    data->d[2] = 2.121958f;
    data->d[3] = -2.417218f;
    data->d[4] = 1.549278f;
    data->d[5] = 2.191301f;
    data->d[6] = -0.004873f;
    data->d[7] = 3.554881f;
    data->d[8] = 1.245377f;
    data->d[9] = 0.223628f;
    data->d[10] = -1.618269f;
    data->d[11] = -1.121950f;
    data->d[12] = -3.781864f;
    data->d[13] = -0.498514f;
    data->d[14] = 0.866495f;
    data->d[15] = -0.650020f;
    data->d[16] = 1.900616f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.910596f;
    data->d[19] = -2.064490f;
    data->d[20] = -0.082630f;
    data->d[21] = 0.082629f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090661f;
    data->d[1] = 4.491752f;
    data->d[2] = -0.215765f;
    data->d[3] = -2.290512f;
    data->d[4] = 1.778773f;
    data->d[5] = 0.681228f;
    data->d[6] = 0.915674f;
    data->d[7] = -0.010471f;
    data->d[8] = 2.567799f;
    data->d[9] = 0.989322f;
    data->d[10] = -0.066199f;
    data->d[11] = -1.139543f;
    data->d[12] = -0.141187f;
    data->d[13] = -1.650522f;
    data->d[14] = -0.805971f;
    data->d[15] = -0.112546f;
    data->d[16] = -0.610411f;
    data->d[17] = 0.000005f;
    data->d[18] = 0.836649f;
    data->d[19] = 0.021428f;
    data->d[20] = 1.606030f;
    data->d[21] = -1.724162f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617992f;
    data->d[1] = 0.686469f;
    data->d[2] = -1.760148f;
    data->d[3] = 2.241105f;
    data->d[4] = -2.549839f;
    data->d[5] = 1.327786f;
    data->d[6] = -1.598202f;
    data->d[7] = -0.020662f;
    data->d[8] = 0.974434f;
    data->d[9] = 0.441140f;
    data->d[10] = 0.167139f;
    data->d[11] = 2.920715f;
    data->d[12] = 1.734688f;
    data->d[13] = 0.461400f;
    data->d[14] = 0.055183f;
    data->d[15] = 0.672137f;
    data->d[16] = -1.490999f;
    data->d[17] = 0.000002f;
    data->d[18] = -0.491613f;
    data->d[19] = 0.026242f;
    data->d[20] = -1.679734f;
    data->d[21] = 2.203331f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 20);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_id = 38;
    state.m_copy_id = 41;
    state.m_test = 0;
    state.m_seed = 9169351518156418115;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
