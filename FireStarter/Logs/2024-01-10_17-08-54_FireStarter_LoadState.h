#pragma once
#include "FireStarterState.h"

// Run date: 01/10/24 17:08:54 Pacific Standard Time
// Run duration = 13839.149056 seconds
// Run generation = 80
// Run evolution = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.372195f;
    data->d[1] = -0.798220f;
    data->d[2] = 2.552147f;
    data->d[3] = -2.196181f;
    data->d[4] = -0.003498f;
    data->d[5] = 0.568762f;
    data->d[6] = -0.389575f;
    data->d[7] = -1.778985f;
    data->d[8] = -0.144613f;
    data->d[9] = 0.784201f;
    data->d[10] = -0.861759f;
    data->d[11] = 2.038498f;
    data->d[12] = -1.502687f;
    data->d[13] = -0.262969f;
    data->d[14] = 3.562426f;
    data->d[15] = 1.026850f;
    data->d[16] = -0.451990f;
    data->d[17] = -29.569096f;
    data->d[18] = 18.833578f;
    data->d[19] = -0.000000f;
    data->d[20] = 1.420776f;
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
    data->d[0] = 0.254612f;
    data->d[1] = -1.557919f;
    data->d[2] = 1.215382f;
    data->d[3] = -1.244956f;
    data->d[4] = -0.008763f;
    data->d[5] = -0.869531f;
    data->d[6] = 1.134133f;
    data->d[7] = -1.225745f;
    data->d[8] = 2.326613f;
    data->d[9] = -4.928279f;
    data->d[10] = 3.634801f;
    data->d[11] = -0.936712f;
    data->d[12] = 6.253792f;
    data->d[13] = -0.591923f;
    data->d[14] = 4.690768f;
    data->d[15] = -4.784827f;
    data->d[16] = 0.009197f;
    data->d[17] = 0.468069f;
    data->d[18] = 0.443251f;
    data->d[19] = -0.392757f;
    data->d[20] = 1.216636f;
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
    data->d[0] = 0.470810f;
    data->d[1] = -1.794696f;
    data->d[2] = -0.054169f;
    data->d[3] = -2.106148f;
    data->d[4] = -0.007223f;
    data->d[5] = 0.135996f;
    data->d[6] = 0.102820f;
    data->d[7] = -1.315353f;
    data->d[8] = -0.174152f;
    data->d[9] = 2.776563f;
    data->d[10] = -1.880853f;
    data->d[11] = 0.457668f;
    data->d[12] = -1.808186f;
    data->d[13] = -0.802609f;
    data->d[14] = 6.347221f;
    data->d[15] = 0.022615f;
    data->d[16] = -0.261951f;
    data->d[17] = -3.227066f;
    data->d[18] = -0.481624f;
    data->d[19] = 0.212400f;
    data->d[20] = 3.009806f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 11);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 1, 20);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 2);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 80;
    state.m_evolution = 16;
    state.m_children = 67;
    state.m_index = 51;
    state.m_copy_index = 517;
    state.m_id = 117;
    state.m_test = 1;
    state.m_seed = 4056467221328023288;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000015f;
    state.m_optimizeValid = true;
} // LoadState
