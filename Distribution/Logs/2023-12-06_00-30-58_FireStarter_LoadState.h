#pragma once
#include "FireStarterState.h"

// Run date: 12/06/23 00:30:58 Pacific Standard Time
// Run duration = 4423.256056 seconds
// Run generation = 29
// Run evolution = 10
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.740069f;
    data->d[2] = -0.825852f;
    data->d[3] = -0.045248f;
    data->d[4] = 46.773911f;
    data->d[5] = -0.080210f;
    data->d[6] = 0.039130f;
    data->d[7] = -0.174937f;
    data->d[8] = 1.104867f;
    data->d[9] = 1.183451f;
    data->d[10] = -33.105198f;
    data->d[11] = 1.897162f;
    data->d[12] = -8.624496f;
    data->d[13] = -0.020956f;
    data->d[14] = 0.126722f;
    data->d[15] = 0.609676f;
    data->d[16] = 1.029673f;
    data->d[17] = 0.635897f;
    data->d[18] = -4.774711f;
    data->d[19] = 0.102556f;
    data->d[20] = -0.430449f;
    data->d[21] = 0.044145f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -1.539084f;
    data->d[2] = 0.101581f;
    data->d[3] = -2.095131f;
    data->d[4] = -1.685603f;
    data->d[5] = 1.232162f;
    data->d[6] = 0.011076f;
    data->d[7] = 1.981945f;
    data->d[8] = -1.736359f;
    data->d[9] = -1.380405f;
    data->d[10] = 1.499728f;
    data->d[11] = -0.563465f;
    data->d[12] = 5.252409f;
    data->d[13] = -0.000605f;
    data->d[14] = -0.823412f;
    data->d[15] = -1.362619f;
    data->d[16] = 1.654991f;
    data->d[17] = -0.051095f;
    data->d[18] = -0.013755f;
    data->d[19] = -0.140413f;
    data->d[20] = -5.137012f;
    data->d[21] = -0.839434f;
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
    data->d[1] = -1.073029f;
    data->d[2] = -0.435373f;
    data->d[3] = 0.512496f;
    data->d[4] = -1.981103f;
    data->d[5] = 0.070163f;
    data->d[6] = 0.099696f;
    data->d[7] = 0.654971f;
    data->d[8] = -0.836234f;
    data->d[9] = 1.518956f;
    data->d[10] = -0.735742f;
    data->d[11] = 0.532203f;
    data->d[12] = -0.003394f;
    data->d[13] = 4.511431f;
    data->d[14] = 1.563853f;
    data->d[15] = 0.775585f;
    data->d[16] = -0.553125f;
    data->d[17] = 0.415841f;
    data->d[18] = 0.983738f;
    data->d[19] = 0.007683f;
    data->d[20] = 4.707611f;
    data->d[21] = 0.487432f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 29;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 27;
    state.m_id = 21;
    state.m_copy_id = 26;
    state.m_test = 2;
    state.m_seed = 9195446716708199702;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
