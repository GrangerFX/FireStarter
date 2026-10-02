#pragma once
#include "FireStarterState.h"

// Run date: 11/29/23 17:35:57 Pacific Standard Time
// Run duration = 4900.445085 seconds
// Run generation = 108
// Run evolution = 10
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
    data->d[0] = 0.460031f;
    data->d[1] = -1.445231f;
    data->d[2] = -0.315063f;
    data->d[3] = -1.719347f;
    data->d[4] = -0.255231f;
    data->d[5] = -0.017941f;
    data->d[6] = 2.374115f;
    data->d[7] = -1.610226f;
    data->d[8] = -0.254992f;
    data->d[9] = -3.727961f;
    data->d[10] = 2.045360f;
    data->d[11] = 1.824739f;
    data->d[12] = -0.043580f;
    data->d[13] = 0.297047f;
    data->d[14] = -0.189349f;
    data->d[15] = 0.189349f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.461292f;
    data->d[1] = 1.425697f;
    data->d[2] = 1.460648f;
    data->d[3] = 1.321598f;
    data->d[4] = -1.590333f;
    data->d[5] = -0.037733f;
    data->d[6] = 1.613232f;
    data->d[7] = -0.399838f;
    data->d[8] = -0.672824f;
    data->d[9] = 1.651483f;
    data->d[10] = -0.804679f;
    data->d[11] = -2.180287f;
    data->d[12] = -0.004032f;
    data->d[13] = -3.615141f;
    data->d[14] = -0.008335f;
    data->d[15] = -0.109797f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.466029f;
    data->d[1] = 1.220061f;
    data->d[2] = 2.292262f;
    data->d[3] = 0.095892f;
    data->d[4] = -1.555118f;
    data->d[5] = -0.679190f;
    data->d[6] = 1.307391f;
    data->d[7] = 0.344587f;
    data->d[8] = 0.642319f;
    data->d[9] = -0.212023f;
    data->d[10] = 0.460784f;
    data->d[11] = 0.315397f;
    data->d[12] = -0.139724f;
    data->d[13] = -1.795632f;
    data->d[14] = 0.124436f;
    data->d[15] = 0.399163f;
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
    instructions->SetOperation(0, 0, 15);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 8);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 1, 23);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 108;
    state.m_evolution = 10;
    state.m_index = 0;
    state.m_copy_index = 11;
    state.m_id = 53;
    state.m_copy_id = 57;
    state.m_test = 15;
    state.m_seed = 982187665077122376;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
