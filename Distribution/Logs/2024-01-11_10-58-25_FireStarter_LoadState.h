#pragma once
#include "FireStarterState.h"

// Run date: 01/11/24 10:58:25 Pacific Standard Time
// Run duration = 33066.203177 seconds
// Run generation = 81
// Run evolution = 8
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
// Run tests = 16
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.542114f;
    data->d[1] = 1.703100f;
    data->d[2] = -1.098736f;
    data->d[3] = -1.871266f;
    data->d[4] = 0.000797f;
    data->d[5] = -6.772357f;
    data->d[6] = -0.264188f;
    data->d[7] = 0.111830f;
    data->d[8] = -0.730567f;
    data->d[9] = -2.217145f;
    data->d[10] = 1.230295f;
    data->d[11] = -0.000002f;
    data->d[12] = -0.002320f;
    data->d[13] = 5.217169f;
    data->d[14] = -0.431876f;
    data->d[15] = -11.809438f;
    data->d[16] = 52.387680f;
    data->d[17] = -0.011641f;
    data->d[18] = 2.108822f;
    data->d[19] = -0.751950f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.459775f;
    data->d[1] = -1.420986f;
    data->d[2] = 1.473526f;
    data->d[3] = -2.093973f;
    data->d[4] = 0.000742f;
    data->d[5] = 0.716678f;
    data->d[6] = -0.031229f;
    data->d[7] = -0.675655f;
    data->d[8] = -0.633913f;
    data->d[9] = 1.798461f;
    data->d[10] = -0.943291f;
    data->d[11] = -0.057112f;
    data->d[12] = 0.131791f;
    data->d[13] = 0.358134f;
    data->d[14] = 0.220153f;
    data->d[15] = 10.206480f;
    data->d[16] = -1.380388f;
    data->d[17] = 0.210750f;
    data->d[18] = -1.694798f;
    data->d[19] = -1.219915f;
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

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.415473f;
    data->d[1] = 1.087706f;
    data->d[2] = -0.693639f;
    data->d[3] = -0.754475f;
    data->d[4] = 0.003064f;
    data->d[5] = -0.883161f;
    data->d[6] = -0.074729f;
    data->d[7] = -3.653891f;
    data->d[8] = 1.363922f;
    data->d[9] = -0.403337f;
    data->d[10] = 0.217027f;
    data->d[11] = -0.569245f;
    data->d[12] = 1.120296f;
    data->d[13] = 4.222331f;
    data->d[14] = -11.071545f;
    data->d[15] = 1.605839f;
    data->d[16] = -8.203185f;
    data->d[17] = -0.002689f;
    data->d[18] = 0.378430f;
    data->d[19] = -2.430599f;
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
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 1, 27);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 22);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 0, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 81;
    state.m_evolution = 8;
    state.m_children = 47;
    state.m_index = 54;
    state.m_copy_index = 508;
    state.m_id = 47;
    state.m_test = 10;
    state.m_seed = 8668716991389645333;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000006f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000075f;
    state.m_optimizeValid = true;
} // LoadState
