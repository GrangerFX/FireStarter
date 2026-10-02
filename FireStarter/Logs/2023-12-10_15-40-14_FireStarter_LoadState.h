#pragma once
#include "FireStarterState.h"

// Run date: 12/10/23 15:40:14 Pacific Standard Time
// Run duration = 2611.898879 seconds
// Run generation = 45
// Run evolution = 8
// Run max result = 0.00000012
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
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
    settings.m_seeds = 64;
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
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.508385f;
    data->d[2] = -0.508384f;
    data->d[3] = 0.302277f;
    data->d[4] = -0.534259f;
    data->d[5] = -3.154547f;
    data->d[6] = 1.378852f;
    data->d[7] = 0.000012f;
    data->d[8] = -4.850356f;
    data->d[9] = -0.007261f;
    data->d[10] = 1.096926f;
    data->d[11] = -0.904842f;
    data->d[12] = -0.525401f;
    data->d[13] = 2.459754f;
    data->d[14] = 0.436657f;
    data->d[15] = 1.432516f;
    data->d[16] = 1.531572f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.926152f;
    data->d[2] = -0.926153f;
    data->d[3] = 0.298566f;
    data->d[4] = -1.282309f;
    data->d[5] = -1.458107f;
    data->d[6] = 0.942352f;
    data->d[7] = 0.000041f;
    data->d[8] = 13.397595f;
    data->d[9] = 0.040748f;
    data->d[10] = 1.799615f;
    data->d[11] = -3.137889f;
    data->d[12] = 0.107340f;
    data->d[13] = -3.419211f;
    data->d[14] = -0.503661f;
    data->d[15] = -3.481281f;
    data->d[16] = 0.137585f;
    data->d[17] = -0.118132f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617995f;
    data->d[1] = 2.139120f;
    data->d[2] = -2.139118f;
    data->d[3] = 1.221848f;
    data->d[4] = -3.450951f;
    data->d[5] = -3.625026f;
    data->d[6] = 6.591582f;
    data->d[7] = -0.001230f;
    data->d[8] = 0.009396f;
    data->d[9] = -0.006438f;
    data->d[10] = 0.189491f;
    data->d[11] = 0.418527f;
    data->d[12] = -0.095349f;
    data->d[13] = -0.218043f;
    data->d[14] = 8.970312f;
    data->d[15] = -0.300575f;
    data->d[16] = 0.535677f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 23);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 45;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 11;
    state.m_copy_id = 42;
    state.m_test = 15;
    state.m_seed = 13173107023944794258;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
