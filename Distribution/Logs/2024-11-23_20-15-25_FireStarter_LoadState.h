#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 20:15:25 Pacific Standard Time
// Run duration = 744.308358 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000062
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
// Run population = 49152
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
    settings.m_population = 49152;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000062
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.22525932f;
    data->d[2] = -0.10239223f;
    data->d[3] = -1.08856380f;
    data->d[4] = -8.96616554f;
    data->d[5] = -3.87437844f;
    data->d[6] = 3.81439137f;
    data->d[7] = -5.22210455f;
    data->d[8] = -3.29502988f;
    data->d[9] = -2.00921488f;
    data->d[10] = -0.00925884f;
    data->d[11] = -3.90192413f;
    data->d[12] = -1.11731255f;
    data->d[13] = 4.11665869f;
    data->d[14] = -5.02894878f;
    data->d[15] = -1.31723964f;
    data->d[16] = 4.73878098f;
    data->d[17] = -0.56706691f;
    data->d[18] = 0.09449150f;
    data->d[19] = -3.59019685f;
    data->d[20] = 0.06382716f;
    data->d[21] = 0.21397562f;
    data->d[22] = -0.31718677f;
    data->d[23] = -1.69977427f;
    data->d[24] = -1.60046685f;
    data->d[25] = 1.50645590f;
    data->d[26] = 0.55986154f;
    data->d[27] = -1.64363992f;
    data->d[28] = 1.57911003f;
    data->d[29] = 1.11471343f;
    *(result->MinResult()) = 0.00000062f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000062f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 0);
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
    state.m_generation = 13;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 1010195753188000835;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000062f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
