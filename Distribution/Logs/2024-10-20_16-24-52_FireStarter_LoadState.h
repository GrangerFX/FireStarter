#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 16:24:52 Pacific Daylight Time
// Run duration = 218.177234 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000075
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000075
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.48440376f;
    data->d[1] = -0.31437746f;
    data->d[2] = -1.04338002f;
    data->d[3] = -1.14457607f;
    data->d[4] = -1.80313969f;
    data->d[5] = -4.96236467f;
    data->d[6] = 0.19838095f;
    data->d[7] = 1.19008243f;
    data->d[8] = 1.28545249f;
    data->d[9] = -0.77810550f;
    data->d[10] = 1.79553688f;
    data->d[11] = 0.21203157f;
    data->d[12] = 0.36029238f;
    data->d[13] = 0.66829985f;
    data->d[14] = -1.14108729f;
    data->d[15] = -1.32948172f;
    data->d[16] = -0.42641699f;
    data->d[17] = 1.75848103f;
    data->d[18] = 0.00110986f;
    data->d[19] = 0.84572780f;
    data->d[20] = 0.39980516f;
    data->d[21] = -0.41441920f;
    data->d[22] = 0.23475197f;
    data->d[23] = -0.17381905f;
    data->d[24] = 0.37572932f;
    data->d[25] = -1.05968440f;
    data->d[26] = 1.95700228f;
    data->d[27] = -1.17694211f;
    data->d[28] = 1.06361496f;
    data->d[29] = 0.45654979f;
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
    instructions->SetOperation(0, 0, 29);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 12);
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
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 14188645115022533502;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00422579f;
    state.m_maxResult = 0.00000075f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
