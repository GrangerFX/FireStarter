#pragma once
#include "FireStarterState.h"

// Run date: 11/03/24 18:25:16 Pacific Standard Time
// Run duration = 15.887450 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000000
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000000
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.54165483f;
    data->d[1] = 0.38253188f;
    data->d[2] = -1.38264728f;
    data->d[3] = 0.78102887f;
    data->d[4] = -1.92856336f;
    data->d[5] = 0.90985918f;
    data->d[6] = 0.39018533f;
    data->d[7] = -0.98797834f;
    data->d[8] = -0.30255070f;
    data->d[9] = -0.98191625f;
    data->d[10] = -1.37744045f;
    data->d[11] = -1.12640703f;
    data->d[12] = 1.92859554f;
    data->d[13] = 0.17066553f;
    data->d[14] = 4.16670895f;
    data->d[15] = 0.24819459f;
    data->d[16] = -1.98459482f;
    data->d[17] = -0.00121818f;
    data->d[18] = -2.95102358f;
    data->d[19] = -0.68921137f;
    data->d[20] = -1.17009068f;
    data->d[21] = 0.75527006f;
    data->d[22] = 1.01458204f;
    data->d[23] = 0.11451516f;
    data->d[24] = -0.70753926f;
    data->d[25] = 1.34693050f;
    data->d[26] = 1.36426747f;
    data->d[27] = -1.99360621f;
    data->d[28] = 0.44472873f;
    data->d[29] = -1.62709463f;
    *(result->MinResult()) = 0.00000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 1, 15);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 23);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 17);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 1, 23);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 1, 14);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 26);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 1, 16);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 1, 7);
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
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 1610532691304413459;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
