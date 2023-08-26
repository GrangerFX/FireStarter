#pragma once
#include "FireStarterState.h"

// Run date: 08/26/23 10:57:44 Pacific Daylight Time
// Run duration = 169.197809 seconds
// Run generation = 206
// Run evolution = 33
// Run result = 0.00001937
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
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

    settings.m_mode = FIRESTARTER_TEVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 100;
    settings.m_units = 1;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000334
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.422265f;
    data->d[1] = 0.610306f;
    data->d[2] = 1.035282f;
    data->d[3] = -0.284459f;
    data->d[4] = 0.911605f;
    data->d[5] = 2.956780f;
    data->d[6] = -1.071975f;
    data->d[7] = -0.999852f;
    data->d[8] = -0.115856f;
    data->d[9] = -63.436680f;
    data->d[10] = 1.591422f;
    data->d[11] = 0.727489f;
    data->d[12] = 0.565946f;
    data->d[13] = -9.388137f;
    data->d[14] = -0.728700f;
    data->d[15] = 0.314019f;
    data->d[16] = -0.000043f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

// Variation: 1  result = 0.00000286
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.386972f;
    data->d[1] = 0.369250f;
    data->d[2] = 0.230886f;
    data->d[3] = 2.508002f;
    data->d[4] = -1.404877f;
    data->d[5] = -1.186621f;
    data->d[6] = 0.711369f;
    data->d[7] = -1.062127f;
    data->d[8] = -0.022024f;
    data->d[9] = 12.299892f;
    data->d[10] = 1.480559f;
    data->d[11] = -0.444083f;
    data->d[12] = 1.363669f;
    data->d[13] = -3.147059f;
    data->d[14] = -0.601492f;
    data->d[15] = -0.753270f;
    data->d[16] = -0.118128f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00001937
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.468834f;
    data->d[1] = -0.591766f;
    data->d[2] = 0.469872f;
    data->d[3] = 0.504853f;
    data->d[4] = 2.512544f;
    data->d[5] = -1.694584f;
    data->d[6] = 1.226236f;
    data->d[7] = 0.905904f;
    data->d[8] = -4.201531f;
    data->d[9] = -0.023419f;
    data->d[10] = 1.236380f;
    data->d[11] = -0.647177f;
    data->d[12] = -0.986803f;
    data->d[13] = -0.534257f;
    data->d[14] = 1.088913f;
    data->d[15] = 3.842853f;
    data->d[16] = 0.522762f;
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
    *(result->MinResult()) = 0.000019f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000019f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 206;
    state.m_evolution = 33;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 16237112685628958466;
} // LoadState
