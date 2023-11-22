#pragma once
#include "FireStarterState.h"

// Run date: 11/22/23 13:11:56 Pacific Standard Time
// Run duration = 3725.258151 seconds
// Run generation = 77
// Run evolution = 10
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.305781f;
    data->d[1] = -0.960639f;
    data->d[2] = -0.179553f;
    data->d[3] = 1.865512f;
    data->d[4] = 0.190843f;
    data->d[5] = 0.224688f;
    data->d[6] = 1.938140f;
    data->d[7] = -0.263097f;
    data->d[8] = 0.004244f;
    data->d[9] = 0.014434f;
    data->d[10] = -2.983197f;
    data->d[11] = -5.688547f;
    data->d[12] = -415233.687500f;
    data->d[13] = 0.073248f;
    data->d[14] = 1.669617f;
    data->d[15] = 0.473835f;
    data->d[16] = -0.118758f;
    data->d[17] = 1.114030f;
    data->d[18] = -0.800523f;
    data->d[19] = 0.891488f;
    data->d[20] = 0.018884f;
    data->d[21] = -0.006031f;
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
    data->d[0] = -0.121322f;
    data->d[1] = 0.374966f;
    data->d[2] = -0.095698f;
    data->d[3] = 0.048560f;
    data->d[4] = 0.085043f;
    data->d[5] = 0.090839f;
    data->d[6] = -1.355893f;
    data->d[7] = 0.073921f;
    data->d[8] = 1.550431f;
    data->d[9] = 0.060625f;
    data->d[10] = 3.557478f;
    data->d[11] = 0.715724f;
    data->d[12] = 0.167949f;
    data->d[13] = -0.034997f;
    data->d[14] = 189790.656250f;
    data->d[15] = 0.125778f;
    data->d[16] = 2.064006f;
    data->d[17] = 0.146558f;
    data->d[18] = -0.081572f;
    data->d[19] = -0.001297f;
    data->d[20] = -6.503146f;
    data->d[21] = -1.370719f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.368190f;
    data->d[1] = 0.963920f;
    data->d[2] = -0.310756f;
    data->d[3] = 0.509692f;
    data->d[4] = -0.661745f;
    data->d[5] = 0.139124f;
    data->d[6] = -3.043922f;
    data->d[7] = -0.236114f;
    data->d[8] = 0.062861f;
    data->d[9] = -0.243241f;
    data->d[10] = 2.824250f;
    data->d[11] = 0.080307f;
    data->d[12] = 0.142049f;
    data->d[13] = 40841.445312f;
    data->d[14] = -0.014604f;
    data->d[15] = 0.488001f;
    data->d[16] = 0.492183f;
    data->d[17] = -0.063935f;
    data->d[18] = -3.791426f;
    data->d[19] = 1.441880f;
    data->d[20] = -0.405979f;
    data->d[21] = -0.765737f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 1, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 77;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_id = 44;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 9727662269877808923;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
