#pragma once
#include "FireStarterState.h"

// Run date: 10/07/23 11:13:53 Pacific Daylight Time
// Run duration = 1345.002674 seconds
// Run generation = 23
// Run evolution = 10
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.346348f;
    data->d[1] = -1.088084f;
    data->d[2] = 0.106923f;
    data->d[3] = -2.462771f;
    data->d[4] = -2.826624f;
    data->d[5] = 0.000001f;
    data->d[6] = -1.487307f;
    data->d[7] = 1.487305f;
    data->d[8] = -29.152027f;
    data->d[9] = 0.015639f;
    data->d[10] = 1.939441f;
    data->d[11] = -0.189585f;
    data->d[12] = 0.997473f;
    data->d[13] = 0.971088f;
    data->d[14] = -1.167309f;
    data->d[15] = 1.505296f;
    data->d[16] = 0.281478f;
    data->d[17] = 1.480141f;
    data->d[18] = 1.501939f;
    data->d[19] = -2.362999f;
    data->d[20] = 0.545150f;
    data->d[21] = 0.431742f;
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
    data->d[0] = 0.160561f;
    data->d[1] = -0.496241f;
    data->d[2] = 0.120010f;
    data->d[3] = 2.064526f;
    data->d[4] = 3.902577f;
    data->d[5] = 2.188911f;
    data->d[6] = -3.503953f;
    data->d[7] = 1.315045f;
    data->d[8] = 0.186855f;
    data->d[9] = -6.019355f;
    data->d[10] = -0.080897f;
    data->d[11] = -5.704099f;
    data->d[12] = 1.228216f;
    data->d[13] = 0.697941f;
    data->d[14] = 1.171906f;
    data->d[15] = -2.155968f;
    data->d[16] = 0.506032f;
    data->d[17] = -1.293886f;
    data->d[18] = 1.881013f;
    data->d[19] = -1.429315f;
    data->d[20] = -1.403258f;
    data->d[21] = -0.053972f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.607372f;
    data->d[1] = -1.590096f;
    data->d[2] = -0.373478f;
    data->d[3] = 1.764607f;
    data->d[4] = 0.234439f;
    data->d[5] = 1.251531f;
    data->d[6] = -0.557064f;
    data->d[7] = -0.694466f;
    data->d[8] = 0.624902f;
    data->d[9] = 0.795968f;
    data->d[10] = -0.112159f;
    data->d[11] = -3.062511f;
    data->d[12] = -0.060128f;
    data->d[13] = -1.475042f;
    data->d[14] = -0.900393f;
    data->d[15] = -4.161593f;
    data->d[16] = -5.628079f;
    data->d[17] = 1.247377f;
    data->d[18] = 3.000622f;
    data->d[19] = -2.479856f;
    data->d[20] = 0.073235f;
    data->d[21] = 0.418368f;
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
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 13);
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
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 48;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 4325184427241383137;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
} // LoadState
