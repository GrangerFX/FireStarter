#pragma once
#include "FireStarterState.h"

// Run date: 12/26/23 11:51:17 Pacific Standard Time
// Run duration = 2232.149981 seconds
// Run generation = 50
// Run evolution = 17
// Run max result = 0.00000054
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
// Run startResult = 9.999999f

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
    settings.m_startResult = 9.999999f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.190864f;
    data->d[1] = -1.199237f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.207982f;
    data->d[4] = 4.566332f;
    data->d[5] = -0.000014f;
    data->d[6] = 4.882292f;
    data->d[7] = 1.432110f;
    data->d[8] = 0.429693f;
    data->d[9] = -0.002564f;
    data->d[10] = 3.786902f;
    data->d[11] = -0.339832f;
    data->d[12] = -1.358016f;
    data->d[13] = 1.838332f;
    data->d[14] = -0.967307f;
    data->d[15] = -0.201944f;
    data->d[16] = 0.791416f;
    data->d[17] = 1.785467f;
    data->d[18] = -0.714735f;
    data->d[19] = -0.000000f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.414489f;
    data->d[1] = -2.562092f;
    data->d[2] = 0.000010f;
    data->d[3] = 3.855762f;
    data->d[4] = 0.616810f;
    data->d[5] = 2.102162f;
    data->d[6] = -0.072220f;
    data->d[7] = -1.037889f;
    data->d[8] = -1.572251f;
    data->d[9] = -0.003405f;
    data->d[10] = -4.704521f;
    data->d[11] = 1.591230f;
    data->d[12] = -2.385073f;
    data->d[13] = -0.533808f;
    data->d[14] = -1.804751f;
    data->d[15] = -2.204597f;
    data->d[16] = -0.381416f;
    data->d[17] = -0.096731f;
    data->d[18] = -0.086242f;
    data->d[19] = -0.118140f;
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

// Variation: 2  result = 0.00000054
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.305957f;
    data->d[1] = -1.601988f;
    data->d[2] = -0.000001f;
    data->d[3] = 1.102392f;
    data->d[4] = 0.000132f;
    data->d[5] = -8.556707f;
    data->d[6] = -1.440892f;
    data->d[7] = 1.505662f;
    data->d[8] = 1.909832f;
    data->d[9] = 0.001598f;
    data->d[10] = -4.615991f;
    data->d[11] = 1.132328f;
    data->d[12] = -1.650291f;
    data->d[13] = 4.163123f;
    data->d[14] = 0.571699f;
    data->d[15] = 0.205990f;
    data->d[16] = 0.229474f;
    data->d[17] = 1.543003f;
    data->d[18] = -1.264820f;
    data->d[19] = 0.523599f;
    data->d[20] = 0.000000f;
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
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 25);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 27);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 1, 19);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 14);
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
    state.m_generation = 50;
    state.m_evolution = 17;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 329;
    state.m_copy_id = 0;
    state.m_test = 9;
    state.m_seed = 17359348830740160935;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
