#pragma once
#include "FireStarterState.h"

// Run date: 12/25/23 19:10:47 Pacific Standard Time
// Run duration = 17900.419980 seconds
// Run generation = 25
// Run evolution = 12
// Run max result = 0.00000010
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.992005f;
    data->d[2] = 0.010765f;
    data->d[3] = 14.222560f;
    data->d[4] = 0.776701f;
    data->d[5] = 2.084957f;
    data->d[6] = 0.094204f;
    data->d[7] = -1.588315f;
    data->d[8] = -0.636543f;
    data->d[9] = 2.198924f;
    data->d[10] = -4.457128f;
    data->d[11] = -0.521232f;
    data->d[12] = 2.331396f;
    data->d[13] = 0.006841f;
    data->d[14] = -0.550930f;
    data->d[15] = 1.398062f;
    data->d[16] = -0.122675f;
    data->d[17] = 0.010050f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.731493f;
    data->d[2] = 22.876457f;
    data->d[3] = 0.007008f;
    data->d[4] = 1.208388f;
    data->d[5] = -0.080734f;
    data->d[6] = 1.517756f;
    data->d[7] = 1.076771f;
    data->d[8] = 0.247807f;
    data->d[9] = 0.282074f;
    data->d[10] = 0.868521f;
    data->d[11] = -0.582215f;
    data->d[12] = 0.644978f;
    data->d[13] = 0.065037f;
    data->d[14] = -1.558306f;
    data->d[15] = -41.295174f;
    data->d[16] = 0.171739f;
    data->d[17] = 0.084746f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000010
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.296240f;
    data->d[2] = 15.408862f;
    data->d[3] = 0.004376f;
    data->d[4] = 1.032709f;
    data->d[5] = -2.546889f;
    data->d[6] = 0.380001f;
    data->d[7] = 0.800162f;
    data->d[8] = -0.477008f;
    data->d[9] = 0.552006f;
    data->d[10] = 1.202483f;
    data->d[11] = -0.476381f;
    data->d[12] = 0.098571f;
    data->d[13] = 0.161212f;
    data->d[14] = 1.606517f;
    data->d[15] = -2.028857f;
    data->d[16] = -0.491552f;
    data->d[17] = 3.505903f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 1, 0);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 10);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 25;
    state.m_evolution = 12;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 213;
    state.m_copy_id = 1;
    state.m_test = 12;
    state.m_seed = 18057016771967180556;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
