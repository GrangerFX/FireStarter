#pragma once
#include "FireStarterState.h"

// Run date: 12/11/23 10:35:34 Pacific Standard Time
// Run duration = 7693.250625 seconds
// Run generation = 130
// Run evolution = 12
// Run max result = 0.00001499
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00001499
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.626073f;
    data->d[1] = 1.321006f;
    data->d[2] = 1.682552f;
    data->d[3] = 3.282995f;
    data->d[4] = -2.404514f;
    data->d[5] = 0.012245f;
    data->d[6] = -3.698466f;
    data->d[7] = 0.166600f;
    data->d[8] = 0.815840f;
    data->d[9] = -0.149244f;
    data->d[10] = 4.343637f;
    data->d[11] = -0.005654f;
    data->d[12] = 4.626802f;
    data->d[13] = 0.938214f;
    data->d[14] = 1.959659f;
    data->d[15] = -1.873331f;
    data->d[16] = 0.274571f;
    data->d[17] = -2.990331f;
    data->d[18] = 3.042904f;
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
    *(result->MinResult()) = 0.000015f;
} // LoadVariation0

// Variation: 1  result = 0.00001466
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.981577f;
    data->d[1] = -0.560035f;
    data->d[2] = 1.544654f;
    data->d[3] = 0.165830f;
    data->d[4] = -1.510031f;
    data->d[5] = 0.050446f;
    data->d[6] = -1.670156f;
    data->d[7] = -0.324847f;
    data->d[8] = -0.383536f;
    data->d[9] = 0.021582f;
    data->d[10] = -7.548564f;
    data->d[11] = -0.123446f;
    data->d[12] = -1.091803f;
    data->d[13] = -0.321950f;
    data->d[14] = -8.554984f;
    data->d[15] = 0.793871f;
    data->d[16] = 2.955230f;
    data->d[17] = -2.887024f;
    data->d[18] = -3.897386f;
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
    *(result->MinResult()) = 0.000015f;
} // LoadVariation1

// Variation: 2  result = 0.00000656
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.848037f;
    data->d[1] = 2.979790f;
    data->d[2] = 0.198367f;
    data->d[3] = -0.394407f;
    data->d[4] = 2.125714f;
    data->d[5] = -0.095341f;
    data->d[6] = -2.873911f;
    data->d[7] = 0.186012f;
    data->d[8] = 0.796903f;
    data->d[9] = 0.059032f;
    data->d[10] = 0.890902f;
    data->d[11] = 0.566941f;
    data->d[12] = 0.329547f;
    data->d[13] = 1.639065f;
    data->d[14] = -0.242556f;
    data->d[15] = 0.188582f;
    data->d[16] = 1.118901f;
    data->d[17] = -1.237165f;
    data->d[18] = -2.011700f;
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
    *(result->MinResult()) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000015f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 1, 0);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 26);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 0, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 130;
    state.m_evolution = 12;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 52;
    state.m_copy_id = 57;
    state.m_test = 15;
    state.m_seed = 18207218948531617506;
    state.m_maxResult = 0.000015f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
