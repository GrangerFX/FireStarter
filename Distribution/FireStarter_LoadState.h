#pragma once
#include "FireStarterState.h"

// Run date: 05/06/23 20:25:14 Pacific Daylight Time
// Run duration = 1251.198895 seconds
// Run generation = 397
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
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
    settings.m_registers = 29;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.227891f;
    data->d[2] = 0.229391f;
    data->d[3] = 13.573597f;
    data->d[4] = -0.024950f;
    data->d[5] = 12.109608f;
    data->d[6] = 1.970242f;
    data->d[7] = 0.878331f;
    data->d[8] = 1.705317f;
    data->d[9] = 0.675406f;
    data->d[10] = -0.009165f;
    data->d[11] = -5.611077f;
    data->d[12] = -0.607941f;
    data->d[13] = -1.219938f;
    data->d[14] = -1.942666f;
    data->d[15] = 0.101388f;
    data->d[16] = 9.309219f;
    data->d[17] = 2.390370f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 4.048690f;
    data->d[2] = -1.982977f;
    data->d[3] = -1.370957f;
    data->d[4] = 0.023027f;
    data->d[5] = 0.010372f;
    data->d[6] = 1.620310f;
    data->d[7] = 0.216906f;
    data->d[8] = 0.378714f;
    data->d[9] = 3.402858f;
    data->d[10] = -0.116272f;
    data->d[11] = -3.535254f;
    data->d[12] = -1.618559f;
    data->d[13] = -0.893138f;
    data->d[14] = -0.462426f;
    data->d[15] = 1.015718f;
    data->d[16] = 0.875053f;
    data->d[17] = 0.255393f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 1.108451f;
    data->d[2] = -0.333763f;
    data->d[3] = -0.440184f;
    data->d[4] = 2.034476f;
    data->d[5] = 0.047550f;
    data->d[6] = -2.546284f;
    data->d[7] = -1.171252f;
    data->d[8] = 0.173239f;
    data->d[9] = 1.017054f;
    data->d[10] = 0.079791f;
    data->d[11] = 0.224135f;
    data->d[12] = 0.831459f;
    data->d[13] = -2.074054f;
    data->d[14] = 0.852547f;
    data->d[15] = 1.949422f;
    data->d[16] = 1.818878f;
    data->d[17] = -2.409789f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 495981481164800.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 17);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 17);
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
    state.m_generation = 397;
    state.m_index = 0;
    state.m_test = 31;
    state.m_seed = 6841400546293880002;
} // LoadState
