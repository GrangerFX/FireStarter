#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 17:43:03 Pacific Daylight Time
// Run duration = 11549.863628 seconds
// Run generation = 132
// Run evolution = 3
// Run result = 0.00001490
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 2
// Run processes = 2
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 2;
    settings.m_processes = 2;
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

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.366270f;
    data->d[1] = -0.063624f;
    data->d[2] = -10.526574f;
    data->d[3] = 0.000001f;
    data->d[4] = 1.774136f;
    data->d[5] = 0.404166f;
    data->d[6] = 0.825078f;
    data->d[7] = 1.106455f;
    data->d[8] = -1.056233f;
    data->d[9] = 0.379297f;
    data->d[10] = 0.884916f;
    data->d[11] = -0.109914f;
    data->d[12] = 1.446785f;
    data->d[13] = 3.633660f;
    data->d[14] = 1.001999f;
    data->d[15] = 1.243425f;
    data->d[16] = -1.409683f;
    data->d[17] = -1.062625f;
    data->d[18] = -0.015897f;
    data->d[19] = 0.883150f;
    data->d[20] = -0.883150f;
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

// Variation: 1  result = 0.00000417
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.117281f;
    data->d[1] = -0.004547f;
    data->d[2] = -3.830933f;
    data->d[3] = -0.000316f;
    data->d[4] = 1.322227f;
    data->d[5] = 0.997433f;
    data->d[6] = -0.478482f;
    data->d[7] = -1.199848f;
    data->d[8] = -0.648779f;
    data->d[9] = 0.240045f;
    data->d[10] = -1.280045f;
    data->d[11] = -2.392092f;
    data->d[12] = 0.153314f;
    data->d[13] = -1.143814f;
    data->d[14] = 2.199040f;
    data->d[15] = 2.204051f;
    data->d[16] = 1.045261f;
    data->d[17] = -1.011592f;
    data->d[18] = 0.319786f;
    data->d[19] = -3.250068f;
    data->d[20] = 3.131935f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00001490
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.237668f;
    data->d[1] = 7.156562f;
    data->d[2] = 3.957040f;
    data->d[3] = 0.000001f;
    data->d[4] = -1.405446f;
    data->d[5] = 1.799852f;
    data->d[6] = -1.573950f;
    data->d[7] = -0.694747f;
    data->d[8] = 2.029465f;
    data->d[9] = -0.050885f;
    data->d[10] = 0.784455f;
    data->d[11] = -1.717650f;
    data->d[12] = -0.083669f;
    data->d[13] = 0.618627f;
    data->d[14] = 0.110799f;
    data->d[15] = 1.322187f;
    data->d[16] = 0.134236f;
    data->d[17] = 1.106322f;
    data->d[18] = -0.450044f;
    data->d[19] = -0.681197f;
    data->d[20] = 1.204792f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
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
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 5);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 22);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 132;
    state.m_evolution = 3;
    state.m_age = 30;
    state.m_index = 0;
    state.m_id = 4;
    state.m_copy_id = 60;
    state.m_test = 14;
    state.m_seed = 4626488664935964291;
    state.m_maxResult = 0.000015f;
    state.m_firstResult = 0.000047f;
    state.m_lastResult = 0.000026f;
    state.m_optimizePass = false;
    state.m_lastEvolved = false;
} // LoadState
