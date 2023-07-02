#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 13:18:27 Pacific Daylight Time
// Run duration = 755.614522 seconds
// Run generation = 56
// Run evolution = 0
// Run result = 0.00000358
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000358
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.200861f;
    data->d[2] = -1.175065f;
    data->d[3] = -4.769595f;
    data->d[4] = -0.791260f;
    data->d[5] = -0.512559f;
    data->d[6] = 1.435557f;
    data->d[7] = 0.041278f;
    data->d[8] = -0.813499f;
    data->d[9] = 0.405119f;
    data->d[10] = 0.601511f;
    data->d[11] = 1.954342f;
    data->d[12] = 0.974501f;
    data->d[13] = 5.491533f;
    data->d[14] = 6.108461f;
    data->d[15] = 0.583140f;
    data->d[16] = -1.662134f;
    data->d[17] = 5.974317f;
    data->d[18] = -0.378417f;
    data->d[19] = 0.378417f;
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

// Variation: 1  result = 0.00000155
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.900956f;
    data->d[2] = 0.562026f;
    data->d[3] = -0.667080f;
    data->d[4] = 3.631505f;
    data->d[5] = 1.132913f;
    data->d[6] = -0.006491f;
    data->d[7] = 1.370442f;
    data->d[8] = -1.015494f;
    data->d[9] = 1.350178f;
    data->d[10] = -0.657854f;
    data->d[11] = -0.520717f;
    data->d[12] = 1.631845f;
    data->d[13] = 2.859759f;
    data->d[14] = 1.994733f;
    data->d[15] = 0.194899f;
    data->d[16] = -1.541813f;
    data->d[17] = -1.866863f;
    data->d[18] = -1.536288f;
    data->d[19] = 1.418156f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000280
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617992f;
    data->d[1] = -0.845796f;
    data->d[2] = -1.732372f;
    data->d[3] = 1.169705f;
    data->d[4] = -0.189130f;
    data->d[5] = 4.025251f;
    data->d[6] = -0.120108f;
    data->d[7] = -0.427438f;
    data->d[8] = 1.111919f;
    data->d[9] = -0.431854f;
    data->d[10] = -1.210701f;
    data->d[11] = -0.030038f;
    data->d[12] = 6.930264f;
    data->d[13] = -0.356789f;
    data->d[14] = 1.572599f;
    data->d[15] = 0.074423f;
    data->d[16] = -2.466639f;
    data->d[17] = -15.829117f;
    data->d[18] = -0.667992f;
    data->d[19] = 1.191589f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000004f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 22);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
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
    state.m_generation = 56;
    state.m_evolution = 0;
    state.m_index = 44;
    state.m_test = 59;
    state.m_seed = 3576982295523810620;
} // LoadState
