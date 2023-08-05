#pragma once
#include "FireStarterState.h"

// Run date: 08/05/23 13:38:27 Pacific Daylight Time
// Run duration = 505.033182 seconds
// Run generation = 36
// Run evolution = 0
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.714812f;
    data->d[2] = 0.095664f;
    data->d[3] = 2.627163f;
    data->d[4] = -13.513688f;
    data->d[5] = 0.795590f;
    data->d[6] = 0.012880f;
    data->d[7] = 3.131042f;
    data->d[8] = 0.241649f;
    data->d[9] = -1.544505f;
    data->d[10] = -6.616359f;
    data->d[11] = -0.503424f;
    data->d[12] = 1.666902f;
    data->d[13] = 0.098096f;
    data->d[14] = 0.823997f;
    data->d[15] = -2.528765f;
    data->d[16] = 1.313302f;
    data->d[17] = 0.207384f;
    data->d[18] = -0.207384f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.137773f;
    data->d[2] = 0.114913f;
    data->d[3] = -1.474842f;
    data->d[4] = 61.192600f;
    data->d[5] = 0.444405f;
    data->d[6] = 2.421497f;
    data->d[7] = -0.323707f;
    data->d[8] = -0.371726f;
    data->d[9] = -1.330098f;
    data->d[10] = 6.181056f;
    data->d[11] = 1.983417f;
    data->d[12] = -0.207334f;
    data->d[13] = 0.031655f;
    data->d[14] = -1.746674f;
    data->d[15] = 0.139304f;
    data->d[16] = 0.761299f;
    data->d[17] = 0.079246f;
    data->d[18] = -0.197378f;
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

// Variation: 2  result = 0.00000029
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.423538f;
    data->d[2] = -0.313098f;
    data->d[3] = 3.230890f;
    data->d[4] = -1.177191f;
    data->d[5] = 0.395790f;
    data->d[6] = -0.150421f;
    data->d[7] = -3.345862f;
    data->d[8] = 1.555289f;
    data->d[9] = -0.797452f;
    data->d[10] = -1.133212f;
    data->d[11] = 3.653073f;
    data->d[12] = 1.924590f;
    data->d[13] = 0.006402f;
    data->d[14] = -1.975081f;
    data->d[15] = 0.117740f;
    data->d[16] = 1.120522f;
    data->d[17] = 1.147444f;
    data->d[18] = -0.623845f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 36;
    state.m_evolution = 0;
    state.m_index = 12;
    state.m_test = 0;
    state.m_seed = 12076124832134817826;
} // LoadState
