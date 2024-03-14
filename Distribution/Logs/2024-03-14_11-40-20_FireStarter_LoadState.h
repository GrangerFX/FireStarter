#pragma once
#include "FireStarterState.h"

// Run date: 03/14/24 11:40:20 Pacific Daylight Time
// Run duration = 17603.368055 seconds
// Run generation = 2499
// Run evolution = 22
// Run max result = 0.00000027
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
    data->d[0] = 1.096934f;
    data->d[1] = -1.278390f;
    data->d[2] = -0.312256f;
    data->d[3] = 0.676885f;
    data->d[4] = 0.676887f;
    data->d[5] = -0.081129f;
    data->d[6] = 0.001013f;
    data->d[7] = 1.904422f;
    data->d[8] = -1.188568f;
    data->d[9] = -0.151394f;
    data->d[10] = 1.931126f;
    data->d[11] = -1.769258f;
    data->d[12] = -0.482700f;
    data->d[13] = -0.903165f;
    data->d[14] = -2.817985f;
    data->d[15] = -0.552719f;
    data->d[16] = 17.193239f;
    data->d[17] = -2.257001f;
    data->d[18] = -0.000001f;
    data->d[19] = 1.308216f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.491304f;
    data->d[1] = -4.557965f;
    data->d[2] = 0.136171f;
    data->d[3] = -0.006966f;
    data->d[4] = -0.006962f;
    data->d[5] = 1.355413f;
    data->d[6] = -0.249578f;
    data->d[7] = 1.070016f;
    data->d[8] = -0.086406f;
    data->d[9] = -0.998760f;
    data->d[10] = 1.006492f;
    data->d[11] = 0.161729f;
    data->d[12] = -1.562706f;
    data->d[13] = -0.796359f;
    data->d[14] = -791.172668f;
    data->d[15] = 0.008147f;
    data->d[16] = -27.723024f;
    data->d[17] = -4.682571f;
    data->d[18] = -0.069764f;
    data->d[19] = -0.361642f;
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

// Variation: 2  result = 0.00000027
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.458070f;
    data->d[1] = -1.296952f;
    data->d[2] = -1.360527f;
    data->d[3] = -0.132963f;
    data->d[4] = -0.132959f;
    data->d[5] = 0.619946f;
    data->d[6] = -1.628529f;
    data->d[7] = -1.885914f;
    data->d[8] = 0.286772f;
    data->d[9] = -0.997265f;
    data->d[10] = -0.532495f;
    data->d[11] = -0.355037f;
    data->d[12] = 1.251132f;
    data->d[13] = -1.950079f;
    data->d[14] = -8.497287f;
    data->d[15] = 0.001391f;
    data->d[16] = -1.047225f;
    data->d[17] = 22.704212f;
    data->d[18] = 0.020157f;
    data->d[19] = 1.144135f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 19);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 22);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 1, 27);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 28);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 2499;
    state.m_evolution = 22;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 7;
    state.m_test = 14;
    state.m_seed = 17118134224518685021;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000193f;
    state.m_optimizeValid = true;
} // LoadState
