#pragma once
#include "FireStarterState.h"

// Run date: 06/30/24 23:12:04 Pacific Daylight Time
// Run duration = 706.130969 seconds
// Run generation = 501
// Run evolution = 9
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 2.060350f;
    data->d[2] = 0.266491f;
    data->d[3] = -2.326841f;
    data->d[4] = 0.506169f;
    data->d[5] = 0.316836f;
    data->d[6] = -0.361217f;
    data->d[7] = 0.052213f;
    data->d[8] = 2.954967f;
    data->d[9] = -1.303303f;
    data->d[10] = 1.937828f;
    data->d[11] = 3.640424f;
    data->d[12] = 20.888811f;
    data->d[13] = 0.000001f;
    data->d[14] = 1.470407f;
    data->d[15] = -2.146535f;
    data->d[16] = -1.946608f;
    data->d[17] = -0.260324f;
    data->d[18] = -0.479888f;
    data->d[19] = 0.663467f;
    data->d[20] = -0.183579f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090641f;
    data->d[1] = -1.580381f;
    data->d[2] = 0.578263f;
    data->d[3] = 1.002092f;
    data->d[4] = 0.373577f;
    data->d[5] = 0.649760f;
    data->d[6] = -0.457185f;
    data->d[7] = 0.431141f;
    data->d[8] = 0.001355f;
    data->d[9] = 0.383929f;
    data->d[10] = 0.008886f;
    data->d[11] = 4.246510f;
    data->d[12] = -3.214458f;
    data->d[13] = -1.934922f;
    data->d[14] = -0.693339f;
    data->d[15] = -2.927500f;
    data->d[16] = -0.472005f;
    data->d[17] = -2.880502f;
    data->d[18] = 0.221634f;
    data->d[19] = -0.077136f;
    data->d[20] = -0.262638f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617991f;
    data->d[1] = -0.469377f;
    data->d[2] = -1.530603f;
    data->d[3] = 1.999976f;
    data->d[4] = 0.096840f;
    data->d[5] = -2.502732f;
    data->d[6] = 0.713674f;
    data->d[7] = -0.235555f;
    data->d[8] = 0.920760f;
    data->d[9] = -2.262859f;
    data->d[10] = 1.547165f;
    data->d[11] = -4.115527f;
    data->d[12] = 10.582428f;
    data->d[13] = 0.000012f;
    data->d[14] = -0.404983f;
    data->d[15] = -3.682687f;
    data->d[16] = 0.071007f;
    data->d[17] = -0.363751f;
    data->d[18] = 0.038913f;
    data->d[19] = 0.592923f;
    data->d[20] = -0.108237f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 1, 5);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 29);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 501;
    state.m_evolution = 9;
    state.m_index = 13;
    state.m_copy_index = 22;
    state.m_id = 22;
    state.m_test = 0;
    state.m_seed = 10086927692631818020;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000477f;
    state.m_optimizeValid = true;
} // LoadState
