#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 11:07:14 Pacific Standard Time
// Run duration = 46.436927 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000029
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000029
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.01417878f;
    data->d[2] = -0.78901613f;
    data->d[3] = 0.69673628f;
    data->d[4] = 5.44619799f;
    data->d[5] = -0.89726663f;
    data->d[6] = 2.03596711f;
    data->d[7] = 1.59151268f;
    data->d[8] = 0.16145337f;
    data->d[9] = 0.37838906f;
    data->d[10] = 4.37340307f;
    data->d[11] = -3.60585237f;
    data->d[12] = -0.92859173f;
    data->d[13] = -1.23742867f;
    data->d[14] = -1.34458709f;
    data->d[15] = -1.98841262f;
    data->d[16] = -0.59536266f;
    data->d[17] = 0.54044020f;
    data->d[18] = 3.38789892f;
    data->d[19] = -2.63747954f;
    data->d[20] = -0.07237746f;
    data->d[21] = 2.02646852f;
    data->d[22] = 0.57739866f;
    data->d[23] = -2.29422832f;
    data->d[24] = 1.22528434f;
    data->d[25] = 0.24737896f;
    data->d[26] = 1.15658915f;
    data->d[27] = -1.42961276f;
    data->d[28] = -1.73537254f;
    data->d[29] = 0.61914968f;
    *(result->MinResult()) = 0.00000029f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000029f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 18);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 1);
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
    state.m_test = 16;
    state.m_seed = 9990268177161889618;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000029f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
