#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 20:47:03 Pacific Daylight Time
// Run duration = 2558.866145 seconds
// Run generation = 123
// Run result = 0.00023066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 13

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
    settings.m_opcodes = 13;

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

// Variation: 0  result = 0.00023066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.298336f;
    data->d[1] = 1.130077f;
    data->d[2] = 1.624448f;
    data->d[3] = -0.109261f;
    data->d[4] = 0.155464f;
    data->d[5] = -0.371409f;
    data->d[6] = 0.268007f;
    data->d[7] = -0.732489f;
    data->d[8] = 0.682579f;
    data->d[9] = 0.864117f;
    data->d[10] = 2.595634f;
    data->d[11] = -0.838312f;
    data->d[12] = 1.231770f;
    data->d[13] = -0.166213f;
    data->d[14] = -2.723066f;
    data->d[15] = -0.510234f;
    data->d[16] = 0.284273f;
    data->d[17] = -0.000115f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000231f;
} // LoadVariation0

// Variation: 1  result = 0.00017869
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.293399f;
    data->d[1] = -0.306685f;
    data->d[2] = -0.561955f;
    data->d[3] = -1.714705f;
    data->d[4] = -1.101700f;
    data->d[5] = 0.005481f;
    data->d[6] = -3.561831f;
    data->d[7] = -3.194571f;
    data->d[8] = -2.097381f;
    data->d[9] = 2.022827f;
    data->d[10] = -2.097477f;
    data->d[11] = -0.262948f;
    data->d[12] = -1.296643f;
    data->d[13] = -0.441970f;
    data->d[14] = 0.697431f;
    data->d[15] = -0.361885f;
    data->d[16] = 0.189146f;
    data->d[17] = 0.426049f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000179f;
} // LoadVariation1

// Variation: 2  result = 0.00021207
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.138176f;
    data->d[1] = 0.235053f;
    data->d[2] = 0.859111f;
    data->d[3] = 0.179579f;
    data->d[4] = 0.026963f;
    data->d[5] = -1.685533f;
    data->d[6] = -0.051129f;
    data->d[7] = 0.431344f;
    data->d[8] = -0.316802f;
    data->d[9] = -1.264907f;
    data->d[10] = -1.853829f;
    data->d[11] = 1.020038f;
    data->d[12] = 2.159814f;
    data->d[13] = -1.179121f;
    data->d[14] = -0.909396f;
    data->d[15] = 0.010543f;
    data->d[16] = 1.433537f;
    data->d[17] = -0.000105f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000212f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000231f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 2, 30);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 4);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 1, 29);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 7);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 1, 30);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 0);
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
    state.m_generation = 123;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 1107031913179332525;
} // LoadState
