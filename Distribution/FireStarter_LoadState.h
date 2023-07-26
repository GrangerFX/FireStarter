#pragma once
#include "FireStarterState.h"

// Run date: 07/26/23 09:30:00 Pacific Daylight Time
// Run duration = 1717.933778 seconds
// Run generation = 35
// Run evolution = 0
// Run result = 0.00000551
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000551
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.417574f;
    data->d[2] = -0.847406f;
    data->d[3] = 2.053336f;
    data->d[4] = 0.229137f;
    data->d[5] = 1.964846f;
    data->d[6] = 5.484389f;
    data->d[7] = 0.546840f;
    data->d[8] = -3.093202f;
    data->d[9] = -0.004586f;
    data->d[10] = 1.361631f;
    data->d[11] = 0.326433f;
    data->d[12] = 0.910005f;
    data->d[13] = 0.885022f;
    data->d[14] = 0.002645f;
    data->d[15] = 0.695942f;
    data->d[16] = -0.949501f;
    data->d[17] = 1.535118f;
    data->d[18] = -1.947865f;
    data->d[19] = -0.980172f;
    data->d[20] = -0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

// Variation: 1  result = 0.00000119
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.114176f;
    data->d[2] = -0.969282f;
    data->d[3] = 1.558269f;
    data->d[4] = 0.029912f;
    data->d[5] = 2.695070f;
    data->d[6] = 36.162811f;
    data->d[7] = 1.549320f;
    data->d[8] = -0.812609f;
    data->d[9] = 0.120467f;
    data->d[10] = -2.814660f;
    data->d[11] = 1.109250f;
    data->d[12] = 1.391417f;
    data->d[13] = 0.563396f;
    data->d[14] = -1.515583f;
    data->d[15] = 1.555015f;
    data->d[16] = -0.822221f;
    data->d[17] = -1.653771f;
    data->d[18] = -0.117461f;
    data->d[19] = 18.421268f;
    data->d[20] = -0.118132f;
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

// Variation: 2  result = 0.00000453
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = 1.778908f;
    data->d[2] = -0.094140f;
    data->d[3] = -0.901922f;
    data->d[4] = -0.679716f;
    data->d[5] = 1.179635f;
    data->d[6] = -2.591807f;
    data->d[7] = -2.730304f;
    data->d[8] = -1.502302f;
    data->d[9] = -0.043481f;
    data->d[10] = 0.701174f;
    data->d[11] = -0.460151f;
    data->d[12] = 0.236693f;
    data->d[13] = -1.192018f;
    data->d[14] = 1.444279f;
    data->d[15] = 2.238567f;
    data->d[16] = -0.581867f;
    data->d[17] = 1.861765f;
    data->d[18] = 1.396070f;
    data->d[19] = 0.796950f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 0, 25);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 1, 0);
    instructions->SetOperation(14, 1, 12);
    instructions->SetOperation(15, 1, 28);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 11);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 23);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 35;
    state.m_evolution = 0;
    state.m_index = 6;
    state.m_test = 13;
    state.m_seed = 12214203961293996191;
} // LoadState
