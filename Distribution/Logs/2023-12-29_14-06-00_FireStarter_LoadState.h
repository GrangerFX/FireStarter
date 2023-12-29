#pragma once
#include "FireStarterState.h"

// Run date: 12/29/23 14:06:00 Pacific Standard Time
// Run duration = 677.003649 seconds
// Run generation = 15
// Run evolution = 11
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.495251f;
    data->d[1] = -1.555878f;
    data->d[2] = -0.543296f;
    data->d[3] = 2.754165f;
    data->d[4] = -0.836417f;
    data->d[5] = -0.120713f;
    data->d[6] = -1.164602f;
    data->d[7] = 1.856148f;
    data->d[8] = 0.841507f;
    data->d[9] = -2.134428f;
    data->d[10] = -2.149326f;
    data->d[11] = -0.296518f;
    data->d[12] = -2.492100f;
    data->d[13] = -1.119996f;
    data->d[14] = 0.294999f;
    data->d[15] = 1.562915f;
    data->d[16] = 0.013335f;
    data->d[17] = -3.009216f;
    data->d[18] = 3.074855f;
    data->d[19] = 0.516312f;
    data->d[20] = 0.063706f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.101430f;
    data->d[1] = 0.313487f;
    data->d[2] = -0.267616f;
    data->d[3] = -3.571622f;
    data->d[4] = 0.571325f;
    data->d[5] = -0.046934f;
    data->d[6] = 1.792834f;
    data->d[7] = 2.578275f;
    data->d[8] = -0.010140f;
    data->d[9] = -2.216761f;
    data->d[10] = 1.794379f;
    data->d[11] = 1.720720f;
    data->d[12] = -0.221854f;
    data->d[13] = 0.430331f;
    data->d[14] = -1.550617f;
    data->d[15] = -6.429245f;
    data->d[16] = -0.044077f;
    data->d[17] = -0.790707f;
    data->d[18] = -0.929454f;
    data->d[19] = 3.842399f;
    data->d[20] = 0.006335f;
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
    data->d[0] = 0.458937f;
    data->d[1] = -1.201494f;
    data->d[2] = -2.089990f;
    data->d[3] = 0.851780f;
    data->d[4] = -1.051434f;
    data->d[5] = 0.591867f;
    data->d[6] = 0.633542f;
    data->d[7] = -0.229870f;
    data->d[8] = -1.298003f;
    data->d[9] = 2.059686f;
    data->d[10] = -1.237600f;
    data->d[11] = 1.549853f;
    data->d[12] = 0.211789f;
    data->d[13] = 0.068862f;
    data->d[14] = -0.010704f;
    data->d[15] = -0.570799f;
    data->d[16] = -0.039800f;
    data->d[17] = 2.560949f;
    data->d[18] = 1.727345f;
    data->d[19] = 1.657718f;
    data->d[20] = 0.815461f;
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
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 14);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 15;
    state.m_evolution = 11;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 10;
    state.m_id = 142;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 1548722345849542831;
    state.m_oldResult = 0.000004f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
