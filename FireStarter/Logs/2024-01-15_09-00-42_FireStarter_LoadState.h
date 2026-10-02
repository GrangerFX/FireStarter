#pragma once
#include "FireStarterState.h"

// Run date: 01/15/24 09:00:42 Pacific Standard Time
// Run duration = 1734.744510 seconds
// Run generation = 38
// Run evolution = 14
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -2.295015f;
    data->d[2] = 0.071202f;
    data->d[3] = -0.135903f;
    data->d[4] = -0.618037f;
    data->d[5] = 6.922047f;
    data->d[6] = -0.707670f;
    data->d[7] = -0.866612f;
    data->d[8] = 0.000127f;
    data->d[9] = 0.121588f;
    data->d[10] = -18.242466f;
    data->d[11] = 0.003017f;
    data->d[12] = 1.661479f;
    data->d[13] = 30.261871f;
    data->d[14] = 0.047945f;
    data->d[15] = -1.337591f;
    data->d[16] = -0.558269f;
    data->d[17] = 1.570871f;
    data->d[18] = 1.129997f;
    data->d[19] = -0.035529f;
    data->d[20] = 0.035529f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.847047f;
    data->d[2] = 0.438179f;
    data->d[3] = 0.233997f;
    data->d[4] = 0.597274f;
    data->d[5] = -1.361055f;
    data->d[6] = -1.383885f;
    data->d[7] = 1.890694f;
    data->d[8] = -0.000200f;
    data->d[9] = -0.068215f;
    data->d[10] = 14.771481f;
    data->d[11] = -2.530980f;
    data->d[12] = 12.970649f;
    data->d[13] = -0.004039f;
    data->d[14] = -0.162991f;
    data->d[15] = -2.021862f;
    data->d[16] = -0.816580f;
    data->d[17] = -0.453168f;
    data->d[18] = -0.356602f;
    data->d[19] = -1.639078f;
    data->d[20] = 1.520946f;
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
    data->d[1] = 0.651474f;
    data->d[2] = 0.081336f;
    data->d[3] = 0.569034f;
    data->d[4] = 3.201804f;
    data->d[5] = 2.334465f;
    data->d[6] = -0.950130f;
    data->d[7] = 0.155070f;
    data->d[8] = -0.120517f;
    data->d[9] = -0.588744f;
    data->d[10] = 17.974398f;
    data->d[11] = -717.158569f;
    data->d[12] = 0.000000f;
    data->d[13] = 1.637958f;
    data->d[14] = -0.101484f;
    data->d[15] = 0.978245f;
    data->d[16] = -0.204708f;
    data->d[17] = 2.241599f;
    data->d[18] = 2.289380f;
    data->d[19] = 0.424121f;
    data->d[20] = 0.099478f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 28);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 25);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 20);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 1, 10);
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
    state.m_generation = 38;
    state.m_evolution = 14;
    state.m_children0 = 2066;
    state.m_children1 = 2;
    state.m_index = 1;
    state.m_copy_index = 305;
    state.m_id = 45;
    state.m_test = 0;
    state.m_seed = 18355451677825007296;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000034f;
    state.m_optimizeValid = true;
} // LoadState
