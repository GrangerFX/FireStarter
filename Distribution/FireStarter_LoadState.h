#pragma once
#include "FireStarterState.h"

// Run date: 04/22/23 10:41:52 Pacific Daylight Time
// Run duration = 2525.486870 seconds
// Run generation = 333
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
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

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.241431f;
    data->d[2] = -0.698414f;
    data->d[3] = -0.052273f;
    data->d[4] = 19.826948f;
    data->d[5] = -0.471000f;
    data->d[6] = 0.145486f;
    data->d[7] = -0.533976f;
    data->d[8] = -0.549362f;
    data->d[9] = 0.644966f;
    data->d[10] = 10.331357f;
    data->d[11] = -14.026175f;
    data->d[12] = -1.427114f;
    data->d[13] = -0.095050f;
    data->d[14] = -0.539540f;
    data->d[15] = -5.640364f;
    data->d[16] = -0.000001f;
    data->d[17] = -0.142266f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.162149f;
    data->d[2] = -1.424443f;
    data->d[3] = -0.840039f;
    data->d[4] = 0.402633f;
    data->d[5] = 0.144868f;
    data->d[6] = 12.212306f;
    data->d[7] = -0.393392f;
    data->d[8] = -1.680596f;
    data->d[9] = -2.701581f;
    data->d[10] = -0.233199f;
    data->d[11] = 0.878739f;
    data->d[12] = 1.437105f;
    data->d[13] = 0.027738f;
    data->d[14] = 9.077653f;
    data->d[15] = 0.749225f;
    data->d[16] = -0.097027f;
    data->d[17] = 1.217512f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000046
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.193402f;
    data->d[2] = -0.693718f;
    data->d[3] = 0.068574f;
    data->d[4] = -0.298824f;
    data->d[5] = -71.433174f;
    data->d[6] = -0.884346f;
    data->d[7] = 0.199635f;
    data->d[8] = 2.050357f;
    data->d[9] = 0.169578f;
    data->d[10] = -1.023991f;
    data->d[11] = -1.628439f;
    data->d[12] = -0.168514f;
    data->d[13] = -0.416555f;
    data->d[14] = -1.370361f;
    data->d[15] = -4.710130f;
    data->d[16] = -0.577524f;
    data->d[17] = -0.906628f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 1, 18);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 31);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 19);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 1, 31);
    instructions->SetOperation(21, 0, 30);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 8);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 333;
    state.m_index = 3;
    state.m_test = 84;
    state.m_seed = 385039496615903146;
} // LoadState
