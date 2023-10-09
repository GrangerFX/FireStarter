#pragma once
#include "FireStarterState.h"

// Run date: 10/09/23 10:36:31 Pacific Daylight Time
// Run duration = 2928.890306 seconds
// Run generation = 35
// Run evolution = 12
// Run result = 0.00001860
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
// Run attempts = 128

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
    settings.m_attempts = 128;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001860
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.188954f;
    data->d[1] = -0.333603f;
    data->d[2] = 16.156961f;
    data->d[3] = -0.000000f;
    data->d[4] = -8.019283f;
    data->d[5] = -0.815764f;
    data->d[6] = 1.126029f;
    data->d[7] = -3.276136f;
    data->d[8] = -5.615833f;
    data->d[9] = -0.198032f;
    data->d[10] = 0.256716f;
    data->d[11] = 0.190226f;
    data->d[12] = -0.564526f;
    data->d[13] = -1.762627f;
    data->d[14] = -0.426661f;
    data->d[15] = -1.093735f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000019f;
} // LoadVariation0

// Variation: 1  result = 0.00001168
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.180663f;
    data->d[1] = 0.550671f;
    data->d[2] = -0.032770f;
    data->d[3] = -1.936427f;
    data->d[4] = -0.459217f;
    data->d[5] = -0.495213f;
    data->d[6] = 1.909530f;
    data->d[7] = -1.380746f;
    data->d[8] = -19.932611f;
    data->d[9] = 1.058695f;
    data->d[10] = 1.424720f;
    data->d[11] = -0.423792f;
    data->d[12] = 1.158870f;
    data->d[13] = -1.395123f;
    data->d[14] = -3.088493f;
    data->d[15] = -1.558002f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation1

// Variation: 2  result = 0.00001454
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.330033f;
    data->d[1] = 1.243883f;
    data->d[2] = -0.218038f;
    data->d[3] = 0.481321f;
    data->d[4] = 1.444903f;
    data->d[5] = -0.813375f;
    data->d[6] = 1.458657f;
    data->d[7] = 0.001463f;
    data->d[8] = -6.308179f;
    data->d[9] = -1.110802f;
    data->d[10] = 0.209192f;
    data->d[11] = -0.084116f;
    data->d[12] = 0.316542f;
    data->d[13] = -1.431250f;
    data->d[14] = 0.220857f;
    data->d[15] = -0.742483f;
    data->d[16] = 0.000000f;
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
    *(result->MinResult()) = 0.000015f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000019f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 3);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 13);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 1, 13);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 0, 26);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 35;
    state.m_evolution = 12;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 39;
    state.m_copy_id = 35;
    state.m_test = 17;
    state.m_seed = 7594974042439485748;
    state.m_maxResult = 0.000019f;
    state.m_optimizePass = true;
} // LoadState
