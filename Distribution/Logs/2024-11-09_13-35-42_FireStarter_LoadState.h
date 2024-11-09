#pragma once
#include "FireStarterState.h"

// Run date: 11/09/24 13:35:42 Pacific Standard Time
// Run duration = 32.131250 seconds
// Run generation = 22
// Run evolution = 0
// Run max result = 0.00000017
// Run variations = 1
// Run samples = 15
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -1.18944061f;
    data->d[2] = -0.09640459f;
    data->d[3] = -0.93801069f;
    data->d[4] = 0.90308303f;
    data->d[5] = 0.43178135f;
    data->d[6] = 1.78552723f;
    data->d[7] = 1.61574554f;
    data->d[8] = -8.16275024f;
    data->d[9] = 0.00402698f;
    data->d[10] = 0.80989593f;
    data->d[11] = -0.39240825f;
    data->d[12] = -1.32262635f;
    data->d[13] = 0.52538651f;
    data->d[14] = -1.16514182f;
    data->d[15] = -1.74760413f;
    data->d[16] = -1.04295874f;
    data->d[17] = 4.53506660f;
    data->d[18] = 0.69502944f;
    data->d[19] = -1.28337538f;
    data->d[20] = -0.73853129f;
    data->d[21] = -1.76982319f;
    data->d[22] = 0.56163716f;
    data->d[23] = 0.84816045f;
    data->d[24] = -0.92657864f;
    data->d[25] = -0.32654637f;
    data->d[26] = -1.18178797f;
    data->d[27] = 0.52192646f;
    data->d[28] = -0.53088540f;
    data->d[29] = -1.24081933f;
    *(result->MinResult()) = 0.00000017f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 9);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 6);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 0, 15);
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
    state.m_generation = 22;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 14375957297203592090;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
