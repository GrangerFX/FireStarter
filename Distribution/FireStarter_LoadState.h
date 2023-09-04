#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 11:17:56 Pacific Daylight Time
// Run duration = 8119.804388 seconds
// Run generation = 0
// Run evolution = 0
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
    data->d[0] = -0.036035f;
    data->d[1] = 0.113208f;
    data->d[2] = -12.705000f;
    data->d[3] = -0.274627f;
    data->d[4] = -9.041698f;
    data->d[5] = -1.742080f;
    data->d[6] = -0.010892f;
    data->d[7] = 1.710706f;
    data->d[8] = 0.569498f;
    data->d[9] = -1.236766f;
    data->d[10] = 1.055347f;
    data->d[11] = 0.574051f;
    data->d[12] = -4.653626f;
    data->d[13] = -0.006175f;
    data->d[14] = -2.237672f;
    data->d[15] = -0.825575f;
    data->d[16] = 1.824053f;
    data->d[17] = 0.464703f;
    data->d[18] = -0.000000f;
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
    data->d[0] = 0.284536f;
    data->d[1] = -0.879405f;
    data->d[2] = 1.006955f;
    data->d[3] = 1.449568f;
    data->d[4] = 2.865761f;
    data->d[5] = -1.277993f;
    data->d[6] = 0.009652f;
    data->d[7] = -1.456614f;
    data->d[8] = 1.258694f;
    data->d[9] = -0.395351f;
    data->d[10] = -1.370520f;
    data->d[11] = -0.186439f;
    data->d[12] = 0.004289f;
    data->d[13] = 2.789353f;
    data->d[14] = 0.518841f;
    data->d[15] = 1.396728f;
    data->d[16] = -0.831994f;
    data->d[17] = 0.315916f;
    data->d[18] = -0.059066f;
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
    data->d[0] = -0.696263f;
    data->d[1] = 1.822813f;
    data->d[2] = -1.668538f;
    data->d[3] = 0.170649f;
    data->d[4] = -1.536442f;
    data->d[5] = 3.986328f;
    data->d[6] = 0.048489f;
    data->d[7] = 1.478071f;
    data->d[8] = 0.980794f;
    data->d[9] = -0.087474f;
    data->d[10] = 2.026226f;
    data->d[11] = -3.405375f;
    data->d[12] = 0.000064f;
    data->d[13] = -3.722726f;
    data->d[14] = -1.223761f;
    data->d[15] = 0.509541f;
    data->d[16] = 0.822335f;
    data->d[17] = -0.921584f;
    data->d[18] = 0.261799f;
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
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 19);
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
    instructions->SetOperation(15, 0, 16);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 25);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 532708475605355528;
} // LoadState
