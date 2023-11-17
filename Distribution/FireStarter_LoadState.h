#pragma once
#include "FireStarterState.h"

// Run date: 11/16/23 14:32:46 Pacific Standard Time
// Run duration = 56631.541498 seconds
// Run generation = 42
// Run evolution = 13
// Run result = 0.00000072
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
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
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.475796f;
    data->d[1] = -1.494756f;
    data->d[2] = 2.184622f;
    data->d[3] = -0.956786f;
    data->d[4] = -0.634601f;
    data->d[5] = -0.000001f;
    data->d[6] = 2.037940f;
    data->d[7] = 2.718550f;
    data->d[8] = -0.141794f;
    data->d[9] = -1.087465f;
    data->d[10] = -0.004034f;
    data->d[11] = -0.694907f;
    data->d[12] = 2.090952f;
    data->d[13] = 0.376915f;
    data->d[14] = 0.001758f;
    data->d[15] = 0.144579f;
    data->d[16] = 0.840879f;
    data->d[17] = 0.303165f;
    data->d[18] = 6.189909f;
    data->d[19] = -2.353060f;
    data->d[20] = -0.000000f;
    data->d[21] = 1.053241f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.448463f;
    data->d[1] = -1.386032f;
    data->d[2] = 1.221200f;
    data->d[3] = -1.303527f;
    data->d[4] = 4.327205f;
    data->d[5] = 0.000121f;
    data->d[6] = -0.035478f;
    data->d[7] = 2.283203f;
    data->d[8] = 1.319569f;
    data->d[9] = 1.587366f;
    data->d[10] = -1.465311f;
    data->d[11] = -0.096502f;
    data->d[12] = 0.037542f;
    data->d[13] = -0.311627f;
    data->d[14] = -0.314043f;
    data->d[15] = 0.081365f;
    data->d[16] = -1.031375f;
    data->d[17] = 0.678916f;
    data->d[18] = -2.817872f;
    data->d[19] = -4.114625f;
    data->d[20] = -0.058310f;
    data->d[21] = 2.026148f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000072
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.251863f;
    data->d[1] = 0.659378f;
    data->d[2] = 0.134899f;
    data->d[3] = -1.519322f;
    data->d[4] = 3.742858f;
    data->d[5] = 0.000001f;
    data->d[6] = 1.180951f;
    data->d[7] = 2.409876f;
    data->d[8] = -1.910362f;
    data->d[9] = -1.810334f;
    data->d[10] = -1.275813f;
    data->d[11] = -1.187640f;
    data->d[12] = -0.723161f;
    data->d[13] = -1.290728f;
    data->d[14] = 1.487629f;
    data->d[15] = -0.466344f;
    data->d[16] = -0.182855f;
    data->d[17] = 0.195717f;
    data->d[18] = -2.898549f;
    data->d[19] = -2.545545f;
    data->d[20] = -0.128479f;
    data->d[21] = -4.075393f;
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
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 1, 11);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 1, 25);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 13;
    state.m_index = 32;
    state.m_id = 20;
    state.m_copy_id = 25;
    state.m_test = 16;
    state.m_seed = 16965975910647229981;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
