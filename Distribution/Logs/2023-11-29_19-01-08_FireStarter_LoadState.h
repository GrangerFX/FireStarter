#pragma once
#include "FireStarterState.h"

// Run date: 11/29/23 19:01:08 Pacific Standard Time
// Run duration = 1502.598234 seconds
// Run generation = 23
// Run evolution = 10
// Run max result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.125407f;
    data->d[1] = -0.482788f;
    data->d[2] = 0.432465f;
    data->d[3] = -0.710389f;
    data->d[4] = 0.000026f;
    data->d[5] = -0.002401f;
    data->d[6] = 1.389834f;
    data->d[7] = -0.000000f;
    data->d[8] = -0.949020f;
    data->d[9] = 7.256765f;
    data->d[10] = 12.101288f;
    data->d[11] = -0.002316f;
    data->d[12] = -1.581808f;
    data->d[13] = -0.701070f;
    data->d[14] = -1.150946f;
    data->d[15] = -4.934955f;
    data->d[16] = -1.827859f;
    data->d[17] = -0.553196f;
    data->d[18] = -1.187440f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.132417f;
    data->d[1] = -1.025121f;
    data->d[2] = -0.842456f;
    data->d[3] = -0.093613f;
    data->d[4] = 0.345997f;
    data->d[5] = 0.459548f;
    data->d[6] = -4.113196f;
    data->d[7] = -0.000001f;
    data->d[8] = 0.152775f;
    data->d[9] = 1.623316f;
    data->d[10] = 6.460884f;
    data->d[11] = 0.006929f;
    data->d[12] = 1.176771f;
    data->d[13] = -1.583830f;
    data->d[14] = -1.269827f;
    data->d[15] = 2.595924f;
    data->d[16] = -1.526089f;
    data->d[17] = -0.233639f;
    data->d[18] = -3.935092f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.263386f;
    data->d[1] = -1.279732f;
    data->d[2] = -0.314414f;
    data->d[3] = -2.319146f;
    data->d[4] = -0.414222f;
    data->d[5] = 0.740451f;
    data->d[6] = -0.871977f;
    data->d[7] = 0.000002f;
    data->d[8] = 0.217069f;
    data->d[9] = -8.714699f;
    data->d[10] = -7.274586f;
    data->d[11] = -0.004371f;
    data->d[12] = 0.823020f;
    data->d[13] = -2.102394f;
    data->d[14] = -1.270045f;
    data->d[15] = 1.346450f;
    data->d[16] = -0.674987f;
    data->d[17] = 0.694870f;
    data->d[18] = 0.643366f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 10);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 21);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 23;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 8;
    state.m_id = 10;
    state.m_copy_id = 19;
    state.m_test = 15;
    state.m_seed = 8581565098498504529;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
