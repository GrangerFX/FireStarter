#pragma once
#include "FireStarterState.h"

// Run date: 05/14/23 11:55:42 Pacific Daylight Time
// Run duration = 147.149999 seconds
// Run generation = 51
// Run result = 0.00030351
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run seed = 59
// Run optimizeSeed = 0
// Run seeds = 100
// Run tests = 4
// Run units = 1
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
    settings.m_seed = 59;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 100;
    settings.m_tests = 4;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00014147
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.181702f;
    data->d[1] = 0.882354f;
    data->d[2] = -2.493337f;
    data->d[3] = 0.982898f;
    data->d[4] = -0.728064f;
    data->d[5] = 1.511230f;
    data->d[6] = -0.272702f;
    data->d[7] = 1.309298f;
    data->d[8] = -0.413416f;
    data->d[9] = 3.566438f;
    data->d[10] = 3.387043f;
    data->d[11] = 1.371231f;
    data->d[12] = -1.943906f;
    data->d[13] = -2.941671f;
    data->d[14] = -0.043001f;
    data->d[15] = -0.015822f;
    data->d[16] = 0.142418f;
    data->d[17] = -1.042497f;
    data->d[18] = 0.953751f;
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
    data->d[30] = 0.000152f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000141f;
} // LoadVariation0

// Variation: 1  result = 0.00015235
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.533863f;
    data->d[1] = 0.748193f;
    data->d[2] = -0.311687f;
    data->d[3] = 0.417283f;
    data->d[4] = -0.617904f;
    data->d[5] = 1.141777f;
    data->d[6] = -0.117810f;
    data->d[7] = 0.212537f;
    data->d[8] = -0.525249f;
    data->d[9] = 2.001435f;
    data->d[10] = 0.624503f;
    data->d[11] = -2.330153f;
    data->d[12] = -2.574026f;
    data->d[13] = 0.271065f;
    data->d[14] = -0.872845f;
    data->d[15] = -0.114468f;
    data->d[16] = 0.594223f;
    data->d[17] = 0.753468f;
    data->d[18] = 0.070676f;
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
    data->d[30] = 0.000304f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000152f;
} // LoadVariation1

// Variation: 2  result = 0.00030351
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.581906f;
    data->d[1] = -0.911638f;
    data->d[2] = -1.466255f;
    data->d[3] = -1.559818f;
    data->d[4] = -0.360262f;
    data->d[5] = 0.051448f;
    data->d[6] = -0.954409f;
    data->d[7] = 1.522349f;
    data->d[8] = -0.312711f;
    data->d[9] = -2.136701f;
    data->d[10] = 1.092270f;
    data->d[11] = -0.482685f;
    data->d[12] = -1.275705f;
    data->d[13] = -0.636407f;
    data->d[14] = 0.124528f;
    data->d[15] = 0.235042f;
    data->d[16] = -1.671154f;
    data->d[17] = 0.866631f;
    data->d[18] = 1.159144f;
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
    *(result->MinResult()) = 0.000304f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000304f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 1, 25);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 0, 1);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 1, 18);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 27);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 51;
    state.m_index = 0;
    state.m_test = 0;
    state.m_seed = 6797453855906991483;
} // LoadState
