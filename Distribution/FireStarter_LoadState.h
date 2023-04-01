#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 12:21:57 Pacific Daylight Time
// Run duration = 2453.140552 seconds
// Run generation = 40
// Run result = 0.00027858
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

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
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00013738
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.743583f;
    data->d[1] = 0.493982f;
    data->d[2] = 0.671188f;
    data->d[3] = 0.095492f;
    data->d[4] = 0.935458f;
    data->d[5] = 0.781409f;
    data->d[6] = 0.385617f;
    data->d[7] = 2.194058f;
    data->d[8] = -0.154600f;
    data->d[9] = 1.511765f;
    data->d[10] = -0.410936f;
    data->d[11] = 1.917475f;
    data->d[12] = -1.198204f;
    data->d[13] = -0.406478f;
    data->d[14] = -0.432185f;
    data->d[15] = -1.395699f;
    data->d[16] = -2.116683f;
    data->d[17] = 1.030325f;
    data->d[18] = 0.607531f;
    data->d[19] = -2.418633f;
    data->d[20] = 0.584154f;
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
    *(result->MinResult()) = 0.000137f;
} // LoadVariation0

// Variation: 1  result = 0.00013447
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.066195f;
    data->d[1] = -1.356045f;
    data->d[2] = -0.069390f;
    data->d[3] = 0.606213f;
    data->d[4] = 0.693530f;
    data->d[5] = 0.320415f;
    data->d[6] = -0.946512f;
    data->d[7] = -0.463396f;
    data->d[8] = 1.438246f;
    data->d[9] = 1.781140f;
    data->d[10] = 0.881817f;
    data->d[11] = 2.142489f;
    data->d[12] = 1.741994f;
    data->d[13] = 0.510011f;
    data->d[14] = -2.616528f;
    data->d[15] = -2.626703f;
    data->d[16] = 0.238670f;
    data->d[17] = -1.827340f;
    data->d[18] = -0.680396f;
    data->d[19] = 0.863508f;
    data->d[20] = -1.796095f;
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
    *(result->MinResult()) = 0.000134f;
} // LoadVariation1

// Variation: 2  result = 0.00027858
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.565401f;
    data->d[1] = -1.899521f;
    data->d[2] = 0.130254f;
    data->d[3] = -0.424410f;
    data->d[4] = -0.647803f;
    data->d[5] = -1.228950f;
    data->d[6] = -0.206162f;
    data->d[7] = -0.780225f;
    data->d[8] = 1.290321f;
    data->d[9] = 1.824260f;
    data->d[10] = 0.763742f;
    data->d[11] = -0.808956f;
    data->d[12] = -2.185682f;
    data->d[13] = -0.644894f;
    data->d[14] = 1.299012f;
    data->d[15] = 0.915173f;
    data->d[16] = 1.872823f;
    data->d[17] = -0.612592f;
    data->d[18] = -1.578314f;
    data->d[19] = -0.856048f;
    data->d[20] = 1.606961f;
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
    *(result->MinResult()) = 0.000279f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000279f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 15);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 16);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 30);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 30);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 31);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 40;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 14433101423071667245;
} // LoadState
