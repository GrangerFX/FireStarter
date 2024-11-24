#pragma once
#include "FireStarterState.h"

// Run date: 11/24/24 14:14:26 Pacific Standard Time
// Run duration = 66.602900 seconds
// Run generation = 14
// Run evolution = 0
// Run max result = 0.00000075
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
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000075
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.21252264f;
    data->d[2] = -0.12583116f;
    data->d[3] = 0.10759212f;
    data->d[4] = -2.31306434f;
    data->d[5] = -0.88187885f;
    data->d[6] = 0.82301646f;
    data->d[7] = -2.98723984f;
    data->d[8] = 1.70920169f;
    data->d[9] = -0.91052580f;
    data->d[10] = 1.63372040f;
    data->d[11] = -0.10574291f;
    data->d[12] = 3.33615613f;
    data->d[13] = -4.17837143f;
    data->d[14] = 0.26277938f;
    data->d[15] = -4.23171806f;
    data->d[16] = 0.35606498f;
    data->d[17] = 25.96050453f;
    data->d[18] = -20.60632706f;
    data->d[19] = -0.03643340f;
    data->d[20] = -1.95658696f;
    data->d[21] = -1.70926642f;
    data->d[22] = -1.07915509f;
    data->d[23] = 0.22321633f;
    data->d[24] = -2.03167820f;
    data->d[25] = -0.96415281f;
    data->d[26] = 0.13907216f;
    data->d[27] = -1.33369076f;
    data->d[28] = -0.35108775f;
    data->d[29] = -1.67803752f;
    *(result->MinResult()) = 0.00000075f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000075f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 3);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 0, 2);
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
    state.m_generation = 14;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 19;
    state.m_seed = 16223718417224708517;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000075f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
