#pragma once
#include "FireStarterState.h"

// Run date: 04/08/23 21:33:59 Pacific Daylight Time
// Run duration = 982.313894 seconds
// Run generation = 202
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.118331f;
    data->d[2] = 0.292741f;
    data->d[3] = -1.153621f;
    data->d[4] = 0.981019f;
    data->d[5] = -0.833306f;
    data->d[6] = 0.815836f;
    data->d[7] = 0.981180f;
    data->d[8] = 0.008127f;
    data->d[9] = -1.264489f;
    data->d[10] = -1.379207f;
    data->d[11] = -3.815350f;
    data->d[12] = 1.201769f;
    data->d[13] = -0.067766f;
    data->d[14] = -0.001632f;
    data->d[15] = -3.318887f;
    data->d[16] = 3.294498f;
    data->d[17] = 0.916412f;
    data->d[18] = 2.733792f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.102885f;
    data->d[2] = 0.639567f;
    data->d[3] = -1.248649f;
    data->d[4] = 1.620722f;
    data->d[5] = 2.837224f;
    data->d[6] = -1.445596f;
    data->d[7] = 0.017415f;
    data->d[8] = 2.322808f;
    data->d[9] = 0.433785f;
    data->d[10] = 0.708036f;
    data->d[11] = -0.504410f;
    data->d[12] = 0.760578f;
    data->d[13] = 0.099719f;
    data->d[14] = 1.906983f;
    data->d[15] = -0.055741f;
    data->d[16] = -3.866369f;
    data->d[17] = 2.581245f;
    data->d[18] = 3.236857f;
    data->d[19] = -0.118132f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.166322f;
    data->d[2] = 0.988538f;
    data->d[3] = -1.364480f;
    data->d[4] = -1.041954f;
    data->d[5] = 0.969638f;
    data->d[6] = -0.579890f;
    data->d[7] = 1.660006f;
    data->d[8] = -0.021540f;
    data->d[9] = -1.013013f;
    data->d[10] = -0.881558f;
    data->d[11] = 4.256871f;
    data->d[12] = 0.726267f;
    data->d[13] = -0.005574f;
    data->d[14] = -2.390183f;
    data->d[15] = 0.270108f;
    data->d[16] = 9.644091f;
    data->d[17] = -6.210173f;
    data->d[18] = -0.330039f;
    data->d[19] = 0.523599f;
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
    data->d[30] = -18603616.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 28);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 31);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 1, 30);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 202;
    state.m_index = 0;
    state.m_test = 36;
    state.m_seed = 11522488623996611271;
} // LoadState
