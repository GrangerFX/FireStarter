#pragma once
#include "FireStarterState.h"

// Run date: 05/11/24 10:19:29 Pacific Daylight Time
// Run duration = 292.585899 seconds
// Run generation = 110
// Run evolution = 5
// Run max result = 0.00001992
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000280
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.101153f;
    data->d[1] = -1.982065f;
    data->d[2] = 1.987422f;
    data->d[3] = -0.577633f;
    data->d[4] = 0.663293f;
    data->d[5] = -0.973822f;
    data->d[6] = 0.314328f;
    data->d[7] = -0.426353f;
    data->d[8] = 0.478483f;
    data->d[9] = -0.031236f;
    data->d[10] = -28.143427f;
    data->d[11] = -0.024409f;
    data->d[12] = 0.095081f;
    data->d[13] = 0.233193f;
    data->d[14] = 0.829639f;
    data->d[15] = -1.680899f;
    data->d[16] = 0.285998f;
    data->d[17] = -1.948683f;
    data->d[18] = 1.467050f;
    data->d[19] = -1.167770f;
    data->d[20] = 0.003851f;
    data->d[21] = 32.114635f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00001752
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.357211f;
    data->d[1] = -0.797189f;
    data->d[2] = -1.347918f;
    data->d[3] = 0.181221f;
    data->d[4] = 0.540476f;
    data->d[5] = 0.182666f;
    data->d[6] = -0.898530f;
    data->d[7] = 0.865669f;
    data->d[8] = -0.024968f;
    data->d[9] = 0.005210f;
    data->d[10] = -2.512622f;
    data->d[11] = -2.639992f;
    data->d[12] = -1.631003f;
    data->d[13] = 0.088442f;
    data->d[14] = 0.388685f;
    data->d[15] = 0.902625f;
    data->d[16] = 0.163785f;
    data->d[17] = -0.710605f;
    data->d[18] = -0.186427f;
    data->d[19] = 0.007070f;
    data->d[20] = -0.361026f;
    data->d[21] = -0.683282f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00001992
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.582360f;
    data->d[1] = -1.477553f;
    data->d[2] = -0.003641f;
    data->d[3] = 0.804186f;
    data->d[4] = 0.181998f;
    data->d[5] = -0.775371f;
    data->d[6] = 2.820942f;
    data->d[7] = -0.455519f;
    data->d[8] = 0.307774f;
    data->d[9] = 0.001928f;
    data->d[10] = -0.964449f;
    data->d[11] = 3.944024f;
    data->d[12] = 0.382486f;
    data->d[13] = -0.236917f;
    data->d[14] = 1.052693f;
    data->d[15] = -2.766635f;
    data->d[16] = -0.612794f;
    data->d[17] = 0.995315f;
    data->d[18] = 1.601882f;
    data->d[19] = 1.275432f;
    data->d[20] = 1.483833f;
    data->d[21] = -0.059125f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000020f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 0, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 110;
    state.m_evolution = 5;
    state.m_index = 6;
    state.m_copy_index = 22;
    state.m_id = 22;
    state.m_test = 0;
    state.m_seed = 4270909405054946387;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000030f;
    state.m_maxResult = 0.000020f;
    state.m_evolveWeight = 0.003143f;
    state.m_optimizeValid = true;
} // LoadState
