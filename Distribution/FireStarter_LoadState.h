#pragma once
#include "FireStarterState.h"

// Run date: 11/05/23 13:51:34 Pacific Standard Time
// Run duration = 2059.257889 seconds
// Run generation = 12
// Run evolution = 9
// Run result = 0.00000012
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.053174f;
    data->d[1] = -1.088419f;
    data->d[2] = -0.615467f;
    data->d[3] = -1.386672f;
    data->d[4] = 0.159204f;
    data->d[5] = -1.985955f;
    data->d[6] = 1.276746f;
    data->d[7] = -1.132019f;
    data->d[8] = -0.026985f;
    data->d[9] = -0.874423f;
    data->d[10] = -0.036830f;
    data->d[11] = -0.703912f;
    data->d[12] = -0.194788f;
    data->d[13] = 2.022982f;
    data->d[14] = -1.481988f;
    data->d[15] = -0.095709f;
    data->d[16] = 0.098735f;
    data->d[17] = -0.098735f;
    data->d[18] = -2.788225f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.105292f;
    data->d[1] = -0.985367f;
    data->d[2] = -0.392156f;
    data->d[3] = -1.693869f;
    data->d[4] = 1.270512f;
    data->d[5] = -2.030245f;
    data->d[6] = -0.574211f;
    data->d[7] = -0.463790f;
    data->d[8] = -0.001469f;
    data->d[9] = 0.554624f;
    data->d[10] = -2.203094f;
    data->d[11] = 1.109533f;
    data->d[12] = -0.079431f;
    data->d[13] = 1.541752f;
    data->d[14] = 1.194954f;
    data->d[15] = 0.300165f;
    data->d[16] = -0.145295f;
    data->d[17] = 0.100834f;
    data->d[18] = 2.656971f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.316203f;
    data->d[1] = -2.934197f;
    data->d[2] = -0.349064f;
    data->d[3] = -1.211078f;
    data->d[4] = 0.960931f;
    data->d[5] = -2.010289f;
    data->d[6] = -2.556817f;
    data->d[7] = -0.068453f;
    data->d[8] = 0.875401f;
    data->d[9] = 0.696513f;
    data->d[10] = 1.376396f;
    data->d[11] = -4.718061f;
    data->d[12] = -0.059339f;
    data->d[13] = 0.398762f;
    data->d[14] = 0.646413f;
    data->d[15] = -0.141123f;
    data->d[16] = 0.445954f;
    data->d[17] = -0.668375f;
    data->d[18] = -2.354087f;
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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 18);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 1, 28);
    instructions->SetOperation(22, 0, 23);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 16);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 1, 7);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 12;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_id = 17;
    state.m_copy_id = 44;
    state.m_test = 1;
    state.m_seed = 334542343392208867;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
