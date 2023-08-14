#pragma once
#include "FireStarterState.h"

// Run date: 08/14/23 08:37:14 Pacific Daylight Time
// Run duration = 798.806699 seconds
// Run generation = 47
// Run evolution = 5
// Run result = 0.00000019
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.590209f;
    data->d[2] = -1.062692f;
    data->d[3] = -0.019057f;
    data->d[4] = 1.414575f;
    data->d[5] = 1.484607f;
    data->d[6] = 0.093497f;
    data->d[7] = -0.155069f;
    data->d[8] = 7.489799f;
    data->d[9] = -3.376323f;
    data->d[10] = -0.213243f;
    data->d[11] = 0.319271f;
    data->d[12] = 0.101743f;
    data->d[13] = -2.014250f;
    data->d[14] = 0.000127f;
    data->d[15] = -2.625209f;
    data->d[16] = 2.551111f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.031669f;
    data->d[2] = 0.442574f;
    data->d[3] = 1.802425f;
    data->d[4] = -1.319663f;
    data->d[5] = 0.105040f;
    data->d[6] = -0.532439f;
    data->d[7] = 1.169154f;
    data->d[8] = 1.822891f;
    data->d[9] = 0.834816f;
    data->d[10] = -0.010103f;
    data->d[11] = -1.051523f;
    data->d[12] = 1.147917f;
    data->d[13] = -1.594514f;
    data->d[14] = 0.729993f;
    data->d[15] = 0.846338f;
    data->d[16] = 0.620495f;
    data->d[17] = -0.118132f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.531850f;
    data->d[2] = -1.649027f;
    data->d[3] = 0.005857f;
    data->d[4] = 1.001150f;
    data->d[5] = 0.488471f;
    data->d[6] = 0.751827f;
    data->d[7] = -1.315624f;
    data->d[8] = 0.635284f;
    data->d[9] = -3.232824f;
    data->d[10] = 1.030775f;
    data->d[11] = -3.402856f;
    data->d[12] = -0.022173f;
    data->d[13] = 25.830521f;
    data->d[14] = 0.495303f;
    data->d[15] = 0.009544f;
    data->d[16] = -0.623441f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 23);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 14);
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
    state.m_generation = 47;
    state.m_evolution = 5;
    state.m_index = 8;
    state.m_test = 0;
    state.m_seed = 242526005365008064;
} // LoadState
