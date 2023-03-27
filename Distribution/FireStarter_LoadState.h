#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 23:46:15 Pacific Daylight Time
// Run duration = 2778.296541 seconds
// Run generation = 94
// Run result = 0.00097883
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 5

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 5;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00095204
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.346903f;
    data->d[1] = 1.514340f;
    data->d[2] = -0.488018f;
    data->d[3] = 0.537819f;
    data->d[4] = 0.949354f;
    data->d[5] = -0.665454f;
    data->d[6] = 1.438855f;
    data->d[7] = 0.856986f;
    data->d[8] = 1.736177f;
    data->d[9] = -1.391841f;
    data->d[10] = -0.393537f;
    data->d[11] = -0.872218f;
    data->d[12] = -0.603687f;
    data->d[13] = 0.534044f;
    data->d[14] = 1.003347f;
    data->d[15] = -2.274654f;
    data->d[16] = -0.505027f;
    data->d[17] = -0.975891f;
    data->d[18] = 1.276632f;
    data->d[19] = 0.696972f;
    data->d[20] = -1.231292f;
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
    *(result->MinResult()) = 0.000952f;
} // LoadVariation0

// Variation: 1  result = 0.00097883
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.207811f;
    data->d[1] = 1.802154f;
    data->d[2] = 1.076214f;
    data->d[3] = 0.879658f;
    data->d[4] = -0.801346f;
    data->d[5] = -0.739833f;
    data->d[6] = -0.373394f;
    data->d[7] = 0.865409f;
    data->d[8] = -0.449733f;
    data->d[9] = -0.988832f;
    data->d[10] = 0.754350f;
    data->d[11] = 5.190636f;
    data->d[12] = -0.698660f;
    data->d[13] = 1.174423f;
    data->d[14] = 1.153780f;
    data->d[15] = 0.849845f;
    data->d[16] = 0.386769f;
    data->d[17] = 0.757585f;
    data->d[18] = 2.203777f;
    data->d[19] = 1.513924f;
    data->d[20] = -0.307254f;
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
    *(result->MinResult()) = 0.000979f;
} // LoadVariation1

// Variation: 2  result = 0.00097252
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.204045f;
    data->d[1] = -0.876872f;
    data->d[2] = 0.194906f;
    data->d[3] = -1.063962f;
    data->d[4] = 1.038931f;
    data->d[5] = -0.184668f;
    data->d[6] = -0.254430f;
    data->d[7] = -13.040816f;
    data->d[8] = -0.898722f;
    data->d[9] = 1.420326f;
    data->d[10] = 0.462582f;
    data->d[11] = -0.834705f;
    data->d[12] = 0.522548f;
    data->d[13] = 1.402551f;
    data->d[14] = 2.489037f;
    data->d[15] = -0.227129f;
    data->d[16] = 0.439584f;
    data->d[17] = 2.434408f;
    data->d[18] = -0.634124f;
    data->d[19] = 0.683197f;
    data->d[20] = 0.266426f;
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
    *(result->MinResult()) = 0.000973f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000979f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 21);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 30);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 29);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 94;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 6206757877316090266;
} // LoadState
