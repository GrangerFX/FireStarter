#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 23:48:25 Pacific Standard Time
// Run duration = 2303.720786 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000035
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000035
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.19954753f;
    data->d[1] = -0.62689704f;
    data->d[2] = 1.17044163f;
    data->d[3] = 0.99452418f;
    data->d[4] = -0.14356366f;
    data->d[5] = -0.57330191f;
    data->d[6] = 0.05137445f;
    data->d[7] = -0.78228247f;
    data->d[8] = 1.13551462f;
    data->d[9] = 0.90440452f;
    data->d[10] = -1.84056962f;
    data->d[11] = 1.04398131f;
    data->d[12] = -0.61014909f;
    data->d[13] = -3.52671504f;
    data->d[14] = 9.82150841f;
    data->d[15] = 0.46471521f;
    data->d[16] = -1.39211833f;
    data->d[17] = 0.85784680f;
    data->d[18] = 0.18980345f;
    data->d[19] = 1.46374261f;
    data->d[20] = -1.05556595f;
    data->d[21] = -0.68904543f;
    data->d[22] = -1.07645071f;
    data->d[23] = -1.77687693f;
    data->d[24] = 0.96501487f;
    data->d[25] = 1.94739544f;
    data->d[26] = -1.00944316f;
    data->d[27] = -1.12048161f;
    data->d[28] = 0.50145447f;
    data->d[29] = -0.01811368f;
    *(result->MinResult()) = 0.00000035f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000035f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 1800000374512704831;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000035f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
