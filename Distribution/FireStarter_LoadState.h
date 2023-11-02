#pragma once
#include "FireStarterState.h"

// Run date: 11/01/23 15:03:23 Pacific Daylight Time
// Run duration = 44303.046818 seconds
// Run generation = 173
// Run evolution = 9
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
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.357148f;
    data->d[1] = 1.122012f;
    data->d[2] = -0.180806f;
    data->d[3] = 1.260759f;
    data->d[4] = -1.535873f;
    data->d[5] = 1.530359f;
    data->d[6] = 1.053121f;
    data->d[7] = -1.503512f;
    data->d[8] = -0.101581f;
    data->d[9] = 0.407928f;
    data->d[10] = -0.951758f;
    data->d[11] = 0.138049f;
    data->d[12] = 4.772594f;
    data->d[13] = -2.360365f;
    data->d[14] = -0.197908f;
    data->d[15] = -2.757936f;
    data->d[16] = 1.551073f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.268690f;
    data->d[1] = -0.830428f;
    data->d[2] = 0.334946f;
    data->d[3] = -0.367107f;
    data->d[4] = -1.932574f;
    data->d[5] = 1.728384f;
    data->d[6] = 1.692225f;
    data->d[7] = -1.479661f;
    data->d[8] = 0.713056f;
    data->d[9] = -0.937813f;
    data->d[10] = -1.766529f;
    data->d[11] = -5.720184f;
    data->d[12] = 3.504108f;
    data->d[13] = 0.562515f;
    data->d[14] = 0.020317f;
    data->d[15] = 1.958503f;
    data->d[16] = 1.063610f;
    data->d[17] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.766807f;
    data->d[1] = 2.007496f;
    data->d[2] = 0.248737f;
    data->d[3] = -1.873739f;
    data->d[4] = -0.017870f;
    data->d[5] = 0.535312f;
    data->d[6] = 2.143050f;
    data->d[7] = -0.514396f;
    data->d[8] = 1.391527f;
    data->d[9] = -0.485942f;
    data->d[10] = 0.191169f;
    data->d[11] = -0.165061f;
    data->d[12] = 5.270277f;
    data->d[13] = 0.933730f;
    data->d[14] = 0.055802f;
    data->d[15] = -1.579085f;
    data->d[16] = -2.640232f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 1, 19);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 6);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 3);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 173;
    state.m_evolution = 9;
    state.m_age = 25;
    state.m_index = 20;
    state.m_id = 16;
    state.m_copy_id = 1;
    state.m_test = 14;
    state.m_seed = 15095289971352603425;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
