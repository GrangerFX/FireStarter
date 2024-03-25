#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 21:17:31 Pacific Daylight Time
// Run duration = 117.165567 seconds
// Run generation = 33
// Run evolution = 6
// Run max result = 0.00000015
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
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 2.544600f;
    data->d[2] = -0.372931f;
    data->d[3] = 1.074193f;
    data->d[4] = -0.124881f;
    data->d[5] = 0.386291f;
    data->d[6] = -1.488442f;
    data->d[7] = -77.755585f;
    data->d[8] = -45.524849f;
    data->d[9] = 0.061445f;
    data->d[10] = 0.128642f;
    data->d[11] = -5.412996f;
    data->d[12] = -0.391577f;
    data->d[13] = -4.181962f;
    data->d[14] = -6.521867f;
    data->d[15] = 0.249647f;
    data->d[16] = 0.072183f;
    data->d[17] = -0.530157f;
    data->d[18] = -0.055629f;
    data->d[19] = -0.042944f;
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
    data->d[1] = 0.007833f;
    data->d[2] = -2.360953f;
    data->d[3] = 0.756326f;
    data->d[4] = -4559.976074f;
    data->d[5] = 2.433791f;
    data->d[6] = -1.035234f;
    data->d[7] = -2.014364f;
    data->d[8] = -1.267992f;
    data->d[9] = 0.002810f;
    data->d[10] = -1.925804f;
    data->d[11] = 1.492212f;
    data->d[12] = -2.412846f;
    data->d[13] = 1.505315f;
    data->d[14] = 0.106003f;
    data->d[15] = -0.280085f;
    data->d[16] = 0.101482f;
    data->d[17] = 0.671818f;
    data->d[18] = 0.049048f;
    data->d[19] = -0.451707f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.583422f;
    data->d[2] = -0.001982f;
    data->d[3] = 1.286639f;
    data->d[4] = -252185.312500f;
    data->d[5] = 1.065026f;
    data->d[6] = -1.024650f;
    data->d[7] = 1.483747f;
    data->d[8] = -1.367342f;
    data->d[9] = -0.384616f;
    data->d[10] = 0.144031f;
    data->d[11] = 1.614832f;
    data->d[12] = 2.214852f;
    data->d[13] = 1.206405f;
    data->d[14] = -2.239847f;
    data->d[15] = -0.053586f;
    data->d[16] = 0.257151f;
    data->d[17] = -0.723923f;
    data->d[18] = -2.773449f;
    data->d[19] = -0.092887f;
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
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 18);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 14);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 33;
    state.m_evolution = 6;
    state.m_index = 4;
    state.m_copy_index = 7;
    state.m_id = 7;
    state.m_test = 15;
    state.m_seed = 5903199229643994204;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000010f;
    state.m_optimizeValid = true;
} // LoadState
