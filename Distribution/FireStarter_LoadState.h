#pragma once
#include "FireStarterState.h"

// Run date: 11/10/23 18:51:31 Pacific Standard Time
// Run duration = 1542.049662 seconds
// Run generation = 28
// Run evolution = 13
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.395536f;
    data->d[1] = -0.688215f;
    data->d[2] = -0.855184f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.257820f;
    data->d[5] = -0.530389f;
    data->d[6] = 2.865960f;
    data->d[7] = 1.782403f;
    data->d[8] = 1.480415f;
    data->d[9] = -0.420727f;
    data->d[10] = -1.978234f;
    data->d[11] = -0.977994f;
    data->d[12] = 1.557196f;
    data->d[13] = -1.524746f;
    data->d[14] = -2.626902f;
    data->d[15] = -2.881044f;
    data->d[16] = 1.630552f;
    data->d[17] = 0.512856f;
    data->d[18] = -0.393073f;
    data->d[19] = 0.205808f;
    data->d[20] = -0.325591f;
    data->d[21] = -1.107792f;
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
    data->d[0] = -1.743799f;
    data->d[1] = 0.348200f;
    data->d[2] = 1.876617f;
    data->d[3] = -0.000005f;
    data->d[4] = 0.226949f;
    data->d[5] = 0.125213f;
    data->d[6] = 5.953583f;
    data->d[7] = -0.826078f;
    data->d[8] = 1.409763f;
    data->d[9] = -1.669888f;
    data->d[10] = -0.185959f;
    data->d[11] = -1.752433f;
    data->d[12] = 0.753353f;
    data->d[13] = -1.598091f;
    data->d[14] = -1.291232f;
    data->d[15] = 0.100147f;
    data->d[16] = -0.546710f;
    data->d[17] = -7.142243f;
    data->d[18] = 6.668425f;
    data->d[19] = 0.045334f;
    data->d[20] = 0.495893f;
    data->d[21] = -1.752484f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000009
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.271860f;
    data->d[1] = 1.123044f;
    data->d[2] = -0.799301f;
    data->d[3] = 0.000000f;
    data->d[4] = 0.610970f;
    data->d[5] = 0.099907f;
    data->d[6] = 0.653746f;
    data->d[7] = -0.754734f;
    data->d[8] = 0.531228f;
    data->d[9] = -0.747246f;
    data->d[10] = -1.949048f;
    data->d[11] = -1.679262f;
    data->d[12] = 1.671781f;
    data->d[13] = -0.783980f;
    data->d[14] = -0.761256f;
    data->d[15] = -1.482849f;
    data->d[16] = -0.166883f;
    data->d[17] = 0.668758f;
    data->d[18] = -0.415390f;
    data->d[19] = 0.247584f;
    data->d[20] = -0.207579f;
    data->d[21] = 1.784750f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 28;
    state.m_evolution = 13;
    state.m_index = 0;
    state.m_id = 17;
    state.m_copy_id = 53;
    state.m_test = 13;
    state.m_seed = 10042595621381729775;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
