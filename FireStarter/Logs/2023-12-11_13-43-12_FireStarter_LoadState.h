#pragma once
#include "FireStarterState.h"

// Run date: 12/11/23 13:43:12 Pacific Standard Time
// Run duration = 8478.656581 seconds
// Run generation = 115
// Run evolution = 12
// Run max result = 0.00000083
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

// Variation: 0  result = 0.00000077
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.841316f;
    data->d[1] = 0.060990f;
    data->d[2] = -0.000000f;
    data->d[3] = 1.301180f;
    data->d[4] = -1.468859f;
    data->d[5] = 0.022984f;
    data->d[6] = -4.480000f;
    data->d[7] = 1.190548f;
    data->d[8] = -0.382561f;
    data->d[9] = 1.650396f;
    data->d[10] = -3.447190f;
    data->d[11] = 0.352925f;
    data->d[12] = 0.449735f;
    data->d[13] = 0.000876f;
    data->d[14] = -13.981778f;
    data->d[15] = 2.731254f;
    data->d[16] = -2.439433f;
    data->d[17] = -4.512237f;
    data->d[18] = 0.052495f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.190303f;
    data->d[1] = -1.048291f;
    data->d[2] = 2.594157f;
    data->d[3] = -1.345300f;
    data->d[4] = -1.552213f;
    data->d[5] = 0.006339f;
    data->d[6] = 9.046215f;
    data->d[7] = -1.374155f;
    data->d[8] = 0.337536f;
    data->d[9] = 0.362501f;
    data->d[10] = 2.553010f;
    data->d[11] = 1.218453f;
    data->d[12] = -1.544463f;
    data->d[13] = -0.177801f;
    data->d[14] = -1.313823f;
    data->d[15] = -0.840703f;
    data->d[16] = 0.412136f;
    data->d[17] = -0.896072f;
    data->d[18] = 0.038000f;
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

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.505715f;
    data->d[1] = 1.240882f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.131132f;
    data->d[4] = 0.554349f;
    data->d[5] = 0.564471f;
    data->d[6] = -1.748026f;
    data->d[7] = -0.524747f;
    data->d[8] = 0.775785f;
    data->d[9] = -1.122972f;
    data->d[10] = -0.021983f;
    data->d[11] = 2.341479f;
    data->d[12] = 2.869571f;
    data->d[13] = 1.512762f;
    data->d[14] = -4.816316f;
    data->d[15] = 0.366556f;
    data->d[16] = 0.980700f;
    data->d[17] = -2.029920f;
    data->d[18] = 0.133649f;
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
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 26);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 20);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 0);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 115;
    state.m_evolution = 12;
    state.m_index = 0;
    state.m_copy_index = 8;
    state.m_id = 60;
    state.m_copy_id = 11;
    state.m_test = 15;
    state.m_seed = 317272306783255999;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
