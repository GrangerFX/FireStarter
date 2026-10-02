#pragma once
#include "FireStarterState.h"

// Run date: 12/15/23 09:51:18 Pacific Standard Time
// Run duration = 19871.880547 seconds
// Run generation = 40
// Run evolution = 17
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.385596f;
    data->d[1] = 1.211385f;
    data->d[2] = -1.727411f;
    data->d[3] = 0.804306f;
    data->d[4] = 0.197356f;
    data->d[5] = 0.341542f;
    data->d[6] = 1.909180f;
    data->d[7] = 0.871219f;
    data->d[8] = 0.000781f;
    data->d[9] = 0.851204f;
    data->d[10] = 0.861007f;
    data->d[11] = -0.000091f;
    data->d[12] = 5.168623f;
    data->d[13] = -0.642496f;
    data->d[14] = 0.250739f;
    data->d[15] = 0.752912f;
    data->d[16] = -2.544146f;
    data->d[17] = -1.883628f;
    data->d[18] = 0.825501f;
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
    data->d[0] = 0.562666f;
    data->d[1] = -1.739006f;
    data->d[2] = 0.980415f;
    data->d[3] = -1.841647f;
    data->d[4] = -0.151825f;
    data->d[5] = 0.930913f;
    data->d[6] = 0.868287f;
    data->d[7] = -0.003994f;
    data->d[8] = 1.783368f;
    data->d[9] = -0.472164f;
    data->d[10] = 0.293162f;
    data->d[11] = -4.036704f;
    data->d[12] = 0.053667f;
    data->d[13] = 1.656974f;
    data->d[14] = -0.981900f;
    data->d[15] = -8.454711f;
    data->d[16] = 0.000027f;
    data->d[17] = 0.436349f;
    data->d[18] = -0.575040f;
    data->d[19] = -0.118136f;
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
    data->d[0] = 0.536077f;
    data->d[1] = -1.403447f;
    data->d[2] = 1.579690f;
    data->d[3] = -1.282240f;
    data->d[4] = 0.039647f;
    data->d[5] = -0.902357f;
    data->d[6] = -0.863465f;
    data->d[7] = 0.090515f;
    data->d[8] = -0.991071f;
    data->d[9] = -1.014731f;
    data->d[10] = 1.147783f;
    data->d[11] = -0.000058f;
    data->d[12] = -9.996799f;
    data->d[13] = -0.730879f;
    data->d[14] = -2.752376f;
    data->d[15] = 1.231696f;
    data->d[16] = 0.077197f;
    data->d[17] = 1.280430f;
    data->d[18] = -0.712532f;
    data->d[19] = 0.523600f;
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
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 14);
    instructions->SetOperation(11, 1, 25);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 0, 2);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 1, 22);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 7);
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
    state.m_evolution = 17;
    state.m_index = 0;
    state.m_copy_index = 5;
    state.m_id = 46;
    state.m_copy_id = 19;
    state.m_test = 6;
    state.m_seed = 1093042126380960521;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
