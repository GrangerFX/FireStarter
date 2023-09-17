#pragma once
#include "FireStarterState.h"

// Run date: 09/17/23 13:52:07 Pacific Daylight Time
// Run duration = 679.893204 seconds
// Run generation = 31
// Run evolution = 8
// Run result = 0.00000024
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.169255f;
    data->d[2] = 0.492708f;
    data->d[3] = -9.872427f;
    data->d[4] = -0.762856f;
    data->d[5] = -0.152598f;
    data->d[6] = -6.640058f;
    data->d[7] = 0.018428f;
    data->d[8] = -2.958187f;
    data->d[9] = 0.007207f;
    data->d[10] = -0.791594f;
    data->d[11] = 1.235452f;
    data->d[12] = -0.473913f;
    data->d[13] = -3.305868f;
    data->d[14] = -2.295732f;
    data->d[15] = -0.089482f;
    data->d[16] = 1.991250f;
    data->d[17] = -1.283286f;
    data->d[18] = -0.910470f;
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
    data->d[1] = -0.095281f;
    data->d[2] = 1.637820f;
    data->d[3] = -1.409860f;
    data->d[4] = 3.505127f;
    data->d[5] = 0.407667f;
    data->d[6] = -18.116539f;
    data->d[7] = 1.657383f;
    data->d[8] = 0.337470f;
    data->d[9] = 0.008010f;
    data->d[10] = -0.674916f;
    data->d[11] = -1.761687f;
    data->d[12] = -0.352035f;
    data->d[13] = -2.012139f;
    data->d[14] = -1.939174f;
    data->d[15] = 0.214296f;
    data->d[16] = 2.003949f;
    data->d[17] = 0.424263f;
    data->d[18] = 3.315450f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.148584f;
    data->d[2] = -5.361764f;
    data->d[3] = -2.376760f;
    data->d[4] = 0.313847f;
    data->d[5] = 4.716417f;
    data->d[6] = -13.147475f;
    data->d[7] = 1.149204f;
    data->d[8] = -0.048737f;
    data->d[9] = -0.042081f;
    data->d[10] = -1.245587f;
    data->d[11] = -1.401422f;
    data->d[12] = -1.553699f;
    data->d[13] = 0.552478f;
    data->d[14] = -1.522112f;
    data->d[15] = 0.762772f;
    data->d[16] = 0.389461f;
    data->d[17] = -0.465530f;
    data->d[18] = 0.310763f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 24);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 31;
    state.m_evolution = 8;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 62;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 1385871871291649038;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000029f;
    state.m_optimizePass = true;
    state.m_lastOptimize = true;
} // LoadState
