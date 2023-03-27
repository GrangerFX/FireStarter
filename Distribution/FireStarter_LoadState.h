#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 17:24:04 Pacific Daylight Time
// Run duration = 6247.432777 seconds
// Run generation = 31
// Run result = 0.00163309
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 1
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
    settings.m_opcodes = 32;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00163309
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.291962f;
    data->d[1] = -2.379174f;
    data->d[2] = -0.173808f;
    data->d[3] = -0.657275f;
    data->d[4] = 1.675953f;
    data->d[5] = 1.014138f;
    data->d[6] = 0.548605f;
    data->d[7] = -1.793157f;
    data->d[8] = -1.083238f;
    data->d[9] = 1.349514f;
    data->d[10] = -0.680771f;
    data->d[11] = -0.371760f;
    data->d[12] = 1.043504f;
    data->d[13] = -0.672442f;
    data->d[14] = -2.146034f;
    data->d[15] = 0.924923f;
    data->d[16] = -1.483837f;
    data->d[17] = -1.709542f;
    data->d[18] = -0.592552f;
    data->d[19] = 0.680538f;
    data->d[20] = 2.137628f;
    data->d[21] = 0.281375f;
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
    *(result->MinResult()) = 0.001633f;
} // LoadVariation0

// Variation: 1  result = 0.00089020
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.431058f;
    data->d[1] = 1.247350f;
    data->d[2] = 0.264314f;
    data->d[3] = 0.104372f;
    data->d[4] = -1.134995f;
    data->d[5] = 0.589099f;
    data->d[6] = -2.754173f;
    data->d[7] = -1.608595f;
    data->d[8] = -1.115383f;
    data->d[9] = -0.232855f;
    data->d[10] = 0.769318f;
    data->d[11] = 2.807122f;
    data->d[12] = 0.112010f;
    data->d[13] = -0.288782f;
    data->d[14] = 2.219374f;
    data->d[15] = -0.533683f;
    data->d[16] = 2.431381f;
    data->d[17] = -0.761431f;
    data->d[18] = -1.695517f;
    data->d[19] = -2.501045f;
    data->d[20] = -0.252459f;
    data->d[21] = 1.951476f;
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
    *(result->MinResult()) = 0.000890f;
} // LoadVariation1

// Variation: 2  result = 0.00161744
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.061575f;
    data->d[1] = -0.392661f;
    data->d[2] = -0.320069f;
    data->d[3] = 0.454547f;
    data->d[4] = 1.050834f;
    data->d[5] = 1.838125f;
    data->d[6] = -1.311980f;
    data->d[7] = 1.192400f;
    data->d[8] = -2.201153f;
    data->d[9] = 0.059280f;
    data->d[10] = 0.379514f;
    data->d[11] = 0.160568f;
    data->d[12] = -0.926762f;
    data->d[13] = 1.944016f;
    data->d[14] = 0.788502f;
    data->d[15] = 0.608352f;
    data->d[16] = 4.724904f;
    data->d[17] = 3.870492f;
    data->d[18] = 1.074675f;
    data->d[19] = -0.374143f;
    data->d[20] = -3.321962f;
    data->d[21] = 0.090646f;
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
    *(result->MinResult()) = 0.001617f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.001633f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 17);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 30);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 31;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 15089289778395445811;
} // LoadState
