#pragma once
#include "FireStarterState.h"

// Run date: 07/30/23 10:29:59 Pacific Daylight Time
// Run duration = 633.886679 seconds
// Run generation = 71
// Run evolution = 0
// Run result = 0.00000048
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

// Variation: 0  result = 0.00000021
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 1.307141f;
    data->d[2] = -0.272407f;
    data->d[3] = -0.634895f;
    data->d[4] = 0.840515f;
    data->d[5] = 0.004484f;
    data->d[6] = -0.193548f;
    data->d[7] = 0.577502f;
    data->d[8] = -0.023387f;
    data->d[9] = 3.698760f;
    data->d[10] = -2.567241f;
    data->d[11] = -0.693829f;
    data->d[12] = -0.052943f;
    data->d[13] = 0.322767f;
    data->d[14] = -1.026989f;
    data->d[15] = -1.634386f;
    data->d[16] = -0.275710f;
    data->d[17] = 1.083048f;
    data->d[18] = 2.574295f;
    data->d[19] = 1.759356f;
    data->d[20] = -1.763429f;
    data->d[21] = 0.004073f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.141302f;
    data->d[2] = 1.762388f;
    data->d[3] = -0.617454f;
    data->d[4] = -0.354684f;
    data->d[5] = -0.047388f;
    data->d[6] = 0.319656f;
    data->d[7] = 0.021591f;
    data->d[8] = -0.537458f;
    data->d[9] = -6.260292f;
    data->d[10] = 0.256481f;
    data->d[11] = -0.857174f;
    data->d[12] = 1.688665f;
    data->d[13] = -0.671533f;
    data->d[14] = 0.899046f;
    data->d[15] = -0.743172f;
    data->d[16] = -0.821532f;
    data->d[17] = -2.362799f;
    data->d[18] = -0.452982f;
    data->d[19] = -0.514190f;
    data->d[20] = 0.621697f;
    data->d[21] = -0.225638f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.288011f;
    data->d[2] = 1.241478f;
    data->d[3] = -1.341122f;
    data->d[4] = -0.437020f;
    data->d[5] = -0.167822f;
    data->d[6] = -0.054104f;
    data->d[7] = -5.231952f;
    data->d[8] = -0.655902f;
    data->d[9] = -1.366589f;
    data->d[10] = -2.000951f;
    data->d[11] = 1.179364f;
    data->d[12] = -0.390218f;
    data->d[13] = 1.358314f;
    data->d[14] = -0.778595f;
    data->d[15] = -0.199144f;
    data->d[16] = 0.507337f;
    data->d[17] = 0.551874f;
    data->d[18] = -1.157889f;
    data->d[19] = 1.068561f;
    data->d[20] = -0.297128f;
    data->d[21] = -0.247835f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 23);
    instructions->SetOperation(30, 1, 0);
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
    state.m_generation = 71;
    state.m_evolution = 0;
    state.m_index = 54;
    state.m_test = 6;
    state.m_seed = 16337022116223965472;
} // LoadState
