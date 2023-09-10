#pragma once
#include "FireStarterState.h"

// Run date: 09/10/23 12:16:53 Pacific Daylight Time
// Run duration = 1507.174152 seconds
// Run generation = 69
// Run evolution = 20
// Run result = 0.00000083
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
// Run processes = 4
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
    settings.m_processes = 4;
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

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.226218f;
    data->d[2] = 0.814030f;
    data->d[3] = -1.537066f;
    data->d[4] = 1.635171f;
    data->d[5] = 1.783750f;
    data->d[6] = -0.193058f;
    data->d[7] = -0.164031f;
    data->d[8] = -1.700945f;
    data->d[9] = 0.058220f;
    data->d[10] = -0.053093f;
    data->d[11] = 7.391048f;
    data->d[12] = -0.780952f;
    data->d[13] = 2.325544f;
    data->d[14] = 1.152705f;
    data->d[15] = 0.125872f;
    data->d[16] = -1.725164f;
    data->d[17] = 1.032667f;
    data->d[18] = 2.707758f;
    data->d[19] = -0.415538f;
    data->d[20] = -1.748796f;
    data->d[21] = 2.506694f;
    data->d[22] = -0.000000f;
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
    data->d[1] = 0.182085f;
    data->d[2] = 1.610880f;
    data->d[3] = -1.324436f;
    data->d[4] = 0.403846f;
    data->d[5] = -1.123435f;
    data->d[6] = -3.113818f;
    data->d[7] = -0.459975f;
    data->d[8] = -0.025642f;
    data->d[9] = -1.174791f;
    data->d[10] = -0.219480f;
    data->d[11] = -1.119508f;
    data->d[12] = 0.000031f;
    data->d[13] = 4.398911f;
    data->d[14] = 1.245584f;
    data->d[15] = 0.652388f;
    data->d[16] = -0.697135f;
    data->d[17] = 4.375188f;
    data->d[18] = 25.935188f;
    data->d[19] = 0.403453f;
    data->d[20] = -0.632126f;
    data->d[21] = 0.613919f;
    data->d[22] = -0.118132f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.403358f;
    data->d[2] = -0.209921f;
    data->d[3] = 1.282604f;
    data->d[4] = 1.842094f;
    data->d[5] = -0.791993f;
    data->d[6] = -1.196103f;
    data->d[7] = -0.166861f;
    data->d[8] = 1.053940f;
    data->d[9] = -1.110673f;
    data->d[10] = 0.102177f;
    data->d[11] = -30.961704f;
    data->d[12] = -3.839628f;
    data->d[13] = -1.738101f;
    data->d[14] = -4.417619f;
    data->d[15] = 2.814495f;
    data->d[16] = 19.427607f;
    data->d[17] = 0.470670f;
    data->d[18] = 8.494869f;
    data->d[19] = 0.514283f;
    data->d[20] = -3.041674f;
    data->d[21] = 1.705368f;
    data->d[22] = 0.523599f;
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
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 27);
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
    state.m_generation = 69;
    state.m_evolution = 20;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 60;
    state.m_copy_id = 25;
    state.m_test = 4;
    state.m_seed = 15855288257104559764;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000005f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
