#pragma once
#include "FireStarterState.h"

// Run date: 11/16/23 11:16:44 Pacific Standard Time
// Run duration = 3184.609855 seconds
// Run generation = 34
// Run evolution = 5
// Run result = 0.00000966
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

// Variation: 0  result = 0.00000125
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.086717f;
    data->d[1] = -0.119503f;
    data->d[2] = -0.017489f;
    data->d[3] = 0.670247f;
    data->d[4] = 0.614039f;
    data->d[5] = -0.667014f;
    data->d[6] = -0.862323f;
    data->d[7] = -0.950555f;
    data->d[8] = 1.215912f;
    data->d[9] = 0.207019f;
    data->d[10] = 0.919499f;
    data->d[11] = 1.196242f;
    data->d[12] = 0.941745f;
    data->d[13] = -11.669564f;
    data->d[14] = -12.914541f;
    data->d[15] = 0.000247f;
    data->d[16] = 2.568773f;
    data->d[17] = -1.762729f;
    data->d[18] = 0.716058f;
    data->d[19] = -1.313167f;
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

// Variation: 1  result = 0.00000966
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.397378f;
    data->d[1] = -0.313871f;
    data->d[2] = 0.715064f;
    data->d[3] = -0.861523f;
    data->d[4] = -0.072175f;
    data->d[5] = 0.737934f;
    data->d[6] = -0.666340f;
    data->d[7] = 1.131272f;
    data->d[8] = 0.550894f;
    data->d[9] = -0.563867f;
    data->d[10] = 0.587901f;
    data->d[11] = 0.747506f;
    data->d[12] = 2.061579f;
    data->d[13] = -0.102100f;
    data->d[14] = 0.002423f;
    data->d[15] = 13.635403f;
    data->d[16] = -1.694393f;
    data->d[17] = 0.760593f;
    data->d[18] = 1.733717f;
    data->d[19] = 0.811227f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation1

// Variation: 2  result = 0.00000584
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.097610f;
    data->d[1] = -0.272018f;
    data->d[2] = 1.029861f;
    data->d[3] = 0.454983f;
    data->d[4] = 0.461655f;
    data->d[5] = -1.643446f;
    data->d[6] = 1.981904f;
    data->d[7] = 0.074963f;
    data->d[8] = 0.865094f;
    data->d[9] = 0.781457f;
    data->d[10] = 0.338234f;
    data->d[11] = 0.621711f;
    data->d[12] = -1.593745f;
    data->d[13] = -1.371772f;
    data->d[14] = 10.445630f;
    data->d[15] = -0.000290f;
    data->d[16] = -2.594288f;
    data->d[17] = 2.203421f;
    data->d[18] = -0.265808f;
    data->d[19] = 1.267870f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000010f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 4);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 1, 26);
    instructions->SetOperation(13, 0, 7);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 21);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 23);
    instructions->SetOperation(30, 0, 17);
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
    state.m_generation = 34;
    state.m_evolution = 5;
    state.m_index = 26;
    state.m_id = 26;
    state.m_copy_id = 26;
    state.m_test = 8;
    state.m_seed = 2875165435087210923;
    state.m_maxResult = 0.000010f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
