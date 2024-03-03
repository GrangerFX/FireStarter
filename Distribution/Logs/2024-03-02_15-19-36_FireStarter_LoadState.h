#pragma once
#include "FireStarterState.h"

// Run date: 03/02/24 15:19:36 Pacific Standard Time
// Run duration = 4356.057876 seconds
// Run generation = 117
// Run evolution = 2
// Run max result = 0.00000370
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
// Run tests = 8
// Run streams = 8
// Run units = 1
// Run states = 4
// Run generations = 0
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
    settings.m_tests = 8;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 4;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000092
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.109812f;
    data->d[2] = 0.195089f;
    data->d[3] = 2.264493f;
    data->d[4] = -0.000443f;
    data->d[5] = 2.959286f;
    data->d[6] = 5.140573f;
    data->d[7] = 3.069860f;
    data->d[8] = -0.247736f;
    data->d[9] = 2.168249f;
    data->d[10] = 2.963445f;
    data->d[11] = -1.723588f;
    data->d[12] = -1.632033f;
    data->d[13] = -0.470628f;
    data->d[14] = -1.789180f;
    data->d[15] = -0.000000f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.180313f;
    data->d[2] = -0.403955f;
    data->d[3] = 1.701357f;
    data->d[4] = -0.017618f;
    data->d[5] = -2.038360f;
    data->d[6] = 0.658160f;
    data->d[7] = 1.659166f;
    data->d[8] = -0.013491f;
    data->d[9] = 2.109884f;
    data->d[10] = 0.891656f;
    data->d[11] = -0.921769f;
    data->d[12] = -1.592333f;
    data->d[13] = 0.170946f;
    data->d[14] = -1.595913f;
    data->d[15] = -0.118132f;
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

// Variation: 2  result = 0.00000370
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = -1.722816f;
    data->d[2] = 0.061492f;
    data->d[3] = -2.060986f;
    data->d[4] = 0.451050f;
    data->d[5] = 0.444887f;
    data->d[6] = -0.144724f;
    data->d[7] = -12.121552f;
    data->d[8] = -0.029171f;
    data->d[9] = -5.556137f;
    data->d[10] = 3.123761f;
    data->d[11] = 2.900181f;
    data->d[12] = 0.100591f;
    data->d[13] = 0.179651f;
    data->d[14] = 0.379108f;
    data->d[15] = 0.523599f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000004f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 0);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 22);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 117;
    state.m_evolution = 2;
    state.m_children0 = 2;
    state.m_children1 = 0;
    state.m_index = 1;
    state.m_copy_index = 119;
    state.m_id = 119;
    state.m_test = 2;
    state.m_seed = 15794669010587116623;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.001413f;
    state.m_maxResult = 0.000004f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
