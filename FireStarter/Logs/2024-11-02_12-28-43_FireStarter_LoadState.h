#pragma once
#include "FireStarterState.h"

// Run date: 11/02/24 12:28:43 Pacific Daylight Time
// Run duration = 196.359731 seconds
// Run generation = 157
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

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
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
    data->d[0] = -0.61937124f;
    data->d[1] = 1.94581211f;
    data->d[2] = 0.36829153f;
    data->d[3] = -0.03700241f;
    data->d[4] = -6.10041952f;
    data->d[5] = 2.72927237f;
    data->d[6] = -19.93413734f;
    data->d[7] = -12.67198563f;
    data->d[8] = 9.14704609f;
    data->d[9] = 1.59924257f;
    data->d[10] = -5.51875925f;
    data->d[11] = 0.00322234f;
    data->d[12] = -3.10390449f;
    data->d[13] = 2.09512806f;
    data->d[14] = 1.70145428f;
    data->d[15] = -1.25066447f;
    data->d[16] = -5.51924276f;
    data->d[17] = 0.90128487f;
    data->d[18] = 0.82240134f;
    data->d[19] = -2.16999602f;
    data->d[20] = 6.73187399f;
    data->d[21] = 1.84538865f;
    data->d[22] = 1.80961025f;
    data->d[23] = 1.09981275f;
    data->d[24] = 1.08648396f;
    data->d[25] = 0.46042019f;
    data->d[26] = 0.18444213f;
    data->d[27] = -1.71200716f;
    data->d[28] = 0.02349408f;
    data->d[29] = 1.80614293f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 1, 24);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 0, 17);
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
    state.m_generation = 157;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 6443001152866633931;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
