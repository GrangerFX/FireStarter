#pragma once
#include "FireStarterState.h"

// Run date: 11/19/23 10:54:25 Pacific Standard Time
// Run duration = 43636.430410 seconds
// Run generation = 48
// Run evolution = 17
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
// Run tests = 16
// Run seeds = 64
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.720158f;
    data->d[1] = -1.749168f;
    data->d[2] = -0.513274f;
    data->d[3] = -0.978042f;
    data->d[4] = 0.480046f;
    data->d[5] = 11.545237f;
    data->d[6] = 0.000985f;
    data->d[7] = 0.996498f;
    data->d[8] = -2.761255f;
    data->d[9] = -3.025428f;
    data->d[10] = 1.538749f;
    data->d[11] = -0.163821f;
    data->d[12] = 0.453971f;
    data->d[13] = 2.424449f;
    data->d[14] = -0.411832f;
    data->d[15] = -0.748611f;
    data->d[16] = -1.543794f;
    data->d[17] = 0.209153f;
    data->d[18] = 0.200560f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.658181f;
    data->d[1] = 2.144411f;
    data->d[2] = -0.110196f;
    data->d[3] = -1.382159f;
    data->d[4] = 0.534470f;
    data->d[5] = -0.000591f;
    data->d[6] = 12.130527f;
    data->d[7] = -2.161660f;
    data->d[8] = 0.272662f;
    data->d[9] = -2.544481f;
    data->d[10] = 1.688868f;
    data->d[11] = -0.079486f;
    data->d[12] = -1.065918f;
    data->d[13] = -1.457337f;
    data->d[14] = -0.353561f;
    data->d[15] = 1.880955f;
    data->d[16] = 1.496448f;
    data->d[17] = 0.079826f;
    data->d[18] = -0.965580f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.007890f;
    data->d[1] = 0.957740f;
    data->d[2] = 1.680909f;
    data->d[3] = -0.305718f;
    data->d[4] = -1.208167f;
    data->d[5] = -10.939218f;
    data->d[6] = -0.002154f;
    data->d[7] = 0.713970f;
    data->d[8] = 1.020631f;
    data->d[9] = -1.243045f;
    data->d[10] = 3.222270f;
    data->d[11] = 0.544206f;
    data->d[12] = -0.476342f;
    data->d[13] = -1.534271f;
    data->d[14] = -0.304010f;
    data->d[15] = 1.082548f;
    data->d[16] = -1.082518f;
    data->d[17] = 1.334079f;
    data->d[18] = -0.221257f;
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
    instructions->SetOperation(0, 0, 12);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 0, 16);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 48;
    state.m_evolution = 17;
    state.m_index = 0;
    state.m_id = 6;
    state.m_copy_id = 6;
    state.m_test = 15;
    state.m_seed = 17278936488619584357;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
