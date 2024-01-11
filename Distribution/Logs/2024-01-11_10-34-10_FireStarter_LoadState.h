#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 10:34:10 Pacific Standard Time
// Run duration = 1065.238164 seconds
// Run generation = 18
// Run evolution = 8
// Run max result = 0.00000033
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
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.469775f;
    data->d[1] = -1.060496f;
    data->d[2] = -1.565123f;
    data->d[3] = -0.165063f;
    data->d[4] = 0.973696f;
    data->d[5] = 1.816949f;
    data->d[6] = 1.982076f;
    data->d[7] = 0.527883f;
    data->d[8] = 0.247131f;
    data->d[9] = -2.742113f;
    data->d[10] = 1.037985f;
    data->d[11] = 1.565334f;
    data->d[12] = -2.303868f;
    data->d[13] = 2.534201f;
    data->d[14] = -59.084747f;
    data->d[15] = 18.491598f;
    data->d[16] = 0.000000f;
    data->d[17] = -0.230333f;
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
    data->d[0] = 0.637134f;
    data->d[1] = -0.635721f;
    data->d[2] = 1.251839f;
    data->d[3] = -0.292109f;
    data->d[4] = -0.625576f;
    data->d[5] = -1.750322f;
    data->d[6] = -1.774082f;
    data->d[7] = -0.733958f;
    data->d[8] = -0.175589f;
    data->d[9] = -1.981776f;
    data->d[10] = 0.992980f;
    data->d[11] = -1.873395f;
    data->d[12] = 0.419238f;
    data->d[13] = 0.251444f;
    data->d[14] = -0.169850f;
    data->d[15] = -27.512743f;
    data->d[16] = 0.000288f;
    data->d[17] = -0.788813f;
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

// Variation: 2  result = 0.00000033
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.538757f;
    data->d[1] = 0.327031f;
    data->d[2] = -0.461265f;
    data->d[3] = 1.139027f;
    data->d[4] = 0.681341f;
    data->d[5] = -1.531135f;
    data->d[6] = -0.061991f;
    data->d[7] = -1.188560f;
    data->d[8] = -0.496986f;
    data->d[9] = -1.738220f;
    data->d[10] = 0.156501f;
    data->d[11] = -1.914193f;
    data->d[12] = 1.499374f;
    data->d[13] = -1.710572f;
    data->d[14] = -24.059135f;
    data->d[15] = -1.555016f;
    data->d[16] = -0.000240f;
    data->d[17] = 0.734797f;
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
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 1, 24);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 1, 17);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 16);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 1, 16);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 1, 9);
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
    state.m_generation = 18;
    state.m_evolution = 8;
    state.m_children = 32;
    state.m_index = 5;
    state.m_copy_index = 199;
    state.m_id = 92;
    state.m_test = 7;
    state.m_seed = 15350021620452065119;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000008f;
    state.m_optimizeValid = true;
} // LoadState
