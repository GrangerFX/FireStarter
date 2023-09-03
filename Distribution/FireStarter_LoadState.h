#pragma once
#include "FireStarterState.h"

// Run date: 09/03/23 12:59:23 Pacific Daylight Time
// Run duration = 9858.597240 seconds
// Run generation = 85
// Run evolution = 1
// Run result = 0.00000051
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 2
// Run processes = 2
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 2;
    settings.m_processes = 2;
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

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.248411f;
    data->d[2] = -1.787935f;
    data->d[3] = 5.391919f;
    data->d[4] = 0.006053f;
    data->d[5] = 0.934361f;
    data->d[6] = 1.050642f;
    data->d[7] = -1.285083f;
    data->d[8] = -1.604543f;
    data->d[9] = -0.000164f;
    data->d[10] = 0.674199f;
    data->d[11] = -9.402490f;
    data->d[12] = 1.864635f;
    data->d[13] = -0.054949f;
    data->d[14] = -1.849768f;
    data->d[15] = 1.769962f;
    data->d[16] = 0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 1.376976f;
    data->d[2] = 1.018243f;
    data->d[3] = 0.230634f;
    data->d[4] = -3.333802f;
    data->d[5] = -0.133862f;
    data->d[6] = 2.575237f;
    data->d[7] = 1.492372f;
    data->d[8] = 0.174443f;
    data->d[9] = -0.000208f;
    data->d[10] = -0.147907f;
    data->d[11] = 3.231175f;
    data->d[12] = 1.979394f;
    data->d[13] = 1.700919f;
    data->d[14] = -0.517289f;
    data->d[15] = -2.033965f;
    data->d[16] = -0.118132f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000051
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.381877f;
    data->d[2] = -0.208094f;
    data->d[3] = 1.680076f;
    data->d[4] = 3.413128f;
    data->d[5] = 0.789042f;
    data->d[6] = 0.803550f;
    data->d[7] = -1.128993f;
    data->d[8] = 1.296618f;
    data->d[9] = 0.005327f;
    data->d[10] = 0.247686f;
    data->d[11] = -10.076406f;
    data->d[12] = 1.900965f;
    data->d[13] = 0.692019f;
    data->d[14] = 1.912172f;
    data->d[15] = 0.547474f;
    data->d[16] = 0.523598f;
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
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 7);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 0, 2);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 16);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 19);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 15);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 25);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 85;
    state.m_evolution = 1;
    state.m_index = 61;
    state.m_test = 14;
    state.m_seed = 4726125862657449541;
} // LoadState
