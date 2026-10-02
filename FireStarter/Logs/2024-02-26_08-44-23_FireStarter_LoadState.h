#pragma once
#include "FireStarterState.h"

// Run date: 02/26/24 08:44:23 Pacific Standard Time
// Run duration = 24124.722692 seconds
// Run generation = 95
// Run evolution = 13
// Run max result = 0.00009995
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
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

// Variation: 0  result = 0.00007865
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.437824f;
    data->d[1] = 0.030494f;
    data->d[2] = 0.165765f;
    data->d[3] = 0.615005f;
    data->d[4] = 0.180415f;
    data->d[5] = 7.360495f;
    data->d[6] = -1.370148f;
    data->d[7] = -0.983683f;
    data->d[8] = 1.509143f;
    data->d[9] = -0.063884f;
    data->d[10] = 1.513857f;
    data->d[11] = -0.377582f;
    data->d[12] = -2.745413f;
    data->d[13] = 1.382732f;
    data->d[14] = 0.728850f;
    data->d[15] = 0.947722f;
    data->d[16] = -0.523336f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000079f;
} // LoadVariation0

// Variation: 1  result = 0.00005674
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.819333f;
    data->d[1] = 0.164763f;
    data->d[2] = 0.817024f;
    data->d[3] = 0.369982f;
    data->d[4] = 5.516515f;
    data->d[5] = 0.036232f;
    data->d[6] = -1.815307f;
    data->d[7] = 1.119202f;
    data->d[8] = 7.691416f;
    data->d[9] = -0.490740f;
    data->d[10] = 14.477990f;
    data->d[11] = -0.366354f;
    data->d[12] = 0.860609f;
    data->d[13] = -1.233553f;
    data->d[14] = 1.366595f;
    data->d[15] = -1.175666f;
    data->d[16] = 1.867612f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000057f;
} // LoadVariation1

// Variation: 2  result = 0.00009995
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.428945f;
    data->d[1] = 0.163033f;
    data->d[2] = 0.404558f;
    data->d[3] = 1.337585f;
    data->d[4] = -0.649233f;
    data->d[5] = 5.505213f;
    data->d[6] = -1.787237f;
    data->d[7] = 1.094720f;
    data->d[8] = 1.708148f;
    data->d[9] = 0.178422f;
    data->d[10] = 0.650723f;
    data->d[11] = -9.014296f;
    data->d[12] = 0.061903f;
    data->d[13] = 25.952477f;
    data->d[14] = -0.056714f;
    data->d[15] = 1.125247f;
    data->d[16] = -1.327018f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000100f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000100f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 23);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 1, 19);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 15);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 26);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 95;
    state.m_evolution = 13;
    state.m_children0 = 95;
    state.m_children1 = 34;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 220;
    state.m_seed = 15595661299777664049;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000132f;
    state.m_maxResult = 0.000100f;
    state.m_evolveWeight = 1.145833f;
    state.m_optimizeValid = true;
} // LoadState
