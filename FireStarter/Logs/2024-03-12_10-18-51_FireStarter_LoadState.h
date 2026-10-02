#pragma once
#include "FireStarterState.h"

// Run date: 03/12/24 10:18:51 Pacific Daylight Time
// Run duration = 32528.157369 seconds
// Run generation = 198
// Run evolution = 16
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.341098f;
    data->d[2] = 0.261644f;
    data->d[3] = -3.406425f;
    data->d[4] = -1.578573f;
    data->d[5] = -1.132173f;
    data->d[6] = 0.391928f;
    data->d[7] = -0.000403f;
    data->d[8] = 10.696014f;
    data->d[9] = 0.154227f;
    data->d[10] = 0.286761f;
    data->d[11] = 1.882021f;
    data->d[12] = 0.400184f;
    data->d[13] = 0.552696f;
    data->d[14] = 0.856576f;
    data->d[15] = 1.690859f;
    data->d[16] = 0.060489f;
    data->d[17] = -0.579334f;
    data->d[18] = -1.002835f;
    data->d[19] = -1.302719f;
    data->d[20] = 0.105843f;
    data->d[21] = -0.105843f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.101808f;
    data->d[2] = -2.991595f;
    data->d[3] = -5.370616f;
    data->d[4] = 6.095873f;
    data->d[5] = 0.062330f;
    data->d[6] = -0.492991f;
    data->d[7] = -0.000055f;
    data->d[8] = -45.389374f;
    data->d[9] = 0.841953f;
    data->d[10] = -1.341281f;
    data->d[11] = 1.766520f;
    data->d[12] = -0.237871f;
    data->d[13] = -0.117967f;
    data->d[14] = -0.688506f;
    data->d[15] = -2.417336f;
    data->d[16] = 3.868320f;
    data->d[17] = 2.214369f;
    data->d[18] = 1.131346f;
    data->d[19] = 1.450071f;
    data->d[20] = -0.151534f;
    data->d[21] = 0.033402f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -1.048310f;
    data->d[2] = 1.021281f;
    data->d[3] = 0.924897f;
    data->d[4] = 1.394218f;
    data->d[5] = 0.269507f;
    data->d[6] = 0.185810f;
    data->d[7] = -0.598927f;
    data->d[8] = 0.026296f;
    data->d[9] = -1.329346f;
    data->d[10] = 0.230348f;
    data->d[11] = -0.943194f;
    data->d[12] = 0.018675f;
    data->d[13] = -1.871196f;
    data->d[14] = 4.336285f;
    data->d[15] = -1.251874f;
    data->d[16] = -0.103180f;
    data->d[17] = 1.415976f;
    data->d[18] = -0.517586f;
    data->d[19] = -2.300638f;
    data->d[20] = 0.082549f;
    data->d[21] = 0.441049f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 1, 22);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 12);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 1, 28);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 198;
    state.m_evolution = 16;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 5;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 15;
    state.m_seed = 7435373818614891398;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 198.000000f;
    state.m_optimizeValid = true;
} // LoadState
