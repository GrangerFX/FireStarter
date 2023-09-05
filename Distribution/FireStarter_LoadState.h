#pragma once
#include "FireStarterState.h"

// Run date: 09/05/23 14:36:53 Pacific Daylight Time
// Run duration = 2254.033482 seconds
// Run generation = 5
// Run evolution = 4
// Run result = 0.00000018
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
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 300
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
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 300;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.114401f;
    data->d[2] = 5.607667f;
    data->d[3] = -1.663784f;
    data->d[4] = 0.632771f;
    data->d[5] = -0.008429f;
    data->d[6] = -0.278875f;
    data->d[7] = -1.621061f;
    data->d[8] = -2.492793f;
    data->d[9] = 0.298266f;
    data->d[10] = -2.716807f;
    data->d[11] = -2.129307f;
    data->d[12] = 0.780416f;
    data->d[13] = -2.170259f;
    data->d[14] = 0.554443f;
    data->d[15] = -0.307185f;
    data->d[16] = 0.407758f;
    data->d[17] = 0.731479f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.768300f;
    data->d[2] = -0.612033f;
    data->d[3] = 1.138045f;
    data->d[4] = -1.354086f;
    data->d[5] = 1.081766f;
    data->d[6] = 1.302713f;
    data->d[7] = 0.769003f;
    data->d[8] = -0.234477f;
    data->d[9] = -2.291833f;
    data->d[10] = 1.688500f;
    data->d[11] = 0.384851f;
    data->d[12] = -4.022301f;
    data->d[13] = 0.179803f;
    data->d[14] = 0.000000f;
    data->d[15] = -0.635252f;
    data->d[16] = -0.937974f;
    data->d[17] = -0.716288f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.681773f;
    data->d[2] = -1.400199f;
    data->d[3] = -6.535205f;
    data->d[4] = -1.251812f;
    data->d[5] = 3.075446f;
    data->d[6] = -0.358627f;
    data->d[7] = 0.842155f;
    data->d[8] = 0.122531f;
    data->d[9] = 1.452798f;
    data->d[10] = -1.979168f;
    data->d[11] = -0.482525f;
    data->d[12] = 0.445690f;
    data->d[13] = -0.000001f;
    data->d[14] = -4.503358f;
    data->d[15] = 0.184687f;
    data->d[16] = -2.803483f;
    data->d[17] = -0.990873f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 1, 3);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 23);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 5;
    state.m_evolution = 4;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 59;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 4279691522150856843;
    state.m_maxResult = 0.000000f;
    state.m_lastResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
