#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 11:41:21 Pacific Standard Time
// Run duration = 49.726873 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000093
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

// Variation: 0  result = 0.00000093
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.57079685f;
    data->d[1] = -0.00903619f;
    data->d[2] = 5.98391771f;
    data->d[3] = -3.95081019f;
    data->d[4] = -0.07451629f;
    data->d[5] = -0.10774871f;
    data->d[6] = -1.30926323f;
    data->d[7] = -1.01549172f;
    data->d[8] = 1.37170303f;
    data->d[9] = -2.05687714f;
    data->d[10] = 2.49253416f;
    data->d[11] = 0.68337452f;
    data->d[12] = 0.68399209f;
    data->d[13] = -1.06693733f;
    data->d[14] = -0.19126752f;
    data->d[15] = 0.40376344f;
    data->d[16] = -5.34699821f;
    data->d[17] = -4.28134632f;
    data->d[18] = 0.14949915f;
    data->d[19] = -0.00463718f;
    data->d[20] = -1.95367193f;
    data->d[21] = -0.66208541f;
    data->d[22] = 2.42991829f;
    data->d[23] = -0.18657066f;
    data->d[24] = 1.17539001f;
    data->d[25] = 2.00263381f;
    data->d[26] = 0.46477199f;
    data->d[27] = -0.55261356f;
    data->d[28] = -0.89096552f;
    data->d[29] = -2.06907797f;
    *(result->MinResult()) = 0.00000093f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000093f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 0, 15);
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
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 11;
    state.m_seed = 17216892631235365117;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000093f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
