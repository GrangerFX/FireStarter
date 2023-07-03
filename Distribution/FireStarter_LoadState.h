#pragma once
#include "FireStarterState.h"

// Run date: 07/03/23 08:31:51 Pacific Daylight Time
// Run duration = 1276.446544 seconds
// Run generation = 96
// Run evolution = 0
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00000039
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.659237f;
    data->d[1] = -1.482356f;
    data->d[2] = -0.884630f;
    data->d[3] = 0.749595f;
    data->d[4] = -0.845724f;
    data->d[5] = -0.935960f;
    data->d[6] = 0.323057f;
    data->d[7] = 0.002243f;
    data->d[8] = 1.895967f;
    data->d[9] = -1.572604f;
    data->d[10] = -3.364110f;
    data->d[11] = -0.297125f;
    data->d[12] = -3.110599f;
    data->d[13] = 0.490335f;
    data->d[14] = 0.113372f;
    data->d[15] = 2.701407f;
    data->d[16] = 0.987492f;
    data->d[17] = 0.000000f;
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

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.310417f;
    data->d[1] = -0.780242f;
    data->d[2] = 0.290508f;
    data->d[3] = -3.873484f;
    data->d[4] = 1.777674f;
    data->d[5] = -1.085921f;
    data->d[6] = 0.001113f;
    data->d[7] = -0.239025f;
    data->d[8] = -0.619236f;
    data->d[9] = 0.228690f;
    data->d[10] = 2.046247f;
    data->d[11] = 2.418239f;
    data->d[12] = -0.966889f;
    data->d[13] = 2.718414f;
    data->d[14] = -0.169764f;
    data->d[15] = -0.771258f;
    data->d[16] = 0.832045f;
    data->d[17] = -0.059066f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000039
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.905246f;
    data->d[1] = -0.712747f;
    data->d[2] = -0.602216f;
    data->d[3] = 1.530809f;
    data->d[4] = -1.716476f;
    data->d[5] = -1.453930f;
    data->d[6] = -1.285427f;
    data->d[7] = 0.001860f;
    data->d[8] = -1.248544f;
    data->d[9] = 1.467458f;
    data->d[10] = -0.687007f;
    data->d[11] = 0.047804f;
    data->d[12] = -0.455623f;
    data->d[13] = -1.151799f;
    data->d[14] = 0.852951f;
    data->d[15] = -0.451010f;
    data->d[16] = 0.252772f;
    data->d[17] = 0.261799f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 13);
    instructions->SetOperation(9, 1, 12);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 17);
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
    state.m_generation = 96;
    state.m_evolution = 0;
    state.m_index = 39;
    state.m_test = 31;
    state.m_seed = 13503235390463475572;
} // LoadState
