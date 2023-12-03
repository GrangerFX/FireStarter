#pragma once
#include "FireStarterState.h"

// Run date: 12/02/23 14:47:56 Pacific Standard Time
// Run duration = 35183.735329 seconds
// Run generation = 23
// Run evolution = 11
// Run max result = 0.00000012
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.633589f;
    data->d[1] = 0.194259f;
    data->d[2] = 0.647392f;
    data->d[3] = 2.240803f;
    data->d[4] = -1.186280f;
    data->d[5] = 0.312513f;
    data->d[6] = -0.600268f;
    data->d[7] = 0.384635f;
    data->d[8] = 1.804427f;
    data->d[9] = -5.214268f;
    data->d[10] = -0.000521f;
    data->d[11] = -0.089703f;
    data->d[12] = -0.456563f;
    data->d[13] = -1.656458f;
    data->d[14] = -1.488435f;
    data->d[15] = -2.809489f;
    data->d[16] = 0.120247f;
    data->d[17] = 2.483595f;
    data->d[18] = 0.386668f;
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
    data->d[0] = -0.120289f;
    data->d[1] = 3.779309f;
    data->d[2] = -0.797250f;
    data->d[3] = -0.748396f;
    data->d[4] = -1.726490f;
    data->d[5] = 0.440993f;
    data->d[6] = 0.946063f;
    data->d[7] = -0.999330f;
    data->d[8] = -0.000753f;
    data->d[9] = -5.920079f;
    data->d[10] = 3.151068f;
    data->d[11] = -0.422859f;
    data->d[12] = 0.179206f;
    data->d[13] = -4.229708f;
    data->d[14] = 1.640847f;
    data->d[15] = -1.018679f;
    data->d[16] = 0.559440f;
    data->d[17] = -0.103916f;
    data->d[18] = 1.286909f;
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
    data->d[0] = -0.416375f;
    data->d[1] = 0.498851f;
    data->d[2] = 0.419217f;
    data->d[3] = 1.318029f;
    data->d[4] = -1.889041f;
    data->d[5] = 0.653662f;
    data->d[6] = -3.045487f;
    data->d[7] = -0.610464f;
    data->d[8] = 1.440094f;
    data->d[9] = -7.002274f;
    data->d[10] = 0.000063f;
    data->d[11] = -0.334861f;
    data->d[12] = -1.042184f;
    data->d[13] = -1.346406f;
    data->d[14] = -0.266282f;
    data->d[15] = -3.837565f;
    data->d[16] = -0.707340f;
    data->d[17] = 1.871354f;
    data->d[18] = 1.067379f;
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
    instructions->SetOperation(0, 0, 4);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 1, 17);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 1, 0);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 1);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 23;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 54;
    state.m_copy_id = 49;
    state.m_test = 8;
    state.m_seed = 3325599954687875030;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
