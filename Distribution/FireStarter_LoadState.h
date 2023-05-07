#pragma once
#include "FireStarterState.h"

// Run date: 05/06/23 16:12:00 Pacific Daylight Time
// Run duration = 174.431991 seconds
// Run generation = 268
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.822503f;
    data->d[2] = 3.126668f;
    data->d[3] = 0.127204f;
    data->d[4] = 0.155964f;
    data->d[5] = 0.889782f;
    data->d[6] = -0.113120f;
    data->d[7] = -1.591289f;
    data->d[8] = 0.006593f;
    data->d[9] = 1.401830f;
    data->d[10] = -1.483242f;
    data->d[11] = 2.383968f;
    data->d[12] = -0.235740f;
    data->d[13] = 0.258875f;
    data->d[14] = -1.263077f;
    data->d[15] = 4.173549f;
    data->d[16] = -9.858011f;
    data->d[17] = 8.681170f;
    data->d[18] = 0.067424f;
    data->d[19] = 0.142772f;
    data->d[20] = -1.978670f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.187246f;
    data->d[2] = -0.418768f;
    data->d[3] = 0.275069f;
    data->d[4] = -6.769359f;
    data->d[5] = -5.072242f;
    data->d[6] = 0.145987f;
    data->d[7] = 0.603315f;
    data->d[8] = -0.238159f;
    data->d[9] = -0.239913f;
    data->d[10] = -0.003102f;
    data->d[11] = 20.112619f;
    data->d[12] = 0.019597f;
    data->d[13] = -0.000379f;
    data->d[14] = 0.183769f;
    data->d[15] = 6.602034f;
    data->d[16] = 0.507095f;
    data->d[17] = -48.896233f;
    data->d[18] = 0.849559f;
    data->d[19] = 0.323724f;
    data->d[20] = -0.775402f;
    data->d[21] = -0.118132f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000107
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.366679f;
    data->d[2] = 1.136829f;
    data->d[3] = -0.164057f;
    data->d[4] = -2.183025f;
    data->d[5] = 0.661188f;
    data->d[6] = 2.074817f;
    data->d[7] = -2.774451f;
    data->d[8] = 0.033507f;
    data->d[9] = -0.803308f;
    data->d[10] = 0.328315f;
    data->d[11] = -1.903624f;
    data->d[12] = 0.056526f;
    data->d[13] = -0.001423f;
    data->d[14] = -8.841663f;
    data->d[15] = 0.553096f;
    data->d[16] = 1.761860f;
    data->d[17] = 1.711403f;
    data->d[18] = -1.358518f;
    data->d[19] = -1.199910f;
    data->d[20] = 0.031905f;
    data->d[21] = 0.523599f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 1, 12);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 268;
    state.m_index = 0;
    state.m_test = 1;
    state.m_seed = 1243646565840358056;
} // LoadState
