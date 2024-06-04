#pragma once
#include "FireStarterState.h"

// Run date: 06/03/24 17:45:22 Pacific Daylight Time
// Run duration = 17735.350693 seconds
// Run generation = 125
// Run evolution = 9
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
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
    data->d[1] = 0.063517f;
    data->d[2] = -5.886468f;
    data->d[3] = 2.007325f;
    data->d[4] = -1.539118f;
    data->d[5] = -0.719242f;
    data->d[6] = 0.008328f;
    data->d[7] = -0.862286f;
    data->d[8] = -0.028114f;
    data->d[9] = 0.340436f;
    data->d[10] = -1.528467f;
    data->d[11] = -0.552239f;
    data->d[12] = 2.218538f;
    data->d[13] = -1.544568f;
    data->d[14] = -0.639043f;
    data->d[15] = -2.930001f;
    data->d[16] = 0.112005f;
    data->d[17] = 2.062198f;
    data->d[18] = -0.230976f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.094418f;
    data->d[2] = 2.530853f;
    data->d[3] = -2.076960f;
    data->d[4] = -0.027185f;
    data->d[5] = -0.501812f;
    data->d[6] = 1.232971f;
    data->d[7] = -0.192241f;
    data->d[8] = -0.251606f;
    data->d[9] = 0.294400f;
    data->d[10] = -1.447076f;
    data->d[11] = -0.844132f;
    data->d[12] = -2.071975f;
    data->d[13] = 2.788985f;
    data->d[14] = -0.768343f;
    data->d[15] = -4.894382f;
    data->d[16] = -0.414320f;
    data->d[17] = 1.926206f;
    data->d[18] = 0.679933f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000027
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.174183f;
    data->d[2] = -3.805311f;
    data->d[3] = 2.039532f;
    data->d[4] = -0.966548f;
    data->d[5] = -1.089084f;
    data->d[6] = 0.004827f;
    data->d[7] = 0.172817f;
    data->d[8] = -0.329446f;
    data->d[9] = 0.129509f;
    data->d[10] = 0.066520f;
    data->d[11] = 0.387166f;
    data->d[12] = -0.503841f;
    data->d[13] = 1.426714f;
    data->d[14] = 0.191748f;
    data->d[15] = -0.726049f;
    data->d[16] = 0.072271f;
    data->d[17] = -6.443088f;
    data->d[18] = 0.989249f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 8);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 14);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 1, 25);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 13);
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
    state.m_evolution = 9;
    state.m_index = 6;
    state.m_copy_index = 16;
    state.m_id = 16;
    state.m_test = 14;
    state.m_seed = 6874170890014461332;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000136f;
    state.m_optimizeValid = true;
} // LoadState
