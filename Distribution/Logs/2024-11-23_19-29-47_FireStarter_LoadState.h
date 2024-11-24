#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 19:29:47 Pacific Standard Time
// Run duration = 756.938238 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000017
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
// Run population = 49152
// Run passes = 256
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
    settings.m_population = 49152;
    settings.m_passes = 256;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.41294894f;
    data->d[1] = -1.29731739f;
    data->d[2] = -0.19730148f;
    data->d[3] = 0.86419952f;
    data->d[4] = 4.00375032f;
    data->d[5] = -2.19860864f;
    data->d[6] = 1.22799873f;
    data->d[7] = -1.18128526f;
    data->d[8] = 2.63790107f;
    data->d[9] = 1.65479004f;
    data->d[10] = -0.63738453f;
    data->d[11] = 0.11729643f;
    data->d[12] = -5.33833742f;
    data->d[13] = -0.37808481f;
    data->d[14] = 2.87041640f;
    data->d[15] = -1.64874732f;
    data->d[16] = -0.87870789f;
    data->d[17] = -0.23124288f;
    data->d[18] = 1.77213347f;
    data->d[19] = 1.11897421f;
    data->d[20] = -1.26580453f;
    data->d[21] = -0.98022282f;
    data->d[22] = -0.53435653f;
    data->d[23] = 1.40054357f;
    data->d[24] = -0.11424334f;
    data->d[25] = -0.90858817f;
    data->d[26] = -1.82083964f;
    data->d[27] = -0.90374023f;
    data->d[28] = -1.62966716f;
    data->d[29] = 2.49149919f;
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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 3410533065817118290;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
