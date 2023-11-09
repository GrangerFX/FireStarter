#pragma once
#include "FireStarterState.h"

// Run date: 11/08/23 15:22:38 Pacific Standard Time
// Run duration = 53021.293737 seconds
// Run generation = 109
// Run evolution = 13
// Run result = 0.00000077
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
// Run tests = 16
// Run seeds = 64
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
    settings.m_tests = 16;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000039
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.358952f;
    data->d[1] = -1.127681f;
    data->d[2] = -0.561801f;
    data->d[3] = 0.669578f;
    data->d[4] = -1.797259f;
    data->d[5] = 2.291618f;
    data->d[6] = 0.930219f;
    data->d[7] = -0.126655f;
    data->d[8] = -2.072386f;
    data->d[9] = -0.748364f;
    data->d[10] = 0.075074f;
    data->d[11] = -2.706472f;
    data->d[12] = -1.414586f;
    data->d[13] = -0.000898f;
    data->d[14] = -1.170671f;
    data->d[15] = 0.848215f;
    data->d[16] = -0.298938f;
    data->d[17] = 2.108668f;
    data->d[18] = -0.000000f;
    data->d[19] = -0.203910f;
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

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.187813f;
    data->d[1] = -0.580467f;
    data->d[2] = -0.524224f;
    data->d[3] = -0.515085f;
    data->d[4] = -0.065382f;
    data->d[5] = 0.259748f;
    data->d[6] = -2.741841f;
    data->d[7] = 2.245013f;
    data->d[8] = -1.070647f;
    data->d[9] = -2.565311f;
    data->d[10] = 1.863158f;
    data->d[11] = 3.433091f;
    data->d[12] = 1.619153f;
    data->d[13] = -0.102524f;
    data->d[14] = -0.858837f;
    data->d[15] = 0.004748f;
    data->d[16] = 0.875177f;
    data->d[17] = 1.227422f;
    data->d[18] = 0.083835f;
    data->d[19] = -1.409089f;
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

// Variation: 2  result = 0.00000077
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.277805f;
    data->d[1] = -0.727293f;
    data->d[2] = -0.655630f;
    data->d[3] = -0.644483f;
    data->d[4] = -0.082809f;
    data->d[5] = 3.059844f;
    data->d[6] = -1.639307f;
    data->d[7] = 0.785451f;
    data->d[8] = 0.455458f;
    data->d[9] = -3.618149f;
    data->d[10] = 0.081801f;
    data->d[11] = 0.757900f;
    data->d[12] = -2.431137f;
    data->d[13] = -0.000032f;
    data->d[14] = -0.064170f;
    data->d[15] = 2.122943f;
    data->d[16] = 0.191521f;
    data->d[17] = 0.107846f;
    data->d[18] = -0.378756f;
    data->d[19] = -1.382419f;
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
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 1, 16);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 6);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 24);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 23);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 1, 27);
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
    state.m_generation = 109;
    state.m_evolution = 13;
    state.m_index = 9;
    state.m_id = 12;
    state.m_copy_id = 18;
    state.m_test = 14;
    state.m_seed = 11467495556270975975;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
