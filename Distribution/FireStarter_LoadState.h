#pragma once
#include "FireStarterState.h"

// Run date: 08/13/23 12:19:50 Pacific Daylight Time
// Run duration = 2723.544094 seconds
// Run generation = 105
// Run evolution = 13
// Run result = 0.00000114
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.078722f;
    data->d[2] = 2.024390f;
    data->d[3] = 0.007017f;
    data->d[4] = 0.547821f;
    data->d[5] = 1.039582f;
    data->d[6] = 1.374652f;
    data->d[7] = -1.258020f;
    data->d[8] = 0.757720f;
    data->d[9] = 0.252697f;
    data->d[10] = 1.170174f;
    data->d[11] = 2.365601f;
    data->d[12] = 0.514362f;
    data->d[13] = -0.000236f;
    data->d[14] = 0.375778f;
    data->d[15] = 1.906098f;
    data->d[16] = -0.333246f;
    data->d[17] = 1.481362f;
    data->d[18] = 0.000001f;
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

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090662f;
    data->d[1] = -0.127011f;
    data->d[2] = -0.577487f;
    data->d[3] = -0.041718f;
    data->d[4] = -0.085894f;
    data->d[5] = -3.466774f;
    data->d[6] = 0.632368f;
    data->d[7] = -2.177613f;
    data->d[8] = 0.164536f;
    data->d[9] = -1.369517f;
    data->d[10] = -3.507064f;
    data->d[11] = -0.484492f;
    data->d[12] = 1.937307f;
    data->d[13] = 0.000033f;
    data->d[14] = -0.644198f;
    data->d[15] = -1.738832f;
    data->d[16] = -1.746025f;
    data->d[17] = -1.679533f;
    data->d[18] = -0.118137f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000114
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.179852f;
    data->d[2] = 0.315263f;
    data->d[3] = 0.137756f;
    data->d[4] = 0.598085f;
    data->d[5] = -0.046896f;
    data->d[6] = -1.609656f;
    data->d[7] = 1.538032f;
    data->d[8] = 2.088044f;
    data->d[9] = -1.776409f;
    data->d[10] = 1.195002f;
    data->d[11] = 2.173595f;
    data->d[12] = -1.630554f;
    data->d[13] = -0.000745f;
    data->d[14] = 0.023948f;
    data->d[15] = -2.305167f;
    data->d[16] = -2.631697f;
    data->d[17] = -0.121382f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 5);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 23);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 0, 8);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 105;
    state.m_evolution = 13;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16973033946656999615;
} // LoadState
