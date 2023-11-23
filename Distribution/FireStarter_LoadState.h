#pragma once
#include "FireStarterState.h"

// Run date: 11/23/23 09:01:37 Pacific Standard Time
// Run duration = 12579.583291 seconds
// Run generation = 61
// Run evolution = 11
// Run result = 0.00000620
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

// Variation: 0  result = 0.00000185
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.100236f;
    data->d[1] = 0.097540f;
    data->d[2] = 0.217351f;
    data->d[3] = -0.215892f;
    data->d[4] = -0.067961f;
    data->d[5] = -0.016468f;
    data->d[6] = -0.094176f;
    data->d[7] = 0.012057f;
    data->d[8] = -0.983867f;
    data->d[9] = 0.034096f;
    data->d[10] = -0.075544f;
    data->d[11] = -0.068517f;
    data->d[12] = -1.256058f;
    data->d[13] = -45935.722656f;
    data->d[14] = 0.192181f;
    data->d[15] = -0.170110f;
    data->d[16] = -1.552210f;
    data->d[17] = 0.327766f;
    data->d[18] = 0.000110f;
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

// Variation: 1  result = 0.00000489
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.088811f;
    data->d[1] = -0.116287f;
    data->d[2] = -0.158201f;
    data->d[3] = 6.287871f;
    data->d[4] = -1.725839f;
    data->d[5] = 0.061872f;
    data->d[6] = -0.018770f;
    data->d[7] = -0.139292f;
    data->d[8] = -0.772513f;
    data->d[9] = 0.448056f;
    data->d[10] = 0.009741f;
    data->d[11] = -0.205659f;
    data->d[12] = -0.044961f;
    data->d[13] = -0.069293f;
    data->d[14] = 0.000004f;
    data->d[15] = 14328.824219f;
    data->d[16] = -0.071161f;
    data->d[17] = -6.652538f;
    data->d[18] = -0.118186f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000620
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.248185f;
    data->d[1] = 0.408014f;
    data->d[2] = 0.241732f;
    data->d[3] = 0.260379f;
    data->d[4] = 0.169181f;
    data->d[5] = -0.042540f;
    data->d[6] = -1.359802f;
    data->d[7] = -1.849181f;
    data->d[8] = 1.336954f;
    data->d[9] = -147352.500000f;
    data->d[10] = 0.547555f;
    data->d[11] = 0.000000f;
    data->d[12] = -0.983019f;
    data->d[13] = -0.073285f;
    data->d[14] = 0.069843f;
    data->d[15] = 0.098893f;
    data->d[16] = -0.162175f;
    data->d[17] = 0.529892f;
    data->d[18] = 0.523604f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 23);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 10);
    instructions->SetOperation(30, 0, 2);
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
    state.m_generation = 61;
    state.m_evolution = 11;
    state.m_index = 9;
    state.m_id = 10;
    state.m_copy_id = 10;
    state.m_test = 2;
    state.m_seed = 1170324814594415975;
    state.m_maxResult = 0.000006f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
