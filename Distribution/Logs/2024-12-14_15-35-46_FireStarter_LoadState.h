#pragma once
#include "FireStarterState.h"

// Run date: 12/14/24 15:35:46 Pacific Standard Time
// Run duration = 104.327657 seconds
// Run generation = 28
// Run evolution = 0
// Run max result = 0.00000058
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

// Variation: 0  result = 0.00000058
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.68174326f;
    data->d[1] = -0.73245430f;
    data->d[2] = 0.35332480f;
    data->d[3] = -0.44643295f;
    data->d[4] = 1.72798669f;
    data->d[5] = 2.02910948f;
    data->d[6] = 0.49714494f;
    data->d[7] = -0.41257793f;
    data->d[8] = -1.13167906f;
    data->d[9] = -1.04995775f;
    data->d[10] = 0.67642820f;
    data->d[11] = -0.06196045f;
    data->d[12] = 1.82517278f;
    data->d[13] = -0.10435575f;
    data->d[14] = -0.78382850f;
    data->d[15] = -0.39001861f;
    data->d[16] = 2.08050013f;
    data->d[17] = 2.36844349f;
    data->d[18] = -1.89775670f;
    data->d[19] = -1.93502879f;
    data->d[20] = -2.89299989f;
    data->d[21] = 1.81897390f;
    data->d[22] = 2.65805101f;
    data->d[23] = -2.03202033f;
    data->d[24] = 1.50928319f;
    data->d[25] = -1.94341230f;
    data->d[26] = 0.16816059f;
    data->d[27] = -2.22885513f;
    data->d[28] = -1.28419232f;
    data->d[29] = 2.12608457f;
    *(result->MinResult()) = 0.00000058f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000058f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 1, 22);
    instructions->SetOperation(31, 0, 7);
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
    state.m_test = 12;
    state.m_seed = 4207486623186317888;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000058f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
