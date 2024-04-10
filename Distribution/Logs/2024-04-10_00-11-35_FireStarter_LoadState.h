#pragma once
#include "FireStarterState.h"

// Run date: 04/10/24 00:11:35 Pacific Daylight Time
// Run duration = 23184.679156 seconds
// Run generation = 187
// Run evolution = 10
// Run max result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.205756f;
    data->d[2] = -0.072769f;
    data->d[3] = 1.866050f;
    data->d[4] = 1.732798f;
    data->d[5] = -2.866505f;
    data->d[6] = -1.598686f;
    data->d[7] = -0.650850f;
    data->d[8] = -4.308571f;
    data->d[9] = 3.397777f;
    data->d[10] = 0.009691f;
    data->d[11] = -0.362477f;
    data->d[12] = -1.462163f;
    data->d[13] = -1.436239f;
    data->d[14] = 17.488384f;
    data->d[15] = 5953.179199f;
    data->d[16] = -2.678914f;
    data->d[17] = 0.038588f;
    data->d[18] = -0.028436f;
    data->d[19] = -0.096442f;
    data->d[20] = 3.430390f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.030651f;
    data->d[2] = -1.197460f;
    data->d[3] = 1.303821f;
    data->d[4] = -5.357213f;
    data->d[5] = 0.505082f;
    data->d[6] = -80.706474f;
    data->d[7] = -0.326753f;
    data->d[8] = -2.218593f;
    data->d[9] = 7.028006f;
    data->d[10] = -0.000000f;
    data->d[11] = 0.638565f;
    data->d[12] = 0.495302f;
    data->d[13] = 0.504078f;
    data->d[14] = -2.661087f;
    data->d[15] = 2.059033f;
    data->d[16] = -0.042427f;
    data->d[17] = -0.571810f;
    data->d[18] = 1.253473f;
    data->d[19] = 0.870011f;
    data->d[20] = 1.145623f;
    data->d[21] = -0.118132f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.246612f;
    data->d[2] = 0.111559f;
    data->d[3] = 2.182999f;
    data->d[4] = 0.777878f;
    data->d[5] = -0.864525f;
    data->d[6] = -0.569952f;
    data->d[7] = -1.821492f;
    data->d[8] = -7.396424f;
    data->d[9] = -2.569998f;
    data->d[10] = -0.021764f;
    data->d[11] = 0.487247f;
    data->d[12] = -0.222686f;
    data->d[13] = -0.086900f;
    data->d[14] = 1.482202f;
    data->d[15] = 0.305612f;
    data->d[16] = -2.265382f;
    data->d[17] = 0.000258f;
    data->d[18] = -12868.270508f;
    data->d[19] = -1.058142f;
    data->d[20] = -0.897339f;
    data->d[21] = 0.523599f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 22);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 0);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 17);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 29);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 0, 24);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 187;
    state.m_evolution = 10;
    state.m_index = 12;
    state.m_copy_index = 17;
    state.m_id = 17;
    state.m_test = 15;
    state.m_seed = 13004905320992572103;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000150f;
    state.m_optimizeValid = true;
} // LoadState
