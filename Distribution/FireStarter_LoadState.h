#pragma once
#include "FireStarterState.h"

// Run date: 11/07/23 02:19:14 Pacific Standard Time
// Run duration = 2079.964173 seconds
// Run generation = 5
// Run evolution = 6
// Run result = 0.00000060
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.909134f;
    data->d[2] = 0.244341f;
    data->d[3] = 0.400321f;
    data->d[4] = 0.711052f;
    data->d[5] = -1.425976f;
    data->d[6] = -1.810349f;
    data->d[7] = 1.595538f;
    data->d[8] = -1.123960f;
    data->d[9] = -2.960949f;
    data->d[10] = 2.604989f;
    data->d[11] = -2.732565f;
    data->d[12] = -0.061424f;
    data->d[13] = 0.077934f;
    data->d[14] = -0.000000f;
    data->d[15] = -7.042964f;
    data->d[16] = -0.035696f;
    data->d[17] = -0.077934f;
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
    data->d[1] = 0.368787f;
    data->d[2] = 1.347445f;
    data->d[3] = -0.827082f;
    data->d[4] = -0.139209f;
    data->d[5] = -1.477099f;
    data->d[6] = -1.725583f;
    data->d[7] = 2.068482f;
    data->d[8] = 1.393988f;
    data->d[9] = -0.556828f;
    data->d[10] = -2.083173f;
    data->d[11] = 5.017987f;
    data->d[12] = 0.019380f;
    data->d[13] = -0.047409f;
    data->d[14] = 0.000000f;
    data->d[15] = 4.303825f;
    data->d[16] = -0.005713f;
    data->d[17] = -0.070722f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = -1.870393f;
    data->d[2] = -1.673909f;
    data->d[3] = 0.078952f;
    data->d[4] = 0.295409f;
    data->d[5] = -1.306733f;
    data->d[6] = -1.408444f;
    data->d[7] = 1.410219f;
    data->d[8] = -4.233924f;
    data->d[9] = -0.524471f;
    data->d[10] = -0.808082f;
    data->d[11] = -2.034431f;
    data->d[12] = -0.216373f;
    data->d[13] = -1.968044f;
    data->d[14] = 2.450950f;
    data->d[15] = 0.000001f;
    data->d[16] = -0.122228f;
    data->d[17] = 2.491641f;
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
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 5;
    state.m_evolution = 6;
    state.m_index = 0;
    state.m_id = 20;
    state.m_copy_id = 3;
    state.m_test = 15;
    state.m_seed = 6080115342946272117;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
