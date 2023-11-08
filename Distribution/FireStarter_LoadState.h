#pragma once
#include "FireStarterState.h"

// Run date: 11/08/23 09:54:06 Pacific Standard Time
// Run duration = 6752.677870 seconds
// Run generation = 33
// Run evolution = 34
// Run result = 0.00000334
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000097
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.300563f;
    data->d[1] = -1.565100f;
    data->d[2] = 1.616394f;
    data->d[3] = 1.132528f;
    data->d[4] = 0.533499f;
    data->d[5] = -0.064566f;
    data->d[6] = 0.068896f;
    data->d[7] = -0.067837f;
    data->d[8] = -0.636692f;
    data->d[9] = 1.913879f;
    data->d[10] = -0.212572f;
    data->d[11] = 1.243586f;
    data->d[12] = -0.217715f;
    data->d[13] = -0.764853f;
    data->d[14] = -0.002192f;
    data->d[15] = -5.471460f;
    data->d[16] = 2.274030f;
    data->d[17] = 1.811699f;
    data->d[18] = 1.683481f;
    data->d[19] = 0.248143f;
    data->d[20] = -1.156308f;
    data->d[21] = 0.306041f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000262
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.510040f;
    data->d[1] = 0.578023f;
    data->d[2] = 1.076511f;
    data->d[3] = 1.565958f;
    data->d[4] = 0.663098f;
    data->d[5] = -0.004845f;
    data->d[6] = -1.064732f;
    data->d[7] = 0.649839f;
    data->d[8] = -0.865035f;
    data->d[9] = -0.198932f;
    data->d[10] = 1.032272f;
    data->d[11] = 1.467046f;
    data->d[12] = -1.212760f;
    data->d[13] = -0.206483f;
    data->d[14] = -0.115364f;
    data->d[15] = 0.060863f;
    data->d[16] = -6.078557f;
    data->d[17] = 2.723587f;
    data->d[18] = 0.775362f;
    data->d[19] = -0.039743f;
    data->d[20] = -0.617930f;
    data->d[21] = -0.361058f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.933389f;
    data->d[1] = -0.751381f;
    data->d[2] = -1.744696f;
    data->d[3] = -0.341802f;
    data->d[4] = -0.214689f;
    data->d[5] = -0.853018f;
    data->d[6] = 1.046369f;
    data->d[7] = -0.879428f;
    data->d[8] = -1.804621f;
    data->d[9] = 0.589963f;
    data->d[10] = 0.573674f;
    data->d[11] = 1.361159f;
    data->d[12] = 2.251859f;
    data->d[13] = -0.532828f;
    data->d[14] = -7.190316f;
    data->d[15] = 0.005603f;
    data->d[16] = 0.607603f;
    data->d[17] = -1.289995f;
    data->d[18] = 4.517951f;
    data->d[19] = 0.869966f;
    data->d[20] = -1.630402f;
    data->d[21] = 0.105531f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 0, 25);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 33;
    state.m_evolution = 34;
    state.m_index = 0;
    state.m_id = 48;
    state.m_copy_id = 29;
    state.m_test = 4;
    state.m_seed = 18213249061227640484;
    state.m_maxResult = 0.000003f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
