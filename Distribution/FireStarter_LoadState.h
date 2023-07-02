#pragma once
#include "FireStarterState.h"

// Run date: 07/01/23 18:25:42 Pacific Daylight Time
// Run duration = 382.142537 seconds
// Run generation = 26
// Run evolution = 0
// Run result = 0.00006431
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
// Run tests = 0
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
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00006326
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141620f;
    data->d[1] = 0.159300f;
    data->d[2] = 0.926869f;
    data->d[3] = 0.686111f;
    data->d[4] = 0.000144f;
    data->d[5] = 0.792345f;
    data->d[6] = -0.864914f;
    data->d[7] = 1.527754f;
    data->d[8] = -1.782747f;
    data->d[9] = 0.158015f;
    data->d[10] = -0.525144f;
    data->d[11] = 2.115170f;
    data->d[12] = -1.317955f;
    data->d[13] = -0.373077f;
    data->d[14] = 0.192786f;
    data->d[15] = 0.638077f;
    data->d[16] = -0.967847f;
    data->d[17] = 1.747298f;
    data->d[18] = -0.000091f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000018f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000063f;
} // LoadVariation0

// Variation: 1  result = 0.00001776
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090718f;
    data->d[1] = 0.079797f;
    data->d[2] = -2.119100f;
    data->d[3] = -4.538624f;
    data->d[4] = 0.000044f;
    data->d[5] = 0.385111f;
    data->d[6] = -2.503049f;
    data->d[7] = 0.193160f;
    data->d[8] = -1.113044f;
    data->d[9] = 2.365131f;
    data->d[10] = 0.044568f;
    data->d[11] = 2.515643f;
    data->d[12] = 2.237564f;
    data->d[13] = -0.577747f;
    data->d[14] = 1.087893f;
    data->d[15] = -2.430640f;
    data->d[16] = -0.729277f;
    data->d[17] = -1.591169f;
    data->d[18] = -0.118198f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000064f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation1

// Variation: 2  result = 0.00006431
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618080f;
    data->d[1] = -0.081882f;
    data->d[2] = -0.237492f;
    data->d[3] = -0.055179f;
    data->d[4] = -0.038858f;
    data->d[5] = 3.158522f;
    data->d[6] = -4.504789f;
    data->d[7] = -1.062667f;
    data->d[8] = 0.774018f;
    data->d[9] = 0.783963f;
    data->d[10] = -0.874852f;
    data->d[11] = 1.387284f;
    data->d[12] = 1.633116f;
    data->d[13] = -0.459188f;
    data->d[14] = -0.852247f;
    data->d[15] = -0.054281f;
    data->d[16] = 2.004723f;
    data->d[17] = -2.063838f;
    data->d[18] = 0.523461f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000064f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000064f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 26;
    state.m_evolution = 0;
    state.m_index = 8;
    state.m_test = 0;
    state.m_seed = 2518377098904244292;
} // LoadState
