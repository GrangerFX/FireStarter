#pragma once
#include "FireStarterState.h"

// Run date: 10/07/23 12:34:18 Pacific Daylight Time
// Run duration = 1063.459450 seconds
// Run generation = 30
// Run evolution = 7
// Run result = 0.00000056
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
// Run tests = 2
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 2;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.688559f;
    data->d[1] = 1.729058f;
    data->d[2] = 0.434113f;
    data->d[3] = -0.560834f;
    data->d[4] = -0.834152f;
    data->d[5] = -0.415727f;
    data->d[6] = -0.083299f;
    data->d[7] = 0.826611f;
    data->d[8] = 2.094773f;
    data->d[9] = 1.529553f;
    data->d[10] = -1.740431f;
    data->d[11] = 1.066711f;
    data->d[12] = 1.951781f;
    data->d[13] = -0.038557f;
    data->d[14] = 1.185265f;
    data->d[15] = -0.845351f;
    data->d[16] = -1.617527f;
    data->d[17] = -2.465393f;
    data->d[18] = 0.911943f;
    data->d[19] = 0.398782f;
    data->d[20] = -1.270036f;
    data->d[21] = -0.154312f;
    data->d[22] = 0.006924f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.101677f;
    data->d[1] = 0.060288f;
    data->d[2] = 0.253961f;
    data->d[3] = 3.541716f;
    data->d[4] = 0.055442f;
    data->d[5] = 0.899604f;
    data->d[6] = -4.122713f;
    data->d[7] = 1.971383f;
    data->d[8] = -0.936422f;
    data->d[9] = -0.480183f;
    data->d[10] = -3.734690f;
    data->d[11] = 5.307766f;
    data->d[12] = -0.864326f;
    data->d[13] = -1.306903f;
    data->d[14] = -4.297078f;
    data->d[15] = -3.283028f;
    data->d[16] = -4.254961f;
    data->d[17] = -2.994454f;
    data->d[18] = 18.262054f;
    data->d[19] = 1.944126f;
    data->d[20] = -0.010873f;
    data->d[21] = -1.506821f;
    data->d[22] = -0.145822f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000056
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.313942f;
    data->d[1] = -1.878536f;
    data->d[2] = 1.056639f;
    data->d[3] = -0.426284f;
    data->d[4] = 2.002219f;
    data->d[5] = -1.250105f;
    data->d[6] = 0.204074f;
    data->d[7] = 1.653587f;
    data->d[8] = 0.827129f;
    data->d[9] = -1.807230f;
    data->d[10] = -1.475196f;
    data->d[11] = 0.579198f;
    data->d[12] = 0.396909f;
    data->d[13] = 0.105057f;
    data->d[14] = -0.805288f;
    data->d[15] = -2.530794f;
    data->d[16] = 2.918610f;
    data->d[17] = 0.477323f;
    data->d[18] = -1.723327f;
    data->d[19] = -0.399950f;
    data->d[20] = 1.022440f;
    data->d[21] = 0.798965f;
    data->d[22] = 1.713477f;
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
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 1, 28);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 26);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 25);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 1, 3);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 0, 0);
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
    state.m_generation = 30;
    state.m_evolution = 7;
    state.m_age = 7;
    state.m_index = 28;
    state.m_id = 2;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 2428323264238015006;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
} // LoadState
