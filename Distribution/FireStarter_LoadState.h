#pragma once
#include "FireStarterState.h"

// Run date: 12/28/24 11:38:16 Pacific Standard Time
// Run duration = 81.084217 seconds
// Run generation = 710
// Run evolution = 0
// Run max result = 0.41665831
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 1000
// Run population = 65536
// Run passes = 1
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

    settings.m_mode = FIRESTARTER_EVOLVE_NEW;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 1000;
    settings.m_population = 65536;
    settings.m_passes = 1;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.41665831
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.62981868f;
    data->d[1] = -0.52226114f;
    data->d[2] = -1.30030715f;
    data->d[3] = 0.27053881f;
    data->d[4] = -0.51777315f;
    data->d[5] = 1.99543357f;
    data->d[6] = -1.34538341f;
    data->d[7] = 0.11161298f;
    data->d[8] = 2.04136729f;
    data->d[9] = -1.54356480f;
    data->d[10] = -0.85706031f;
    data->d[11] = -0.30323160f;
    data->d[12] = 1.92201650f;
    data->d[13] = -5.41100550f;
    data->d[14] = -0.00336188f;
    data->d[15] = 4.40935946f;
    data->d[16] = 0.29204541f;
    data->d[17] = -0.16263479f;
    data->d[18] = 0.36312640f;
    data->d[19] = 4.50626945f;
    data->d[20] = 3.31191444f;
    data->d[21] = 7.58863354f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.41665831f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.41665831f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 1, 11);
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
    state.m_generation = 710;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.41665846f;
    state.m_maxResult = 0.41665831f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
