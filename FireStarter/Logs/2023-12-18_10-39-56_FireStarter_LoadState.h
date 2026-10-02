#pragma once
#include "FireStarterState.h"

// Run date: 12/18/23 10:39:56 Pacific Standard Time
// Run duration = 1548.662238 seconds
// Run generation = 36
// Run evolution = 14
// Run max result = 0.00000060
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
    data->d[0] = -0.073393f;
    data->d[1] = 0.230570f;
    data->d[2] = -2.051901f;
    data->d[3] = 0.000000f;
    data->d[4] = 11.528143f;
    data->d[5] = -3.749038f;
    data->d[6] = -1.561424f;
    data->d[7] = -0.377921f;
    data->d[8] = -0.014562f;
    data->d[9] = 1.458537f;
    data->d[10] = -0.890883f;
    data->d[11] = -0.150933f;
    data->d[12] = 1.476875f;
    data->d[13] = 1.143134f;
    data->d[14] = 0.010953f;
    data->d[15] = 0.824911f;
    data->d[16] = -0.006041f;
    data->d[17] = -0.751080f;
    data->d[18] = 5.795342f;
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
    data->d[0] = 0.351596f;
    data->d[1] = -1.086662f;
    data->d[2] = 0.007240f;
    data->d[3] = 5.821494f;
    data->d[4] = 0.000001f;
    data->d[5] = 1.161057f;
    data->d[6] = -0.795569f;
    data->d[7] = -0.232440f;
    data->d[8] = -0.023489f;
    data->d[9] = 1.662821f;
    data->d[10] = -0.493819f;
    data->d[11] = -0.325729f;
    data->d[12] = 1.180985f;
    data->d[13] = -0.770277f;
    data->d[14] = -0.017832f;
    data->d[15] = 3.586207f;
    data->d[16] = 0.445812f;
    data->d[17] = 0.527114f;
    data->d[18] = -1.139939f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.259623f;
    data->d[1] = -0.679692f;
    data->d[2] = -1.310282f;
    data->d[3] = 3.102550f;
    data->d[4] = -0.000000f;
    data->d[5] = 1.749564f;
    data->d[6] = 0.556994f;
    data->d[7] = -0.076421f;
    data->d[8] = 0.069151f;
    data->d[9] = -1.672594f;
    data->d[10] = 0.659802f;
    data->d[11] = -0.601899f;
    data->d[12] = 1.365299f;
    data->d[13] = 0.857753f;
    data->d[14] = -0.094156f;
    data->d[15] = -0.614597f;
    data->d[16] = -0.760764f;
    data->d[17] = 1.720318f;
    data->d[18] = -0.497818f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 22);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 4);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 36;
    state.m_evolution = 14;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 44;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 15872265529930650157;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
