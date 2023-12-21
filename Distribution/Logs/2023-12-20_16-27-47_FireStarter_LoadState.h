#pragma once
#include "FireStarterState.h"

// Run date: 12/20/23 16:27:47 Pacific Standard Time
// Run duration = 6263.209680 seconds
// Run generation = 26
// Run evolution = 5
// Run max result = 0.00002086
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
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00002086
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.500705f;
    data->d[2] = -0.070940f;
    data->d[3] = 2.489244f;
    data->d[4] = 2.027280f;
    data->d[5] = 1.569405f;
    data->d[6] = -3.159914f;
    data->d[7] = -0.014428f;
    data->d[8] = -3.143429f;
    data->d[9] = -0.975337f;
    data->d[10] = -1.340417f;
    data->d[11] = 0.845471f;
    data->d[12] = -2.270542f;
    data->d[13] = 12.362823f;
    data->d[14] = 0.000077f;
    data->d[15] = 1.803680f;
    data->d[16] = -0.745978f;
    data->d[17] = 0.388482f;
    data->d[18] = 3.481405f;
    data->d[19] = -0.000884f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000021f;
} // LoadVariation0

// Variation: 1  result = 0.00000286
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090662f;
    data->d[1] = -0.165575f;
    data->d[2] = -3.037094f;
    data->d[3] = 0.591834f;
    data->d[4] = 1.313730f;
    data->d[5] = 0.381190f;
    data->d[6] = 5.191225f;
    data->d[7] = 0.434021f;
    data->d[8] = -0.002143f;
    data->d[9] = 6.271496f;
    data->d[10] = 0.844333f;
    data->d[11] = -1.612593f;
    data->d[12] = -0.421325f;
    data->d[13] = 5.525291f;
    data->d[14] = 0.649193f;
    data->d[15] = -4.567702f;
    data->d[16] = -1.037134f;
    data->d[17] = -0.106179f;
    data->d[18] = 0.161910f;
    data->d[19] = 0.105820f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00001132
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618095f;
    data->d[1] = 0.089973f;
    data->d[2] = 4.762103f;
    data->d[3] = 0.145515f;
    data->d[4] = 0.801025f;
    data->d[5] = 1.043930f;
    data->d[6] = -1.853885f;
    data->d[7] = 0.713938f;
    data->d[8] = 1.410249f;
    data->d[9] = -2.538411f;
    data->d[10] = -0.978143f;
    data->d[11] = -1.998657f;
    data->d[12] = -0.906254f;
    data->d[13] = -17.567480f;
    data->d[14] = 0.009024f;
    data->d[15] = 0.066693f;
    data->d[16] = 0.299435f;
    data->d[17] = 16.695316f;
    data->d[18] = -2.107810f;
    data->d[19] = -0.282242f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000021f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 1, 1);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 14);
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
    state.m_generation = 26;
    state.m_evolution = 5;
    state.m_children = 13;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 15;
    state.m_copy_id = 29;
    state.m_test = 0;
    state.m_seed = 7064897308245981138;
    state.m_maxResult = 0.000021f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
