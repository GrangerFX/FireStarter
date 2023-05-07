#pragma once
#include "FireStarterState.h"

// Run date: 05/07/23 12:48:52 Pacific Daylight Time
// Run duration = 286.676514 seconds
// Run generation = 313
// Run result = 0.00000334
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 98
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 1
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_seed = 98;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 100;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
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
    data->d[0] = -3.141592f;
    data->d[1] = 1.155728f;
    data->d[2] = -0.000004f;
    data->d[3] = -29.141319f;
    data->d[4] = 0.166347f;
    data->d[5] = -3.516173f;
    data->d[6] = -0.522395f;
    data->d[7] = -0.000000f;
    data->d[8] = -4.029556f;
    data->d[9] = -0.221249f;
    data->d[10] = 8.130054f;
    data->d[11] = 0.089563f;
    data->d[12] = 8.114561f;
    data->d[13] = 0.018216f;
    data->d[14] = 0.690802f;
    data->d[15] = -5.157927f;
    data->d[16] = -0.000002f;
    data->d[17] = -0.280719f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090670f;
    data->d[1] = 1.629716f;
    data->d[2] = 0.000062f;
    data->d[3] = -8.542743f;
    data->d[4] = -0.020371f;
    data->d[5] = 1.481908f;
    data->d[6] = 0.180088f;
    data->d[7] = -0.343763f;
    data->d[8] = -1.028495f;
    data->d[9] = 3.680072f;
    data->d[10] = -0.133900f;
    data->d[11] = 0.978500f;
    data->d[12] = -4.518680f;
    data->d[13] = -0.195831f;
    data->d[14] = -0.989669f;
    data->d[15] = -1.619756f;
    data->d[16] = 0.047688f;
    data->d[17] = -1.238734f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000003f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617990f;
    data->d[1] = 1.108330f;
    data->d[2] = -0.000014f;
    data->d[3] = 2.176132f;
    data->d[4] = 0.025044f;
    data->d[5] = -1.840790f;
    data->d[6] = 0.186503f;
    data->d[7] = -0.327730f;
    data->d[8] = 11.761536f;
    data->d[9] = -0.012564f;
    data->d[10] = 0.756471f;
    data->d[11] = -2.501645f;
    data->d[12] = 0.399564f;
    data->d[13] = -0.556838f;
    data->d[14] = -0.664364f;
    data->d[15] = 0.647584f;
    data->d[16] = -0.344488f;
    data->d[17] = -0.759971f;
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
    data->d[29] = 0.000000f;
    data->d[30] = -42201683186052843888412332559599403008.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 10);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 12);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 12);
    instructions->SetOperation(9, 0, 26);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 24);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 26);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 8);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 28);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 313;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 11959067837658161389;
} // LoadState
