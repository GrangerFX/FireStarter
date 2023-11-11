#pragma once
#include "FireStarterState.h"

// Run date: 11/10/23 19:42:22 Pacific Standard Time
// Run duration = 36202.736188 seconds
// Run generation = 115
// Run evolution = 11
// Run result = 0.00000626
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
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
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000367
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141476f;
    data->d[1] = -1.263319f;
    data->d[2] = 0.978663f;
    data->d[3] = 0.128585f;
    data->d[4] = 0.036544f;
    data->d[5] = 0.162840f;
    data->d[6] = -0.024935f;
    data->d[7] = 1.190411f;
    data->d[8] = -1.345379f;
    data->d[9] = 0.400345f;
    data->d[10] = -0.549593f;
    data->d[11] = 1.304285f;
    data->d[12] = -5.209324f;
    data->d[13] = 0.009997f;
    data->d[14] = 0.550521f;
    data->d[15] = -2.388726f;
    data->d[16] = 0.000120f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000626
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.091145f;
    data->d[1] = 1.825079f;
    data->d[2] = -0.069636f;
    data->d[3] = 0.345929f;
    data->d[4] = -0.606611f;
    data->d[5] = -0.633639f;
    data->d[6] = 0.005681f;
    data->d[7] = -0.986597f;
    data->d[8] = 1.952452f;
    data->d[9] = 0.746119f;
    data->d[10] = 5.013980f;
    data->d[11] = 0.210125f;
    data->d[12] = 4.119865f;
    data->d[13] = 0.070359f;
    data->d[14] = 0.462345f;
    data->d[15] = -1.980090f;
    data->d[16] = -0.118667f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation1

// Variation: 2  result = 0.00000465
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.619386f;
    data->d[1] = -0.365006f;
    data->d[2] = -0.267428f;
    data->d[3] = -0.169522f;
    data->d[4] = -0.108050f;
    data->d[5] = -0.060348f;
    data->d[6] = 0.025589f;
    data->d[7] = 1.077135f;
    data->d[8] = -1.361104f;
    data->d[9] = 0.365197f;
    data->d[10] = 3.802661f;
    data->d[11] = 0.237148f;
    data->d[12] = 0.507977f;
    data->d[13] = 1.189196f;
    data->d[14] = -0.004715f;
    data->d[15] = 0.559701f;
    data->d[16] = 0.522209f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 1, 28);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 115;
    state.m_evolution = 11;
    state.m_index = 1;
    state.m_id = 14;
    state.m_copy_id = 52;
    state.m_test = 14;
    state.m_seed = 13554153699030181680;
    state.m_maxResult = 0.000006f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
