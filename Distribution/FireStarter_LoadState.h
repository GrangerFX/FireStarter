#pragma once
#include "FireStarterState.h"

// Run date: 07/08/23 14:21:08 Pacific Daylight Time
// Run duration = 708.242206 seconds
// Run generation = 86
// Run evolution = 0
// Run result = 0.00000167
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000140
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.539684f;
    data->d[1] = 1.695467f;
    data->d[2] = -1.539663f;
    data->d[3] = 1.969488f;
    data->d[4] = -0.397795f;
    data->d[5] = -0.416594f;
    data->d[6] = 0.305983f;
    data->d[7] = 1.467839f;
    data->d[8] = 1.857823f;
    data->d[9] = -3.220591f;
    data->d[10] = 1.030715f;
    data->d[11] = 0.002200f;
    data->d[12] = 1.303644f;
    data->d[13] = 0.215652f;
    data->d[14] = 1.966000f;
    data->d[15] = -1.625053f;
    data->d[16] = 0.058002f;
    data->d[17] = -0.791171f;
    data->d[18] = 1.131603f;
    data->d[19] = 2.533439f;
    data->d[20] = -0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000167
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.786573f;
    data->d[1] = 2.431029f;
    data->d[2] = -0.050466f;
    data->d[3] = -0.030885f;
    data->d[4] = -0.431940f;
    data->d[5] = -10.412176f;
    data->d[6] = -3.791009f;
    data->d[7] = -0.895656f;
    data->d[8] = -1.537185f;
    data->d[9] = 1.076279f;
    data->d[10] = 8.046695f;
    data->d[11] = 0.385172f;
    data->d[12] = -1.177298f;
    data->d[13] = -0.482247f;
    data->d[14] = 0.331809f;
    data->d[15] = -1.055215f;
    data->d[16] = 0.874131f;
    data->d[17] = -0.806802f;
    data->d[18] = -1.689204f;
    data->d[19] = 0.187916f;
    data->d[20] = -0.059066f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000107
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.339523f;
    data->d[1] = -0.888869f;
    data->d[2] = -1.837132f;
    data->d[3] = 0.352316f;
    data->d[4] = 2.015028f;
    data->d[5] = 1.069271f;
    data->d[6] = 0.052144f;
    data->d[7] = -1.636420f;
    data->d[8] = 0.008413f;
    data->d[9] = 4.956632f;
    data->d[10] = -1.270097f;
    data->d[11] = 1.726126f;
    data->d[12] = 1.595922f;
    data->d[13] = -0.197946f;
    data->d[14] = -0.159853f;
    data->d[15] = 1.338238f;
    data->d[16] = -0.154978f;
    data->d[17] = 0.069902f;
    data->d[18] = 2.510665f;
    data->d[19] = -0.400709f;
    data->d[20] = 0.261799f;
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
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 0, 16);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 0, 8);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 1, 1);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 19);
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
    state.m_generation = 86;
    state.m_evolution = 0;
    state.m_index = 40;
    state.m_test = 19;
    state.m_seed = 699195626103796504;
} // LoadState
