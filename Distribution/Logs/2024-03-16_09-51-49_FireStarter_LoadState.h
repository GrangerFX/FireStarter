#pragma once
#include "FireStarterState.h"

// Run date: 03/16/24 09:51:49 Pacific Daylight Time
// Run duration = 22057.374755 seconds
// Run generation = 671
// Run evolution = 18
// Run max result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -1.507842f;
    data->d[2] = 0.258789f;
    data->d[3] = 0.780425f;
    data->d[4] = -1.285444f;
    data->d[5] = 0.007305f;
    data->d[6] = 3.389199f;
    data->d[7] = -0.526049f;
    data->d[8] = 0.684149f;
    data->d[9] = 0.292570f;
    data->d[10] = -0.993114f;
    data->d[11] = -3.558899f;
    data->d[12] = -2.671824f;
    data->d[13] = -5.874088f;
    data->d[14] = 0.506468f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000030
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090667f;
    data->d[1] = 0.089913f;
    data->d[2] = 0.088752f;
    data->d[3] = -0.015957f;
    data->d[4] = -2.311903f;
    data->d[5] = 1.676721f;
    data->d[6] = -0.474595f;
    data->d[7] = 3.240408f;
    data->d[8] = -0.208766f;
    data->d[9] = 1.583618f;
    data->d[10] = -2.057393f;
    data->d[11] = -0.000112f;
    data->d[12] = -0.103818f;
    data->d[13] = -194.956039f;
    data->d[14] = -0.627122f;
    data->d[15] = -0.118142f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = 0.181275f;
    data->d[2] = -0.201216f;
    data->d[3] = 0.072951f;
    data->d[4] = -2.347946f;
    data->d[5] = 0.742056f;
    data->d[6] = 1.492409f;
    data->d[7] = -0.493646f;
    data->d[8] = 0.024155f;
    data->d[9] = 3.782131f;
    data->d[10] = -0.998630f;
    data->d[11] = -0.001142f;
    data->d[12] = -0.210365f;
    data->d[13] = -73685.992188f;
    data->d[14] = 0.974817f;
    data->d[15] = 0.523600f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 15);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 1, 1);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 5);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 21);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 671;
    state.m_evolution = 18;
    state.m_index = 5;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 14;
    state.m_seed = 13233658165670687557;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000139f;
    state.m_optimizeValid = true;
} // LoadState
