#pragma once
#include "FireStarterState.h"

// Run date: 10/08/24 11:46:41 Pacific Daylight Time
// Run duration = 1960.240737 seconds
// Run generation = 28
// Run evolution = 0
// Run max result = 0.00000077
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    settings.m_patternOpcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000077
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.13749075f;
    data->d[1] = 0.45415032f;
    data->d[2] = -0.00186289f;
    data->d[3] = 0.27955452f;
    data->d[4] = 0.03765792f;
    data->d[5] = 1.14974105f;
    data->d[6] = -0.04329393f;
    data->d[7] = -0.96777242f;
    data->d[8] = 1.71963406f;
    data->d[9] = 0.42805365f;
    data->d[10] = -1.89196527f;
    data->d[11] = 0.00000521f;
    data->d[12] = -0.62111098f;
    data->d[13] = 1.25733435f;
    data->d[14] = 1.39175856f;
    data->d[15] = -0.41092739f;
    data->d[16] = -1.66502523f;
    data->d[17] = 0.76805663f;
    data->d[18] = 1.77546823f;
    data->d[19] = 0.88725775f;
    data->d[20] = 1.22799993f;
    data->d[21] = -1.30515659f;
    data->d[22] = 0.81048888f;
    data->d[23] = 0.78784865f;
    data->d[24] = 0.80942965f;
    data->d[25] = 0.14592253f;
    data->d[26] = 1.50318074f;
    data->d[27] = -1.10733902f;
    data->d[28] = 0.02104551f;
    data->d[29] = -1.14173162f;
    *(result->MinResult()) = 0.00000077f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000077f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 0, 0);
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
    state.m_generation = 28;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00295877f;
    state.m_maxResult = 0.00000077f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
