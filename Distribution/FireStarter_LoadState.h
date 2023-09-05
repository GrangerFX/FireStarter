#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 17:19:28 Pacific Daylight Time
// Run duration = 1125.358306 seconds
// Run generation = 53
// Run evolution = 10
// Run result = 0.00000012
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.356268f;
    data->d[2] = 0.605836f;
    data->d[3] = 1.123268f;
    data->d[4] = -2.920946f;
    data->d[5] = 0.659660f;
    data->d[6] = -0.480869f;
    data->d[7] = -1.103797f;
    data->d[8] = 0.000003f;
    data->d[9] = -13.384937f;
    data->d[10] = -5.360666f;
    data->d[11] = -0.012785f;
    data->d[12] = 0.736549f;
    data->d[13] = 1.461306f;
    data->d[14] = 0.100521f;
    data->d[15] = 0.317842f;
    data->d[16] = 0.396851f;
    data->d[17] = -4.568597f;
    data->d[18] = -1.160383f;
    data->d[19] = -0.181675f;
    data->d[20] = 0.181676f;
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
    data->d[1] = -0.115954f;
    data->d[2] = 1.120084f;
    data->d[3] = 4.498078f;
    data->d[4] = -4.336388f;
    data->d[5] = 2.800981f;
    data->d[6] = 2.008106f;
    data->d[7] = 0.131371f;
    data->d[8] = 0.000000f;
    data->d[9] = -46.826065f;
    data->d[10] = -1.576172f;
    data->d[11] = -0.416146f;
    data->d[12] = 0.277927f;
    data->d[13] = -0.003281f;
    data->d[14] = 6.007004f;
    data->d[15] = -0.643163f;
    data->d[16] = 0.143596f;
    data->d[17] = -2.526846f;
    data->d[18] = -1.281296f;
    data->d[19] = -0.326007f;
    data->d[20] = 0.207875f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.602345f;
    data->d[2] = -0.498537f;
    data->d[3] = -2.293550f;
    data->d[4] = 2.488151f;
    data->d[5] = 3.199471f;
    data->d[6] = -2.493404f;
    data->d[7] = 1.626207f;
    data->d[8] = -0.000080f;
    data->d[9] = -7.521358f;
    data->d[10] = 0.598675f;
    data->d[11] = -0.034006f;
    data->d[12] = -0.652116f;
    data->d[13] = -1.112053f;
    data->d[14] = 0.451681f;
    data->d[15] = 0.418754f;
    data->d[16] = 8.118702f;
    data->d[17] = 3.816355f;
    data->d[18] = -0.693252f;
    data->d[19] = 0.442003f;
    data->d[20] = 0.081596f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 1, 26);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 13);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 8);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 53;
    state.m_evolution = 10;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 18;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 11216084294618575948;
    state.m_maxResult = 0.000000f;
    state.m_firstResult = 0.000005f;
    state.m_lastResult = 0.000001f;
    state.m_optimizePass = true;
    state.m_lastEvolved = false;
} // LoadState
