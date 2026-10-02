#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 13:31:51 Pacific Daylight Time
// Run duration = 495.797658 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000086
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
    settings.m_patternOpcodes = 4;

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

// Variation: 0  result = 0.00000086
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.57079685f;
    data->d[1] = -0.52870131f;
    data->d[2] = 0.10466781f;
    data->d[3] = 0.50045812f;
    data->d[4] = -1.99973154f;
    data->d[5] = -0.48939988f;
    data->d[6] = -0.06196546f;
    data->d[7] = 0.89346939f;
    data->d[8] = -0.09944842f;
    data->d[9] = 1.24079335f;
    data->d[10] = 1.68270719f;
    data->d[11] = 1.01791680f;
    data->d[12] = -0.93175149f;
    data->d[13] = -0.74853605f;
    data->d[14] = -0.27595976f;
    data->d[15] = 1.57736146f;
    data->d[16] = 3.28337026f;
    data->d[17] = -2.59572840f;
    data->d[18] = 0.44543204f;
    data->d[19] = -0.45407200f;
    data->d[20] = -1.57607067f;
    data->d[21] = -0.97335839f;
    data->d[22] = -0.30858299f;
    data->d[23] = 0.47372693f;
    data->d[24] = 1.00971401f;
    data->d[25] = 1.68892348f;
    data->d[26] = -0.47986937f;
    data->d[27] = 1.53628290f;
    data->d[28] = -0.01877902f;
    data->d[29] = -0.70162839f;
    *(result->MinResult()) = 0.00000086f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000086f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 14);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 1, 18);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 29);
    instructions->SetOperation(21, 0, 9);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 1, 29);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 16);
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
    state.m_generation = 21;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00560179f;
    state.m_maxResult = 0.00000086f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
