#pragma once
#include "FireStarterState.h"

// Run date: 01/09/24 18:18:05 Pacific Standard Time
// Run duration = 16393.314282 seconds
// Run generation = 125
// Run evolution = 10
// Run max result = 0.00000060
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000060
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.142280f;
    data->d[1] = -0.427271f;
    data->d[2] = 1.532936f;
    data->d[3] = 1.880108f;
    data->d[4] = 2.880021f;
    data->d[5] = 0.012009f;
    data->d[6] = 0.055316f;
    data->d[7] = -1.856956f;
    data->d[8] = -3.108924f;
    data->d[9] = -1.263188f;
    data->d[10] = -0.890728f;
    data->d[11] = 6.824850f;
    data->d[12] = 4.050704f;
    data->d[13] = -1.052857f;
    data->d[14] = 1.534935f;
    data->d[15] = -2.333012f;
    data->d[16] = 2.231889f;
    data->d[17] = 1.439644f;
    data->d[18] = -0.476991f;
    data->d[19] = -0.000000f;
    data->d[20] = -1.889881f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.932194f;
    data->d[1] = -0.483333f;
    data->d[2] = -1.336113f;
    data->d[3] = 0.542514f;
    data->d[4] = -0.786321f;
    data->d[5] = -0.014595f;
    data->d[6] = -3.256532f;
    data->d[7] = -0.764069f;
    data->d[8] = -0.541738f;
    data->d[9] = 2.596701f;
    data->d[10] = 3.083084f;
    data->d[11] = 2.524071f;
    data->d[12] = 5.040128f;
    data->d[13] = -0.109506f;
    data->d[14] = -1.392089f;
    data->d[15] = 0.491722f;
    data->d[16] = -0.491742f;
    data->d[17] = -1.802874f;
    data->d[18] = 1.652237f;
    data->d[19] = -0.075952f;
    data->d[20] = -2.333666f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.306336f;
    data->d[1] = 1.521176f;
    data->d[2] = -1.541260f;
    data->d[3] = 0.901268f;
    data->d[4] = -0.810744f;
    data->d[5] = 0.665779f;
    data->d[6] = -0.446276f;
    data->d[7] = 0.023808f;
    data->d[8] = 6.540394f;
    data->d[9] = 1.328798f;
    data->d[10] = 0.853269f;
    data->d[11] = -6.970026f;
    data->d[12] = 8.064108f;
    data->d[13] = 0.207970f;
    data->d[14] = -1.219163f;
    data->d[15] = 0.896873f;
    data->d[16] = -0.838422f;
    data->d[17] = -0.382434f;
    data->d[18] = 1.266280f;
    data->d[19] = 0.549733f;
    data->d[20] = -1.462268f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 1, 25);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 0, 22);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 16);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 24);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 1, 8);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 125;
    state.m_evolution = 10;
    state.m_children = 141;
    state.m_index = 54;
    state.m_copy_index = 607;
    state.m_id = 118;
    state.m_test = 3;
    state.m_seed = 14573246900254680487;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000008f;
    state.m_maxResult = 0.000001f;
    state.m_evolveResult = 0.000116f;
    state.m_optimizeValid = true;
} // LoadState
