#pragma once
#include "FireStarterState.h"

// Run date: 01/04/25 11:14:53 Pacific Standard Time
// Run duration = 179.678934 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000005
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

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
    settings.m_patternOpcodes = 2;

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

// Variation: 0  result = 0.00000005
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.66114223f;
    data->d[1] = -1.48045039f;
    data->d[2] = 0.75315487f;
    data->d[3] = -0.90119386f;
    data->d[4] = 3.72383738f;
    data->d[5] = 2.54113960f;
    data->d[6] = -0.01092121f;
    data->d[7] = -0.45025373f;
    data->d[8] = -0.51566643f;
    data->d[9] = 0.47394118f;
    data->d[10] = 0.61074448f;
    data->d[11] = -0.04090624f;
    data->d[12] = -7.18780231f;
    data->d[13] = 1.52864110f;
    data->d[14] = 10.92085171f;
    data->d[15] = 4.91928148f;
    data->d[16] = 0.16114920f;
    data->d[17] = 0.21320084f;
    data->d[18] = -0.53643823f;
    data->d[19] = -0.36784613f;
    data->d[20] = 2.49411774f;
    data->d[21] = -1.57016397f;
    data->d[22] = -0.22646302f;
    data->d[23] = 2.38367128f;
    data->d[24] = -1.93030405f;
    data->d[25] = -2.37593579f;
    data->d[26] = 2.47577763f;
    data->d[27] = -1.73722565f;
    data->d[28] = 0.36325213f;
    data->d[29] = 1.99530697f;
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
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 7);
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
    state.m_test = 51;
    state.m_seed = 3962677496805213106;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000005f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
