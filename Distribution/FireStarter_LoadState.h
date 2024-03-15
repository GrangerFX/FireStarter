#pragma once
#include "FireStarterState.h"

// Run date: 03/07/24 08:48:09 Pacific Standard Time
// Run duration = 3473.661244 seconds
// Run generation = 302
// Run evolution = 15
// Run max result = 0.00000054
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 0
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
    settings.m_evolveSeed = 3;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
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
    data->d[0] = -0.689735f;
    data->d[1] = -0.085766f;
    data->d[2] = 2.252632f;
    data->d[3] = 0.304885f;
    data->d[4] = -0.500469f;
    data->d[5] = 15.162336f;
    data->d[6] = -6.011374f;
    data->d[7] = 3.474139f;
    data->d[8] = 0.021870f;
    data->d[9] = 0.225801f;
    data->d[10] = 5.387857f;
    data->d[11] = -1.216666f;
    data->d[12] = 7.266846f;
    data->d[13] = -21.611609f;
    data->d[14] = 1.465634f;
    data->d[15] = -14.145462f;
    data->d[16] = 0.251549f;
    data->d[17] = -0.137070f;
    data->d[18] = -0.020953f;
    data->d[19] = -0.000000f;
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

// Variation: 1  result = 0.00000054
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.937561f;
    data->d[1] = -1.595162f;
    data->d[2] = -1.302519f;
    data->d[3] = 0.044501f;
    data->d[4] = -0.369409f;
    data->d[5] = -0.739218f;
    data->d[6] = 1.271987f;
    data->d[7] = 0.862465f;
    data->d[8] = 1.060630f;
    data->d[9] = -0.097758f;
    data->d[10] = 38.437168f;
    data->d[11] = -12.732597f;
    data->d[12] = -1.125141f;
    data->d[13] = -38.075649f;
    data->d[14] = 9.074032f;
    data->d[15] = -1.184446f;
    data->d[16] = -0.080246f;
    data->d[17] = -1.331813f;
    data->d[18] = 2.178260f;
    data->d[19] = -0.118132f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.237332f;
    data->d[1] = -1.255983f;
    data->d[2] = 0.634649f;
    data->d[3] = -0.629463f;
    data->d[4] = 0.057492f;
    data->d[5] = -0.247639f;
    data->d[6] = -0.887901f;
    data->d[7] = 0.434647f;
    data->d[8] = -1.997314f;
    data->d[9] = 1.825846f;
    data->d[10] = -0.924724f;
    data->d[11] = -1.599263f;
    data->d[12] = -0.201670f;
    data->d[13] = -2.705751f;
    data->d[14] = -4.793355f;
    data->d[15] = 1.812689f;
    data->d[16] = 0.002129f;
    data->d[17] = -1.894342f;
    data->d[18] = 0.408575f;
    data->d[19] = 0.523599f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 1, 23);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 1, 0);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 15);
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
    state.m_generation = 302;
    state.m_evolution = 15;
    state.m_index = 14;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 0;
    state.m_seed = 7600352845671105590;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 302.000000f;
    state.m_optimizeValid = true;
} // LoadState
