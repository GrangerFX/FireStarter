#pragma once
#include "FireStarterState.h"

// Run date: 11/10/24 13:49:14 Pacific Standard Time
// Run duration = 293.229427 seconds
// Run generation = 69
// Run evolution = 0
// Run max result = 0.00000092
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

// Variation: 0  result = 0.00000092
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.99216032f;
    data->d[1] = -2.14943266f;
    data->d[2] = 0.03555733f;
    data->d[3] = -2.72567868f;
    data->d[4] = -0.45588502f;
    data->d[5] = 1.80435371f;
    data->d[6] = -0.83388406f;
    data->d[7] = 1.22637618f;
    data->d[8] = -3.37845993f;
    data->d[9] = 6.15575552f;
    data->d[10] = -3.97964263f;
    data->d[11] = 0.01598636f;
    data->d[12] = 0.48500144f;
    data->d[13] = -10.11637402f;
    data->d[14] = 3.10777187f;
    data->d[15] = -17.28418159f;
    data->d[16] = -0.01718691f;
    data->d[17] = -2.72625184f;
    data->d[18] = -0.10997383f;
    data->d[19] = -1.21228790f;
    data->d[20] = 1.56883240f;
    data->d[21] = -0.95714271f;
    data->d[22] = -0.00000030f;
    data->d[23] = 1.88025391f;
    data->d[24] = -0.28084400f;
    data->d[25] = 1.00775409f;
    data->d[26] = -0.11303281f;
    data->d[27] = -0.89198899f;
    data->d[28] = -0.92674130f;
    data->d[29] = 1.01657319f;
    *(result->MinResult()) = 0.00000092f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000092f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 1, 20);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 1, 4);
    instructions->SetOperation(31, 1, 22);
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
    state.m_generation = 69;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13900609599059075926;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000092f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
