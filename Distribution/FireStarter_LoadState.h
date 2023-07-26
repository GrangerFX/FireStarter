#pragma once
#include "FireStarterState.h"

// Run date: 07/26/23 10:34:06 Pacific Daylight Time
// Run duration = 911.720847 seconds
// Run generation = 116
// Run evolution = 0
// Run result = 0.00000250
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

// Variation: 0  result = 0.00000104
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.760216f;
    data->d[2] = -0.644232f;
    data->d[3] = -2.032968f;
    data->d[4] = -1.438356f;
    data->d[5] = 0.047018f;
    data->d[6] = 0.804957f;
    data->d[7] = 1.380375f;
    data->d[8] = 0.563307f;
    data->d[9] = 0.166049f;
    data->d[10] = -0.212075f;
    data->d[11] = -1.647087f;
    data->d[12] = -0.040996f;
    data->d[13] = -0.926268f;
    data->d[14] = -2.369575f;
    data->d[15] = -0.716716f;
    data->d[16] = -0.994690f;
    data->d[17] = 1.262968f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000250
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.765031f;
    data->d[2] = 1.523511f;
    data->d[3] = -0.390575f;
    data->d[4] = -1.916593f;
    data->d[5] = -0.104667f;
    data->d[6] = -1.322428f;
    data->d[7] = -0.037285f;
    data->d[8] = 0.287699f;
    data->d[9] = 0.568217f;
    data->d[10] = 0.313015f;
    data->d[11] = -2.935508f;
    data->d[12] = -0.430478f;
    data->d[13] = 0.899728f;
    data->d[14] = 0.270184f;
    data->d[15] = 3.376107f;
    data->d[16] = -11.690157f;
    data->d[17] = 1.187197f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000224
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = 1.745835f;
    data->d[2] = -0.489635f;
    data->d[3] = -1.972466f;
    data->d[4] = -0.212367f;
    data->d[5] = 0.357427f;
    data->d[6] = 1.707688f;
    data->d[7] = 1.573293f;
    data->d[8] = 0.844680f;
    data->d[9] = -0.027130f;
    data->d[10] = -0.341877f;
    data->d[11] = -1.151205f;
    data->d[12] = 0.716974f;
    data->d[13] = -0.486617f;
    data->d[14] = 1.228358f;
    data->d[15] = 1.998515f;
    data->d[16] = -0.919065f;
    data->d[17] = 1.317735f;
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
    *(result->MinResult()) = 0.000002f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 24);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 27);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 1, 6);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 116;
    state.m_evolution = 0;
    state.m_index = 8;
    state.m_test = 8;
    state.m_seed = 11679301851255833665;
} // LoadState
