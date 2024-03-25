#pragma once
#include "FireStarterState.h"

// Run date: 03/25/24 00:21:12 Pacific Daylight Time
// Run duration = 27814.632305 seconds
// Run generation = 437
// Run evolution = 13
// Run max result = 0.00000018
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
// Run evolveSeed = 4
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 4;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.000000f;
    data->d[2] = -0.102211f;
    data->d[3] = 0.341244f;
    data->d[4] = 0.937967f;
    data->d[5] = -4.358221f;
    data->d[6] = -0.001254f;
    data->d[7] = 0.438970f;
    data->d[8] = -0.985346f;
    data->d[9] = -0.771353f;
    data->d[10] = -0.942271f;
    data->d[11] = 7.323017f;
    data->d[12] = -0.002102f;
    data->d[13] = -1.640265f;
    data->d[14] = 1.279133f;
    data->d[15] = 0.048486f;
    data->d[16] = 1.195929f;
    data->d[17] = -0.057986f;
    data->d[18] = -2.118158f;
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
    data->d[0] = -3.090645f;
    data->d[1] = -0.000020f;
    data->d[2] = -0.041858f;
    data->d[3] = 0.360624f;
    data->d[4] = 0.007123f;
    data->d[5] = 2.269021f;
    data->d[6] = 3.352117f;
    data->d[7] = 0.108207f;
    data->d[8] = 1.220888f;
    data->d[9] = 2.620960f;
    data->d[10] = -1.513741f;
    data->d[11] = -0.645695f;
    data->d[12] = -0.998890f;
    data->d[13] = 1.933573f;
    data->d[14] = -1.822213f;
    data->d[15] = 0.112742f;
    data->d[16] = -0.431888f;
    data->d[17] = 0.118462f;
    data->d[18] = -1.693249f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.000000f;
    data->d[2] = -0.200226f;
    data->d[3] = 0.666273f;
    data->d[4] = 0.011205f;
    data->d[5] = 1654.113037f;
    data->d[6] = 0.000792f;
    data->d[7] = 0.713103f;
    data->d[8] = -0.367129f;
    data->d[9] = 0.959319f;
    data->d[10] = 1.787243f;
    data->d[11] = -0.068422f;
    data->d[12] = -4.796750f;
    data->d[13] = -1.566886f;
    data->d[14] = 2.955082f;
    data->d[15] = -0.110501f;
    data->d[16] = -1.104716f;
    data->d[17] = 0.160685f;
    data->d[18] = 1.851762f;
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
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 437;
    state.m_evolution = 13;
    state.m_index = 5;
    state.m_copy_index = 65;
    state.m_id = 65;
    state.m_test = 15;
    state.m_seed = 6494677328501142234;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000053f;
    state.m_optimizeValid = true;
} // LoadState
