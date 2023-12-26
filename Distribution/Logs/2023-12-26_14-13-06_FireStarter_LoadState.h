#pragma once
#include "FireStarterState.h"

// Run date: 12/26/23 14:13:06 Pacific Standard Time
// Run duration = 1867.456953 seconds
// Run generation = 34
// Run evolution = 5
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
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 9.999999f

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
    settings.m_tests = 1;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 9.999999f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.216238f;
    data->d[2] = -0.098932f;
    data->d[3] = 1.050085f;
    data->d[4] = 1.101941f;
    data->d[5] = -0.012375f;
    data->d[6] = 0.529651f;
    data->d[7] = -1.399842f;
    data->d[8] = -0.083728f;
    data->d[9] = -1.921734f;
    data->d[10] = -1.345081f;
    data->d[11] = 0.396566f;
    data->d[12] = 2.468991f;
    data->d[13] = -2.011739f;
    data->d[14] = 1.218219f;
    data->d[15] = -0.086952f;
    data->d[16] = -0.451510f;
    data->d[17] = 1.335292f;
    data->d[18] = 0.362306f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.044681f;
    data->d[2] = 1.895547f;
    data->d[3] = -0.220133f;
    data->d[4] = 1.076706f;
    data->d[5] = 0.019727f;
    data->d[6] = 4.551666f;
    data->d[7] = 1.273704f;
    data->d[8] = 1.265006f;
    data->d[9] = -7.241769f;
    data->d[10] = 0.372921f;
    data->d[11] = 1.655870f;
    data->d[12] = -2.700572f;
    data->d[13] = 0.309289f;
    data->d[14] = -1.704100f;
    data->d[15] = 0.176994f;
    data->d[16] = -2.418125f;
    data->d[17] = 0.509083f;
    data->d[18] = -1.687804f;
    data->d[19] = -0.118132f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.246048f;
    data->d[2] = -0.038361f;
    data->d[3] = -2.152916f;
    data->d[4] = -0.071240f;
    data->d[5] = 0.402462f;
    data->d[6] = -0.686724f;
    data->d[7] = -0.904640f;
    data->d[8] = 0.087843f;
    data->d[9] = -1.656308f;
    data->d[10] = -0.845494f;
    data->d[11] = -1.146505f;
    data->d[12] = -2.458549f;
    data->d[13] = 7.000465f;
    data->d[14] = -1.461375f;
    data->d[15] = -0.047982f;
    data->d[16] = 2.581206f;
    data->d[17] = -0.088157f;
    data->d[18] = 0.590228f;
    data->d[19] = 0.523599f;
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
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 11);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 18);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 34;
    state.m_evolution = 5;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 514;
    state.m_copy_id = 29;
    state.m_test = 9;
    state.m_seed = 9904555894580271261;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
