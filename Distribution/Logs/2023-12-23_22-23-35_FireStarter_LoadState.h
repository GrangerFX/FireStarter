#pragma once
#include "FireStarterState.h"

// Run date: 12/23/23 22:23:35 Pacific Standard Time
// Run duration = 6608.926894 seconds
// Run generation = 42
// Run evolution = 17
// Run max result = 0.00000012
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.206477f;
    data->d[1] = 1.945997f;
    data->d[2] = -1.726272f;
    data->d[3] = 0.428941f;
    data->d[4] = 0.568788f;
    data->d[5] = -0.568789f;
    data->d[6] = -0.034338f;
    data->d[7] = 0.033405f;
    data->d[8] = 31.457462f;
    data->d[9] = -3.843403f;
    data->d[10] = -0.003710f;
    data->d[11] = -1.772223f;
    data->d[12] = 2.219321f;
    data->d[13] = -5.659759f;
    data->d[14] = -5.306817f;
    data->d[15] = 2.041954f;
    data->d[16] = 0.298023f;
    data->d[17] = -0.677013f;
    data->d[18] = 0.463743f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.128341f;
    data->d[1] = -1.189970f;
    data->d[2] = -0.206598f;
    data->d[3] = 0.999911f;
    data->d[4] = -1.512833f;
    data->d[5] = -0.181351f;
    data->d[6] = 0.774879f;
    data->d[7] = -3.129963f;
    data->d[8] = -12.874247f;
    data->d[9] = -5.704304f;
    data->d[10] = 0.000985f;
    data->d[11] = -0.789731f;
    data->d[12] = 1.173873f;
    data->d[13] = 0.809418f;
    data->d[14] = 0.775169f;
    data->d[15] = -0.401078f;
    data->d[16] = 2.694039f;
    data->d[17] = 1.178929f;
    data->d[18] = -0.710553f;
    data->d[19] = -0.118135f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.265333f;
    data->d[1] = 2.083920f;
    data->d[2] = -0.551022f;
    data->d[3] = -0.838258f;
    data->d[4] = -0.254266f;
    data->d[5] = 0.517659f;
    data->d[6] = 0.122449f;
    data->d[7] = 0.001698f;
    data->d[8] = 9.120271f;
    data->d[9] = 2.394806f;
    data->d[10] = 0.032445f;
    data->d[11] = -1.362914f;
    data->d[12] = 2.621068f;
    data->d[13] = 1.829378f;
    data->d[14] = -1.676080f;
    data->d[15] = -0.805685f;
    data->d[16] = 0.505206f;
    data->d[17] = -0.937528f;
    data->d[18] = 0.198916f;
    data->d[19] = 0.523600f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 17;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 157;
    state.m_copy_id = 21;
    state.m_test = 1;
    state.m_seed = 6628163959115695709;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
