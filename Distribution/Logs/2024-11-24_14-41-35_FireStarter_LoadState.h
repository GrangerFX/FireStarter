#pragma once
#include "FireStarterState.h"

// Run date: 11/24/24 14:41:35 Pacific Standard Time
// Run duration = 70.269528 seconds
// Run generation = 20
// Run evolution = 0
// Run max result = 0.00000095
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

// Variation: 0  result = 0.00000095
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.17069161f;
    data->d[1] = 2.42325950f;
    data->d[2] = 0.40141633f;
    data->d[3] = 0.20525664f;
    data->d[4] = 0.29835090f;
    data->d[5] = 1.06194091f;
    data->d[6] = -1.60976434f;
    data->d[7] = -0.01053045f;
    data->d[8] = -3.03980589f;
    data->d[9] = -1.47268677f;
    data->d[10] = 4.08117056f;
    data->d[11] = -1.75277519f;
    data->d[12] = 0.06579078f;
    data->d[13] = 1.82097280f;
    data->d[14] = -0.68672204f;
    data->d[15] = 3.67274308f;
    data->d[16] = -2.27460742f;
    data->d[17] = 0.79708159f;
    data->d[18] = -1.63259923f;
    data->d[19] = -0.32381821f;
    data->d[20] = 2.48670769f;
    data->d[21] = 0.92072940f;
    data->d[22] = 2.03012443f;
    data->d[23] = 1.32424295f;
    data->d[24] = 1.68945456f;
    data->d[25] = -1.32461476f;
    data->d[26] = -1.48888707f;
    data->d[27] = 1.21099699f;
    data->d[28] = -1.79776907f;
    data->d[29] = -2.33263731f;
    *(result->MinResult()) = 0.00000095f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000095f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 13);
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
    state.m_generation = 20;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 8;
    state.m_seed = 11101282695099947076;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000095f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
