#pragma once
#include "FireStarterState.h"

// Run date: 04/06/24 10:08:16 Pacific Daylight Time
// Run duration = 18423.466835 seconds
// Run generation = 622
// Run evolution = 9
// Run max result = 0.00000017
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.674580f;
    data->d[1] = 0.066878f;
    data->d[2] = -0.196223f;
    data->d[3] = 1.744860f;
    data->d[4] = 0.842144f;
    data->d[5] = -0.301761f;
    data->d[6] = 1.631345f;
    data->d[7] = -1.547529f;
    data->d[8] = 0.000352f;
    data->d[9] = 17.658712f;
    data->d[10] = -0.313291f;
    data->d[11] = -7.189160f;
    data->d[12] = -53.787273f;
    data->d[13] = -8.484881f;
    data->d[14] = -3.703785f;
    data->d[15] = 1.815486f;
    data->d[16] = -1.402177f;
    data->d[17] = -0.000000f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.096734f;
    data->d[1] = 0.254507f;
    data->d[2] = -2.131438f;
    data->d[3] = -0.265173f;
    data->d[4] = 1.281343f;
    data->d[5] = -0.095152f;
    data->d[6] = 2.496137f;
    data->d[7] = -2.523617f;
    data->d[8] = 0.000770f;
    data->d[9] = -38.571861f;
    data->d[10] = 0.140259f;
    data->d[11] = 1.820916f;
    data->d[12] = -1.130904f;
    data->d[13] = 780.382874f;
    data->d[14] = -1.453442f;
    data->d[15] = 0.021256f;
    data->d[16] = -2.569380f;
    data->d[17] = -0.118132f;
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

// Variation: 2  result = 0.00000017
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -5.026922f;
    data->d[1] = 0.310582f;
    data->d[2] = 1.496340f;
    data->d[3] = -0.366088f;
    data->d[4] = -0.945723f;
    data->d[5] = 1.128250f;
    data->d[6] = 0.581328f;
    data->d[7] = 4.094077f;
    data->d[8] = 0.000100f;
    data->d[9] = 3.309358f;
    data->d[10] = -3.372282f;
    data->d[11] = -0.400542f;
    data->d[12] = -0.792456f;
    data->d[13] = -10.934728f;
    data->d[14] = 0.931529f;
    data->d[15] = 0.581766f;
    data->d[16] = -1.297618f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 7);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 25);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 1, 26);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 622;
    state.m_evolution = 9;
    state.m_index = 8;
    state.m_copy_index = 141;
    state.m_id = 141;
    state.m_test = 9;
    state.m_seed = 10361511238130614956;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000122f;
    state.m_optimizeValid = true;
} // LoadState
