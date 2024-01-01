#pragma once
#include "FireStarterState.h"

// Run date: 12/31/23 20:40:49 Pacific Standard Time
// Run duration = 1174.511598 seconds
// Run generation = 24
// Run evolution = 15
// Run max result = 0.00000036
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
// Run states = 64
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
    settings.m_states = 64;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.635099f;
    data->d[1] = 1.995223f;
    data->d[2] = -0.346613f;
    data->d[3] = -1.956750f;
    data->d[4] = -0.599275f;
    data->d[5] = -0.353836f;
    data->d[6] = -0.562653f;
    data->d[7] = -0.797562f;
    data->d[8] = -1.726381f;
    data->d[9] = 1.165918f;
    data->d[10] = -1.696500f;
    data->d[11] = 1.749422f;
    data->d[12] = 0.500974f;
    data->d[13] = -0.057755f;
    data->d[14] = -0.298383f;
    data->d[15] = 0.000547f;
    data->d[16] = -28.271509f;
    data->d[17] = 6.492277f;
    data->d[18] = -7.013980f;
    data->d[19] = 0.521703f;
    data->d[20] = 2.778790f;
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
    data->d[0] = 0.291921f;
    data->d[1] = -0.902228f;
    data->d[2] = 4.640275f;
    data->d[3] = -0.038482f;
    data->d[4] = 0.262852f;
    data->d[5] = 2.199683f;
    data->d[6] = 1.518487f;
    data->d[7] = -1.338123f;
    data->d[8] = -0.928513f;
    data->d[9] = -0.225868f;
    data->d[10] = 0.009504f;
    data->d[11] = -0.804386f;
    data->d[12] = 0.710022f;
    data->d[13] = -0.142494f;
    data->d[14] = 5.265053f;
    data->d[15] = 1.422341f;
    data->d[16] = 1.590742f;
    data->d[17] = 2.711224f;
    data->d[18] = -3.164392f;
    data->d[19] = 0.391152f;
    data->d[20] = 0.952440f;
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

// Variation: 2  result = 0.00000005
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.254232f;
    data->d[1] = -3.283572f;
    data->d[2] = 0.978602f;
    data->d[3] = 0.200397f;
    data->d[4] = 0.030356f;
    data->d[5] = -11.365688f;
    data->d[6] = 1.788450f;
    data->d[7] = 0.195058f;
    data->d[8] = 1.969010f;
    data->d[9] = 0.112110f;
    data->d[10] = -0.147354f;
    data->d[11] = -0.341668f;
    data->d[12] = 0.223315f;
    data->d[13] = -0.989220f;
    data->d[14] = -0.252270f;
    data->d[15] = 0.029475f;
    data->d[16] = -2.828402f;
    data->d[17] = -0.072173f;
    data->d[18] = 0.004654f;
    data->d[19] = -0.067227f;
    data->d[20] = -1.942903f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 1, 18);
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
    state.m_generation = 24;
    state.m_evolution = 15;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 44;
    state.m_test = 0;
    state.m_seed = 16603149999291653910;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
