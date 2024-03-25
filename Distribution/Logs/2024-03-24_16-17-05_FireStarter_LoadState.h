#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 16:17:05 Pacific Daylight Time
// Run duration = 779.423178 seconds
// Run generation = 204
// Run evolution = 14
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.676267f;
    data->d[1] = -1.465325f;
    data->d[2] = -0.000001f;
    data->d[3] = -4.243504f;
    data->d[4] = 0.507333f;
    data->d[5] = -2.007615f;
    data->d[6] = 0.086670f;
    data->d[7] = 0.309101f;
    data->d[8] = -51.966156f;
    data->d[9] = -0.000208f;
    data->d[10] = -8.085342f;
    data->d[11] = -0.898458f;
    data->d[12] = -0.642559f;
    data->d[13] = -2.488044f;
    data->d[14] = -0.664669f;
    data->d[15] = -1.733907f;
    data->d[16] = -0.156362f;
    data->d[17] = 0.312725f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.964911f;
    data->d[1] = -2.125755f;
    data->d[2] = 0.000013f;
    data->d[3] = -3.917377f;
    data->d[4] = -0.714830f;
    data->d[5] = 1.478470f;
    data->d[6] = 0.148298f;
    data->d[7] = -0.066768f;
    data->d[8] = 107.586998f;
    data->d[9] = -7.259326f;
    data->d[10] = 0.000343f;
    data->d[11] = -0.666963f;
    data->d[12] = -0.725062f;
    data->d[13] = -2.431039f;
    data->d[14] = 0.057447f;
    data->d[15] = -1.968612f;
    data->d[16] = -0.007102f;
    data->d[17] = -0.103935f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.889651f;
    data->d[1] = -1.728342f;
    data->d[2] = -0.000002f;
    data->d[3] = 0.352699f;
    data->d[4] = 0.982125f;
    data->d[5] = -0.914954f;
    data->d[6] = -0.792479f;
    data->d[7] = 0.091169f;
    data->d[8] = -114.743317f;
    data->d[9] = 4.162570f;
    data->d[10] = -0.001307f;
    data->d[11] = 0.220706f;
    data->d[12] = -1.338311f;
    data->d[13] = 0.849093f;
    data->d[14] = -0.314440f;
    data->d[15] = -0.199264f;
    data->d[16] = 1.240784f;
    data->d[17] = -1.957968f;
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
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 2);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 1, 17);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 6);
    instructions->SetOperation(15, 1, 18);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 6);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 204;
    state.m_evolution = 14;
    state.m_index = 9;
    state.m_copy_index = 51;
    state.m_id = 51;
    state.m_test = 2;
    state.m_seed = 16066873230934522143;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000003f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000072f;
    state.m_optimizeValid = true;
} // LoadState
