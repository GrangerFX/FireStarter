#pragma once
#include "FireStarterState.h"

// Run date: 09/18/23 19:57:37 Pacific Daylight Time
// Run duration = 6627.397625 seconds
// Run generation = 9
// Run evolution = 4
// Run result = 0.00001729
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
// Run tests = 16
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000879
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.584907f;
    data->d[1] = -0.230084f;
    data->d[2] = 0.116366f;
    data->d[3] = -1.167610f;
    data->d[4] = 0.758566f;
    data->d[5] = -1.171529f;
    data->d[6] = 0.558339f;
    data->d[7] = 0.822819f;
    data->d[8] = 1.479168f;
    data->d[9] = 0.621029f;
    data->d[10] = 1.285535f;
    data->d[11] = -2.620171f;
    data->d[12] = 0.647173f;
    data->d[13] = 0.306445f;
    data->d[14] = 1.457189f;
    data->d[15] = -0.557453f;
    data->d[16] = 0.790765f;
    data->d[17] = 2.153092f;
    data->d[18] = 0.307120f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation0

// Variation: 1  result = 0.00000513
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.349397f;
    data->d[1] = -0.315354f;
    data->d[2] = -0.272386f;
    data->d[3] = 1.281778f;
    data->d[4] = -1.257792f;
    data->d[5] = 1.439268f;
    data->d[6] = 0.270903f;
    data->d[7] = -0.477234f;
    data->d[8] = -0.858692f;
    data->d[9] = 1.485330f;
    data->d[10] = -0.204969f;
    data->d[11] = 1.373670f;
    data->d[12] = -1.829818f;
    data->d[13] = -0.507086f;
    data->d[14] = -2.019891f;
    data->d[15] = -1.704454f;
    data->d[16] = -1.066950f;
    data->d[17] = -0.228425f;
    data->d[18] = -0.275609f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00001729
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.544712f;
    data->d[1] = 0.318601f;
    data->d[2] = -0.313555f;
    data->d[3] = -0.412772f;
    data->d[4] = 0.370144f;
    data->d[5] = -0.913523f;
    data->d[6] = -0.773197f;
    data->d[7] = 2.164651f;
    data->d[8] = -1.650217f;
    data->d[9] = -0.876997f;
    data->d[10] = -1.421026f;
    data->d[11] = 1.393477f;
    data->d[12] = 2.243513f;
    data->d[13] = 4.304166f;
    data->d[14] = 0.793558f;
    data->d[15] = 0.886846f;
    data->d[16] = -2.029157f;
    data->d[17] = -0.080584f;
    data->d[18] = 0.723141f;
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
    *(result->MinResult()) = 0.000017f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 1);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 5);
    instructions->SetOperation(25, 1, 21);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 9;
    state.m_evolution = 4;
    state.m_age = 0;
    state.m_index = 1;
    state.m_id = 59;
    state.m_copy_id = 62;
    state.m_test = 8;
    state.m_seed = 3366268200943661962;
    state.m_maxResult = 0.000017f;
    state.m_optimizePass = false;
} // LoadState
