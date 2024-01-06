#pragma once
#include "FireStarterState.h"

// Run date: 01/06/24 12:10:11 Pacific Standard Time
// Run duration = 3705.001554 seconds
// Run generation = 70
// Run evolution = 7
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

// Variation: 0  result = 0.00000031
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141602f;
    data->d[1] = 0.000013f;
    data->d[2] = -0.002770f;
    data->d[3] = -0.467822f;
    data->d[4] = -0.177048f;
    data->d[5] = 0.854367f;
    data->d[6] = 0.000190f;
    data->d[7] = -0.001524f;
    data->d[8] = -16.215260f;
    data->d[9] = -2.353608f;
    data->d[10] = 0.000089f;
    data->d[11] = 392.872467f;
    data->d[12] = 0.111248f;
    data->d[13] = -2.905859f;
    data->d[14] = -1.357541f;
    data->d[15] = 1.609171f;
    data->d[16] = -2.039256f;
    data->d[17] = 0.000004f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
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
    data->d[0] = -3.090639f;
    data->d[1] = -0.000028f;
    data->d[2] = 0.071581f;
    data->d[3] = -1.051616f;
    data->d[4] = 0.076984f;
    data->d[5] = -6.273192f;
    data->d[6] = -12.122637f;
    data->d[7] = 0.053793f;
    data->d[8] = 2.589236f;
    data->d[9] = 5.171976f;
    data->d[10] = -0.000007f;
    data->d[11] = -543.185303f;
    data->d[12] = 0.018361f;
    data->d[13] = 0.725089f;
    data->d[14] = 1.648245f;
    data->d[15] = -0.332254f;
    data->d[16] = -0.054104f;
    data->d[17] = -0.118141f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = 0.000002f;
    data->d[2] = 0.009533f;
    data->d[3] = 0.241411f;
    data->d[4] = -0.657910f;
    data->d[5] = -0.761888f;
    data->d[6] = -1.495829f;
    data->d[7] = -0.000021f;
    data->d[8] = 21.986244f;
    data->d[9] = -2.533868f;
    data->d[10] = -0.001810f;
    data->d[11] = 0.313533f;
    data->d[12] = 0.171115f;
    data->d[13] = 1.000442f;
    data->d[14] = 1.494114f;
    data->d[15] = -0.412234f;
    data->d[16] = -0.245412f;
    data->d[17] = 0.523599f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 1, 26);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 26);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 70;
    state.m_evolution = 7;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 919;
    state.m_test = 3;
    state.m_seed = 10494382360919680736;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
