#pragma once
#include "FireStarterState.h"

// Run date: 09/09/23 09:37:14 Pacific Daylight Time
// Run duration = 3211.093567 seconds
// Run generation = 5
// Run evolution = 2
// Run result = 0.00000024
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
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
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 500;
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
    data->d[0] = -3.141593f;
    data->d[1] = 0.000000f;
    data->d[2] = -0.004608f;
    data->d[3] = 3.717140f;
    data->d[4] = -1.350645f;
    data->d[5] = 0.536666f;
    data->d[6] = 0.239465f;
    data->d[7] = -1.983162f;
    data->d[8] = -1.994872f;
    data->d[9] = -0.246472f;
    data->d[10] = -2.788878f;
    data->d[11] = 0.346995f;
    data->d[12] = 0.016506f;
    data->d[13] = 1.986761f;
    data->d[14] = -9.991827f;
    data->d[15] = 6.029874f;
    data->d[16] = -0.000000f;
    data->d[17] = 0.285623f;
    data->d[18] = 0.782530f;
    data->d[19] = -1.497581f;
    data->d[20] = 1.497581f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090663f;
    data->d[1] = 0.000008f;
    data->d[2] = -0.050816f;
    data->d[3] = 2.472028f;
    data->d[4] = 0.490442f;
    data->d[5] = -0.798986f;
    data->d[6] = 0.259150f;
    data->d[7] = -2.158823f;
    data->d[8] = -1.810418f;
    data->d[9] = 1.315719f;
    data->d[10] = -1.800258f;
    data->d[11] = -2.123650f;
    data->d[12] = -1.372256f;
    data->d[13] = -0.008423f;
    data->d[14] = 0.925512f;
    data->d[15] = 0.057587f;
    data->d[16] = -9.771723f;
    data->d[17] = -0.000684f;
    data->d[18] = 0.817404f;
    data->d[19] = -0.913008f;
    data->d[20] = 0.794870f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.000000f;
    data->d[2] = -0.000054f;
    data->d[3] = 0.573934f;
    data->d[4] = 0.000088f;
    data->d[5] = -2.046406f;
    data->d[6] = 0.159500f;
    data->d[7] = -0.794514f;
    data->d[8] = 1.031543f;
    data->d[9] = -0.695601f;
    data->d[10] = -0.500215f;
    data->d[11] = 0.709226f;
    data->d[12] = -0.071180f;
    data->d[13] = 1.854720f;
    data->d[14] = 2.031778f;
    data->d[15] = 7.511478f;
    data->d[16] = -0.444209f;
    data->d[17] = -0.047563f;
    data->d[18] = 0.881329f;
    data->d[19] = 0.584067f;
    data->d[20] = -0.060468f;
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
    instructions->SetOperation(1, 1, 26);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 1, 11);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 28);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 5;
    state.m_evolution = 2;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 47;
    state.m_copy_id = 36;
    state.m_test = 4;
    state.m_seed = 17694343901756102911;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
