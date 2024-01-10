#pragma once
#include "FireStarterState.h"

// Run date: 01/10/24 09:18:14 Pacific Standard Time
// Run duration = 19243.897910 seconds
// Run generation = 8
// Run evolution = 7
// Run max result = 0.00000024
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
    data->d[0] = -3.141593f;
    data->d[1] = -0.899083f;
    data->d[2] = 0.382501f;
    data->d[3] = -2.559760f;
    data->d[4] = 3.244096f;
    data->d[5] = 2.739709f;
    data->d[6] = -0.314872f;
    data->d[7] = -1.673007f;
    data->d[8] = -2019.340210f;
    data->d[9] = -1.404588f;
    data->d[10] = 0.915789f;
    data->d[11] = 2.176030f;
    data->d[12] = -0.034354f;
    data->d[13] = -0.000517f;
    data->d[14] = -1.659159f;
    data->d[15] = -2.215154f;
    data->d[16] = -0.033431f;
    data->d[17] = -0.349388f;
    data->d[18] = -2.163027f;
    data->d[19] = 2.180016f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.426884f;
    data->d[2] = -3.210726f;
    data->d[3] = -1.217468f;
    data->d[4] = 0.495999f;
    data->d[5] = 1.406507f;
    data->d[6] = -2.174101f;
    data->d[7] = 1.679490f;
    data->d[8] = -2.150608f;
    data->d[9] = 1498.784058f;
    data->d[10] = 0.000935f;
    data->d[11] = -4.235231f;
    data->d[12] = 0.001932f;
    data->d[13] = 0.142667f;
    data->d[14] = 1.957827f;
    data->d[15] = -2.723999f;
    data->d[16] = 6.958674f;
    data->d[17] = -0.221242f;
    data->d[18] = -1.136101f;
    data->d[19] = 2.112722f;
    data->d[20] = -0.118132f;
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
    data->d[0] = -2.617994f;
    data->d[1] = -1.642222f;
    data->d[2] = 0.213490f;
    data->d[3] = 1.608058f;
    data->d[4] = 0.877903f;
    data->d[5] = -1.011699f;
    data->d[6] = 0.375940f;
    data->d[7] = -1.146259f;
    data->d[8] = 1.219089f;
    data->d[9] = -4.565444f;
    data->d[10] = -0.006739f;
    data->d[11] = -6.268547f;
    data->d[12] = -0.543489f;
    data->d[13] = -0.002507f;
    data->d[14] = 0.094952f;
    data->d[15] = -1084.630737f;
    data->d[16] = -0.000533f;
    data->d[17] = -3.164021f;
    data->d[18] = 0.280615f;
    data->d[19] = -0.339905f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 27);
    instructions->SetOperation(17, 0, 15);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 13);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 8;
    state.m_evolution = 7;
    state.m_children = 56;
    state.m_index = 63;
    state.m_copy_index = 145;
    state.m_id = 54;
    state.m_test = 13;
    state.m_seed = 781809821945233607;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000012f;
    state.m_optimizeValid = true;
} // LoadState
