#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 12:01:19 Pacific Daylight Time
// Run duration = 1288.071152 seconds
// Run generation = 97
// Run evolution = 0
// Run result = 0.00000185
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

// Variation: 0  result = 0.00000185
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.733578f;
    data->d[2] = -0.183451f;
    data->d[3] = -2.434575f;
    data->d[4] = 1.001353f;
    data->d[5] = -2.503764f;
    data->d[6] = -0.010494f;
    data->d[7] = 0.783047f;
    data->d[8] = -0.760685f;
    data->d[9] = 0.756825f;
    data->d[10] = -1.474010f;
    data->d[11] = 0.112861f;
    data->d[12] = 0.502577f;
    data->d[13] = -0.309779f;
    data->d[14] = 3.668122f;
    data->d[15] = -0.532552f;
    data->d[16] = -2.397274f;
    data->d[17] = -1.493937f;
    data->d[18] = 5.017521f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000161
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.150803f;
    data->d[2] = -0.206515f;
    data->d[3] = 0.197469f;
    data->d[4] = 0.874082f;
    data->d[5] = -0.041932f;
    data->d[6] = 0.019474f;
    data->d[7] = -1.101406f;
    data->d[8] = 1.597642f;
    data->d[9] = -0.157494f;
    data->d[10] = -2.049252f;
    data->d[11] = -2.710496f;
    data->d[12] = 0.411995f;
    data->d[13] = -1.174627f;
    data->d[14] = -0.960243f;
    data->d[15] = 1.955095f;
    data->d[16] = -0.824420f;
    data->d[17] = 1.794775f;
    data->d[18] = 5.244715f;
    data->d[19] = -0.118131f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000153
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.958275f;
    data->d[2] = 0.638748f;
    data->d[3] = 0.535633f;
    data->d[4] = -0.749997f;
    data->d[5] = 0.907413f;
    data->d[6] = 0.004638f;
    data->d[7] = -1.189055f;
    data->d[8] = 0.808006f;
    data->d[9] = -0.216209f;
    data->d[10] = -0.811505f;
    data->d[11] = 2.096131f;
    data->d[12] = 0.531545f;
    data->d[13] = -1.095930f;
    data->d[14] = 1.821383f;
    data->d[15] = 1.696778f;
    data->d[16] = -0.181780f;
    data->d[17] = 0.713427f;
    data->d[18] = -1.728871f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 97;
    state.m_evolution = 0;
    state.m_index = 34;
    state.m_test = 50;
    state.m_seed = 14288917859507178517;
} // LoadState
