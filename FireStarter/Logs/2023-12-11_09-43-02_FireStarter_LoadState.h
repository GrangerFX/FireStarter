#pragma once
#include "FireStarterState.h"

// Run date: 12/11/23 09:43:02 Pacific Standard Time
// Run duration = 2693.563301 seconds
// Run generation = 53
// Run evolution = 10
// Run max result = 0.00000030
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000030
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.509651f;
    data->d[1] = 1.601115f;
    data->d[2] = -0.677565f;
    data->d[3] = 1.505411f;
    data->d[4] = -0.000054f;
    data->d[5] = 0.186898f;
    data->d[6] = 0.004654f;
    data->d[7] = 0.259149f;
    data->d[8] = -0.554009f;
    data->d[9] = 1.312205f;
    data->d[10] = -0.543423f;
    data->d[11] = -1.708459f;
    data->d[12] = 1.804035f;
    data->d[13] = -1.007020f;
    data->d[14] = -0.229174f;
    data->d[15] = -1.894624f;
    data->d[16] = -0.339703f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.540566f;
    data->d[1] = 1.670705f;
    data->d[2] = -0.821860f;
    data->d[3] = 1.218653f;
    data->d[4] = 0.000033f;
    data->d[5] = -0.648877f;
    data->d[6] = 10.571959f;
    data->d[7] = 1.435069f;
    data->d[8] = -0.337055f;
    data->d[9] = -1.821616f;
    data->d[10] = -1.214658f;
    data->d[11] = -1.786656f;
    data->d[12] = -1.463167f;
    data->d[13] = 1.488549f;
    data->d[14] = 0.331378f;
    data->d[15] = -0.141953f;
    data->d[16] = -0.077595f;
    data->d[17] = -0.118132f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000010
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.619229f;
    data->d[1] = 1.621139f;
    data->d[2] = 1.098693f;
    data->d[3] = -0.920501f;
    data->d[4] = 0.019425f;
    data->d[5] = -2.175723f;
    data->d[6] = -0.002130f;
    data->d[7] = 1.454274f;
    data->d[8] = -1.338751f;
    data->d[9] = 0.430531f;
    data->d[10] = -3.770908f;
    data->d[11] = 1.114686f;
    data->d[12] = -0.675165f;
    data->d[13] = -0.057543f;
    data->d[14] = -1.308300f;
    data->d[15] = 0.214331f;
    data->d[16] = 0.063933f;
    data->d[17] = 0.523599f;
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
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 1, 19);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 26);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 1, 28);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 53;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 21;
    state.m_id = 35;
    state.m_copy_id = 18;
    state.m_test = 15;
    state.m_seed = 11591510488564532200;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
