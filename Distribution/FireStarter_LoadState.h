#pragma once
#include "FireStarterState.h"

// Run date: 08/12/23 22:11:19 Pacific Daylight Time
// Run duration = 126.191266 seconds
// Run generation = 3
// Run evolution = 1
// Run result = 0.00002054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 0
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
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 0;
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

// Variation: 0  result = 0.00001020
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141598f;
    data->d[1] = 1.217137f;
    data->d[2] = 0.000014f;
    data->d[3] = -0.128146f;
    data->d[4] = -0.551821f;
    data->d[5] = 1.190974f;
    data->d[6] = -1.667042f;
    data->d[7] = -0.010634f;
    data->d[8] = -2.053983f;
    data->d[9] = 1.506780f;
    data->d[10] = 1.663881f;
    data->d[11] = -1.890627f;
    data->d[12] = -0.696611f;
    data->d[13] = 0.116535f;
    data->d[14] = -0.003980f;
    data->d[15] = 2.723603f;
    data->d[16] = -2.036129f;
    data->d[17] = 0.119111f;
    data->d[18] = -2.127951f;
    data->d[19] = 0.151335f;
    data->d[20] = 3.022495f;
    data->d[21] = 0.498859f;
    data->d[22] = -0.000006f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

// Variation: 1  result = 0.00000393
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090693f;
    data->d[1] = 0.900850f;
    data->d[2] = 0.000055f;
    data->d[3] = -0.069429f;
    data->d[4] = 1.655954f;
    data->d[5] = 0.867465f;
    data->d[6] = -1.713518f;
    data->d[7] = 1.167483f;
    data->d[8] = 1.840042f;
    data->d[9] = 0.866885f;
    data->d[10] = -0.467156f;
    data->d[11] = 1.185100f;
    data->d[12] = 0.956086f;
    data->d[13] = -1.500011f;
    data->d[14] = 0.000146f;
    data->d[15] = -2.680226f;
    data->d[16] = 3.779830f;
    data->d[17] = -0.769228f;
    data->d[18] = 1.242660f;
    data->d[19] = 0.546294f;
    data->d[20] = -0.200814f;
    data->d[21] = 2.571313f;
    data->d[22] = -0.118173f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00002054
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.618021f;
    data->d[1] = -1.488540f;
    data->d[2] = -0.000074f;
    data->d[3] = -0.032330f;
    data->d[4] = 0.299878f;
    data->d[5] = 0.246824f;
    data->d[6] = 1.085465f;
    data->d[7] = 2.004435f;
    data->d[8] = -3.229676f;
    data->d[9] = 0.612215f;
    data->d[10] = 1.131935f;
    data->d[11] = -0.019355f;
    data->d[12] = 13.309388f;
    data->d[13] = -0.303985f;
    data->d[14] = -0.279666f;
    data->d[15] = 1.334772f;
    data->d[16] = 0.983723f;
    data->d[17] = -2.370788f;
    data->d[18] = -0.062199f;
    data->d[19] = 0.458963f;
    data->d[20] = -1.176384f;
    data->d[21] = -0.241355f;
    data->d[22] = 0.523571f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000021f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000021f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 1, 22);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 1, 11);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 1, 0);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 26);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 4);
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
    state.m_generation = 3;
    state.m_evolution = 1;
    state.m_index = 12;
    state.m_test = 0;
    state.m_seed = 16734542924141680257;
} // LoadState
