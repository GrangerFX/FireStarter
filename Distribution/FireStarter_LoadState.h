#pragma once
#include "FireStarterState.h"

// Run date: 05/20/23 11:09:02 Pacific Daylight Time
// Run duration = 722.342148 seconds
// Run generation = 140
// Run evolution = 0
// Run result = 0.00000656
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 48
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_seed = 48;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 100;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000399
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.431423f;
    data->d[1] = 1.355354f;
    data->d[2] = 0.341528f;
    data->d[3] = -3.252603f;
    data->d[4] = -0.121854f;
    data->d[5] = -1.491804f;
    data->d[6] = 1.890173f;
    data->d[7] = -1.191562f;
    data->d[8] = -2.049363f;
    data->d[9] = -2.615408f;
    data->d[10] = -1.373513f;
    data->d[11] = 3.735054f;
    data->d[12] = 1.858895f;
    data->d[13] = 1.353466f;
    data->d[14] = -1.853968f;
    data->d[15] = -0.002610f;
    data->d[16] = -0.277984f;
    data->d[17] = 0.092113f;
    data->d[18] = 0.903123f;
    data->d[19] = -2.827989f;
    data->d[20] = -0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000004f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000358
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.104744f;
    data->d[1] = 0.323729f;
    data->d[2] = 0.247076f;
    data->d[3] = -0.576459f;
    data->d[4] = -1.833784f;
    data->d[5] = 1.929617f;
    data->d[6] = 1.700391f;
    data->d[7] = -0.525699f;
    data->d[8] = -1.245569f;
    data->d[9] = 0.495928f;
    data->d[10] = 1.716285f;
    data->d[11] = -1.659082f;
    data->d[12] = 0.648555f;
    data->d[13] = 2.752861f;
    data->d[14] = -0.197472f;
    data->d[15] = -1.312953f;
    data->d[16] = -1.360058f;
    data->d[17] = -0.213473f;
    data->d[18] = -0.167941f;
    data->d[19] = 5.060377f;
    data->d[20] = -0.118132f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000007f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00000656
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.696216f;
    data->d[1] = 1.822690f;
    data->d[2] = -2.015857f;
    data->d[3] = 0.733759f;
    data->d[4] = 0.475539f;
    data->d[5] = 0.681983f;
    data->d[6] = -1.277187f;
    data->d[7] = -0.496284f;
    data->d[8] = -1.318234f;
    data->d[9] = 3.553810f;
    data->d[10] = 0.004389f;
    data->d[11] = -0.278948f;
    data->d[12] = 1.776453f;
    data->d[13] = 1.306280f;
    data->d[14] = -2.124990f;
    data->d[15] = 0.621433f;
    data->d[16] = -0.621336f;
    data->d[17] = -1.987954f;
    data->d[18] = -0.339892f;
    data->d[19] = -1.407327f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 25);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 0, 27);
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
    state.m_generation = 140;
    state.m_evolution = 0;
    state.m_index = 2;
    state.m_test = 0;
    state.m_seed = 636064089989035013;
} // LoadState
