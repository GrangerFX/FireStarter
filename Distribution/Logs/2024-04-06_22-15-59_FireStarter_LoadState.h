#pragma once
#include "FireStarterState.h"

// Run date: 04/06/24 22:15:59 Pacific Daylight Time
// Run duration = 35712.612166 seconds
// Run generation = 1687
// Run evolution = 14
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
    data->d[0] = -1.844710f;
    data->d[1] = -1.563232f;
    data->d[2] = 0.266350f;
    data->d[3] = -0.201318f;
    data->d[4] = -0.073834f;
    data->d[5] = -371.131989f;
    data->d[6] = 9.529036f;
    data->d[7] = 0.083275f;
    data->d[8] = -0.076691f;
    data->d[9] = -0.090930f;
    data->d[10] = 10.339677f;
    data->d[11] = 2.409598f;
    data->d[12] = -2.734257f;
    data->d[13] = 0.046086f;
    data->d[14] = 0.183867f;
    data->d[15] = -264199.250000f;
    data->d[16] = -0.391177f;
    data->d[17] = 0.022058f;
    data->d[18] = 23.303564f;
    data->d[19] = -0.018431f;
    data->d[20] = -0.003706f;
    data->d[21] = 0.275356f;
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
    data->d[0] = -3.820511f;
    data->d[1] = 0.475803f;
    data->d[2] = 0.254049f;
    data->d[3] = -1.328964f;
    data->d[4] = -0.207363f;
    data->d[5] = -0.000551f;
    data->d[6] = -0.092666f;
    data->d[7] = 0.068159f;
    data->d[8] = 10.323735f;
    data->d[9] = -0.161789f;
    data->d[10] = -0.021412f;
    data->d[11] = -392516.625000f;
    data->d[12] = -1449.057129f;
    data->d[13] = 60.428234f;
    data->d[14] = 730.577026f;
    data->d[15] = -7964.666016f;
    data->d[16] = 9.213506f;
    data->d[17] = -0.035593f;
    data->d[18] = 0.007373f;
    data->d[19] = 0.096885f;
    data->d[20] = -0.079422f;
    data->d[21] = 1.483009f;
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
    data->d[0] = 0.604526f;
    data->d[1] = -3.489253f;
    data->d[2] = 0.266733f;
    data->d[3] = 0.090499f;
    data->d[4] = -0.011077f;
    data->d[5] = 10594.798828f;
    data->d[6] = -0.053054f;
    data->d[7] = -0.209959f;
    data->d[8] = -6.238616f;
    data->d[9] = -6.143260f;
    data->d[10] = 0.122800f;
    data->d[11] = 1.790109f;
    data->d[12] = 0.862297f;
    data->d[13] = 4.115713f;
    data->d[14] = -1.586649f;
    data->d[15] = -38707.550781f;
    data->d[16] = -135.257843f;
    data->d[17] = 0.461383f;
    data->d[18] = 2.259498f;
    data->d[19] = 0.007882f;
    data->d[20] = 1.942076f;
    data->d[21] = 0.630337f;
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
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 1, 17);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 5);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 1, 26);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 0, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1687;
    state.m_evolution = 14;
    state.m_index = 11;
    state.m_copy_index = 374;
    state.m_id = 374;
    state.m_test = 10;
    state.m_seed = 10291636980921551057;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001407f;
    state.m_optimizeValid = true;
} // LoadState
