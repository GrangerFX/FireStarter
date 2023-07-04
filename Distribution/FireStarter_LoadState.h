#pragma once
#include "FireStarterState.h"

// Run date: 07/04/23 14:44:16 Pacific Daylight Time
// Run duration = 442.792870 seconds
// Run generation = 51
// Run evolution = 0
// Run result = 0.00000185
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 2
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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
    settings.m_seed = 2;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000185
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.632108f;
    data->d[1] = 1.985827f;
    data->d[2] = 0.077654f;
    data->d[3] = 0.349289f;
    data->d[4] = -0.438977f;
    data->d[5] = -2.188369f;
    data->d[6] = 1.924477f;
    data->d[7] = 0.772350f;
    data->d[8] = -0.113447f;
    data->d[9] = -0.485157f;
    data->d[10] = -2.087170f;
    data->d[11] = -1.816999f;
    data->d[12] = -0.963626f;
    data->d[13] = 0.105190f;
    data->d[14] = -0.445165f;
    data->d[15] = 2.084827f;
    data->d[16] = 0.040868f;
    data->d[17] = -0.012544f;
    data->d[18] = 1.803974f;
    data->d[19] = -1.790376f;
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

// Variation: 1  result = 0.00000179
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.477851f;
    data->d[1] = -1.476875f;
    data->d[2] = -0.033256f;
    data->d[3] = -1.125419f;
    data->d[4] = -0.665558f;
    data->d[5] = 0.227493f;
    data->d[6] = 1.958412f;
    data->d[7] = -1.985810f;
    data->d[8] = 0.100133f;
    data->d[9] = -0.617999f;
    data->d[10] = 0.254184f;
    data->d[11] = 1.800811f;
    data->d[12] = 0.567287f;
    data->d[13] = 0.831072f;
    data->d[14] = 1.008826f;
    data->d[15] = -0.918633f;
    data->d[16] = 0.135065f;
    data->d[17] = 0.157761f;
    data->d[18] = 0.057359f;
    data->d[19] = -0.109224f;
    data->d[20] = -0.118132f;
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
    data->d[0] = 0.326849f;
    data->d[1] = -0.855688f;
    data->d[2] = 0.177001f;
    data->d[3] = 1.793855f;
    data->d[4] = -1.207508f;
    data->d[5] = -1.755650f;
    data->d[6] = 1.097306f;
    data->d[7] = 0.215761f;
    data->d[8] = -1.308032f;
    data->d[9] = -0.460416f;
    data->d[10] = 1.109780f;
    data->d[11] = -1.796306f;
    data->d[12] = -2.324438f;
    data->d[13] = -0.001374f;
    data->d[14] = -0.651496f;
    data->d[15] = 1.055539f;
    data->d[16] = -2.649900f;
    data->d[17] = 0.098008f;
    data->d[18] = -0.407401f;
    data->d[19] = 0.558697f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 51;
    state.m_evolution = 0;
    state.m_index = 59;
    state.m_test = 49;
    state.m_seed = 12990390496839182527;
} // LoadState
