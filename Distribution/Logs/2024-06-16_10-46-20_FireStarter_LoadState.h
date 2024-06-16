#pragma once
#include "FireStarterState.h"

// Run date: 06/16/24 10:46:20 Pacific Daylight Time
// Run duration = 943.062215 seconds
// Run generation = 100
// Run evolution = 5
// Run max result = 0.00002624
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00002524
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.737547f;
    data->d[1] = 2.317091f;
    data->d[2] = 0.376039f;
    data->d[3] = 0.932947f;
    data->d[4] = -1.516774f;
    data->d[5] = 0.099031f;
    data->d[6] = -1.746992f;
    data->d[7] = -1.774289f;
    data->d[8] = -0.178609f;
    data->d[9] = 1.230276f;
    data->d[10] = 2.099500f;
    data->d[11] = -0.102326f;
    data->d[12] = 0.938938f;
    data->d[13] = 0.726269f;
    data->d[14] = 8.089490f;
    data->d[15] = 0.039960f;
    data->d[16] = -6.573807f;
    data->d[17] = 5.889429f;
    data->d[18] = 3.158124f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000025f;
} // LoadVariation0

// Variation: 1  result = 0.00002041
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.193639f;
    data->d[1] = 0.577648f;
    data->d[2] = -0.641848f;
    data->d[3] = -0.329658f;
    data->d[4] = 1.825066f;
    data->d[5] = -1.850136f;
    data->d[6] = -0.510609f;
    data->d[7] = 0.111650f;
    data->d[8] = 0.884508f;
    data->d[9] = -1.497559f;
    data->d[10] = 2.696577f;
    data->d[11] = -1.106376f;
    data->d[12] = 0.742343f;
    data->d[13] = -0.737647f;
    data->d[14] = -4.220999f;
    data->d[15] = -2.320892f;
    data->d[16] = 1.901677f;
    data->d[17] = 5.659554f;
    data->d[18] = 1.013071f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000020f;
} // LoadVariation1

// Variation: 2  result = 0.00002624
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.596562f;
    data->d[1] = 1.906512f;
    data->d[2] = -0.401989f;
    data->d[3] = -0.953436f;
    data->d[4] = 1.032218f;
    data->d[5] = 0.444105f;
    data->d[6] = 1.196699f;
    data->d[7] = -0.383657f;
    data->d[8] = -0.940811f;
    data->d[9] = 0.229551f;
    data->d[10] = 0.780987f;
    data->d[11] = -0.369211f;
    data->d[12] = 1.931543f;
    data->d[13] = 0.075130f;
    data->d[14] = -3.106053f;
    data->d[15] = -1.007027f;
    data->d[16] = -5.508646f;
    data->d[17] = -10.148539f;
    data->d[18] = -0.950232f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000026f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000026f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 21);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 1, 9);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 0, 8);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 100;
    state.m_evolution = 5;
    state.m_index = 12;
    state.m_copy_index = 45;
    state.m_id = 45;
    state.m_test = 0;
    state.m_seed = 12629598121111101520;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000036f;
    state.m_maxResult = 0.000026f;
    state.m_evolveWeight = 0.003504f;
    state.m_optimizeValid = true;
} // LoadState
