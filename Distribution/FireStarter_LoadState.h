#pragma once
#include "FireStarterState.h"

// Run date: 11/16/23 12:18:09 Pacific Standard Time
// Run duration = 2802.073358 seconds
// Run generation = 62
// Run evolution = 6
// Run result = 0.00000030
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
// Run tests = 1
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 1;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_optimizations = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -1.069854f;
    data->d[2] = 0.000001f;
    data->d[3] = -0.089776f;
    data->d[4] = -1.380015f;
    data->d[5] = -1.882120f;
    data->d[6] = -0.486069f;
    data->d[7] = -0.104657f;
    data->d[8] = 1.122618f;
    data->d[9] = 3.845614f;
    data->d[10] = -1.531116f;
    data->d[11] = -7.326758f;
    data->d[12] = 0.000012f;
    data->d[13] = -0.573444f;
    data->d[14] = 1.709779f;
    data->d[15] = 2.521526f;
    data->d[16] = -1.133298f;
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
    data->d[0] = -3.090663f;
    data->d[1] = -0.329896f;
    data->d[2] = -0.000005f;
    data->d[3] = -0.007793f;
    data->d[4] = -19.073435f;
    data->d[5] = -1.881323f;
    data->d[6] = -0.466614f;
    data->d[7] = -1.534092f;
    data->d[8] = 0.498854f;
    data->d[9] = 2.326529f;
    data->d[10] = -16.911774f;
    data->d[11] = 0.228551f;
    data->d[12] = 1.944785f;
    data->d[13] = 0.357417f;
    data->d[14] = -2.745348f;
    data->d[15] = 0.832308f;
    data->d[16] = 1.259318f;
    data->d[17] = -0.118137f;
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
    data->d[0] = -2.617994f;
    data->d[1] = -0.117242f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.685472f;
    data->d[4] = -2.995142f;
    data->d[5] = 0.643920f;
    data->d[6] = 2.109969f;
    data->d[7] = 1.028049f;
    data->d[8] = -0.280730f;
    data->d[9] = -1.592881f;
    data->d[10] = -0.762428f;
    data->d[11] = 0.000158f;
    data->d[12] = 19.096891f;
    data->d[13] = 1.262437f;
    data->d[14] = 1.714228f;
    data->d[15] = 0.378566f;
    data->d[16] = -0.024458f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 6);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 1, 11);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 0, 27);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 3);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 1, 28);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 62;
    state.m_evolution = 6;
    state.m_index = 2;
    state.m_id = 2;
    state.m_copy_id = 2;
    state.m_test = 8;
    state.m_seed = 14823045844186941684;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
