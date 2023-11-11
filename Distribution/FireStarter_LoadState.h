#pragma once
#include "FireStarterState.h"

// Run date: 11/10/23 18:14:16 Pacific Standard Time
// Run duration = 1250.962575 seconds
// Run generation = 73
// Run evolution = 14
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
// Run optimizations = 500
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
    settings.m_optimizations = 500;
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
    data->d[0] = 0.338097f;
    data->d[1] = 1.264663f;
    data->d[2] = -1.343277f;
    data->d[3] = -1.343266f;
    data->d[4] = 0.002937f;
    data->d[5] = -0.072102f;
    data->d[6] = -1.271961f;
    data->d[7] = 2.190916f;
    data->d[8] = -0.513671f;
    data->d[9] = -0.360039f;
    data->d[10] = 1.191336f;
    data->d[11] = -1.114510f;
    data->d[12] = -1.350897f;
    data->d[13] = -1.952772f;
    data->d[14] = 0.861244f;
    data->d[15] = 1.247864f;
    data->d[16] = 0.826614f;
    data->d[17] = -0.090287f;
    data->d[18] = 0.034835f;
    data->d[19] = 0.039798f;
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
    data->d[0] = 0.955331f;
    data->d[1] = -0.411249f;
    data->d[2] = 1.214255f;
    data->d[3] = 1.214262f;
    data->d[4] = 0.003412f;
    data->d[5] = 0.309113f;
    data->d[6] = 0.378854f;
    data->d[7] = -1.784529f;
    data->d[8] = 2.060663f;
    data->d[9] = -1.569672f;
    data->d[10] = -0.386208f;
    data->d[11] = 1.021477f;
    data->d[12] = -2.196180f;
    data->d[13] = -2.237175f;
    data->d[14] = -1.109887f;
    data->d[15] = -1.325359f;
    data->d[16] = 0.354030f;
    data->d[17] = 0.556517f;
    data->d[18] = -0.355236f;
    data->d[19] = 0.040081f;
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

// Variation: 2  result = 0.00000003
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.262156f;
    data->d[1] = 0.414091f;
    data->d[2] = 1.368287f;
    data->d[3] = 1.368291f;
    data->d[4] = -0.002953f;
    data->d[5] = -1.324378f;
    data->d[6] = 0.240966f;
    data->d[7] = 0.034187f;
    data->d[8] = -1.854355f;
    data->d[9] = 0.329014f;
    data->d[10] = -1.184549f;
    data->d[11] = -1.303043f;
    data->d[12] = -1.706407f;
    data->d[13] = 0.215256f;
    data->d[14] = 0.606894f;
    data->d[15] = 0.615255f;
    data->d[16] = 0.120367f;
    data->d[17] = -0.317669f;
    data->d[18] = 0.063608f;
    data->d[19] = 0.498227f;
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
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 16);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 6);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 73;
    state.m_evolution = 14;
    state.m_index = 0;
    state.m_id = 39;
    state.m_copy_id = 45;
    state.m_test = 13;
    state.m_seed = 2562947180073861587;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
