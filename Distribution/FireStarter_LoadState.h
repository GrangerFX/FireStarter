#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 09:40:10 Pacific Daylight Time
// Run duration = 484.231907 seconds
// Run generation = 304
// Run result = 0.00000012
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
    data->d[1] = 1.574666f;
    data->d[2] = 0.002493f;
    data->d[3] = 1.780327f;
    data->d[4] = 0.000000f;
    data->d[5] = 1.690444f;
    data->d[6] = -0.396667f;
    data->d[7] = 0.031199f;
    data->d[8] = 0.456829f;
    data->d[9] = -6.367176f;
    data->d[10] = -0.180348f;
    data->d[11] = -0.931644f;
    data->d[12] = -0.449523f;
    data->d[13] = 1.369186f;
    data->d[14] = 0.086881f;
    data->d[15] = -4.661574f;
    data->d[16] = -0.829992f;
    data->d[17] = -0.264952f;
    data->d[18] = -0.000000f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 1.030423f;
    data->d[2] = 0.051048f;
    data->d[3] = -5.396518f;
    data->d[4] = 0.000000f;
    data->d[5] = -2.870537f;
    data->d[6] = 1.447149f;
    data->d[7] = 0.472833f;
    data->d[8] = -1.094078f;
    data->d[9] = -0.420790f;
    data->d[10] = -1.037344f;
    data->d[11] = 0.308664f;
    data->d[12] = 0.343121f;
    data->d[13] = 0.088931f;
    data->d[14] = -1.697871f;
    data->d[15] = 0.106157f;
    data->d[16] = -2.355286f;
    data->d[17] = -2.088207f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.082094f;
    data->d[2] = 2.134975f;
    data->d[3] = -0.000002f;
    data->d[4] = 6.417849f;
    data->d[5] = -1.352170f;
    data->d[6] = -1.126479f;
    data->d[7] = -0.261249f;
    data->d[8] = -0.466135f;
    data->d[9] = 0.459794f;
    data->d[10] = 1.255890f;
    data->d[11] = -0.916069f;
    data->d[12] = 1.808227f;
    data->d[13] = 0.181528f;
    data->d[14] = -0.941638f;
    data->d[15] = 0.705948f;
    data->d[16] = 3.635356f;
    data->d[17] = -0.658626f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 0, 12);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 1, 26);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 1, 26);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 0, 1);
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
    state.m_generation = 304;
    state.m_index = 2;
    state.m_test = 13;
    state.m_seed = 13601779050461025897;
} // LoadState
