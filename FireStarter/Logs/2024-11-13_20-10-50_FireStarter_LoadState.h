#pragma once
#include "FireStarterState.h"

// Run date: 11/13/24 20:10:50 Pacific Standard Time
// Run duration = 861.489649 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000005
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
// Run evolveSeed = 123
// Run optimizeSeed = 123
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

// Run scale = 0.300000f
// Run startScale = 2.500000f
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
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
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

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000005
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.81740081f;
    data->d[1] = -1.32419181f;
    data->d[2] = 0.25570124f;
    data->d[3] = -0.24040565f;
    data->d[4] = -1.01027679f;
    data->d[5] = 0.61746061f;
    data->d[6] = 0.96690655f;
    data->d[7] = -0.16066228f;
    data->d[8] = -1.79056466f;
    data->d[9] = 14.04555702f;
    data->d[10] = -0.71309006f;
    data->d[11] = 0.00450107f;
    data->d[12] = 0.98827147f;
    data->d[13] = 0.24970439f;
    data->d[14] = 0.34409317f;
    data->d[15] = 3.03634405f;
    data->d[16] = 5.29689264f;
    data->d[17] = 2.17843437f;
    data->d[18] = -1.12350714f;
    data->d[19] = 1.74296689f;
    data->d[20] = -2.16744065f;
    data->d[21] = 0.51275259f;
    data->d[22] = -1.29421377f;
    data->d[23] = -2.36258006f;
    data->d[24] = -0.65891808f;
    data->d[25] = -2.38362026f;
    data->d[26] = -1.15196538f;
    data->d[27] = -1.12133932f;
    data->d[28] = 1.96600008f;
    data->d[29] = -1.54520643f;
    *(result->MinResult()) = 0.00000005f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 5);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 2);
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
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 14538940456715279162;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000005f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
