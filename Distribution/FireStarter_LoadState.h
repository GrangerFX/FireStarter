#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 13:59:19 Pacific Daylight Time
// Run duration = 2951.129492 seconds
// Run generation = 7
// Run evolution = 6
// Run result = 0.00000012
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 1.390866f;
    data->d[2] = 0.444921f;
    data->d[3] = 0.611015f;
    data->d[4] = -0.487941f;
    data->d[5] = 0.327424f;
    data->d[6] = 1.047143f;
    data->d[7] = -0.778863f;
    data->d[8] = -1.662566f;
    data->d[9] = -1.704701f;
    data->d[10] = -2.749858f;
    data->d[11] = 0.025907f;
    data->d[12] = 1.965810f;
    data->d[13] = -1.154810f;
    data->d[14] = 1.766575f;
    data->d[15] = 0.165146f;
    data->d[16] = 0.036596f;
    data->d[17] = -0.036596f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.400495f;
    data->d[2] = 1.822607f;
    data->d[3] = -0.259920f;
    data->d[4] = 0.943428f;
    data->d[5] = 0.413749f;
    data->d[6] = -0.539073f;
    data->d[7] = 1.373513f;
    data->d[8] = 2.696104f;
    data->d[9] = 0.628855f;
    data->d[10] = -2.333808f;
    data->d[11] = 0.169213f;
    data->d[12] = -0.464147f;
    data->d[13] = 0.888116f;
    data->d[14] = -1.375866f;
    data->d[15] = 0.635823f;
    data->d[16] = -0.137750f;
    data->d[17] = 0.019618f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.533777f;
    data->d[2] = -0.117801f;
    data->d[3] = -107.590080f;
    data->d[4] = -0.521497f;
    data->d[5] = -1.422786f;
    data->d[6] = 1.088969f;
    data->d[7] = 0.405086f;
    data->d[8] = -1.138153f;
    data->d[9] = -0.423286f;
    data->d[10] = 1.706452f;
    data->d[11] = -0.174726f;
    data->d[12] = 0.291281f;
    data->d[13] = -1.411015f;
    data->d[14] = -0.244660f;
    data->d[15] = 1.050243f;
    data->d[16] = 0.697600f;
    data->d[17] = -0.174001f;
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
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 23);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 7;
    state.m_evolution = 6;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 61;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 17942784971929380064;
    state.m_maxResult = 0.000000;
    state.m_firstResult = 0.000007;
    state.m_lastResult = 0.000001;
    state.m_optimizePass = true;
    state.m_lastEvolved = false;
} // LoadState
