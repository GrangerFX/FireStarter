#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 16:35:18 Pacific Daylight Time
// Run duration = 148.438952 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000018
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 131072;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.02201755f;
    data->d[2] = 2.02627611f;
    data->d[3] = 2.15141559f;
    data->d[4] = 2.12212753f;
    data->d[5] = -4.46191072f;
    data->d[6] = -1.22817421f;
    data->d[7] = -0.06575610f;
    data->d[8] = -1.96010315f;
    data->d[9] = -0.18011008f;
    data->d[10] = 0.26878187f;
    data->d[11] = 0.56104481f;
    data->d[12] = 1.90798700f;
    data->d[13] = -1.89702892f;
    data->d[14] = 0.19624443f;
    data->d[15] = -0.26537552f;
    data->d[16] = 1.23820674f;
    data->d[17] = 3.66619229f;
    data->d[18] = -1.79773331f;
    data->d[19] = -0.04958981f;
    data->d[20] = 1.54065764f;
    data->d[21] = -0.95914233f;
    data->d[22] = -0.25056371f;
    data->d[23] = 0.38024241f;
    data->d[24] = 0.21197477f;
    data->d[25] = 1.70899940f;
    data->d[26] = 1.78995085f;
    data->d[27] = -0.22891894f;
    data->d[28] = 0.36037177f;
    data->d[29] = 1.82699454f;
    *(result->MinResult()) = 0.00000018f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 18);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 28);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 29);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 28);
    instructions->SetOperation(31, 1, 24);
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
    state.m_generation = 15;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 14188645115022533502;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00383753f;
    state.m_maxResult = 0.00000018f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
