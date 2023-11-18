#pragma once
#include "FireStarterState.h"

// Run date: 11/18/23 13:45:40 Pacific Standard Time
// Run duration = 357.271534 seconds
// Run generation = 77
// Run evolution = 20
// Run result = 0.00011456
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run seeds = 1
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 100
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_seeds = 1;
    settings.m_units = 1;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00004768
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.452961f;
    data->d[1] = 0.546932f;
    data->d[2] = 1.100922f;
    data->d[3] = -0.081492f;
    data->d[4] = -0.262834f;
    data->d[5] = 0.634312f;
    data->d[6] = 0.057031f;
    data->d[7] = 1.503193f;
    data->d[8] = -1.026152f;
    data->d[9] = -1.155953f;
    data->d[10] = -0.640940f;
    data->d[11] = 0.091095f;
    data->d[12] = 2.327865f;
    data->d[13] = 3.272290f;
    data->d[14] = 0.574600f;
    data->d[15] = -6.680267f;
    data->d[16] = -0.002080f;
    data->d[17] = -1.316858f;
    data->d[18] = -1.020475f;
    data->d[19] = -1.395573f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000048f;
} // LoadVariation0

// Variation: 1  result = 0.00002956
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.922466f;
    data->d[1] = 0.246644f;
    data->d[2] = -2.082103f;
    data->d[3] = -0.601943f;
    data->d[4] = 0.113033f;
    data->d[5] = 5.090116f;
    data->d[6] = 0.004873f;
    data->d[7] = -0.715175f;
    data->d[8] = -0.535123f;
    data->d[9] = 1.260376f;
    data->d[10] = -1.484634f;
    data->d[11] = 1.976434f;
    data->d[12] = 2.349407f;
    data->d[13] = 1.773547f;
    data->d[14] = 1.217455f;
    data->d[15] = 0.000095f;
    data->d[16] = -18.793051f;
    data->d[17] = -0.064000f;
    data->d[18] = 0.238179f;
    data->d[19] = 2.389768f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000030f;
} // LoadVariation1

// Variation: 2  result = 0.00011456
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.878773f;
    data->d[1] = -0.156283f;
    data->d[2] = -0.438105f;
    data->d[3] = 1.148565f;
    data->d[4] = -0.181814f;
    data->d[5] = -0.000950f;
    data->d[6] = 5.743040f;
    data->d[7] = 0.904440f;
    data->d[8] = 0.799232f;
    data->d[9] = -0.845072f;
    data->d[10] = 1.345369f;
    data->d[11] = -5.350618f;
    data->d[12] = -0.710994f;
    data->d[13] = 1.387900f;
    data->d[14] = -1.805534f;
    data->d[15] = -0.479109f;
    data->d[16] = -1.095811f;
    data->d[17] = -0.800763f;
    data->d[18] = -1.357805f;
    data->d[19] = -1.558260f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000115f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000115f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 1, 15);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 28);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 11);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 0, 9);
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
    state.m_generation = 77;
    state.m_evolution = 20;
    state.m_index = 48;
    state.m_id = 48;
    state.m_copy_id = 48;
    state.m_test = 14;
    state.m_seed = 4825790501582133486;
    state.m_maxResult = 0.000115f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
