#pragma once
#include "FireStarterState.h"

// Run date: 12/25/23 10:50:52 Pacific Standard Time
// Run duration = 2193.267604 seconds
// Run generation = 50
// Run evolution = 10
// Run max result = 0.00000019
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.376270f;
    data->d[1] = 1.182086f;
    data->d[2] = 1.652023f;
    data->d[3] = -1.539151f;
    data->d[4] = -0.553269f;
    data->d[5] = -0.230497f;
    data->d[6] = -1.790621f;
    data->d[7] = -0.922634f;
    data->d[8] = -0.425672f;
    data->d[9] = 1.347337f;
    data->d[10] = 0.200597f;
    data->d[11] = -0.815020f;
    data->d[12] = 0.419458f;
    data->d[13] = 21.372156f;
    data->d[14] = 22.619999f;
    data->d[15] = -44.915382f;
    data->d[16] = -0.000002f;
    data->d[17] = 0.055104f;
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

// Variation: 1  result = 0.00000019
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.498143f;
    data->d[1] = -1.539591f;
    data->d[2] = 1.519949f;
    data->d[3] = -0.119365f;
    data->d[4] = 0.923864f;
    data->d[5] = 1.280856f;
    data->d[6] = -2.028569f;
    data->d[7] = -1.783738f;
    data->d[8] = 0.925904f;
    data->d[9] = -1.332586f;
    data->d[10] = -3.457707f;
    data->d[11] = 1.135976f;
    data->d[12] = -0.244192f;
    data->d[13] = -3.748256f;
    data->d[14] = -4.982144f;
    data->d[15] = -12.375015f;
    data->d[16] = 0.000003f;
    data->d[17] = -1.471781f;
    data->d[18] = -0.118132f;
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
    data->d[0] = 0.603527f;
    data->d[1] = -1.580031f;
    data->d[2] = 0.293099f;
    data->d[3] = -3.169068f;
    data->d[4] = 0.389859f;
    data->d[5] = -0.740287f;
    data->d[6] = -1.598508f;
    data->d[7] = -0.240297f;
    data->d[8] = -0.511193f;
    data->d[9] = -0.031028f;
    data->d[10] = -42.021210f;
    data->d[11] = -0.000000f;
    data->d[12] = -0.002006f;
    data->d[13] = -16.690582f;
    data->d[14] = 5.624053f;
    data->d[15] = -0.583610f;
    data->d[16] = -0.841139f;
    data->d[17] = 1.087861f;
    data->d[18] = 0.523598f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 4);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 50;
    state.m_evolution = 10;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 852;
    state.m_copy_id = 54;
    state.m_test = 2;
    state.m_seed = 11859961706362351893;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
