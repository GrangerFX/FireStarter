#pragma once
#include "FireStarterState.h"

// Run date: 11/19/23 09:32:11 Pacific Standard Time
// Run duration = 4255.329940 seconds
// Run generation = 80
// Run evolution = 19
// Run result = 0.00000030
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
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

// Variation: 0  result = 0.00000021
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.981421f;
    data->d[1] = -0.601681f;
    data->d[2] = 0.341217f;
    data->d[3] = 0.958518f;
    data->d[4] = -0.000000f;
    data->d[5] = 0.538558f;
    data->d[6] = 2.150079f;
    data->d[7] = -1.792393f;
    data->d[8] = 0.779704f;
    data->d[9] = -1.316226f;
    data->d[10] = 0.507585f;
    data->d[11] = -2.101149f;
    data->d[12] = -0.002891f;
    data->d[13] = 4.068440f;
    data->d[14] = -1.011910f;
    data->d[15] = -6.158080f;
    data->d[16] = 0.185908f;
    data->d[17] = 0.305778f;
    data->d[18] = -0.173466f;
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

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.654545f;
    data->d[1] = 0.192902f;
    data->d[2] = -0.854456f;
    data->d[3] = 0.087376f;
    data->d[4] = -0.000000f;
    data->d[5] = 1.060372f;
    data->d[6] = 9.504869f;
    data->d[7] = -1.433473f;
    data->d[8] = 0.016168f;
    data->d[9] = 1.297343f;
    data->d[10] = 0.880957f;
    data->d[11] = -0.057725f;
    data->d[12] = -1.005936f;
    data->d[13] = 0.593893f;
    data->d[14] = -1.026234f;
    data->d[15] = -1.089194f;
    data->d[16] = -1.445483f;
    data->d[17] = -1.476790f;
    data->d[18] = -0.796681f;
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

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.813387f;
    data->d[1] = -0.139043f;
    data->d[2] = -0.467861f;
    data->d[3] = 0.255425f;
    data->d[4] = 0.000001f;
    data->d[5] = 2.849769f;
    data->d[6] = -1.493348f;
    data->d[7] = 0.961306f;
    data->d[8] = 1.224410f;
    data->d[9] = 0.244527f;
    data->d[10] = 0.242048f;
    data->d[11] = -0.691262f;
    data->d[12] = 0.344157f;
    data->d[13] = 2.900441f;
    data->d[14] = 1.136275f;
    data->d[15] = -0.995717f;
    data->d[16] = -1.870730f;
    data->d[17] = -0.631805f;
    data->d[18] = -1.614509f;
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
    instructions->SetOperation(0, 1, 8);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 3);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 80;
    state.m_evolution = 19;
    state.m_index = 0;
    state.m_id = 12;
    state.m_copy_id = 12;
    state.m_test = 0;
    state.m_seed = 6038703603311041353;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
