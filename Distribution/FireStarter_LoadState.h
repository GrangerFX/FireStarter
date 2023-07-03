#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 18:22:40 Pacific Daylight Time
// Run duration = 598.384809 seconds
// Run generation = 44
// Run evolution = 0
// Run result = 0.00000116
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000116
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.347658f;
    data->d[1] = 1.092200f;
    data->d[2] = -1.759596f;
    data->d[3] = -0.495632f;
    data->d[4] = 0.956619f;
    data->d[5] = -0.659025f;
    data->d[6] = 0.192253f;
    data->d[7] = -0.066557f;
    data->d[8] = 1.185717f;
    data->d[9] = -0.255293f;
    data->d[10] = 0.103305f;
    data->d[11] = 1.689604f;
    data->d[12] = -0.524546f;
    data->d[13] = -0.374640f;
    data->d[14] = -1.339946f;
    data->d[15] = -0.179652f;
    data->d[16] = -0.875445f;
    data->d[17] = 0.931807f;
    data->d[18] = 0.376684f;
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

// Variation: 1  result = 0.00000083
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.583717f;
    data->d[1] = 1.804069f;
    data->d[2] = 0.130993f;
    data->d[3] = 1.023289f;
    data->d[4] = -3.485923f;
    data->d[5] = -1.824352f;
    data->d[6] = 1.791914f;
    data->d[7] = 0.636935f;
    data->d[8] = 0.002417f;
    data->d[9] = -0.122474f;
    data->d[10] = -2.758722f;
    data->d[11] = -1.244375f;
    data->d[12] = -1.186332f;
    data->d[13] = -0.300538f;
    data->d[14] = -1.510290f;
    data->d[15] = 1.127586f;
    data->d[16] = 1.638060f;
    data->d[17] = 1.667849f;
    data->d[18] = -1.328183f;
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

// Variation: 2  result = 0.00000077
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.295663f;
    data->d[1] = -0.774043f;
    data->d[2] = 0.574349f;
    data->d[3] = 0.889045f;
    data->d[4] = 3.140948f;
    data->d[5] = -0.345057f;
    data->d[6] = -0.044763f;
    data->d[7] = -0.015669f;
    data->d[8] = 0.025524f;
    data->d[9] = -2.100570f;
    data->d[10] = -1.936795f;
    data->d[11] = -1.155715f;
    data->d[12] = -0.141843f;
    data->d[13] = 1.616565f;
    data->d[14] = 0.193310f;
    data->d[15] = -1.674246f;
    data->d[16] = -2.122645f;
    data->d[17] = 1.039450f;
    data->d[18] = -0.126083f;
    data->d[19] = 0.523598f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 0, 17);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 4);
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
    state.m_generation = 44;
    state.m_evolution = 0;
    state.m_index = 42;
    state.m_test = 61;
    state.m_seed = 5269290129754160054;
} // LoadState
