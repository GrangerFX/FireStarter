#pragma once
#include "FireStarterState.h"

// Run date: 09/17/23 14:06:37 Pacific Daylight Time
// Run duration = 19797.374696 seconds
// Run generation = 64
// Run evolution = 2
// Run result = 0.00000096
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.427689f;
    data->d[1] = -1.050423f;
    data->d[2] = -1.018411f;
    data->d[3] = 0.225208f;
    data->d[4] = -1.736560f;
    data->d[5] = -12.068645f;
    data->d[6] = 0.000319f;
    data->d[7] = -0.668339f;
    data->d[8] = -0.078948f;
    data->d[9] = 1.482540f;
    data->d[10] = -2.372581f;
    data->d[11] = 1.840972f;
    data->d[12] = 0.659667f;
    data->d[13] = -1.208403f;
    data->d[14] = -0.416901f;
    data->d[15] = 0.232721f;
    data->d[16] = -0.514408f;
    data->d[17] = 0.000000f;
    data->d[18] = -0.744255f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.888098f;
    data->d[1] = 0.063014f;
    data->d[2] = -0.496832f;
    data->d[3] = 2.678626f;
    data->d[4] = -0.444859f;
    data->d[5] = -0.384281f;
    data->d[6] = -2.496825f;
    data->d[7] = 0.000099f;
    data->d[8] = -0.018790f;
    data->d[9] = 1.284213f;
    data->d[10] = -4.093061f;
    data->d[11] = 0.839301f;
    data->d[12] = 1.428139f;
    data->d[13] = -0.249923f;
    data->d[14] = 0.478671f;
    data->d[15] = -1.745939f;
    data->d[16] = -0.281425f;
    data->d[17] = 0.118132f;
    data->d[18] = 0.364324f;
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

// Variation: 2  result = 0.00000096
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.719962f;
    data->d[1] = 0.426055f;
    data->d[2] = 0.452075f;
    data->d[3] = 0.506728f;
    data->d[4] = -1.464519f;
    data->d[5] = 0.152237f;
    data->d[6] = -4.728543f;
    data->d[7] = -0.000372f;
    data->d[8] = -0.044341f;
    data->d[9] = 0.342059f;
    data->d[10] = 1.656065f;
    data->d[11] = 0.972653f;
    data->d[12] = -1.564706f;
    data->d[13] = 0.594369f;
    data->d[14] = 1.490048f;
    data->d[15] = -2.668427f;
    data->d[16] = 0.351189f;
    data->d[17] = -0.523602f;
    data->d[18] = 0.530545f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 19);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 64;
    state.m_evolution = 2;
    state.m_age = 62;
    state.m_index = 61;
    state.m_id = 8;
    state.m_copy_id = 6;
    state.m_test = 15;
    state.m_seed = 14140830580904914325;
    state.m_maxResult = 0.000001f;
    state.m_lastResult = 0.000543f;
    state.m_optimizePass = false;
    state.m_lastOptimize = true;
} // LoadState
