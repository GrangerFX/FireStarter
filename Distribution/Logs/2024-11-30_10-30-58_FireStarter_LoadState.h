#pragma once
#include "FireStarterState.h"

// Run date: 11/30/24 10:30:58 Pacific Standard Time
// Run duration = 115.484462 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00000061
// Run variations = 1
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
// Run passes = 384
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000061
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.45002869f;
    data->d[2] = -0.16333991f;
    data->d[3] = -4.52919197f;
    data->d[4] = 0.79228103f;
    data->d[5] = 1.35693944f;
    data->d[6] = -1.61932492f;
    data->d[7] = -1.10635996f;
    data->d[8] = 2.58658910f;
    data->d[9] = -1.89678693f;
    data->d[10] = -0.75545228f;
    data->d[11] = 0.76938391f;
    data->d[12] = -10.78130436f;
    data->d[13] = -0.00472790f;
    data->d[14] = 4.21731472f;
    data->d[15] = 0.11131980f;
    data->d[16] = -0.85354185f;
    data->d[17] = -0.19729613f;
    data->d[18] = -2.91586232f;
    data->d[19] = -5.72529793f;
    data->d[20] = -1.98989522f;
    data->d[21] = 1.82639229f;
    data->d[22] = 1.17382038f;
    data->d[23] = 1.00813842f;
    data->d[24] = 0.03483133f;
    data->d[25] = -1.74278164f;
    data->d[26] = -2.41081738f;
    data->d[27] = -2.40194845f;
    data->d[28] = -1.60389233f;
    data->d[29] = -1.23191190f;
    *(result->MinResult()) = 0.00000061f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000061f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 0, 19);
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
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 42;
    state.m_seed = 6078484714300420013;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000061f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
