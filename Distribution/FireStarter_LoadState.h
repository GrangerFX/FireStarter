#pragma once
#include "FireStarterState.h"

// Run date: 08/27/23 16:58:11 Pacific Daylight Time
// Run duration = 264.892825 seconds
// Run generation = 17
// Run evolution = 2
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.496077f;
    data->d[2] = 0.579413f;
    data->d[3] = -2.418603f;
    data->d[4] = -0.497976f;
    data->d[5] = -2.896693f;
    data->d[6] = -0.008586f;
    data->d[7] = 1.681380f;
    data->d[8] = 0.683076f;
    data->d[9] = 1.074305f;
    data->d[10] = 0.513578f;
    data->d[11] = -0.220535f;
    data->d[12] = 5.454082f;
    data->d[13] = -2.203465f;
    data->d[14] = -2.208199f;
    data->d[15] = 1.038651f;
    data->d[16] = 0.956148f;
    data->d[17] = 0.357452f;
    data->d[18] = 0.351867f;
    data->d[19] = -8.742537f;
    data->d[20] = -0.077055f;
    data->d[21] = 0.077055f;
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
    data->d[0] = -3.090659f;
    data->d[1] = 0.327845f;
    data->d[2] = 1.688438f;
    data->d[3] = 0.465110f;
    data->d[4] = -1.783455f;
    data->d[5] = 0.787240f;
    data->d[6] = 0.033897f;
    data->d[7] = 1.558361f;
    data->d[8] = 0.304418f;
    data->d[9] = -1.164801f;
    data->d[10] = -0.528856f;
    data->d[11] = -1.715338f;
    data->d[12] = -1.449021f;
    data->d[13] = 0.797444f;
    data->d[14] = -1.864767f;
    data->d[15] = 1.426528f;
    data->d[16] = -1.034546f;
    data->d[17] = -0.453523f;
    data->d[18] = -1.500895f;
    data->d[19] = -0.959780f;
    data->d[20] = 1.268688f;
    data->d[21] = -1.386819f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = -0.889891f;
    data->d[2] = -0.736973f;
    data->d[3] = 0.330936f;
    data->d[4] = -3.340062f;
    data->d[5] = 4.266664f;
    data->d[6] = -0.067777f;
    data->d[7] = -1.447271f;
    data->d[8] = -1.875776f;
    data->d[9] = -0.371761f;
    data->d[10] = -0.941628f;
    data->d[11] = 0.346503f;
    data->d[12] = 1.574589f;
    data->d[13] = 13.332661f;
    data->d[14] = 2.985199f;
    data->d[15] = -0.001417f;
    data->d[16] = 0.642647f;
    data->d[17] = -0.480494f;
    data->d[18] = -1.668396f;
    data->d[19] = 3.154120f;
    data->d[20] = -0.024270f;
    data->d[21] = 0.547869f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 2;
    state.m_index = 2;
    state.m_test = 0;
    state.m_seed = 13534558261871376004;
} // LoadState
