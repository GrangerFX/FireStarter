#pragma once
#include "FireStarterState.h"

// Run date: 12/11/23 22:46:54 Pacific Standard Time
// Run duration = 12470.285950 seconds
// Run generation = 79
// Run evolution = 9
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.099441f;
    data->d[1] = -0.018617f;
    data->d[2] = -1.791041f;
    data->d[3] = -0.654310f;
    data->d[4] = 0.385505f;
    data->d[5] = 1.490211f;
    data->d[6] = 0.119631f;
    data->d[7] = -1.881377f;
    data->d[8] = -1.895663f;
    data->d[9] = 2.007686f;
    data->d[10] = 0.209890f;
    data->d[11] = -0.040210f;
    data->d[12] = 0.472647f;
    data->d[13] = -1.567859f;
    data->d[14] = -0.765254f;
    data->d[15] = 1.260775f;
    data->d[16] = 0.655526f;
    data->d[17] = -0.788457f;
    data->d[18] = 0.441384f;
    data->d[19] = -1.230259f;
    data->d[20] = -0.450525f;
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
    data->d[0] = -3.037634f;
    data->d[1] = -0.092950f;
    data->d[2] = 1.328097f;
    data->d[3] = -0.196438f;
    data->d[4] = -0.716966f;
    data->d[5] = 1.791693f;
    data->d[6] = 0.107095f;
    data->d[7] = -1.072181f;
    data->d[8] = -2.069940f;
    data->d[9] = 1.270056f;
    data->d[10] = 0.970807f;
    data->d[11] = -0.309245f;
    data->d[12] = -0.040202f;
    data->d[13] = 2.156896f;
    data->d[14] = 0.396979f;
    data->d[15] = -1.540226f;
    data->d[16] = 0.312336f;
    data->d[17] = -0.353950f;
    data->d[18] = 0.609114f;
    data->d[19] = 1.646589f;
    data->d[20] = -0.498357f;
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
    data->d[0] = -0.247108f;
    data->d[1] = -0.976946f;
    data->d[2] = -1.700853f;
    data->d[3] = -0.056011f;
    data->d[4] = -1.507473f;
    data->d[5] = -0.135241f;
    data->d[6] = 3.395068f;
    data->d[7] = -1.757489f;
    data->d[8] = -0.965871f;
    data->d[9] = 1.211492f;
    data->d[10] = 0.151909f;
    data->d[11] = -0.990558f;
    data->d[12] = 1.363782f;
    data->d[13] = -2.047249f;
    data->d[14] = 2.490244f;
    data->d[15] = 0.182507f;
    data->d[16] = -4.260578f;
    data->d[17] = 0.084866f;
    data->d[18] = 0.098733f;
    data->d[19] = -2.350559f;
    data->d[20] = -0.438780f;
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
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 21);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 9);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 79;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_copy_index = 1;
    state.m_id = 60;
    state.m_copy_id = 5;
    state.m_test = 3;
    state.m_seed = 12035425395403660909;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
