#pragma once
#include "FireStarterState.h"

// Run date: 01/25/25 10:05:38 Pacific Standard Time
// Run duration = 249.404876 seconds
// Run generation = 277
// Run evolution = 0
// Run max result = 0.00000229
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000229
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.34797636f;
    data->d[2] = 0.61749887f;
    data->d[3] = 5.66898584f;
    data->d[4] = 11.97434711f;
    data->d[5] = 3.47254181f;
    data->d[6] = -2.58925271f;
    data->d[7] = -5.11255980f;
    data->d[8] = -1.97063088f;
    data->d[9] = -0.00000006f;
    data->d[10] = 2.22958565f;
    data->d[11] = -1.85622382f;
    data->d[12] = 5.93080711f;
    data->d[13] = -5.32765961f;
    data->d[14] = 0.24187465f;
    data->d[15] = 0.96064383f;
    data->d[16] = -1.00443172f;
    data->d[17] = -1.87243891f;
    data->d[18] = -2.47447228f;
    data->d[19] = 1.47197056f;
    data->d[20] = -0.65049857f;
    data->d[21] = -2.00872350f;
    data->d[22] = 1.66602778f;
    data->d[23] = 1.27534771f;
    data->d[24] = -1.33687842f;
    data->d[25] = 0.06729224f;
    data->d[26] = 2.48593116f;
    data->d[27] = -2.31311464f;
    data->d[28] = 0.46412823f;
    data->d[29] = 0.82528293f;
    *(result->MinResult()) = 0.00000229f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000229f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 3, 0);
    instructions->SetOperation(1, 5, 1);
    instructions->SetOperation(2, 5, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 5, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 3, 6);
    instructions->SetOperation(8, 5, 5);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 3, 8);
    instructions->SetOperation(11, 3, 9);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 3, 10);
    instructions->SetOperation(14, 5, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 5, 14);
    instructions->SetOperation(19, 5, 15);
    instructions->SetOperation(20, 3, 16);
    instructions->SetOperation(21, 3, 17);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 3, 5);
    instructions->SetOperation(24, 5, 15);
    instructions->SetOperation(25, 5, 5);
    instructions->SetOperation(26, 3, 18);
    instructions->SetOperation(27, 5, 16);
    instructions->SetOperation(28, 5, 4);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 5, 17);
    instructions->SetOperation(31, 3, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 277;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 3395697722293289359;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000229f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
