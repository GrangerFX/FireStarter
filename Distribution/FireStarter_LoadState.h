#pragma once
#include "FireStarterState.h"

// Run date: 11/18/23 15:54:29 Pacific Standard Time
// Run duration = 26539.557400 seconds
// Run generation = 19
// Run evolution = 6
// Run result = 0.00000155
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
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
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
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

// Variation: 0  result = 0.00000068
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.359297f;
    data->d[1] = -1.219326f;
    data->d[2] = -1.562967f;
    data->d[3] = 1.450760f;
    data->d[4] = -0.247742f;
    data->d[5] = 1.243397f;
    data->d[6] = -0.010554f;
    data->d[7] = -0.676731f;
    data->d[8] = 0.540558f;
    data->d[9] = -0.005534f;
    data->d[10] = 2.344344f;
    data->d[11] = -1.484158f;
    data->d[12] = -0.757821f;
    data->d[13] = -2.217932f;
    data->d[14] = -1.535477f;
    data->d[15] = -1.914734f;
    data->d[16] = -4.960917f;
    data->d[17] = -0.042847f;
    data->d[18] = 0.828651f;
    data->d[19] = -1.562963f;
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

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.281910f;
    data->d[1] = -0.087446f;
    data->d[2] = -1.721300f;
    data->d[3] = -0.670199f;
    data->d[4] = 0.824931f;
    data->d[5] = 2.135885f;
    data->d[6] = -0.011434f;
    data->d[7] = -1.954006f;
    data->d[8] = -0.553012f;
    data->d[9] = -0.050206f;
    data->d[10] = -0.555239f;
    data->d[11] = 1.237272f;
    data->d[12] = -0.358167f;
    data->d[13] = 2.721267f;
    data->d[14] = 3.170575f;
    data->d[15] = 1.052406f;
    data->d[16] = 0.033750f;
    data->d[17] = 1.226980f;
    data->d[18] = 1.073598f;
    data->d[19] = -1.839431f;
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

// Variation: 2  result = 0.00000155
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.383394f;
    data->d[1] = -0.300590f;
    data->d[2] = -1.934005f;
    data->d[3] = -0.131181f;
    data->d[4] = 3.411357f;
    data->d[5] = 1.095340f;
    data->d[6] = 0.015551f;
    data->d[7] = 1.471091f;
    data->d[8] = 2.384481f;
    data->d[9] = -1.067937f;
    data->d[10] = 0.764265f;
    data->d[11] = 0.299117f;
    data->d[12] = 0.304382f;
    data->d[13] = 1.170010f;
    data->d[14] = 0.807437f;
    data->d[15] = -3.657017f;
    data->d[16] = 0.430828f;
    data->d[17] = 0.125101f;
    data->d[18] = 1.825487f;
    data->d[19] = -1.410401f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 1, 3);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 1, 0);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 1, 24);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 18);
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
    state.m_generation = 19;
    state.m_evolution = 6;
    state.m_index = 57;
    state.m_id = 25;
    state.m_copy_id = 25;
    state.m_test = 8;
    state.m_seed = 8282141485381923620;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
