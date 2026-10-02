#pragma once
#include "FireStarterState.h"

// Run date: 03/10/24 12:08:28 Pacific Daylight Time
// Run duration = 33637.645769 seconds
// Run generation = 129
// Run evolution = 18
// Run max result = 0.00000548
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000244
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.520335f;
    data->d[1] = -0.621258f;
    data->d[2] = 0.387633f;
    data->d[3] = 0.000000f;
    data->d[4] = -28.894165f;
    data->d[5] = 7.950309f;
    data->d[6] = -0.172404f;
    data->d[7] = 0.022025f;
    data->d[8] = -1.414432f;
    data->d[9] = -0.516792f;
    data->d[10] = -2.961601f;
    data->d[11] = -1.228707f;
    data->d[12] = 5.078209f;
    data->d[13] = 0.138103f;
    data->d[14] = -0.000000f;
    data->d[15] = -2.914543f;
    data->d[16] = 11.676402f;
    data->d[17] = 31.466640f;
    data->d[18] = -0.425272f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000465
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.632819f;
    data->d[1] = -2.457932f;
    data->d[2] = -0.060700f;
    data->d[3] = 0.000007f;
    data->d[4] = -0.459398f;
    data->d[5] = 3.015181f;
    data->d[6] = -0.245804f;
    data->d[7] = -0.348581f;
    data->d[8] = -1.972356f;
    data->d[9] = -1.617978f;
    data->d[10] = -1.263374f;
    data->d[11] = 1.202901f;
    data->d[12] = -2.666844f;
    data->d[13] = 2.959439f;
    data->d[14] = -0.010783f;
    data->d[15] = -4.965140f;
    data->d[16] = 0.925406f;
    data->d[17] = 4.334217f;
    data->d[18] = 2.525266f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000548
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.619898f;
    data->d[1] = -2.002811f;
    data->d[2] = 0.063286f;
    data->d[3] = 0.000531f;
    data->d[4] = -1.772605f;
    data->d[5] = -1.551322f;
    data->d[6] = 0.269643f;
    data->d[7] = -0.325280f;
    data->d[8] = 0.820473f;
    data->d[9] = 0.305066f;
    data->d[10] = 4.288756f;
    data->d[11] = 0.758613f;
    data->d[12] = 1.635439f;
    data->d[13] = 3.578957f;
    data->d[14] = -0.052618f;
    data->d[15] = -0.099244f;
    data->d[16] = -0.148112f;
    data->d[17] = -4.626299f;
    data->d[18] = 2.138789f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 17);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 1, 6);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 1, 28);
    instructions->SetOperation(24, 0, 23);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 129;
    state.m_evolution = 18;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 4;
    state.m_copy_index = 4;
    state.m_id = 4;
    state.m_test = 15;
    state.m_seed = 12940385005191273337;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000037f;
    state.m_maxResult = 0.000005f;
    state.m_evolveWeight = 129.000000f;
    state.m_optimizeValid = true;
} // LoadState
