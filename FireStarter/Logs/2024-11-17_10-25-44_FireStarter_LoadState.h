#pragma once
#include "FireStarterState.h"

// Run date: 11/17/24 10:25:44 Pacific Standard Time
// Run duration = 722.502339 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000012
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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
// Run passes = 512
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
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

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
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.01655895f;
    data->d[2] = -7.21154499f;
    data->d[3] = -3.86138201f;
    data->d[4] = 0.09076831f;
    data->d[5] = 1.71170306f;
    data->d[6] = 1.53176284f;
    data->d[7] = 2.46243906f;
    data->d[8] = -0.41416103f;
    data->d[9] = -2.57954597f;
    data->d[10] = 0.14983386f;
    data->d[11] = 0.59395260f;
    data->d[12] = 1.11600733f;
    data->d[13] = -1.56159317f;
    data->d[14] = 2.33026910f;
    data->d[15] = -1.70920563f;
    data->d[16] = 0.22051999f;
    data->d[17] = 5.33966398f;
    data->d[18] = 0.85936785f;
    data->d[19] = 0.27058071f;
    data->d[20] = -3.46388793f;
    data->d[21] = -1.86854386f;
    data->d[22] = -0.81621403f;
    data->d[23] = 2.15811157f;
    data->d[24] = 1.68730974f;
    data->d[25] = 2.33009100f;
    data->d[26] = 1.14052796f;
    data->d[27] = -0.23265770f;
    data->d[28] = -0.28871498f;
    data->d[29] = 1.99069929f;
    *(result->MinResult()) = 0.00000012f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 1, 7);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 0, 20);
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
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 10583548300395775693;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
