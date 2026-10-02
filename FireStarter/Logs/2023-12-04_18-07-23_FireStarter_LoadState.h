#pragma once
#include "FireStarterState.h"

// Run date: 12/04/23 18:07:23 Pacific Standard Time
// Run duration = 670.508018 seconds
// Run generation = 28
// Run evolution = 8
// Run max result = 0.00000018
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
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.400296f;
    data->d[2] = -1.581472f;
    data->d[3] = 0.357359f;
    data->d[4] = 1.157086f;
    data->d[5] = -0.190604f;
    data->d[6] = -2.709600f;
    data->d[7] = -6.949363f;
    data->d[8] = -0.003925f;
    data->d[9] = 0.000044f;
    data->d[10] = 7.090508f;
    data->d[11] = 3.189448f;
    data->d[12] = -0.626761f;
    data->d[13] = 0.514136f;
    data->d[14] = 0.055331f;
    data->d[15] = -0.837753f;
    data->d[16] = -0.861211f;
    data->d[17] = 0.883662f;
    data->d[18] = 0.914337f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.344528f;
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
    data->d[0] = -3.090659f;
    data->d[1] = -0.162857f;
    data->d[2] = -1.042315f;
    data->d[3] = 2.205403f;
    data->d[4] = -0.460715f;
    data->d[5] = 1.662237f;
    data->d[6] = -0.502318f;
    data->d[7] = 1.303512f;
    data->d[8] = 0.001089f;
    data->d[9] = 24.732872f;
    data->d[10] = 1.078084f;
    data->d[11] = 10.840071f;
    data->d[12] = 0.482213f;
    data->d[13] = -1.554601f;
    data->d[14] = 1.762854f;
    data->d[15] = -1.441289f;
    data->d[16] = -2.163852f;
    data->d[17] = -1.162558f;
    data->d[18] = -0.320630f;
    data->d[19] = 0.079609f;
    data->d[20] = -1.483903f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.159477f;
    data->d[2] = -0.126738f;
    data->d[3] = -2.262805f;
    data->d[4] = 3.307795f;
    data->d[5] = 2.890170f;
    data->d[6] = 2.483978f;
    data->d[7] = 0.768520f;
    data->d[8] = -2.390747f;
    data->d[9] = -0.939851f;
    data->d[10] = 2.396816f;
    data->d[11] = 1.525586f;
    data->d[12] = 6.816070f;
    data->d[13] = 0.000820f;
    data->d[14] = -1.744958f;
    data->d[15] = 0.415056f;
    data->d[16] = 0.190739f;
    data->d[17] = 11.898133f;
    data->d[18] = -0.000452f;
    data->d[19] = 0.321350f;
    data->d[20] = 1.629371f;
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
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 1, 16);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 28;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 6;
    state.m_id = 40;
    state.m_copy_id = 6;
    state.m_test = 0;
    state.m_seed = 14639836715715442000;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
