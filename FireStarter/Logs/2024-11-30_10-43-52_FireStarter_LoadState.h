#pragma once
#include "FireStarterState.h"

// Run date: 11/30/24 10:43:52 Pacific Standard Time
// Run duration = 782.856065 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000013
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

// Variation: 0  result = 0.00000013
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.22361755f;
    data->d[1] = -0.91797507f;
    data->d[2] = -0.32578325f;
    data->d[3] = -0.15925480f;
    data->d[4] = -1.67909706f;
    data->d[5] = 2.61495256f;
    data->d[6] = -0.46041879f;
    data->d[7] = -0.77887905f;
    data->d[8] = -0.62620223f;
    data->d[9] = -0.01454269f;
    data->d[10] = 2.17796612f;
    data->d[11] = 12.53467274f;
    data->d[12] = 1.24568939f;
    data->d[13] = -1.68048692f;
    data->d[14] = 0.56394732f;
    data->d[15] = -0.58212650f;
    data->d[16] = 2.05427313f;
    data->d[17] = -0.24307962f;
    data->d[18] = 0.80084068f;
    data->d[19] = 1.58599055f;
    data->d[20] = 2.44380808f;
    data->d[21] = -2.36015415f;
    data->d[22] = 0.62289125f;
    data->d[23] = -1.87876248f;
    data->d[24] = -2.29305530f;
    data->d[25] = 0.51223284f;
    data->d[26] = -1.47827911f;
    data->d[27] = -0.42072439f;
    data->d[28] = -0.69577813f;
    data->d[29] = -1.86484706f;
    *(result->MinResult()) = 0.00000013f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000013f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 2);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 4);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 0, 4);
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
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 1800000374512704831;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000013f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
