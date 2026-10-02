#pragma once
#include "FireStarterState.h"

// Run date: 12/17/23 18:06:14 Pacific Standard Time
// Run duration = 217.807334 seconds
// Run generation = 1
// Run evolution = 1
// Run max result = 0.00006342
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

// Variation: 0  result = 0.00001520
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.458901f;
    data->d[1] = 1.441669f;
    data->d[2] = 0.036022f;
    data->d[3] = -0.018428f;
    data->d[4] = 0.035232f;
    data->d[5] = -1.767332f;
    data->d[6] = 0.200782f;
    data->d[7] = -1.303466f;
    data->d[8] = -0.771161f;
    data->d[9] = 5.012894f;
    data->d[10] = -0.950584f;
    data->d[11] = 0.353579f;
    data->d[12] = 0.509119f;
    data->d[13] = -1.647205f;
    data->d[14] = -586.919250f;
    data->d[15] = 0.689612f;
    data->d[16] = 1.934952f;
    data->d[17] = -0.003596f;
    data->d[18] = -0.273514f;
    data->d[19] = -0.263748f;
    data->d[20] = -0.867126f;
    data->d[21] = 0.087453f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000015f;
} // LoadVariation0

// Variation: 1  result = 0.00006342
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.193007f;
    data->d[1] = 1.606460f;
    data->d[2] = -0.751993f;
    data->d[3] = 0.002951f;
    data->d[4] = -1.788672f;
    data->d[5] = -0.533179f;
    data->d[6] = -1.421290f;
    data->d[7] = 1.872104f;
    data->d[8] = 0.228989f;
    data->d[9] = 0.473991f;
    data->d[10] = 0.080357f;
    data->d[11] = 2.408326f;
    data->d[12] = 5.406600f;
    data->d[13] = 0.348934f;
    data->d[14] = -2.416733f;
    data->d[15] = -3.527466f;
    data->d[16] = -4.064031f;
    data->d[17] = -0.040540f;
    data->d[18] = -1.900635f;
    data->d[19] = 0.674822f;
    data->d[20] = -0.338834f;
    data->d[21] = 1.920559f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000063f;
} // LoadVariation1

// Variation: 2  result = 0.00005585
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.831406f;
    data->d[1] = 2.176651f;
    data->d[2] = -0.001270f;
    data->d[3] = 0.307777f;
    data->d[4] = -0.137713f;
    data->d[5] = -2.959504f;
    data->d[6] = -0.062404f;
    data->d[7] = 1.882746f;
    data->d[8] = 0.033825f;
    data->d[9] = 0.684424f;
    data->d[10] = 1.722880f;
    data->d[11] = -1.832881f;
    data->d[12] = 2.362309f;
    data->d[13] = 3.834563f;
    data->d[14] = 6.240067f;
    data->d[15] = 2.154388f;
    data->d[16] = -0.188707f;
    data->d[17] = -2.195523f;
    data->d[18] = -0.532537f;
    data->d[19] = -0.773491f;
    data->d[20] = -0.942486f;
    data->d[21] = 0.614278f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000056f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000063f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 0, 7);
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
    state.m_generation = 1;
    state.m_evolution = 1;
    state.m_children = 19;
    state.m_index = 0;
    state.m_copy_index = 5;
    state.m_id = 44;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 16454386246709247354;
    state.m_maxResult = 0.000063f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
