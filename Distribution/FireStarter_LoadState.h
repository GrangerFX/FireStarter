#pragma once
#include "FireStarterState.h"

// Run date: 11/24/24 10:42:19 Pacific Standard Time
// Run duration = 114.370418 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000045
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

// Variation: 0  result = 0.00000045
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.18156986f;
    data->d[2] = 1.46034348f;
    data->d[3] = -1.02215052f;
    data->d[4] = 0.04589871f;
    data->d[5] = 0.56624031f;
    data->d[6] = -0.77857441f;
    data->d[7] = -5.32491684f;
    data->d[8] = -5.08558035f;
    data->d[9] = 5.98616505f;
    data->d[10] = 7.31765890f;
    data->d[11] = 2.67458773f;
    data->d[12] = 0.38262701f;
    data->d[13] = -17.15634155f;
    data->d[14] = 0.30986068f;
    data->d[15] = -2.01022625f;
    data->d[16] = 0.95876724f;
    data->d[17] = -1.24854338f;
    data->d[18] = -3.47353530f;
    data->d[19] = 5.61589622f;
    data->d[20] = -1.19708765f;
    data->d[21] = -2.18782020f;
    data->d[22] = -1.69842732f;
    data->d[23] = -0.38932091f;
    data->d[24] = -1.95457053f;
    data->d[25] = -0.12382822f;
    data->d[26] = 0.46104372f;
    data->d[27] = -0.62269396f;
    data->d[28] = -1.64026523f;
    data->d[29] = -0.30350429f;
    *(result->MinResult()) = 0.00000045f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000045f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 6);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 0, 8);
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
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 20;
    state.m_seed = 6227693887238381452;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000045f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
