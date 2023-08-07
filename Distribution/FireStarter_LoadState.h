#pragma once
#include "FireStarterState.h"

// Run date: 08/06/23 21:29:42 Pacific Daylight Time
// Run duration = 192.061869 seconds
// Run generation = 7
// Run evolution = 1
// Run result = 0.00001836
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run seeds = 64
// Run tests = 0
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_seeds = 64;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00001836
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.757918f;
    data->d[1] = -0.563704f;
    data->d[2] = -0.847344f;
    data->d[3] = -0.397479f;
    data->d[4] = -0.008217f;
    data->d[5] = 182.259430f;
    data->d[6] = 0.675956f;
    data->d[7] = 0.000199f;
    data->d[8] = -0.059547f;
    data->d[9] = -2.014234f;
    data->d[10] = -0.261380f;
    data->d[11] = 0.692373f;
    data->d[12] = 0.824214f;
    data->d[13] = 0.236804f;
    data->d[14] = -2.193953f;
    data->d[15] = 0.747157f;
    data->d[16] = -2.053535f;
    data->d[17] = -0.412168f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000018f;
} // LoadVariation0

// Variation: 1  result = 0.00000274
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -5.192780f;
    data->d[1] = 3.185496f;
    data->d[2] = 1.066758f;
    data->d[3] = -2.148408f;
    data->d[4] = -0.007373f;
    data->d[5] = -2.683765f;
    data->d[6] = 0.000003f;
    data->d[7] = -1.014894f;
    data->d[8] = -0.089385f;
    data->d[9] = 2.889352f;
    data->d[10] = 0.585828f;
    data->d[11] = -1.521552f;
    data->d[12] = 0.876970f;
    data->d[13] = -2.576685f;
    data->d[14] = -0.011121f;
    data->d[15] = 6.514107f;
    data->d[16] = -0.002347f;
    data->d[17] = -0.116239f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00001204
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.032018f;
    data->d[1] = -0.613391f;
    data->d[2] = -2.455068f;
    data->d[3] = 1.304820f;
    data->d[4] = -0.041407f;
    data->d[5] = 1.019930f;
    data->d[6] = -3.748477f;
    data->d[7] = 0.000012f;
    data->d[8] = 0.109234f;
    data->d[9] = -1.546943f;
    data->d[10] = 1.290749f;
    data->d[11] = -4.020951f;
    data->d[12] = -0.811867f;
    data->d[13] = 0.675336f;
    data->d[14] = -0.219032f;
    data->d[15] = -0.053127f;
    data->d[16] = -1.861818f;
    data->d[17] = 0.347538f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 15);
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
    state.m_generation = 7;
    state.m_evolution = 1;
    state.m_index = 54;
    state.m_test = 0;
    state.m_seed = 14396231931264471308;
} // LoadState
