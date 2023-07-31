#pragma once
#include "FireStarterState.h"

// Run date: 07/31/23 11:09:28 Pacific Daylight Time
// Run duration = 354.290912 seconds
// Run generation = 38
// Run evolution = 0
// Run result = 0.00000054
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
// Run seeds = 64
// Run tests = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.057194f;
    data->d[2] = 2.194206f;
    data->d[3] = -0.832485f;
    data->d[4] = 0.153273f;
    data->d[5] = -0.691580f;
    data->d[6] = 1.288018f;
    data->d[7] = 0.422571f;
    data->d[8] = 1.864130f;
    data->d[9] = 0.973750f;
    data->d[10] = 2.307342f;
    data->d[11] = 168.145752f;
    data->d[12] = 0.640607f;
    data->d[13] = -0.024732f;
    data->d[14] = -2.574015f;
    data->d[15] = -2.527883f;
    data->d[16] = 2.050796f;
    data->d[17] = -0.063227f;
    data->d[18] = 0.063227f;
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

// Variation: 1  result = 0.00000054
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.050847f;
    data->d[2] = 1.077455f;
    data->d[3] = -0.607872f;
    data->d[4] = -1.636800f;
    data->d[5] = -0.192864f;
    data->d[6] = -0.844191f;
    data->d[7] = -1.152974f;
    data->d[8] = -0.256664f;
    data->d[9] = -1.009575f;
    data->d[10] = -1.873580f;
    data->d[11] = 0.217873f;
    data->d[12] = -9.598641f;
    data->d[13] = 4.709054f;
    data->d[14] = -4.529346f;
    data->d[15] = -1.325849f;
    data->d[16] = -5.021457f;
    data->d[17] = -0.361258f;
    data->d[18] = 0.302192f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.206552f;
    data->d[2] = 0.669501f;
    data->d[3] = -0.234818f;
    data->d[4] = 1.424005f;
    data->d[5] = -1.138525f;
    data->d[6] = -0.082164f;
    data->d[7] = 0.635817f;
    data->d[8] = -0.482338f;
    data->d[9] = -0.105582f;
    data->d[10] = 3.333302f;
    data->d[11] = 0.549807f;
    data->d[12] = 0.994618f;
    data->d[13] = 1.451333f;
    data->d[14] = -1.846283f;
    data->d[15] = 0.951282f;
    data->d[16] = -1.126558f;
    data->d[17] = 0.666850f;
    data->d[18] = -0.405051f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 14);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 17);
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
    state.m_evolution = 0;
    state.m_index = 34;
    state.m_test = 0;
    state.m_seed = 15813025247094224448;
} // LoadState
