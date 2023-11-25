#pragma once
#include "FireStarterState.h"

// Run date: 11/24/23 21:11:12 Pacific Standard Time
// Run duration = 38816.387829 seconds
// Run generation = 63
// Run evolution = 12
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.292780f;
    data->d[1] = -0.039750f;
    data->d[2] = -0.880047f;
    data->d[3] = -1.087196f;
    data->d[4] = -0.002798f;
    data->d[5] = -0.019161f;
    data->d[6] = 6.061991f;
    data->d[7] = -5.128855f;
    data->d[8] = 7.409283f;
    data->d[9] = -7.393071f;
    data->d[10] = -0.033942f;
    data->d[11] = 1.007206f;
    data->d[12] = 2.982494f;
    data->d[13] = 0.147032f;
    data->d[14] = -0.087168f;
    data->d[15] = -0.710084f;
    data->d[16] = -0.051909f;
    data->d[17] = -59852.882812f;
    data->d[18] = 0.112073f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.197419f;
    data->d[1] = -0.064766f;
    data->d[2] = -0.545392f;
    data->d[3] = -1.638943f;
    data->d[4] = 0.252789f;
    data->d[5] = 0.443007f;
    data->d[6] = 0.152992f;
    data->d[7] = 0.220968f;
    data->d[8] = 4.188518f;
    data->d[9] = -2.220380f;
    data->d[10] = -0.162311f;
    data->d[11] = -1.160624f;
    data->d[12] = -4.315385f;
    data->d[13] = 0.273023f;
    data->d[14] = -0.038328f;
    data->d[15] = 0.982073f;
    data->d[16] = -14342.731445f;
    data->d[17] = -0.086585f;
    data->d[18] = 0.143305f;
    data->d[19] = -0.118147f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.190287f;
    data->d[1] = 0.145368f;
    data->d[2] = -0.643538f;
    data->d[3] = -2.007343f;
    data->d[4] = 0.015243f;
    data->d[5] = 0.075227f;
    data->d[6] = -3.459180f;
    data->d[7] = 3.625265f;
    data->d[8] = 7.730953f;
    data->d[9] = -2.749320f;
    data->d[10] = -0.248399f;
    data->d[11] = -0.395903f;
    data->d[12] = -0.272800f;
    data->d[13] = -0.249735f;
    data->d[14] = 0.177856f;
    data->d[15] = -0.281471f;
    data->d[16] = -0.383127f;
    data->d[17] = -67100.382812f;
    data->d[18] = 0.040647f;
    data->d[19] = 0.523600f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 16);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 22);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 63;
    state.m_evolution = 12;
    state.m_index = 51;
    state.m_id = 8;
    state.m_copy_id = 33;
    state.m_test = 14;
    state.m_seed = 3457586422085517704;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
