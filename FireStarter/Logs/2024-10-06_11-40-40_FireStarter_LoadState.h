#pragma once
#include "FireStarterState.h"

// Run date: 10/06/24 11:40:40 Pacific Daylight Time
// Run duration = 513.224865 seconds
// Run generation = 49
// Run evolution = 0
// Run max result = 0.00000017
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.51485389f;
    data->d[1] = -1.61746120f;
    data->d[2] = -0.16706915f;
    data->d[3] = 1.76365948f;
    data->d[4] = 2.19053316f;
    data->d[5] = 1.13488626f;
    data->d[6] = -0.79610014f;
    data->d[7] = -1.40058780f;
    data->d[8] = 1.04350519f;
    data->d[9] = 0.83301520f;
    data->d[10] = 1.45668805f;
    data->d[11] = -0.00219613f;
    data->d[12] = -1.35097909f;
    data->d[13] = -5.88317013f;
    data->d[14] = -0.14707510f;
    data->d[15] = -0.04426700f;
    data->d[16] = -16.30044746f;
    data->d[17] = -0.70131189f;
    data->d[18] = -3.46766472f;
    data->d[19] = -4.41100550f;
    data->d[20] = -0.76389503f;
    data->d[21] = 1.51965141f;
    data->d[22] = -0.85232413f;
    data->d[23] = -0.69496453f;
    data->d[24] = 1.52011251f;
    data->d[25] = 0.96729612f;
    data->d[26] = 0.31637639f;
    data->d[27] = -0.21003833f;
    data->d[28] = 0.78862780f;
    data->d[29] = -1.54952168f;
    *(result->MinResult()) = 0.00000017f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 1, 21);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 1, 22);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 25);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 49;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00237054f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
