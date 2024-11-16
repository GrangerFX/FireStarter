#pragma once
#include "FireStarterState.h"

// Run date: 11/15/24 18:17:37 Pacific Standard Time
// Run duration = 78.641174 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00000043
// Run variations = 1
// Run samples = 15
// Run instructions = 24
// Run registers = 24
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
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 24;
    settings.m_registers = 24;
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
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000043
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.48169303f;
    data->d[1] = 4.69488049f;
    data->d[2] = -11.83579254f;
    data->d[3] = -0.68442392f;
    data->d[4] = -1.03869975f;
    data->d[5] = 2.15196252f;
    data->d[6] = -0.02190074f;
    data->d[7] = 5.07324457f;
    data->d[8] = 0.02507817f;
    data->d[9] = 0.25879034f;
    data->d[10] = -2.95421219f;
    data->d[11] = -2.08410168f;
    data->d[12] = -1.09664559f;
    data->d[13] = -2.66616344f;
    data->d[14] = 1.38929868f;
    data->d[15] = 0.35934603f;
    data->d[16] = -0.00458228f;
    data->d[17] = -2.13307190f;
    data->d[18] = 1.28454137f;
    data->d[19] = 2.13331199f;
    data->d[20] = -0.49280733f;
    data->d[21] = 1.53727114f;
    data->d[22] = -2.09514880f;
    data->d[23] = 1.55397165f;
    *(result->MinResult()) = 0.00000043f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000043f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 7);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 4);
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
    state.m_generation = 10;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 18;
    state.m_seed = 10114416034166900992;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000043f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
