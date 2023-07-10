#pragma once
#include "FireStarterState.h"

// Run date: 07/10/23 10:47:04 Pacific Daylight Time
// Run duration = 346.504637 seconds
// Run generation = 38
// Run evolution = 0
// Run result = 0.00000238
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
// Run processes = 8
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
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.935593f;
    data->d[2] = 0.824483f;
    data->d[3] = -1.015857f;
    data->d[4] = 0.009305f;
    data->d[5] = -1.616533f;
    data->d[6] = 2.438643f;
    data->d[7] = -0.550266f;
    data->d[8] = 0.896402f;
    data->d[9] = -1.249314f;
    data->d[10] = 1.666045f;
    data->d[11] = -0.282578f;
    data->d[12] = 0.165675f;
    data->d[13] = -0.383052f;
    data->d[14] = 1.042047f;
    data->d[15] = -3.739401f;
    data->d[16] = -1.780744f;
    data->d[17] = -2.912005f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000203
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.226546f;
    data->d[2] = 2.410123f;
    data->d[3] = 2.569023f;
    data->d[4] = -0.784831f;
    data->d[5] = 1.616584f;
    data->d[6] = 0.727058f;
    data->d[7] = 0.013262f;
    data->d[8] = 0.723751f;
    data->d[9] = 1.721831f;
    data->d[10] = 0.900269f;
    data->d[11] = 0.508593f;
    data->d[12] = -0.946890f;
    data->d[13] = 0.258138f;
    data->d[14] = 1.064144f;
    data->d[15] = -0.086669f;
    data->d[16] = 3.298454f;
    data->d[17] = -2.215754f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000238
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 1.345716f;
    data->d[2] = 1.140758f;
    data->d[3] = -0.233791f;
    data->d[4] = 0.409711f;
    data->d[5] = 0.093196f;
    data->d[6] = -2.514504f;
    data->d[7] = 0.006368f;
    data->d[8] = -1.192108f;
    data->d[9] = -1.658594f;
    data->d[10] = -0.053284f;
    data->d[11] = -1.538235f;
    data->d[12] = 0.653568f;
    data->d[13] = -0.065106f;
    data->d[14] = 0.985916f;
    data->d[15] = 0.710854f;
    data->d[16] = 0.075831f;
    data->d[17] = -2.156049f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 38;
    state.m_evolution = 0;
    state.m_index = 27;
    state.m_test = 17;
    state.m_seed = 15127291871328021059;
} // LoadState
