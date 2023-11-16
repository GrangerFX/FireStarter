#pragma once
#include "FireStarterState.h"

// Run date: 11/15/23 17:59:38 Pacific Standard Time
// Run duration = 41298.978513 seconds
// Run generation = 313
// Run evolution = 11
// Run result = 0.00000572
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000489
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.155314f;
    data->d[1] = -1.040226f;
    data->d[2] = 1.028927f;
    data->d[3] = -2.190563f;
    data->d[4] = 2.003668f;
    data->d[5] = -0.410815f;
    data->d[6] = 1.295662f;
    data->d[7] = -1.875946f;
    data->d[8] = -0.688740f;
    data->d[9] = -1.977012f;
    data->d[10] = -0.044080f;
    data->d[11] = 0.623564f;
    data->d[12] = 0.235488f;
    data->d[13] = -0.978107f;
    data->d[14] = -0.751606f;
    data->d[15] = 0.099172f;
    data->d[16] = 0.286456f;
    data->d[17] = -0.219451f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation0

// Variation: 1  result = 0.00000262
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.180847f;
    data->d[1] = -0.454088f;
    data->d[2] = 1.268548f;
    data->d[3] = 0.220663f;
    data->d[4] = -0.382591f;
    data->d[5] = 0.942791f;
    data->d[6] = 0.827834f;
    data->d[7] = -0.817724f;
    data->d[8] = 0.619566f;
    data->d[9] = 3.289836f;
    data->d[10] = -0.011182f;
    data->d[11] = 1.502425f;
    data->d[12] = -0.309102f;
    data->d[13] = -0.791482f;
    data->d[14] = 0.418910f;
    data->d[15] = 0.282515f;
    data->d[16] = 1.255598f;
    data->d[17] = -0.908334f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000572
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.977946f;
    data->d[1] = -0.357367f;
    data->d[2] = 1.693492f;
    data->d[3] = 0.461259f;
    data->d[4] = -0.691805f;
    data->d[5] = -1.297655f;
    data->d[6] = 0.216354f;
    data->d[7] = -0.102236f;
    data->d[8] = 1.666775f;
    data->d[9] = -1.341181f;
    data->d[10] = -0.168026f;
    data->d[11] = 0.455998f;
    data->d[12] = 0.299023f;
    data->d[13] = -0.635921f;
    data->d[14] = -1.319418f;
    data->d[15] = -1.133310f;
    data->d[16] = 0.763829f;
    data->d[17] = 0.105053f;
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
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 0, 5);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 5);
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
    state.m_generation = 313;
    state.m_evolution = 11;
    state.m_index = 3;
    state.m_id = 58;
    state.m_copy_id = 5;
    state.m_test = 14;
    state.m_seed = 15905483972565396825;
    state.m_maxResult = 0.000006f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
