#pragma once
#include "FireStarterState.h"

// Run date: 09/09/23 16:54:35 Pacific Daylight Time
// Run duration = 1841.963514 seconds
// Run generation = 21
// Run evolution = 6
// Run result = 0.00000012
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
// Run generations = 200
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
    settings.m_generations = 200;
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
    data->d[1] = -1.664642f;
    data->d[2] = 3.514528f;
    data->d[3] = -1.437603f;
    data->d[4] = 0.086250f;
    data->d[5] = 0.038962f;
    data->d[6] = 0.621135f;
    data->d[7] = -0.231953f;
    data->d[8] = 13.902480f;
    data->d[9] = 2.873196f;
    data->d[10] = -0.675077f;
    data->d[11] = 1.481315f;
    data->d[12] = 2.093645f;
    data->d[13] = -4.418712f;
    data->d[14] = 0.025287f;
    data->d[15] = -1.319450f;
    data->d[16] = -0.091593f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -0.069284f;
    data->d[2] = 1.037732f;
    data->d[3] = 1.303759f;
    data->d[4] = 0.064303f;
    data->d[5] = -0.654992f;
    data->d[6] = -1.142392f;
    data->d[7] = -31.525969f;
    data->d[8] = -8.151604f;
    data->d[9] = 43.186028f;
    data->d[10] = 0.777426f;
    data->d[11] = -1.287251f;
    data->d[12] = -2.018516f;
    data->d[13] = 4.390448f;
    data->d[14] = -0.079712f;
    data->d[15] = -0.438145f;
    data->d[16] = 1.944422f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.155047f;
    data->d[2] = 0.596220f;
    data->d[3] = -0.800580f;
    data->d[4] = 0.591952f;
    data->d[5] = -0.541946f;
    data->d[6] = 0.506301f;
    data->d[7] = 19.672449f;
    data->d[8] = 0.074892f;
    data->d[9] = 0.100122f;
    data->d[10] = 0.584795f;
    data->d[11] = -1.710456f;
    data->d[12] = -1.435655f;
    data->d[13] = -0.399330f;
    data->d[14] = -0.259396f;
    data->d[15] = -1.140732f;
    data->d[16] = -2.485319f;
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
    instructions->SetOperation(0, 1, 15);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 21;
    state.m_evolution = 6;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 26;
    state.m_copy_id = 8;
    state.m_test = 4;
    state.m_seed = 3559599093047253868;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
