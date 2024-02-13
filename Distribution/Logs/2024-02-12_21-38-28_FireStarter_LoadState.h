#pragma once
#include "FireStarterState.h"

// Run date: 02/12/24 21:38:28 Pacific Standard Time
// Run duration = 16740.572284 seconds
// Run generation = 61
// Run evolution = 11
// Run max result = 0.00011468
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 64
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 64;
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

// Variation: 0  result = 0.00003484
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.106302f;
    data->d[1] = 0.667913f;
    data->d[2] = 0.385338f;
    data->d[3] = 1.389295f;
    data->d[4] = -2.461723f;
    data->d[5] = 1.509816f;
    data->d[6] = -1.069706f;
    data->d[7] = 1.281900f;
    data->d[8] = 0.496287f;
    data->d[9] = -0.426649f;
    data->d[10] = 1.857148f;
    data->d[11] = 0.781578f;
    data->d[12] = 0.393615f;
    data->d[13] = 1.327399f;
    data->d[14] = -0.501783f;
    data->d[15] = 37.936424f;
    data->d[16] = 0.045713f;
    data->d[17] = 0.953908f;
    data->d[18] = 2.034314f;
    data->d[19] = -2.021129f;
    data->d[20] = 0.850801f;
    data->d[21] = -0.322929f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000035f;
} // LoadVariation0

// Variation: 1  result = 0.00007212
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.229145f;
    data->d[1] = -0.683582f;
    data->d[2] = 1.455419f;
    data->d[3] = -0.478973f;
    data->d[4] = -1.112465f;
    data->d[5] = -0.030450f;
    data->d[6] = 3.417420f;
    data->d[7] = 0.431423f;
    data->d[8] = 0.305714f;
    data->d[9] = 0.185502f;
    data->d[10] = 1.652690f;
    data->d[11] = -0.557051f;
    data->d[12] = 1.586028f;
    data->d[13] = -2.299156f;
    data->d[14] = 0.219783f;
    data->d[15] = 292.377014f;
    data->d[16] = -0.003111f;
    data->d[17] = 0.702095f;
    data->d[18] = 1.980088f;
    data->d[19] = 1.005526f;
    data->d[20] = 0.548047f;
    data->d[21] = 0.738712f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000072f;
} // LoadVariation1

// Variation: 2  result = 0.00011468
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.541725f;
    data->d[1] = -1.731285f;
    data->d[2] = -1.595907f;
    data->d[3] = 0.130789f;
    data->d[4] = 1.102549f;
    data->d[5] = 0.907031f;
    data->d[6] = -0.762516f;
    data->d[7] = 0.993433f;
    data->d[8] = -0.382315f;
    data->d[9] = 2.956778f;
    data->d[10] = 0.289315f;
    data->d[11] = 1.686675f;
    data->d[12] = -0.399723f;
    data->d[13] = -1.975549f;
    data->d[14] = 0.489396f;
    data->d[15] = -0.011283f;
    data->d[16] = 10.802589f;
    data->d[17] = -0.514409f;
    data->d[18] = 2.602947f;
    data->d[19] = -2.092626f;
    data->d[20] = -1.169862f;
    data->d[21] = -0.821653f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000115f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000115f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 23);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 1, 26);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 1, 22);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 0, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 61;
    state.m_evolution = 11;
    state.m_children0 = 60;
    state.m_children1 = 2;
    state.m_index = 0;
    state.m_copy_index = 10;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 11659596510139370182;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000198f;
    state.m_maxResult = 0.000115f;
    state.m_evolveWeight = 0.000476f;
    state.m_optimizeValid = true;
} // LoadState
