#pragma once
#include "FireStarterState.h"

// Run date: 11/29/23 13:09:18 Pacific Standard Time
// Run duration = 3993.859132 seconds
// Run generation = 78
// Run evolution = 13
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.473920f;
    data->d[1] = -2.667673f;
    data->d[2] = 0.200627f;
    data->d[3] = 3.662337f;
    data->d[4] = -1.012183f;
    data->d[5] = -0.006989f;
    data->d[6] = 0.844384f;
    data->d[7] = -1.044299f;
    data->d[8] = -2.351848f;
    data->d[9] = 1.699329f;
    data->d[10] = 1.957279f;
    data->d[11] = 0.924916f;
    data->d[12] = 0.107427f;
    data->d[13] = -0.095066f;
    data->d[14] = 0.231859f;
    data->d[15] = -0.111643f;
    data->d[16] = -0.024658f;
    data->d[17] = 2.783683f;
    data->d[18] = -0.146635f;
    data->d[19] = -1.349317f;
    data->d[20] = -0.197857f;
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
    data->d[0] = -1.434979f;
    data->d[1] = -1.655679f;
    data->d[2] = -0.462007f;
    data->d[3] = 1.196798f;
    data->d[4] = 0.942902f;
    data->d[5] = 0.021980f;
    data->d[6] = 0.705046f;
    data->d[7] = -0.618173f;
    data->d[8] = -0.617827f;
    data->d[9] = -2.825986f;
    data->d[10] = 0.057750f;
    data->d[11] = 0.185422f;
    data->d[12] = -0.405781f;
    data->d[13] = -0.657630f;
    data->d[14] = -1.304517f;
    data->d[15] = -0.537811f;
    data->d[16] = -0.083059f;
    data->d[17] = -1.870714f;
    data->d[18] = -0.006438f;
    data->d[19] = 3.685027f;
    data->d[20] = -0.094407f;
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
    data->d[0] = -1.757352f;
    data->d[1] = -0.860642f;
    data->d[2] = 0.622854f;
    data->d[3] = -0.109757f;
    data->d[4] = 0.645156f;
    data->d[5] = -0.279360f;
    data->d[6] = -1.106727f;
    data->d[7] = 1.019727f;
    data->d[8] = 0.838717f;
    data->d[9] = 2.360907f;
    data->d[10] = -0.592657f;
    data->d[11] = -0.724166f;
    data->d[12] = -2.439243f;
    data->d[13] = -0.011467f;
    data->d[14] = -0.833859f;
    data->d[15] = -2.564436f;
    data->d[16] = 0.401421f;
    data->d[17] = 1.086547f;
    data->d[18] = 0.133868f;
    data->d[19] = 3.215403f;
    data->d[20] = 0.093159f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 1, 8);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 26);
    instructions->SetOperation(18, 1, 20);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 2);
    instructions->SetOperation(24, 1, 24);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 4);
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
    state.m_generation = 78;
    state.m_evolution = 13;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 50;
    state.m_copy_id = 57;
    state.m_test = 15;
    state.m_seed = 5072185245669207563;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
