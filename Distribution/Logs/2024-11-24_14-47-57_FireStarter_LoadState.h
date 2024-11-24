#pragma once
#include "FireStarterState.h"

// Run date: 11/24/24 14:47:57 Pacific Standard Time
// Run duration = 49.299388 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000092
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

// Variation: 0  result = 0.00000092
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.21999341f;
    data->d[1] = 1.03669453f;
    data->d[2] = -0.50683492f;
    data->d[3] = 0.45759135f;
    data->d[4] = -0.05002607f;
    data->d[5] = 29.71939468f;
    data->d[6] = 0.04060657f;
    data->d[7] = 3.15364575f;
    data->d[8] = -2.74208927f;
    data->d[9] = -3.06140065f;
    data->d[10] = -1.89667666f;
    data->d[11] = 5.16262770f;
    data->d[12] = -0.26263097f;
    data->d[13] = -2.23048329f;
    data->d[14] = 2.07798004f;
    data->d[15] = -0.03791792f;
    data->d[16] = 0.69158125f;
    data->d[17] = -0.37398446f;
    data->d[18] = -0.87425148f;
    data->d[19] = 0.00608475f;
    data->d[20] = -0.75963682f;
    data->d[21] = -0.91622841f;
    data->d[22] = 0.51389027f;
    data->d[23] = -1.52569795f;
    data->d[24] = 1.05028403f;
    data->d[25] = -1.69825697f;
    data->d[26] = -0.86363828f;
    data->d[27] = 0.20265135f;
    data->d[28] = -2.47065711f;
    data->d[29] = 1.97695231f;
    *(result->MinResult()) = 0.00000092f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000092f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 19);
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
    state.m_generation = 11;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 12723433871950853384;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000092f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
