#pragma once
#include "FireStarterState.h"

// Run date: 11/18/23 23:34:14 Pacific Standard Time
// Run duration = 31884.067345 seconds
// Run generation = 43
// Run evolution = 12
// Run result = 0.00000074
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000072
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.679018f;
    data->d[1] = 0.287002f;
    data->d[2] = 1.513876f;
    data->d[3] = -0.451234f;
    data->d[4] = 1.215376f;
    data->d[5] = -1.215376f;
    data->d[6] = 0.000000f;
    data->d[7] = 0.175724f;
    data->d[8] = -0.887280f;
    data->d[9] = 0.866250f;
    data->d[10] = -0.680245f;
    data->d[11] = 0.009478f;
    data->d[12] = -2.402948f;
    data->d[13] = 1.724139f;
    data->d[14] = -1.112604f;
    data->d[15] = -1.102664f;
    data->d[16] = -1.938154f;
    data->d[17] = -4.742664f;
    data->d[18] = 4.079785f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.213270f;
    data->d[1] = 0.973439f;
    data->d[2] = 0.641637f;
    data->d[3] = 0.000494f;
    data->d[4] = 0.520187f;
    data->d[5] = -0.638319f;
    data->d[6] = 0.003614f;
    data->d[7] = 1.708826f;
    data->d[8] = 0.284126f;
    data->d[9] = -7.468581f;
    data->d[10] = 0.023379f;
    data->d[11] = 0.117835f;
    data->d[12] = -1.551319f;
    data->d[13] = -1.048265f;
    data->d[14] = -0.387436f;
    data->d[15] = 2.376363f;
    data->d[16] = -0.820979f;
    data->d[17] = 2.289803f;
    data->d[18] = -0.667746f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000074
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.442858f;
    data->d[1] = 0.117492f;
    data->d[2] = -0.751407f;
    data->d[3] = 1.605067f;
    data->d[4] = -0.486157f;
    data->d[5] = 1.009756f;
    data->d[6] = 0.000000f;
    data->d[7] = 1.961414f;
    data->d[8] = 0.125646f;
    data->d[9] = 0.209115f;
    data->d[10] = -0.346597f;
    data->d[11] = -0.021983f;
    data->d[12] = -0.606313f;
    data->d[13] = -1.334719f;
    data->d[14] = -1.297133f;
    data->d[15] = 3.090334f;
    data->d[16] = -0.113472f;
    data->d[17] = 4.688482f;
    data->d[18] = 3.530409f;
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
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 13);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 43;
    state.m_evolution = 12;
    state.m_index = 52;
    state.m_id = 63;
    state.m_copy_id = 63;
    state.m_test = 14;
    state.m_seed = 3255903636527450084;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
