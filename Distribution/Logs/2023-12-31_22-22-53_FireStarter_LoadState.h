#pragma once
#include "FireStarterState.h"

// Run date: 12/31/23 22:22:53 Pacific Standard Time
// Run duration = 2851.764023 seconds
// Run generation = 13
// Run evolution = 10
// Run max result = 0.00000012
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run states = 64
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_states = 64;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.582955f;
    data->d[1] = 1.831406f;
    data->d[2] = -1.471456f;
    data->d[3] = -1.491116f;
    data->d[4] = -3.013059f;
    data->d[5] = -2.789219f;
    data->d[6] = -3.645579f;
    data->d[7] = -0.000131f;
    data->d[8] = 1.134528f;
    data->d[9] = 0.263316f;
    data->d[10] = -0.794547f;
    data->d[11] = 0.010242f;
    data->d[12] = -2.721944f;
    data->d[13] = 0.234210f;
    data->d[14] = 0.412393f;
    data->d[15] = 1.048151f;
    data->d[16] = -0.357515f;
    data->d[17] = -0.780315f;
    data->d[18] = -0.000000f;
    data->d[19] = -1.997548f;
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
    data->d[0] = -0.257258f;
    data->d[1] = 0.795096f;
    data->d[2] = -1.446447f;
    data->d[3] = 2.122922f;
    data->d[4] = -1.595387f;
    data->d[5] = -4.141707f;
    data->d[6] = -0.000599f;
    data->d[7] = -6.910537f;
    data->d[8] = -0.394019f;
    data->d[9] = 1.052517f;
    data->d[10] = 1.003347f;
    data->d[11] = -0.442725f;
    data->d[12] = -0.245988f;
    data->d[13] = 0.174582f;
    data->d[14] = -0.428683f;
    data->d[15] = -1.619606f;
    data->d[16] = 0.347364f;
    data->d[17] = 0.748083f;
    data->d[18] = -0.078108f;
    data->d[19] = 1.512411f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.438563f;
    data->d[1] = -1.148156f;
    data->d[2] = -0.778181f;
    data->d[3] = -0.933040f;
    data->d[4] = -1.210742f;
    data->d[5] = -0.000238f;
    data->d[6] = 13181.530273f;
    data->d[7] = 0.003082f;
    data->d[8] = 0.733839f;
    data->d[9] = 0.883507f;
    data->d[10] = -1.523687f;
    data->d[11] = -3.548878f;
    data->d[12] = 0.876288f;
    data->d[13] = -0.276503f;
    data->d[14] = -0.185610f;
    data->d[15] = 0.866785f;
    data->d[16] = -1.877571f;
    data->d[17] = -0.489084f;
    data->d[18] = 0.289834f;
    data->d[19] = 1.806550f;
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
    instructions->SetOperation(0, 0, 12);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 8);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 13;
    state.m_evolution = 10;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 6;
    state.m_id = 52;
    state.m_test = 3;
    state.m_seed = 5618617915003414221;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000007f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
