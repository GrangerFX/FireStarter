#pragma once
#include "FireStarterState.h"

// Run date: 10/08/23 09:49:33 Pacific Daylight Time
// Run duration = 1331.088450 seconds
// Run generation = 45
// Run evolution = 6
// Run result = 0.00000167
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
// Run tests = 2
// Run units = 1
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
    settings.m_tests = 2;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00000134
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.345336f;
    data->d[1] = -1.084903f;
    data->d[2] = 0.095603f;
    data->d[3] = -4.926408f;
    data->d[4] = -1.355794f;
    data->d[5] = 0.000019f;
    data->d[6] = -1.484847f;
    data->d[7] = 1.484821f;
    data->d[8] = -1.072557f;
    data->d[9] = 0.137079f;
    data->d[10] = 1.720348f;
    data->d[11] = -0.441736f;
    data->d[12] = 1.008811f;
    data->d[13] = 0.977427f;
    data->d[14] = -1.110057f;
    data->d[15] = 1.435377f;
    data->d[16] = 0.166729f;
    data->d[17] = 1.579238f;
    data->d[18] = 3.684880f;
    data->d[19] = -0.408396f;
    data->d[20] = 2.302559f;
    data->d[21] = 0.439656f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000167
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.162753f;
    data->d[1] = -0.503012f;
    data->d[2] = -2.387408f;
    data->d[3] = -0.099753f;
    data->d[4] = 3.929191f;
    data->d[5] = 2.142063f;
    data->d[6] = -3.476327f;
    data->d[7] = 1.334254f;
    data->d[8] = 0.273081f;
    data->d[9] = -0.428934f;
    data->d[10] = -0.950345f;
    data->d[11] = -5.767555f;
    data->d[12] = 1.318681f;
    data->d[13] = 1.096349f;
    data->d[14] = 0.921401f;
    data->d[15] = -2.253214f;
    data->d[16] = 0.459498f;
    data->d[17] = -1.411011f;
    data->d[18] = 2.666363f;
    data->d[19] = -1.660200f;
    data->d[20] = -0.591627f;
    data->d[21] = -0.055140f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000121
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.601139f;
    data->d[1] = -1.573776f;
    data->d[2] = -0.367357f;
    data->d[3] = 1.681165f;
    data->d[4] = 0.262361f;
    data->d[5] = 1.240502f;
    data->d[6] = -0.540840f;
    data->d[7] = -0.699660f;
    data->d[8] = 0.775484f;
    data->d[9] = 1.017652f;
    data->d[10] = -0.147026f;
    data->d[11] = -1.437012f;
    data->d[12] = -0.056324f;
    data->d[13] = -1.385803f;
    data->d[14] = -1.010392f;
    data->d[15] = -4.125185f;
    data->d[16] = -3.613147f;
    data->d[17] = 2.155758f;
    data->d[18] = 3.090695f;
    data->d[19] = -2.353647f;
    data->d[20] = 0.069707f;
    data->d[21] = 0.422090f;
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
    state.m_maxResult = 0.000002f;
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
    state.m_generation = 45;
    state.m_evolution = 6;
    state.m_age = 23;
    state.m_index = 46;
    state.m_id = 48;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 4325184427241383137;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
} // LoadState
