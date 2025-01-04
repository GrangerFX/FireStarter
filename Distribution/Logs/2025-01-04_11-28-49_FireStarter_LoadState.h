#pragma once
#include "FireStarterState.h"

// Run date: 01/04/25 11:28:49 Pacific Standard Time
// Run duration = 886.672647 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000057
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

// Variation: 0  result = 0.00000057
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.40071034f;
    data->d[1] = -0.74088228f;
    data->d[2] = -1.01569641f;
    data->d[3] = 0.19667955f;
    data->d[4] = -2.54359674f;
    data->d[5] = -0.48429626f;
    data->d[6] = 1.71761918f;
    data->d[7] = 0.30803353f;
    data->d[8] = 2.47393084f;
    data->d[9] = -1.06143987f;
    data->d[10] = 1.12648654f;
    data->d[11] = -0.74851036f;
    data->d[12] = -0.17531872f;
    data->d[13] = -3.87664986f;
    data->d[14] = -0.67964935f;
    data->d[15] = -0.08274765f;
    data->d[16] = 0.63104850f;
    data->d[17] = 2.20024610f;
    data->d[18] = 2.98594809f;
    data->d[19] = 1.52775693f;
    data->d[20] = -2.50553799f;
    data->d[21] = 2.35015440f;
    data->d[22] = -0.49873841f;
    data->d[23] = -0.46665275f;
    data->d[24] = -2.15290308f;
    data->d[25] = -0.88753700f;
    data->d[26] = -0.93010092f;
    data->d[27] = 0.63673073f;
    data->d[28] = -1.01839554f;
    data->d[29] = 1.25702906f;
    *(result->MinResult()) = 0.00000057f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000057f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 4);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 14);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 4);
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
    state.m_generation = 3;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 12194080991700189152;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000057f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
