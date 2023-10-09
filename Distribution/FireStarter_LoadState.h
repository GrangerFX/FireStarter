#pragma once
#include "FireStarterState.h"

// Run date: 10/09/23 10:05:22 Pacific Daylight Time
// Run duration = 1106.091923 seconds
// Run generation = 215
// Run evolution = 9
// Run result = 0.00000030
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 128

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
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 128;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.022831f;
    data->d[2] = 7.721142f;
    data->d[3] = -0.000580f;
    data->d[4] = 1.195347f;
    data->d[5] = -0.261769f;
    data->d[6] = 0.418307f;
    data->d[7] = 1.370041f;
    data->d[8] = -0.013149f;
    data->d[9] = 0.055251f;
    data->d[10] = 5.092897f;
    data->d[11] = -1.784315f;
    data->d[12] = 0.777448f;
    data->d[13] = -2.507851f;
    data->d[14] = 1.444551f;
    data->d[15] = 0.322816f;
    data->d[16] = 3.406628f;
    data->d[17] = 0.217924f;
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

// Variation: 1  result = 0.00000030
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.212349f;
    data->d[2] = -0.323381f;
    data->d[3] = -1.230456f;
    data->d[4] = -0.354780f;
    data->d[5] = -2.412289f;
    data->d[6] = 1.578113f;
    data->d[7] = 0.219034f;
    data->d[8] = -120.802116f;
    data->d[9] = 82.422684f;
    data->d[10] = -0.000814f;
    data->d[11] = -0.434751f;
    data->d[12] = -1.921901f;
    data->d[13] = 2.004686f;
    data->d[14] = -0.310212f;
    data->d[15] = 0.835309f;
    data->d[16] = -1.625185f;
    data->d[17] = 1.267599f;
    data->d[18] = -0.118131f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.400801f;
    data->d[2] = -0.231514f;
    data->d[3] = -0.440220f;
    data->d[4] = -0.422855f;
    data->d[5] = -0.823471f;
    data->d[6] = -1.531358f;
    data->d[7] = 2.145312f;
    data->d[8] = -2.372918f;
    data->d[9] = 7.029256f;
    data->d[10] = -0.002279f;
    data->d[11] = -0.765050f;
    data->d[12] = -1.712348f;
    data->d[13] = 0.580687f;
    data->d[14] = -0.514614f;
    data->d[15] = -1.240185f;
    data->d[16] = -0.967260f;
    data->d[17] = 0.969332f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 27);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 215;
    state.m_evolution = 9;
    state.m_age = 79;
    state.m_index = 0;
    state.m_id = 62;
    state.m_copy_id = 53;
    state.m_test = 13;
    state.m_seed = 4878917953478968126;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
} // LoadState
