#pragma once
#include "FireStarterState.h"

// Run date: 03/26/23 12:26:24 Pacific Daylight Time
// Run duration = 42.118443 seconds
// Run generation = 0
// Run result = 0.00031662
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run tests = 100
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 73
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 32;
    settings.m_opcodes = 32;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_tests = 100;
    settings.m_units = 8;
    settings.m_processes = 16;
    settings.m_iterations = 256;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 32;
    settings.m_seed = 73;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00018418
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = 0.161799f;
    data->d[2] = 1.540000f;
    data->d[3] = 0.538974f;
    data->d[4] = -1.506964f;
    data->d[5] = -0.808633f;
    data->d[6] = -1.406709f;
    data->d[7] = -1.828630f;
    data->d[8] = 0.591785f;
    data->d[9] = -0.000000f;
    data->d[10] = -1.339885f;
    data->d[11] = -1.878768f;
    data->d[12] = -1.148045f;
    data->d[13] = -1.010259f;
    data->d[14] = 2.173045f;
    data->d[15] = -0.648319f;
    data->d[16] = 0.001161f;
    data->d[17] = -2.095073f;
    data->d[18] = -0.006711f;
    data->d[19] = 10.795548f;
    data->d[20] = 0.248417f;
    data->d[21] = -1.122547f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000184f;
} // LoadVariation0

// Variation: 1  result = 0.00031662
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.983137f;
    data->d[1] = 0.086470f;
    data->d[2] = 1.084394f;
    data->d[3] = -0.097547f;
    data->d[4] = 2.309781f;
    data->d[5] = 3.217055f;
    data->d[6] = 1.279703f;
    data->d[7] = 2.696342f;
    data->d[8] = 1.175877f;
    data->d[9] = -0.858002f;
    data->d[10] = 0.655913f;
    data->d[11] = 1.660925f;
    data->d[12] = 0.585934f;
    data->d[13] = -0.738953f;
    data->d[14] = 0.075742f;
    data->d[15] = 1.446246f;
    data->d[16] = 1.770989f;
    data->d[17] = 0.479656f;
    data->d[18] = -2.066906f;
    data->d[19] = 0.626670f;
    data->d[20] = 3.120679f;
    data->d[21] = 0.631182f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000317f;
} // LoadVariation1

// Variation: 2  result = 0.00025046
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.000176f;
    data->d[1] = 0.471405f;
    data->d[2] = -0.664323f;
    data->d[3] = -0.772837f;
    data->d[4] = 0.892686f;
    data->d[5] = -1.797255f;
    data->d[6] = 0.608236f;
    data->d[7] = 0.713614f;
    data->d[8] = 2.673415f;
    data->d[9] = 1.145528f;
    data->d[10] = -0.883188f;
    data->d[11] = 0.890154f;
    data->d[12] = -0.261817f;
    data->d[13] = -1.708878f;
    data->d[14] = -0.526578f;
    data->d[15] = -1.026809f;
    data->d[16] = 1.114804f;
    data->d[17] = 0.949425f;
    data->d[18] = -0.796234f;
    data->d[19] = -1.393660f;
    data->d[20] = 0.166201f;
    data->d[21] = -0.080893f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000250f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000317f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 14);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 30);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 1, 3);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 29);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 8886626293355388996;
} // LoadState
