#pragma once
#include "FireStarterState.h"

// Run date: 05/05/24 11:00:58 Pacific Daylight Time
// Run duration = 1672.372573 seconds
// Run generation = 170
// Run evolution = 10
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
    settings.m_registers = 30;
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
    data->d[0] = 0.217072f;
    data->d[1] = -0.681952f;
    data->d[2] = -4.707121f;
    data->d[3] = -0.183500f;
    data->d[4] = 0.747509f;
    data->d[5] = -2.659740f;
    data->d[6] = -2.822882f;
    data->d[7] = 1.471637f;
    data->d[8] = -2.202505f;
    data->d[9] = 0.002760f;
    data->d[10] = -0.885663f;
    data->d[11] = -0.224436f;
    data->d[12] = 0.399374f;
    data->d[13] = -1.195979f;
    data->d[14] = -1.750590f;
    data->d[15] = 8.422576f;
    data->d[16] = 0.176281f;
    data->d[17] = 2.082932f;
    data->d[18] = -1.492419f;
    data->d[19] = 0.058492f;
    data->d[20] = 0.751975f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.420253f;
    data->d[1] = 1.298859f;
    data->d[2] = -1.497754f;
    data->d[3] = 2.808725f;
    data->d[4] = -1.329554f;
    data->d[5] = 0.787697f;
    data->d[6] = -0.503426f;
    data->d[7] = 4.900969f;
    data->d[8] = 0.010532f;
    data->d[9] = 0.398923f;
    data->d[10] = 0.030886f;
    data->d[11] = 3.475851f;
    data->d[12] = 2.911318f;
    data->d[13] = 1.182649f;
    data->d[14] = 0.004984f;
    data->d[15] = 0.576078f;
    data->d[16] = 0.043261f;
    data->d[17] = 1.576402f;
    data->d[18] = -1.669120f;
    data->d[19] = 2.201918f;
    data->d[20] = 0.647929f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.460682f;
    data->d[1] = -1.206062f;
    data->d[2] = -0.608121f;
    data->d[3] = -0.648838f;
    data->d[4] = -2.076603f;
    data->d[5] = -1.342647f;
    data->d[6] = -1.227751f;
    data->d[7] = -0.719850f;
    data->d[8] = 3.115530f;
    data->d[9] = 0.008486f;
    data->d[10] = -0.675234f;
    data->d[11] = -0.902770f;
    data->d[12] = 1.365604f;
    data->d[13] = -0.253137f;
    data->d[14] = -0.125569f;
    data->d[15] = 1.555856f;
    data->d[16] = 3.546870f;
    data->d[17] = -0.362838f;
    data->d[18] = 0.346054f;
    data->d[19] = -0.555783f;
    data->d[20] = -0.472734f;
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
    instructions->SetOperation(0, 0, 9);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 24);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 23);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 9);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 1, 18);
    instructions->SetOperation(31, 1, 7);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 170;
    state.m_evolution = 10;
    state.m_index = 3;
    state.m_copy_index = 142;
    state.m_id = 142;
    state.m_test = 0;
    state.m_seed = 13638796317307490926;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000167f;
    state.m_optimizeValid = true;
} // LoadState
