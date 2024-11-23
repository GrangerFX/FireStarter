#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 13:48:20 Pacific Standard Time
// Run duration = 742.341453 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000014
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000014
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.34695759f;
    data->d[1] = -1.08999944f;
    data->d[2] = 0.24085891f;
    data->d[3] = -2.48935533f;
    data->d[4] = 3.34950089f;
    data->d[5] = 7.22090673f;
    data->d[6] = -2.38036513f;
    data->d[7] = 1.42436099f;
    data->d[8] = -1.52414429f;
    data->d[9] = 8.93646717f;
    data->d[10] = 3.39979982f;
    data->d[11] = -0.03811339f;
    data->d[12] = 0.53937775f;
    data->d[13] = 0.63107008f;
    data->d[14] = -17.39470482f;
    data->d[15] = 0.13192007f;
    data->d[16] = -9.43427277f;
    data->d[17] = -0.14475864f;
    data->d[18] = -3.13884592f;
    data->d[19] = 0.19881740f;
    data->d[20] = -0.04998765f;
    data->d[21] = 2.28116035f;
    data->d[22] = -1.38901567f;
    data->d[23] = 0.14743775f;
    data->d[24] = -1.67532063f;
    data->d[25] = -0.56554711f;
    data->d[26] = 1.77910733f;
    data->d[27] = 1.95074129f;
    data->d[28] = -0.74689674f;
    data->d[29] = 1.32645679f;
    *(result->MinResult()) = 0.00000014f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 13014809061679898615;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000014f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
