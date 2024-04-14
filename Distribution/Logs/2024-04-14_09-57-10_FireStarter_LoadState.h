#pragma once
#include "FireStarterState.h"

// Run date: 04/14/24 09:57:10 Pacific Daylight Time
// Run duration = 258.644692 seconds
// Run generation = 91
// Run evolution = 4
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
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000036
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.862366f;
    data->d[1] = 1.664788f;
    data->d[2] = 2.324904f;
    data->d[3] = 0.453002f;
    data->d[4] = 1.732344f;
    data->d[5] = 1.156271f;
    data->d[6] = 0.082911f;
    data->d[7] = 0.295951f;
    data->d[8] = -1.769618f;
    data->d[9] = -0.576389f;
    data->d[10] = -0.547838f;
    data->d[11] = 0.052249f;
    data->d[12] = -0.516078f;
    data->d[13] = 2.150102f;
    data->d[14] = 1.785455f;
    data->d[15] = 0.041024f;
    data->d[16] = -0.158168f;
    data->d[17] = -4.962473f;
    data->d[18] = -1.712924f;
    data->d[19] = -0.233012f;
    data->d[20] = 2.942215f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.561259f;
    data->d[1] = 1.510901f;
    data->d[2] = 0.546660f;
    data->d[3] = 2.495851f;
    data->d[4] = -0.421609f;
    data->d[5] = 4.467218f;
    data->d[6] = 0.142214f;
    data->d[7] = 0.033261f;
    data->d[8] = -3.266136f;
    data->d[9] = 0.952296f;
    data->d[10] = 0.400757f;
    data->d[11] = 0.040077f;
    data->d[12] = 1.098881f;
    data->d[13] = 1.548457f;
    data->d[14] = 0.684513f;
    data->d[15] = -0.732751f;
    data->d[16] = -0.082707f;
    data->d[17] = 0.243379f;
    data->d[18] = 1.075559f;
    data->d[19] = 0.834315f;
    data->d[20] = 0.782214f;
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

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.439522f;
    data->d[1] = 1.685939f;
    data->d[2] = 0.659151f;
    data->d[3] = -0.369431f;
    data->d[4] = 1.650232f;
    data->d[5] = 2.043540f;
    data->d[6] = 0.370130f;
    data->d[7] = 1.853898f;
    data->d[8] = 2.138027f;
    data->d[9] = -0.143896f;
    data->d[10] = 1.862470f;
    data->d[11] = 0.014486f;
    data->d[12] = 1.074259f;
    data->d[13] = -1.235621f;
    data->d[14] = -0.543849f;
    data->d[15] = 0.011875f;
    data->d[16] = -0.007819f;
    data->d[17] = 0.871818f;
    data->d[18] = 1.964288f;
    data->d[19] = 1.241052f;
    data->d[20] = 0.433213f;
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
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 0, 21);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 1, 18);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 91;
    state.m_evolution = 4;
    state.m_index = 13;
    state.m_copy_index = 27;
    state.m_id = 27;
    state.m_test = 0;
    state.m_seed = 177244759606146338;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000021f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001856f;
    state.m_optimizeValid = true;
} // LoadState
